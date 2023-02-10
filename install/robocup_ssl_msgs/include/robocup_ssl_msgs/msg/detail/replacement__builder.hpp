// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/replacement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_Replacement_robots
{
public:
  explicit Init_Replacement_robots(::robocup_ssl_msgs::msg::Replacement & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::Replacement robots(::robocup_ssl_msgs::msg::Replacement::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Replacement msg_;
};

class Init_Replacement_ball
{
public:
  Init_Replacement_ball()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replacement_robots ball(::robocup_ssl_msgs::msg::Replacement::_ball_type arg)
  {
    msg_.ball = std::move(arg);
    return Init_Replacement_robots(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Replacement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::Replacement>()
{
  return robocup_ssl_msgs::msg::builder::Init_Replacement_ball();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__BUILDER_HPP_
