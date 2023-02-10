// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/robot_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotId_team_color
{
public:
  explicit Init_RobotId_team_color(::robocup_ssl_msgs::msg::RobotId & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::RobotId team_color(::robocup_ssl_msgs::msg::RobotId::_team_color_type arg)
  {
    msg_.team_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotId msg_;
};

class Init_RobotId_id
{
public:
  Init_RobotId_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotId_team_color id(::robocup_ssl_msgs::msg::RobotId::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotId_team_color(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::RobotId>()
{
  return robocup_ssl_msgs::msg::builder::Init_RobotId_id();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__BUILDER_HPP_
