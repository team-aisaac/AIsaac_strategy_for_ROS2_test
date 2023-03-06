#ifndef ROBOT_CONTROLLER__CONTROLLER_COMPONENT_HPP_
#define ROBOT_CONTROLLER__CONTROLLER_COMPONENT_HPP_

#include <memory>
#include <string>
#include <vector>

#include "control_toolbox/pid.hpp"
#include "robot_command_msgs/msg/robot_command.hpp"
//#include "consai_msgs/action/robot_control.hpp"
#include "consai_msgs/msg/goal_pose.hpp"
#include "consai_msgs/msg/parsed_referee.hpp"
#include "consai_msgs/msg/state2_d.hpp"
#include "robot_controller/field_info_parser.hpp"
#include "robot_controller/visibility_control.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "robocup_ssl_msgs/msg/geometry_data.hpp"
#include "robocup_ssl_msgs/msg/referee.hpp"
#include "robocup_ssl_msgs/msg/tracked_frame.hpp"
#include "robocup_ssl_msgs/msg/tracked_robot.hpp"

//#include "robot_controller/dwa_include/RaspiTrapezoidalControl.h"
#include "robot_controller/dwa_include/TrapezoidalControl.h"
#include "robot_controller/dwa_include/dwa.h"
#include "robot_controller/dwa_include/DWA_path_recover.h"

#include "robot_controller/ball_wrap_kick_include/wrap_kick.h"

