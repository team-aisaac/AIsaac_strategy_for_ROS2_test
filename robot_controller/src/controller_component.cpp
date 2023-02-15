#include <algorithm>
#include <chrono>
#include <cmath>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "robot_controller/controller_component.hpp"
#include "robot_controller/geometry_tools.hpp"
#include "rclcpp/rclcpp.hpp"

#include "robot_controller/dwa_include/dwa.h"
#include "robot_controller/dwa_include/DWA_path_recover.h"
#include "robot_controller/dwa_include/RaspiTrapezoidalControl.h"

namespace robot_controller
{

using namespace std::chrono_literals;
namespace tools = geometry_tools;

const int ROBOT_NUM = 16;

Controller::Controller(const rclcpp::NodeOptions & options)
: Node("controller", options)
{
  using namespace std::placeholders;

  //各変数の設定
  declare_parameter("team_is_yellow", false);
  declare_parameter("invert", false);
  std::vector<std::string> prefix_list = {"vx_", "vy_", "vtheta_"};
  for (const auto & prefix : prefix_list) {
    declare_parameter(prefix + "p", 1.5);
    declare_parameter(prefix + "i", 0.0);
    declare_parameter(prefix + "d", 0.2);
    declare_parameter(prefix + "i_max", 0.0);
    declare_parameter(prefix + "i_min", 0.0);
    declare_parameter(prefix + "antiwindup", true);
  }
  declare_parameter("max_acceleration_xy", 2.0);
  declare_parameter("max_acceleration_theta", 2.0 * M_PI);
  declare_parameter("max_velocity_xy", 2.0);
  declare_parameter("max_velocity_theta", 2.0 * M_PI);
  max_acceleration_xy_ = get_parameter("max_acceleration_xy").get_value<double>();
  max_acceleration_theta_ = get_parameter("max_acceleration_theta").get_value<double>();
  max_velocity_xy_ = get_parameter("max_velocity_xy").get_value<double>();
  max_velocity_theta_ = get_parameter("max_velocity_theta").get_value<double>();
  //チームの色や攻める方向の設定を反映
  parser_.set_invert(get_parameter("invert").get_value<bool>());
  parser_.set_team_is_yellow(get_parameter("team_is_yellow").get_value<bool>());
  team_is_yellow_ = get_parameter("team_is_yellow").get_value<bool>();
  //ログを残す
  RCLCPP_INFO(this->get_logger(), "is yellow:%d", team_is_yellow_);

  std::string team_color = "blue";
  if (team_is_yellow_) {
    team_color = "yellow";
  }

    steady_clock_ = rclcpp::Clock(RCL_STEADY_TIME);

    int i = 0;
    pub_command_.push_back(
      create_publisher<RobotCommand>(
        "robot" + std::to_string(i) + "/command", 10)
    );

    //初期化
    control_enable_.push_back(true);    //制御を行うかを格納するフラグ：TRUE->制御する・FALSE->制御しない
    need_response_.push_back(false);    //何？
    system_stop_.push_back(true);       //戦略側の停止要求があるかを判定する(本当に必要かをもう一度検証する)
    last_update_time_.push_back(steady_clock_.now()); //制御に利用する１ループ前の時刻を保持する変数
    last_world_vel_.push_back(State());               //制御に利用する１ループ前のロボットの即時ド情報を保持する変数
    robot_vertual_vel.push_back(State());             //ロボットを制御するために、その時の制御ループの目標速度(ワールド座標系)を格納する 
    trape_controle_flag.push_back(false);             //前回のループで台形制御を行っていたかを判定するフラグ
    trape_c.push_back(trape_con());                   //台形制御を行うための構造体 

    //ロボットを制御するためのコマンドのパブリッシュ
    pub_command_.push_back(
      create_publisher<RobotCommand>(
        "robot" + std::to_string(i) + "/command", 10)
    );
    //ロボットの目標位置と角度
    pub_goal_pose_.push_back(
      create_publisher<GoalPose>(
        "robot" + std::to_string(i) + "/goal_pose", 10)
    );  

    //アクションサーバーの立ち上げ
    std::string name_space = team_color + std::to_string(i);
    server_control_.push_back(
      rclcpp_action::create_server<RobotControl>(
        get_node_base_interface(),
        get_node_clock_interface(),
        get_node_logging_interface(),
        get_node_waitables_interface(),
        name_space + "/control",
        std::bind(&Controller::handle_goal, this, _1, _2, i),
        std::bind(&Controller::handle_cancel, this, _1, i),
        std::bind(&Controller::handle_accepted, this, _1, i))
    );

    // PID制御器の初期化
    pid_vx_.push_back(
      std::make_shared<control_toolbox::Pid>(
        get_parameter("vx_p").get_value<double>(),
        get_parameter("vx_i").get_value<double>(),
        get_parameter("vx_d").get_value<double>(),
        get_parameter("vx_i_max").get_value<double>(),
        get_parameter("vx_i_min").get_value<double>(),
        get_parameter("vx_antiwindup").get_value<bool>()
      )
    );
    pid_vy_.push_back(
      std::make_shared<control_toolbox::Pid>(
        get_parameter("vy_p").get_value<double>(),
        get_parameter("vy_i").get_value<double>(),
        get_parameter("vy_d").get_value<double>(),
        get_parameter("vy_i_max").get_value<double>(),
        get_parameter("vy_i_min").get_value<double>(),
        get_parameter("vy_antiwindup").get_value<bool>()
      )
    );
    pid_vtheta_.push_back(
      std::make_shared<control_toolbox::Pid>(
        get_parameter("vtheta_p").get_value<double>(),
        get_parameter("vtheta_i").get_value<double>(),
        get_parameter("vtheta_d").get_value<double>(),
        get_parameter("vtheta_i_max").get_value<double>(),
        get_parameter("vtheta_i_min").get_value<double>(),
        get_parameter("vtheta_antiwindup").get_value<bool>()
      )
    );

    //タイマーを制作してロボットを制御する
    // bindでは関数を宣言できなかったので、ラムダ式を使用する(by consai)
    // Ref: https://github.com/ros2/rclcpp/issues/273#issuecomment-263826519
    timer_pub_control_command_.push_back(
      create_wall_timer(
        10ms, [this, robot_id = i]() {this->on_timer_pub_control_command(robot_id);}
      )
    );
    timer_pub_control_command_[i]->cancel();  // タイマーを停止
    timer_pub_stop_command_.push_back(
      create_wall_timer(
        200ms, [this, robot_id = i]() {this->on_timer_pub_stop_command(robot_id);}
      )
    );
    
    //以下各ロボットの制御外

    //サブスクライブ（ノードからデータを取得）
    //画像を分析した情報を取得
    sub_detection_tracked_ = create_subscription<TrackedFrame>(
       "detection_tracked", 10, std::bind(&Controller::callback_detection_tracked, this, _1));
    //フィールドのデータを取得
    sub_geometry_ = create_subscription<GeometryData>(
        "geometry", 10, std::bind(&Controller::callback_geometry, this, _1));
    //sub_referee_ = create_subscription<Referee>(
    //    "referee", 10, std::bind(&Controller::callback_referee, this, _1));
    //sub_parsed_referee_ = create_subscription<ParsedReferee>(
    //    "parsed_referee", 10, std::bind(&Controller::callback_parsed_referee, this, _1));

    //PIDパラメータをパラメータファイルから読み込む
    auto param_change_callback =
    [this](std::vector<rclcpp::Parameter> parameters) {
      // ROSパラメータの更新
      auto result = rcl_interfaces::msg::SetParametersResult();
      result.successful = true;
      for (const auto & parameter : parameters) {
        if (update_pid_gain_from_param(parameter, "vx_", pid_vx_)) {
          RCLCPP_INFO(this->get_logger(), "Update vx_pid gains.");
        } else if (update_pid_gain_from_param(parameter, "vy_", pid_vy_)) {
          RCLCPP_INFO(this->get_logger(), "Update vy_pid gains.");
        } else if (update_pid_gain_from_param(parameter, "vtheta_", pid_vtheta_)) {
          RCLCPP_INFO(this->get_logger(), "Update vtheta_pid gains.");
        }

        if (parameter.get_name() == "max_acceleration_xy") {
          max_acceleration_xy_ = get_parameter("max_acceleration_xy").get_value<double>();
          RCLCPP_INFO(this->get_logger(), "Update max_acceleration_xy.");
        }
        if (parameter.get_name() == "max_acceleration_theta") {
          max_acceleration_theta_ = get_parameter("max_acceleration_theta").get_value<double>();
          RCLCPP_INFO(this->get_logger(), "Update max_acceleration_theta.");
        }
        if (parameter.get_name() == "max_velocity_xy") {
          max_velocity_xy_ = get_parameter("max_velocity_xy").get_value<double>();
          RCLCPP_INFO(this->get_logger(), "Update max_velocity_xy.");
        }
        if (parameter.get_name() == "max_velocity_theta") {
          max_velocity_theta_ = get_parameter("max_velocity_theta").get_value<double>();
          RCLCPP_INFO(this->get_logger(), "Update max_velocity_theta.");
        }
      }
      return result;
    };
  handler_change_param_ = add_on_set_parameters_callback(param_change_callback);
}

void Controller::callback_detection_tracked(const TrackedFrame::SharedPtr msg)
{
parser_.set_detection_tracked(msg);
}

void Controller::callback_geometry(const GeometryData::SharedPtr msg)
{
parser_.set_geometry(msg);
}

void Controller::on_timer_pub_control_command(const unsigned int robot_id)
{
  //RCLCPP_INFO(this->get_logger(),"control_command");
  // 制御器を更新し、コマンドをpublishするタイマーコールバック関数
  // 制御が許可されていない場合は、このタイマーを止めて、停止コマンドタイマーを起動する
  if (control_enable_[robot_id] == false) {
    timer_pub_control_command_[robot_id]->cancel();
    timer_pub_stop_command_[robot_id]->reset();
    return;
  }
  
  auto command_msg = std::make_unique<RobotCommand>();
  command_msg->robot_id = robot_id;
  command_msg->team_is_yellow = team_is_yellow_;
  
  // 制御するロボットの情報を得る
  // ロボットの情報が存在しなければ制御を終える
  TrackedRobot my_robot;
  if (!parser_.extract_robot(robot_id, team_is_yellow_, my_robot)) {
    std::string error_msg = "Failed to extract ID:" + std::to_string(robot_id) +
      " robot from detection_tracked msg.";
    RCLCPP_WARN(this->get_logger(), error_msg);

    switch_to_stop_control_mode(robot_id, false, error_msg);
    return;
  }

  //ロボットを制御する
  //変数の初期化
  State goal_pose;
  State next_goal_pose;   //次のループまでのゴール座標(DWAや台形制御を用いて計算される目標値)
  State midle_target;     //DWAの中間目標地点を格納する
  double kick_power = 0.0;
  double dribble_power = 0.0;
  State world_vel;
  auto current_time = steady_clock_.now();
  auto duration = current_time - last_update_time_[robot_id];
  //指示の種類を識別する
  //パターン1：目標値に到達するだけの場合
  //次のループまでの目標値(x ,y, theta)を計算する
  //仮の目標値設定
  goal_pose.x = 0;
  goal_pose.y = 0;
  goal_pose.theta = 0;
  
  //DWAを行うための変数設定
  next_goal_pose.x = my_robot.pos.x;
  next_goal_pose.y = my_robot.pos.y;
  next_goal_pose.theta = my_robot.orientation;
  //今後戦略版から送信するコマンド
  bool prohidited_zone_ignore = 0;
  bool midle_target_flag = 0;
  //障害物の抽出
  int32_t numOfObstacle = 0;
  int32_t obs_x[ROBOT_NUM], obs_y[ROBOT_NUM], obs_vx[ROBOT_NUM], obs_vy[ROBOT_NUM], obs_ax[ROBOT_NUM], obs_ay[ROBOT_NUM];
  TrackedRobot obs_robot[ROBOT_NUM];
  int32_t k = 0;
  for(uint32_t j = 0; j < ROBOT_NUM; j++){
    if (parser_.extract_robot(j, team_is_yellow_, obs_robot[j]) && j != robot_id){
      numOfObstacle++;
      obs_x[k] = obs_robot[j].pos.x;
      obs_y[k] = obs_robot[j].pos.y;
      obs_vx[k] = obs_robot[j].vel[0].x;
      obs_vy[k] = obs_robot[j].vel[0].y;
      obs_ax[k] = 0;
      obs_ay[k] = 0;
    }
  }
  //DWAの出力のための変数
  bool is_enable;
  bool path_enable;
  int32_t output_vx;
  int32_t output_vy;
  int32_t output_omega;
  int32_t output_ax;
  int32_t output_ay;
  
  //DWAの実施
  execDWA((int32_t) my_robot.pos.x, (int32_t) my_robot.pos.y, (int32_t) my_robot.orientation, (int32_t) my_robot.vel[0].x, (int32_t) my_robot.vel[0].y, (int32_t) my_robot.vel_angular[0], 
          (int32_t*) &next_goal_pose.x, (int32_t*) &next_goal_pose.y, (int32_t) next_goal_pose.theta, (int32_t*) &midle_target.x, (int32_t*) &midle_target.y,
          numOfObstacle, obs_x, obs_y, obs_vx, obs_vx, obs_ax, obs_ay, prohidited_zone_ignore, 
          &midle_target_flag, &is_enable, &path_enable, &output_vx, &output_vy, &output_omega, &output_ax, &output_ay);
  //DWAの結果を受けてDWAとするか台形制御とするかを判別しロボットの目標値を算出する。
  robot_vertual_vel[robot_id].x = my_robot.vel[0].x;
  robot_vertual_vel[robot_id].y = my_robot.vel[0].y;
  if(is_enable == 1 && path_enable == 1){
    //DWAを行う
    DWA_path_recover((float*) &next_goal_pose.x, (float*) &next_goal_pose.y, (float*) &robot_vertual_vel[robot_id].x, (float*) &robot_vertual_vel[robot_id].x, (float) output_ax, 
                      (float) output_ay, (float) max_velocity_xy_);
    trape_controle_flag[robot_id] = 0;
  }
  else if(is_enable == 1 && path_enable == 0){
    //台形制御を行う
    trapezoidal_control((int32_t) next_goal_pose.x, (int32_t) next_goal_pose.y, &trape_c[robot_id]);
  }
  else if(is_enable == 0){
    trape_controle_flag[robot_id] = 0;
  }
  
  //ワールド座標でのロボットの目標速度を計算する
  // ワールド座標系での目標速度を算出
  world_vel.x = pid_vx_[robot_id]->computeCommand(
    goal_pose.x - my_robot.pos.x,
    duration.nanoseconds());
  world_vel.y = pid_vy_[robot_id]->computeCommand(
    goal_pose.y - my_robot.pos.y,
    duration.nanoseconds());
  world_vel.theta =
    pid_vtheta_[robot_id]->computeCommand(
    tools::normalize_theta(
      goal_pose.theta -
      my_robot.orientation), duration.nanoseconds());

  // ワールド座標系でのxy速度をロボット座標系に変換
  command_msg->velocity_x = std::cos(my_robot.orientation) * world_vel.x + std::sin(
    my_robot.orientation) * world_vel.y;
  command_msg->velocity_y = -std::sin(my_robot.orientation) * world_vel.x + std::cos(
    my_robot.orientation) * world_vel.y;
  command_msg->velocity_theta = world_vel.theta;
  
  // 制御値を出力する
  pub_command_[robot_id]->publish(std::move(command_msg));

  // 制御更新時間と速度を保存する
  last_update_time_[robot_id] = current_time;
  last_world_vel_[robot_id] = world_vel;
}

void Controller::on_timer_pub_stop_command(const unsigned int robot_id)
{
  //RCLCPP_INFO(this->get_logger(),"stop_command");
  
  // 停止コマンドをpublishするタイマーコールバック関数
  // 通信帯域を圧迫しないため、この関数は低周期（例:1s）で実行すること
  auto command_msg = std::make_unique<RobotCommand>();
  command_msg->robot_id = robot_id;
  command_msg->team_is_yellow = team_is_yellow_;
  /*
  pid_vx_[robot_id]->reset();
  pid_vy_[robot_id]->reset();
  pid_vtheta_[robot_id]->reset();
  last_update_time_[robot_id] = steady_clock_.now();
  */
  pub_command_[robot_id]->publish(std::move(command_msg));
  
  //テスト用コマンド
  control_enable_[robot_id] = true;
  // 制御が許可されたらこのタイマーを止めて、制御タイマーを起動する
  if (control_enable_[robot_id] == true) {
    timer_pub_stop_command_[robot_id]->cancel();
    timer_pub_control_command_[robot_id]->reset();
  }
}

rclcpp_action::GoalResponse Controller::handle_goal(
  const rclcpp_action::GoalUUID & uuid,
  std::shared_ptr<const RobotControl::Goal> goal, const unsigned int robot_id)
{
  //アクションサーバーがクライアントからgoalを受け取ったときの処理
  (void)uuid;
  (void)robot_id;

  // 制御を停止する場合は無条件でaccept
  if (goal->stop) {
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  // 目標値の解析に失敗したらReject
  /*
  State goal_pose;
  if (!parser_.parse_goal(goal, goal_pose)) {
    return rclcpp_action::GoalResponse::REJECT;
  }
  */
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse Controller::handle_cancel(
  const std::shared_ptr<GoalHandleRobotControl> goal_handle, const unsigned int robot_id)
{
  //キャンセル信号を受け取ったら制御を停止する
  (void)goal_handle;
  control_enable_[robot_id] = false;
  return rclcpp_action::CancelResponse::ACCEPT;
}

void Controller::handle_accepted(
  std::shared_ptr<GoalHandleRobotControl> goal_handle,
  const unsigned int robot_id)
{
  // 目標値が承認されたときに実行するハンドラ
  auto goal = goal_handle->get_goal();
  if (goal->stop) {
    // 制御を停止する
    auto result = std::make_shared<RobotControl::Result>();
    result->success = true;
    result->message = "制御を停止します";
    goal_handle->succeed(result);
    switch_to_stop_control_mode(robot_id, true, "RobotControl.stopがセットされました");
    return;
  }

  /*
  if (goal->keep_control) {
    // 目標値に到達しても制御を続ける
    need_response_[robot_id] = false;

    // アクションを完了する
    auto result = std::make_shared<RobotControl::Result>();
    result->success = true;
    result->message = "Success!";
    goal_handle->succeed(result);
  } else {
    need_response_[robot_id] = true;
  }
  */
  //ロボットを制御可能とする
  control_enable_[robot_id] = true;
  //これ何？
  goal_handle_[robot_id] = goal_handle;
}

bool Controller::switch_to_stop_control_mode(
  const unsigned int robot_id, const bool success, const std::string & error_msg)
{
  // 指定されたIDのロボットの制御を終了し、停止制御モードに切り替える

  if (robot_id >= ROBOT_NUM) {
    RCLCPP_WARN(this->get_logger(), "無効なロボットID: %d(>=%d)です", robot_id, ROBOT_NUM);
    return false;
  }
  
  // アクションサーバが動いているときは、応答を返す
  if (need_response_[robot_id]) {
    auto result = std::make_shared<RobotControl::Result>();
    result->success = success;
    result->message = error_msg;
    goal_handle_[robot_id]->abort(result);
  }
  
  // 制御を禁止
  control_enable_[robot_id] = false;
  // アクションの応答フラグを無効化
  //need_response_[robot_id] = false;
  // 制御タイマーを停止
  timer_pub_control_command_[robot_id]->cancel();
  // ストップ信号タイマーを再開
  timer_pub_stop_command_[robot_id]->reset();
  // 停止コマンドを送信する
  auto stop_command_msg = std::make_unique<RobotCommand>();
  stop_command_msg->robot_id = robot_id;
  stop_command_msg->team_is_yellow = team_is_yellow_;
  pub_command_[robot_id]->publish(std::move(stop_command_msg));

  return true;
}

}

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(robot_controller::Controller)
