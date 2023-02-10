// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/commands__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_Commands_robot_commands
{
public:
  explicit Init_Commands_robot_commands(::robocup_ssl_msgs::msg::Commands & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::Commands robot_commands(::robocup_ssl_msgs::msg::Commands::_robot_commands_type arg)
  {
    msg_.robot_commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Commands msg_;
};

class Init_Commands_isteamyellow
{
public:
  explicit Init_Commands_isteamyellow(::robocup_ssl_msgs::msg::Commands & msg)
  : msg_(msg)
  {}
  Init_Commands_robot_commands isteamyellow(::robocup_ssl_msgs::msg::Commands::_isteamyellow_type arg)
  {
    msg_.isteamyellow = std::move(arg);
    return Init_Commands_robot_commands(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Commands msg_;
};

class Init_Commands_timestamp
{
public:
  Init_Commands_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_isteamyellow timestamp(::robocup_ssl_msgs::msg::Commands::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Commands_isteamyellow(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Commands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::Commands>()
{
  return robocup_ssl_msgs::msg::builder::Init_Commands_timestamp();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__BUILDER_HPP_
