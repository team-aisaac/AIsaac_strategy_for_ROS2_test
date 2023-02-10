// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/robot_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_chip_kick
{
public:
  explicit Init_RobotStatus_chip_kick(::robocup_ssl_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::RobotStatus chip_kick(::robocup_ssl_msgs::msg::RobotStatus::_chip_kick_type arg)
  {
    msg_.chip_kick = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_flat_kick
{
public:
  explicit Init_RobotStatus_flat_kick(::robocup_ssl_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_chip_kick flat_kick(::robocup_ssl_msgs::msg::RobotStatus::_flat_kick_type arg)
  {
    msg_.flat_kick = std::move(arg);
    return Init_RobotStatus_chip_kick(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_infrared
{
public:
  explicit Init_RobotStatus_infrared(::robocup_ssl_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_flat_kick infrared(::robocup_ssl_msgs::msg::RobotStatus::_infrared_type arg)
  {
    msg_.infrared = std::move(arg);
    return Init_RobotStatus_flat_kick(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  Init_RobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_infrared robot_id(::robocup_ssl_msgs::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_infrared(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::RobotStatus>()
{
  return robocup_ssl_msgs::msg::builder::Init_RobotStatus_robot_id();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
