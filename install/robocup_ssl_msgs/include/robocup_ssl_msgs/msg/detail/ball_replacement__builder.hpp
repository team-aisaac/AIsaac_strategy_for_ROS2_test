// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/BallReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/ball_replacement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_BallReplacement_vy
{
public:
  explicit Init_BallReplacement_vy(::robocup_ssl_msgs::msg::BallReplacement & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::BallReplacement vy(::robocup_ssl_msgs::msg::BallReplacement::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallReplacement msg_;
};

class Init_BallReplacement_vx
{
public:
  explicit Init_BallReplacement_vx(::robocup_ssl_msgs::msg::BallReplacement & msg)
  : msg_(msg)
  {}
  Init_BallReplacement_vy vx(::robocup_ssl_msgs::msg::BallReplacement::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_BallReplacement_vy(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallReplacement msg_;
};

class Init_BallReplacement_y
{
public:
  explicit Init_BallReplacement_y(::robocup_ssl_msgs::msg::BallReplacement & msg)
  : msg_(msg)
  {}
  Init_BallReplacement_vx y(::robocup_ssl_msgs::msg::BallReplacement::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BallReplacement_vx(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallReplacement msg_;
};

class Init_BallReplacement_x
{
public:
  Init_BallReplacement_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallReplacement_y x(::robocup_ssl_msgs::msg::BallReplacement::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BallReplacement_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::BallReplacement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::BallReplacement>()
{
  return robocup_ssl_msgs::msg::builder::Init_BallReplacement_x();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__BUILDER_HPP_
