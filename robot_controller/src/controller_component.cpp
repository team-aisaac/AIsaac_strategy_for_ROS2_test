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
#include "robot_controller/dwa_include/Target_abjust.h"
#include "robot_controller/dwa_include/DWA_path_recover.h"
#include "robot_controller/dwa_include/RaspiTrapezoidalControl.h"
#include "robot_controller/dwa_include/TrapezoidalControl.h"
#include "robot_controller/tools.h"

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
    trape_c.push_back(micon_trape_con());             //台形制御を行うための構造体 
    micon_trapezoidal_init(&trape_c[i]);              //台形制御を行うための構造体の初期化
    dwa_robot.push_back(dwa_robot_path());            //DWAを使用するための構造体

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
    //goal_handle_の宣言が間違っている
    goal_handle_.resize(ROBOT_NUM);
    
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
  double kick_power = 0.0;
  double dribble_power = 0.0;
  State goal_pose;
  if(goal_handle_[robot_id]){
    parser_.parse_goal(
      goal_handle_[robot_id]->get_goal(), my_robot, goal_pose, kick_power,
      dribble_power);
  }
  auto current_time = steady_clock_.now();
  auto duration = current_time - last_update_time_[robot_id];
  State world_vel;
  //指示の種類を識別する
  //パターン1：目標値に到達するだけの場合
  //次のループまでの目標値(x ,y, theta)を計算する
  //今後戦略版から送信するコマンド
  //仮の目標値設定
  goal_pose.x = 0;
  goal_pose.y = 0;
  goal_pose.theta = 0;
  bool prohidited_zone_ignore = 0;
  bool midle_target_flag = 0;
  bool control_vel = 0;
  State midle_goal_pose;
  State next_goal_pose;   //次のループまでのゴール座標(DWAや台形制御を用いて計算される目標値)
  decide_next_goal_xy(goal_pose, midle_goal_pose, next_goal_pose, prohidited_zone_ignore, midle_target_flag, 
    robot_id, my_robot, team_is_yellow_, trape_controle_flag, trape_c, control_vel);
  //RCLCPP_INFO(rclcpp::get_logger("dwa"),"next_x:%lf,next_y:%lf",next_goal_pose.x, next_goal_pose.y);
  if(control_vel == 0){
    world_vel.x = pid_vx_[robot_id]->computeCommand(
      next_goal_pose.x - my_robot.pos.x,
      duration.nanoseconds());
    world_vel.y = pid_vy_[robot_id]->computeCommand(
      next_goal_pose.y - my_robot.pos.y,
      duration.nanoseconds());
  }
  else{
    world_vel.x = next_goal_pose.x;
    world_vel.y = next_goal_pose.y;
  }
  world_vel.theta =
    pid_vtheta_[robot_id]->computeCommand(
    tools::normalize_theta(
      goal_pose.theta -
      my_robot.orientation), duration.nanoseconds());
  //RCLCPP_INFO(rclcpp::get_logger("dwa"),"x : %lf, y : %lf", world_vel.x, world_vel.y);

  // 最大加速度リミットを適用
  
  //world_vel = limit_world_acceleration(world_vel, last_world_vel_[robot_id], duration);
  // 最大速度リミットを適用
  auto max_velocity_xy = max_velocity_xy_;
  
  // 最大速度リミットを上書きできる
  if(goal_handle_[robot_id]){
    if (goal_handle_[robot_id]->get_goal()->max_velocity_xy.size() > 0) {
      max_velocity_xy = std::min(
        goal_handle_[robot_id]->get_goal()->max_velocity_xy[0], max_velocity_xy_);
    }
  }
  world_vel = limit_world_velocity(world_vel, max_velocity_xy);
  

  // ワールド座標系でのxy速度をロボット座標系に変換
  command_msg->velocity_x = std::cos(my_robot.orientation) * world_vel.x + std::sin(
    my_robot.orientation) * world_vel.y;
  command_msg->velocity_y = -std::sin(my_robot.orientation) * world_vel.x + std::cos(
    my_robot.orientation) * world_vel.y;
  

  last_update_time_[robot_id] = current_time;
  last_world_vel_[robot_id] = world_vel;

  // 制御値を出力する
  pub_command_[robot_id]->publish(std::move(command_msg));
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
  //ロボットに対する指令値を格納する
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

State Controller::limit_world_velocity(
  const State & velocity, const double & max_velocity_xy) const
{
  // ワールド座標系のロボット速度に制限を掛ける
  auto velocity_norm = std::hypot(velocity.x, velocity.y);
  auto velocity_ratio = velocity_norm / max_velocity_xy;

  State modified_velocity = velocity;
  if (velocity_ratio > 1.0) {
    modified_velocity.x /= velocity_ratio;
    modified_velocity.y /= velocity_ratio;
  }
  modified_velocity.theta = std::clamp(velocity.theta, -max_velocity_theta_, max_velocity_theta_);

  return modified_velocity;
}