namespace robot_controller
{
using GoalPose = consai_msgs::msg::GoalPose;
using State = consai_msgs::msg::State2D;
using RobotCommand = robot_command_msgs::msg::RobotCommand;
using RobotControl = consai_msgs::action::RobotControl;
using GoalHandleRobotControl = rclcpp_action::ServerGoalHandle<RobotControl>;
using GeometryData = robocup_ssl_msgs::msg::GeometryData;
using ParsedReferee = consai_msgs::msg::ParsedReferee;
using Referee = robocup_ssl_msgs::msg::Referee;
using TrackedFrame = robocup_ssl_msgs::msg::TrackedFrame;
using TrackedRobot = robocup_ssl_msgs::msg::TrackedRobot;


class Controller : public rclcpp::Node
{
public:
  ROBOT_CONTROLLER_PUBLIC
  explicit Controller(const rclcpp::NodeOptions & options);

protected:
  void on_timer_pub_control_command(const unsigned int robot_id);
  void on_timer_pub_stop_command(const unsigned int robot_id);

private:
  void callback_detection_tracked(const TrackedFrame::SharedPtr msg);
  void callback_geometry(const GeometryData::SharedPtr msg);
  void callback_referee(const Referee::SharedPtr msg);
  void callback_parsed_referee(const ParsedReferee::SharedPtr msg);
  bool update_pid_gain_from_param(
    const rclcpp::Parameter & param,
    const std::string & prefix,
    std::vector<std::shared_ptr<control_toolbox::Pid>> & pid_controller);
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const RobotControl::Goal> goal,
    const unsigned int robot_id);
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleRobotControl> goal_handle,
    const unsigned int robot_id);
  void handle_accepted(
    std::shared_ptr<GoalHandleRobotControl> goal_handle,
    const unsigned int robot_id);
  State limit_world_velocity(const State & velocity, const double & max_velocity_xy, const double & max_velocity_theta) const;
  State limit_world_acceleration(
    const State & velocity, const State & last_velocity,
    const rclcpp::Duration & dt) const;
  bool arrived(const TrackedRobot & my_robot, const State & goal_pose);
  bool switch_to_stop_control_mode(
    const unsigned int robot_id, const bool success, const std::string & error_msg);

  std::vector<rclcpp::Publisher<RobotCommand>::SharedPtr> pub_command_;
  std::vector<rclcpp::Publisher<GoalPose>::SharedPtr> pub_goal_pose_;
  std::vector<rclcpp_action::Server<RobotControl>::SharedPtr> server_control_;
  std::vector<rclcpp::Time> last_update_time_;
  std::vector<std::shared_ptr<control_toolbox::Pid>> pid_vx_;
  std::vector<std::shared_ptr<control_toolbox::Pid>> pid_vy_;
  std::vector<std::shared_ptr<control_toolbox::Pid>> pid_vtheta_;
  std::vector<rclcpp::TimerBase::SharedPtr> timer_pub_control_command_;
  std::vector<rclcpp::TimerBase::SharedPtr> timer_pub_stop_command_;
  std::vector<bool> control_enable_;
  std::vector<bool> system_stop_;
  std::vector<bool> need_response_;
  std::vector<std::shared_ptr<GoalHandleRobotControl>> goal_handle_;
  std::vector<State> last_world_vel_;
  std::vector<State> robot_vertual_vel;

  robot_controller::FieldInfoParser parser_;
  rclcpp::Subscription<TrackedFrame>::SharedPtr sub_detection_tracked_;
  rclcpp::Subscription<GeometryData>::SharedPtr sub_geometry_;
  rclcpp::Subscription<Referee>::SharedPtr sub_referee_;
  rclcpp::Subscription<ParsedReferee>::SharedPtr sub_parsed_referee_;
  bool team_is_yellow_;
  rclcpp::Clock steady_clock_;
  OnSetParametersCallbackHandle::SharedPtr handler_change_param_;
  double max_acceleration_xy_;
  double max_acceleration_theta_;
  double max_velocity_xy_;
  double max_velocity_theta_;

  //DWAと台形制御用の変数
  std::vector<bool> trape_controle_flag;          //前回のループで台形制御を行っていたかを判定するフラグ
  std::vector<micon_trape_con> trape_c;                 //台形制御を行うための構造体 
  std::vector<int8_t> pose_controll_count;        //DWAを100msごとに起動するためのカウンタ
  std::vector<State> next_goal_pose;
  void decide_next_goal_xy(State goal_pose, State &midle_goal_pose, State &next_goal_pose, bool prohidited_zone_ignore, bool &midle_target_flag, 
    const unsigned int robot_id, TrackedRobot my_robot, bool team_is_yellow_, std::vector<bool> &trape_controle_flag, std::vector<micon_trape_con> &trape_c);
  void decide_next_goal_xy2(State goal_pose, State &midle_goal_pose, State &next_goal_pose, bool prohidited_zone_ignore, bool &midle_target_flag, 
    const unsigned int robot_id, TrackedRobot my_robot, bool team_is_yellow_, std::vector<bool> &trape_controle_flag, std::vector<micon_trape_con> &trape_c);
  std::vector<dwa_robot_path> dwa_robot;

  //ボールを蹴る
  std::vector<bool> ball_kick_con_flag;               //前回ループでボールを蹴る動作に入っていたかを確認するフラグ
  TrackedBall ball;
  void decide_kick_xy(TrackedBall ball, State r_ball, State ball_goal, TrackedRobot my_robot, State &next_goal_pose, std::vector<bool> &ball_kick_con_flag, 
    const unsigned int robot_id, float &kick_con_max_velocity_theta, bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick);
  std::vector<kick_path> kick_con_path;
  bool decide_ball_kick(TrackedBall ball, State r_ball, State ball_goal, TrackedRobot my_robot, int32_t ball_target_allowable_error);
  
  //ドリブルをする
  std::vector<bool> dribble_con_flag;               //ドリブル動作に入っているかを確認するフラグ
  std::vector<bool> dribble_ball_move_flag;         //ドリブルでボールを運んでいる動作をしているか確認するフラグ
  std::vector<micon_trape_con> dribble_trape_c;     //ドリブル動作時の台形制御を行う構造体
  void decide_dribble_xy(State dribble_goal, TrackedBall ball, State r_ball, TrackedRobot my_robot, float kick_con_max_velocity_theta, State &next_goal_pose, 
    std::vector<bool> &dribble_con_flag, const unsigned int robot_id, int32_t dribble_complete_distance, std::vector<micon_trape_con> &dribble_trape_c, 
    std::vector<bool> &dribble_ball_move_flag);
};

}  // namespace robot_controller

#endif  // ROBOT_CONTROLLER__CONTROLLER_COMPONENT_HPP_
