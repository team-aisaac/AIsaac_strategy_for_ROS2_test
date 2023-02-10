// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/RobotReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/robot_replacement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotReplacement_turnon
{
public:
  explicit Init_RobotReplacement_turnon(::robocup_ssl_msgs::msg::RobotReplacement & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::RobotReplacement turnon(::robocup_ssl_msgs::msg::RobotReplacement::_turnon_type arg)
  {
    msg_.turnon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

class Init_RobotReplacement_yellowteam
{
public:
  explicit Init_RobotReplacement_yellowteam(::robocup_ssl_msgs::msg::RobotReplacement & msg)
  : msg_(msg)
  {}
  Init_RobotReplacement_turnon yellowteam(::robocup_ssl_msgs::msg::RobotReplacement::_yellowteam_type arg)
  {
    msg_.yellowteam = std::move(arg);
    return Init_RobotReplacement_turnon(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

class Init_RobotReplacement_id
{
public:
  explicit Init_RobotReplacement_id(::robocup_ssl_msgs::msg::RobotReplacement & msg)
  : msg_(msg)
  {}
  Init_RobotReplacement_yellowteam id(::robocup_ssl_msgs::msg::RobotReplacement::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotReplacement_yellowteam(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

class Init_RobotReplacement_dir
{
public:
  explicit Init_RobotReplacement_dir(::robocup_ssl_msgs::msg::RobotReplacement & msg)
  : msg_(msg)
  {}
  Init_RobotReplacement_id dir(::robocup_ssl_msgs::msg::RobotReplacement::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_RobotReplacement_id(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

class Init_RobotReplacement_y
{
public:
  explicit Init_RobotReplacement_y(::robocup_ssl_msgs::msg::RobotReplacement & msg)
  : msg_(msg)
  {}
  Init_RobotReplacement_dir y(::robocup_ssl_msgs::msg::RobotReplacement::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotReplacement_dir(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

class Init_RobotReplacement_x
{
public:
  Init_RobotReplacement_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotReplacement_y x(::robocup_ssl_msgs::msg::RobotReplacement::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotReplacement_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotReplacement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::RobotReplacement>()
{
  return robocup_ssl_msgs::msg::builder::Init_RobotReplacement_x();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__BUILDER_HPP_
