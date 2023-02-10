// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/tracked_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedRobot_visibility
{
public:
  explicit Init_TrackedRobot_visibility(::robocup_ssl_msgs::msg::TrackedRobot & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::TrackedRobot visibility(::robocup_ssl_msgs::msg::TrackedRobot::_visibility_type arg)
  {
    msg_.visibility = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

class Init_TrackedRobot_vel_angular
{
public:
  explicit Init_TrackedRobot_vel_angular(::robocup_ssl_msgs::msg::TrackedRobot & msg)
  : msg_(msg)
  {}
  Init_TrackedRobot_visibility vel_angular(::robocup_ssl_msgs::msg::TrackedRobot::_vel_angular_type arg)
  {
    msg_.vel_angular = std::move(arg);
    return Init_TrackedRobot_visibility(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

class Init_TrackedRobot_vel
{
public:
  explicit Init_TrackedRobot_vel(::robocup_ssl_msgs::msg::TrackedRobot & msg)
  : msg_(msg)
  {}
  Init_TrackedRobot_vel_angular vel(::robocup_ssl_msgs::msg::TrackedRobot::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_TrackedRobot_vel_angular(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

class Init_TrackedRobot_orientation
{
public:
  explicit Init_TrackedRobot_orientation(::robocup_ssl_msgs::msg::TrackedRobot & msg)
  : msg_(msg)
  {}
  Init_TrackedRobot_vel orientation(::robocup_ssl_msgs::msg::TrackedRobot::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_TrackedRobot_vel(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

class Init_TrackedRobot_pos
{
public:
  explicit Init_TrackedRobot_pos(::robocup_ssl_msgs::msg::TrackedRobot & msg)
  : msg_(msg)
  {}
  Init_TrackedRobot_orientation pos(::robocup_ssl_msgs::msg::TrackedRobot::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_TrackedRobot_orientation(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

class Init_TrackedRobot_robot_id
{
public:
  Init_TrackedRobot_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedRobot_pos robot_id(::robocup_ssl_msgs::msg::TrackedRobot::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_TrackedRobot_pos(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::TrackedRobot>()
{
  return robocup_ssl_msgs::msg::builder::Init_TrackedRobot_robot_id();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__BUILDER_HPP_