State Controller::limit_world_acceleration(
  const State & velocity, const State & last_velocity,
  const rclcpp::Duration & dt) const
{
  // ワールド座標系のロボット加速度に制限を掛ける
  State acc;
  acc.x = (velocity.x - last_velocity.x) / dt.seconds();
  acc.y = (velocity.y - last_velocity.y) / dt.seconds();
  acc.theta = (velocity.theta - last_velocity.theta) / dt.seconds();

  auto acc_norm = std::hypot(acc.x, acc.y);
  auto acc_ratio = acc_norm / max_acceleration_xy_;

  if (acc_ratio > 1.0) {
    //RCLCPP_INFO(rclcpp::get_logger("accel"),"accle : %lf", acc_norm);
    acc.x /= acc_ratio;
    acc.y /= acc_ratio;
  }
  acc.theta = std::clamp(acc.theta, -max_acceleration_theta_, max_acceleration_theta_);

  State modified_velocity = velocity;
  modified_velocity.x = last_velocity.x + acc.x * dt.seconds();
  modified_velocity.y = last_velocity.y + acc.y * dt.seconds();
  modified_velocity.theta = last_velocity.theta + acc.theta * dt.seconds();
  return modified_velocity;
}

void Controller::decide_next_goal_xy(State goal_pose, State &midle_goal_pose, State &next_goal_pose, bool prohidited_zone_ignore, bool &midle_target_flag, 
    const unsigned int robot_id, TrackedRobot my_robot, bool team_is_yellow_, std::vector<bool> &trape_controle_flag, std::vector<micon_trape_con> &trape_c, 
    bool &control_vel)
{
    dwa_robot[robot_id].targetX = goal_pose.x*1000;   //単位変換(m ->mm)
    dwa_robot[robot_id].targetY = goal_pose.y*1000;   //単位変換(m ->mm)
    dwa_robot[robot_id].targetTheta = goal_pose.theta;
    dwa_robot[robot_id].x = my_robot.pos.x*1000;  //単位変換(m ->mm)
    dwa_robot[robot_id].y = my_robot.pos.y*1000;  //単位変換(m ->mm)
    dwa_robot[robot_id].theta = my_robot.orientation;
    dwa_robot[robot_id].Vx = my_robot.vel[0].x*1000; //単位変換(m/s ->mm/s)
    dwa_robot[robot_id].Vy = my_robot.vel[0].y*1000; //単位変換(m/s ->mm/s)
    dwa_robot[robot_id].omega = my_robot.vel_angular[0];
    dwa_robot[robot_id].midle_targetX = midle_goal_pose.x*1000; //単位変換(m ->mm)
    dwa_robot[robot_id].midle_targetY = midle_goal_pose.y*1000; //単位変換(m ->mm)
    int32_t numOfObstacle = 0;
    int32_t obs_x[2*ROBOT_NUM], obs_y[2*ROBOT_NUM], obs_vx[2*ROBOT_NUM], obs_vy[2*ROBOT_NUM], obs_ax[2*ROBOT_NUM], obs_ay[2*ROBOT_NUM];
    TrackedRobot obs_robot;
    int32_t k = 0;
    //障害物の情報を取得
    for(uint32_t j = 0; j < ROBOT_NUM; j++){
        if (Controller::parser_.extract_robot(j, team_is_yellow_, obs_robot) && j != robot_id){
        numOfObstacle++;
        obs_x[k] = obs_robot.pos.x*1000;       //単位変換(m ->mm)
        obs_y[k] = obs_robot.pos.y*1000;       //単位変換(m ->mm)
        obs_vx[k] = obs_robot.vel[0].x*1000;   //単位変換(m/s ->mm/s)
        obs_vy[k] = obs_robot.vel[0].y*1000;   //単位変換(m/s ->mm/s)
        obs_ax[k] = 0*1000;                       //単位変換(m/s^2 ->mm/s^2)
        obs_ay[k] = 0*1000;                       //単位変換(m/s^2 ->mm/s^2)
        k++;
        }
        if (Controller::parser_.extract_robot(j, !team_is_yellow_, obs_robot)){
        numOfObstacle++;
        obs_x[k] = obs_robot.pos.x*1000;       //単位変換(m ->mm)
        obs_y[k] = obs_robot.pos.y*1000;       //単位変換(m ->mm)
        obs_vx[k] = obs_robot.vel[0].x*1000;   //単位変換(m/s ->mm/s)
        obs_vy[k] = obs_robot.vel[0].y*1000;   //単位変換(m/s ->mm/s)
        obs_ax[k] = 0*1000;                       //単位変換(m/s^2 ->mm/s^2)
        obs_ay[k] = 0*1000;                       //単位変換(m/s^2 ->mm/s^2)
        k++;
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
    execDWA(dwa_robot[robot_id].x, dwa_robot[robot_id].y, dwa_robot[robot_id].theta, dwa_robot[robot_id].Vx, dwa_robot[robot_id].Vy, dwa_robot[robot_id].omega, 
          &dwa_robot[robot_id].targetX, &dwa_robot[robot_id].targetY, dwa_robot[robot_id].targetTheta, &dwa_robot[robot_id].midle_targetX, &dwa_robot[robot_id].midle_targetY,
          numOfObstacle, obs_x, obs_y, obs_vx, obs_vy, obs_ax, obs_ay, prohidited_zone_ignore, 
          &midle_target_flag, &is_enable, &path_enable, &output_vx, &output_vy, &output_omega, &output_ax, &output_ay);
    float robot_vertual_vel_x = my_robot.vel[0].x*1000;
    float robot_vertual_vel_y = my_robot.vel[0].y*1000;
    float next_goal_pose_x = my_robot.pos.x*1000;
    float next_goal_pose_y = my_robot.pos.y*1000;
    if(is_enable == 1 && path_enable == 1){
      //RCLCPP_INFO(rclcpp::get_logger("dwa"),"x : %d, y : %d", output_ax, output_ay);
      //DWAを行う
      
      for(uint16_t i = 0; i < 100*RASPI_TIME_STEP/MICON_TIME_STEP; i++){
        DWA_path_recover(&next_goal_pose_x, &next_goal_pose_y, &robot_vertual_vel_x, &robot_vertual_vel_y, 
                          (float) output_ax, (float) output_ay, (float) ROBOT_MAX_VEL);
      }
      next_goal_pose.x = next_goal_pose_x;
      next_goal_pose.y = next_goal_pose_y;

      trape_controle_flag[robot_id] = 0;
      
      //next_goal_pose.x = my_robot.vel[0].x*1000 + 0.01 * (float)output_ax;
      //next_goal_pose.y = my_robot.vel[0].y*1000 + 0.01 * (float)output_ay;
      //control_vel = 1;
      
      //RCLCPP_INFO(rclcpp::get_logger("dwa"),"x : %d, y : %d", dwa_robot.targetX, dwa_robot.targetY);
      //RCLCPP_INFO(rclcpp::get_logger("dwa"),"x : %lf, y : %lf", robot_vertual_vel_x, robot_vertual_vel_x);
      RCLCPP_INFO(rclcpp::get_logger("dwa"),"dwa");
    }
    else if(is_enable == 1 && path_enable == 0){
      //DWAから台形制御に移行する際に変数を設定する関数
      trape_controle_flag[robot_id] = micon_trapezoidal_DWA_change(dwa_robot[robot_id].x, dwa_robot[robot_id].y, dwa_robot[robot_id].Vx, dwa_robot[robot_id].Vy, 
                              &trape_c[robot_id], dwa_robot[robot_id].targetX, dwa_robot[robot_id].targetY, trape_controle_flag[robot_id], 
                              is_enable, path_enable);
      //ロボットの位置と仮想目標値に大きなズレが発生した場合に補正する
      micon_trapezoidal_robotXY_vertualXY_distance_check(&trape_c[robot_id], dwa_robot[robot_id].x, dwa_robot[robot_id].y);
      //台形制御を行う
      for(uint16_t i = 0; i < RASPI_TIME_STEP/MICON_TIME_STEP; i++){
        micon_trapezoidal_control(dwa_robot[robot_id].targetX, dwa_robot[robot_id].targetY, &trape_c[robot_id]);
        }
      next_goal_pose.x = trape_c[robot_id].virtual_x;
      next_goal_pose.y = trape_c[robot_id].virtual_y;
      RCLCPP_INFO(rclcpp::get_logger("dwa"),"trap");
    }
    else if(is_enable == 0){
      trape_controle_flag[robot_id] = 0;
      RCLCPP_INFO(rclcpp::get_logger("dwa"),"corission");
      double verocity = 1000*sqrt(my_robot.vel[0].x*my_robot.vel[0].x + my_robot.vel[0].y*my_robot.vel[0].y);
      next_goal_pose.x = dwa_robot[robot_id].x + RASPI_TIME_STEP*dwa_robot[robot_id].Vx - 1/2*RASPI_TIME_STEP*RASPI_TIME_STEP*ROBOT_MAX_ACCEL*dwa_robot[robot_id].Vx/verocity;
      next_goal_pose.y = dwa_robot[robot_id].y + RASPI_TIME_STEP*dwa_robot[robot_id].Vy - 1/2*RASPI_TIME_STEP*RASPI_TIME_STEP*ROBOT_MAX_ACCEL*dwa_robot[robot_id].Vy/verocity;
    }
    next_goal_pose.x = next_goal_pose.x/1000;   //単位変換(mm -> m)
    next_goal_pose.y = next_goal_pose.y/1000;   //単位変換(mm -> m)
    return;
}

}

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(robot_controller::Controller)
