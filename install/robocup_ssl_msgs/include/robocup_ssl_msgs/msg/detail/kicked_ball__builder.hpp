// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_KickedBall_robot_id
{
public:
  explicit Init_KickedBall_robot_id(::robocup_ssl_msgs::msg::KickedBall & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::KickedBall robot_id(::robocup_ssl_msgs::msg::KickedBall::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

class Init_KickedBall_stop_pos
{
public:
  explicit Init_KickedBall_stop_pos(::robocup_ssl_msgs::msg::KickedBall & msg)
  : msg_(msg)
  {}
  Init_KickedBall_robot_id stop_pos(::robocup_ssl_msgs::msg::KickedBall::_stop_pos_type arg)
  {
    msg_.stop_pos = std::move(arg);
    return Init_KickedBall_robot_id(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

class Init_KickedBall_stop_timestamp
{
public:
  explicit Init_KickedBall_stop_timestamp(::robocup_ssl_msgs::msg::KickedBall & msg)
  : msg_(msg)
  {}
  Init_KickedBall_stop_pos stop_timestamp(::robocup_ssl_msgs::msg::KickedBall::_stop_timestamp_type arg)
  {
    msg_.stop_timestamp = std::move(arg);
    return Init_KickedBall_stop_pos(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

class Init_KickedBall_start_timestamp
{
public:
  explicit Init_KickedBall_start_timestamp(::robocup_ssl_msgs::msg::KickedBall & msg)
  : msg_(msg)
  {}
  Init_KickedBall_stop_timestamp start_timestamp(::robocup_ssl_msgs::msg::KickedBall::_start_timestamp_type arg)
  {
    msg_.start_timestamp = std::move(arg);
    return Init_KickedBall_stop_timestamp(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

class Init_KickedBall_vel
{
public:
  explicit Init_KickedBall_vel(::robocup_ssl_msgs::msg::KickedBall & msg)
  : msg_(msg)
  {}
  Init_KickedBall_start_timestamp vel(::robocup_ssl_msgs::msg::KickedBall::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_KickedBall_start_timestamp(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

class Init_KickedBall_pos
{
public:
  Init_KickedBall_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KickedBall_vel pos(::robocup_ssl_msgs::msg::KickedBall::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_KickedBall_vel(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::KickedBall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::KickedBall>()
{
  return robocup_ssl_msgs::msg::builder::Init_KickedBall_pos();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__BUILDER_HPP_
