// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:action/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__BUILDER_HPP_
#define CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__BUILDER_HPP_

#include "consai_msgs/action/detail/robot_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_Goal_avoid_placement
{
public:
  explicit Init_RobotControl_Goal_avoid_placement(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_Goal avoid_placement(::consai_msgs::action::RobotControl_Goal::_avoid_placement_type arg)
  {
    msg_.avoid_placement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_avoid_obstacles
{
public:
  explicit Init_RobotControl_Goal_avoid_obstacles(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_avoid_placement avoid_obstacles(::consai_msgs::action::RobotControl_Goal::_avoid_obstacles_type arg)
  {
    msg_.avoid_obstacles = std::move(arg);
    return Init_RobotControl_Goal_avoid_placement(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_reflect_shoot
{
public:
  explicit Init_RobotControl_Goal_reflect_shoot(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_avoid_obstacles reflect_shoot(::consai_msgs::action::RobotControl_Goal::_reflect_shoot_type arg)
  {
    msg_.reflect_shoot = std::move(arg);
    return Init_RobotControl_Goal_avoid_obstacles(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_receive_ball
{
public:
  explicit Init_RobotControl_Goal_receive_ball(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_reflect_shoot receive_ball(::consai_msgs::action::RobotControl_Goal::_receive_ball_type arg)
  {
    msg_.receive_ball = std::move(arg);
    return Init_RobotControl_Goal_reflect_shoot(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_dribble_target
{
public:
  explicit Init_RobotControl_Goal_dribble_target(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_receive_ball dribble_target(::consai_msgs::action::RobotControl_Goal::_dribble_target_type arg)
  {
    msg_.dribble_target = std::move(arg);
    return Init_RobotControl_Goal_receive_ball(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_dribble_enable
{
public:
  explicit Init_RobotControl_Goal_dribble_enable(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_dribble_target dribble_enable(::consai_msgs::action::RobotControl_Goal::_dribble_enable_type arg)
  {
    msg_.dribble_enable = std::move(arg);
    return Init_RobotControl_Goal_dribble_target(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_kick_target
{
public:
  explicit Init_RobotControl_Goal_kick_target(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_dribble_enable kick_target(::consai_msgs::action::RobotControl_Goal::_kick_target_type arg)
  {
    msg_.kick_target = std::move(arg);
    return Init_RobotControl_Goal_dribble_enable(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_kick_setplay
{
public:
  explicit Init_RobotControl_Goal_kick_setplay(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_kick_target kick_setplay(::consai_msgs::action::RobotControl_Goal::_kick_setplay_type arg)
  {
    msg_.kick_setplay = std::move(arg);
    return Init_RobotControl_Goal_kick_target(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_kick_pass
{
public:
  explicit Init_RobotControl_Goal_kick_pass(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_kick_setplay kick_pass(::consai_msgs::action::RobotControl_Goal::_kick_pass_type arg)
  {
    msg_.kick_pass = std::move(arg);
    return Init_RobotControl_Goal_kick_setplay(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_kick_enable
{
public:
  explicit Init_RobotControl_Goal_kick_enable(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_kick_pass kick_enable(::consai_msgs::action::RobotControl_Goal::_kick_enable_type arg)
  {
    msg_.kick_enable = std::move(arg);
    return Init_RobotControl_Goal_kick_pass(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_line
{
public:
  explicit Init_RobotControl_Goal_line(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_kick_enable line(::consai_msgs::action::RobotControl_Goal::_line_type arg)
  {
    msg_.line = std::move(arg);
    return Init_RobotControl_Goal_kick_enable(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_pose
{
public:
  explicit Init_RobotControl_Goal_pose(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_line pose(::consai_msgs::action::RobotControl_Goal::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotControl_Goal_line(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_max_velocity_xy
{
public:
  explicit Init_RobotControl_Goal_max_velocity_xy(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_pose max_velocity_xy(::consai_msgs::action::RobotControl_Goal::_max_velocity_xy_type arg)
  {
    msg_.max_velocity_xy = std::move(arg);
    return Init_RobotControl_Goal_pose(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_keep_control
{
public:
  explicit Init_RobotControl_Goal_keep_control(::consai_msgs::action::RobotControl_Goal & msg)
  : msg_(msg)
  {}
  Init_RobotControl_Goal_max_velocity_xy keep_control(::consai_msgs::action::RobotControl_Goal::_keep_control_type arg)
  {
    msg_.keep_control = std::move(arg);
    return Init_RobotControl_Goal_max_velocity_xy(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

class Init_RobotControl_Goal_stop
{
public:
  Init_RobotControl_Goal_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_Goal_keep_control stop(::consai_msgs::action::RobotControl_Goal::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_RobotControl_Goal_keep_control(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_Goal>()
{
  return consai_msgs::action::builder::Init_RobotControl_Goal_stop();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_Result_message
{
public:
  explicit Init_RobotControl_Result_message(::consai_msgs::action::RobotControl_Result & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_Result message(::consai_msgs::action::RobotControl_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Result msg_;
};

class Init_RobotControl_Result_success
{
public:
  Init_RobotControl_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_Result_message success(::consai_msgs::action::RobotControl_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RobotControl_Result_message(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_Result>()
{
  return consai_msgs::action::builder::Init_RobotControl_Result_success();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_Feedback_present_velocity
{
public:
  explicit Init_RobotControl_Feedback_present_velocity(::consai_msgs::action::RobotControl_Feedback & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_Feedback present_velocity(::consai_msgs::action::RobotControl_Feedback::_present_velocity_type arg)
  {
    msg_.present_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Feedback msg_;
};

class Init_RobotControl_Feedback_remaining_pose
{
public:
  Init_RobotControl_Feedback_remaining_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_Feedback_present_velocity remaining_pose(::consai_msgs::action::RobotControl_Feedback::_remaining_pose_type arg)
  {
    msg_.remaining_pose = std::move(arg);
    return Init_RobotControl_Feedback_present_velocity(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_Feedback>()
{
  return consai_msgs::action::builder::Init_RobotControl_Feedback_remaining_pose();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_SendGoal_Request_goal
{
public:
  explicit Init_RobotControl_SendGoal_Request_goal(::consai_msgs::action::RobotControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_SendGoal_Request goal(::consai_msgs::action::RobotControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_SendGoal_Request msg_;
};

class Init_RobotControl_SendGoal_Request_goal_id
{
public:
  Init_RobotControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_SendGoal_Request_goal goal_id(::consai_msgs::action::RobotControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotControl_SendGoal_Request_goal(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_SendGoal_Request>()
{
  return consai_msgs::action::builder::Init_RobotControl_SendGoal_Request_goal_id();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_SendGoal_Response_stamp
{
public:
  explicit Init_RobotControl_SendGoal_Response_stamp(::consai_msgs::action::RobotControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_SendGoal_Response stamp(::consai_msgs::action::RobotControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_SendGoal_Response msg_;
};

class Init_RobotControl_SendGoal_Response_accepted
{
public:
  Init_RobotControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_SendGoal_Response_stamp accepted(::consai_msgs::action::RobotControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RobotControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_SendGoal_Response>()
{
  return consai_msgs::action::builder::Init_RobotControl_SendGoal_Response_accepted();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_GetResult_Request_goal_id
{
public:
  Init_RobotControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::consai_msgs::action::RobotControl_GetResult_Request goal_id(::consai_msgs::action::RobotControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_GetResult_Request>()
{
  return consai_msgs::action::builder::Init_RobotControl_GetResult_Request_goal_id();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_GetResult_Response_result
{
public:
  explicit Init_RobotControl_GetResult_Response_result(::consai_msgs::action::RobotControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_GetResult_Response result(::consai_msgs::action::RobotControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_GetResult_Response msg_;
};

class Init_RobotControl_GetResult_Response_status
{
public:
  Init_RobotControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_GetResult_Response_result status(::consai_msgs::action::RobotControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotControl_GetResult_Response_result(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_GetResult_Response>()
{
  return consai_msgs::action::builder::Init_RobotControl_GetResult_Response_status();
}

}  // namespace consai_msgs


namespace consai_msgs
{

namespace action
{

namespace builder
{

class Init_RobotControl_FeedbackMessage_feedback
{
public:
  explicit Init_RobotControl_FeedbackMessage_feedback(::consai_msgs::action::RobotControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::consai_msgs::action::RobotControl_FeedbackMessage feedback(::consai_msgs::action::RobotControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_FeedbackMessage msg_;
};

class Init_RobotControl_FeedbackMessage_goal_id
{
public:
  Init_RobotControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_FeedbackMessage_feedback goal_id(::consai_msgs::action::RobotControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::consai_msgs::action::RobotControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::action::RobotControl_FeedbackMessage>()
{
  return consai_msgs::action::builder::Init_RobotControl_FeedbackMessage_goal_id();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__ACTION__DETAIL__ROBOT_CONTROL__BUILDER_HPP_
