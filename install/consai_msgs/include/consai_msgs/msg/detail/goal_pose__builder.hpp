// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/GoalPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__BUILDER_HPP_

#include "consai_msgs/msg/detail/goal_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalPose_pose
{
public:
  explicit Init_GoalPose_pose(::consai_msgs::msg::GoalPose & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::GoalPose pose(::consai_msgs::msg::GoalPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::GoalPose msg_;
};

class Init_GoalPose_team_is_yellow
{
public:
  explicit Init_GoalPose_team_is_yellow(::consai_msgs::msg::GoalPose & msg)
  : msg_(msg)
  {}
  Init_GoalPose_pose team_is_yellow(::consai_msgs::msg::GoalPose::_team_is_yellow_type arg)
  {
    msg_.team_is_yellow = std::move(arg);
    return Init_GoalPose_pose(msg_);
  }

private:
  ::consai_msgs::msg::GoalPose msg_;
};

class Init_GoalPose_robot_id
{
public:
  Init_GoalPose_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalPose_team_is_yellow robot_id(::consai_msgs::msg::GoalPose::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GoalPose_team_is_yellow(msg_);
  }

private:
  ::consai_msgs::msg::GoalPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::GoalPose>()
{
  return consai_msgs::msg::builder::Init_GoalPose_robot_id();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__BUILDER_HPP_
