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

namespace robot_controller
{

using namespace std::chrono_literals;
namespace tools = geometry_tools;

const int ROBOT_NUM = 16;

Controller::Controller(const rclcpp::NodeOptions & options)
: Node("controller", options)
{
  using namespace std::placeholders;

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
  RCLCPP_INFO(this->get_logger(),"control_command");
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
}

void Controller::on_timer_pub_stop_command(const unsigned int robot_id)
{
  RCLCPP_INFO(this->get_logger(),"stop_command");
  
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
