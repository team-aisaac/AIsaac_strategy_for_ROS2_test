// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/tracked_ball__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedBall_visibility
{
public:
  explicit Init_TrackedBall_visibility(::robocup_ssl_msgs::msg::TrackedBall & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::TrackedBall visibility(::robocup_ssl_msgs::msg::TrackedBall::_visibility_type arg)
  {
    msg_.visibility = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedBall msg_;
};

class Init_TrackedBall_vel
{
public:
  explicit Init_TrackedBall_vel(::robocup_ssl_msgs::msg::TrackedBall & msg)
  : msg_(msg)
  {}
  Init_TrackedBall_visibility vel(::robocup_ssl_msgs::msg::TrackedBall::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_TrackedBall_visibility(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedBall msg_;
};

class Init_TrackedBall_pos
{
public:
  Init_TrackedBall_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedBall_vel pos(::robocup_ssl_msgs::msg::TrackedBall::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_TrackedBall_vel(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedBall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::TrackedBall>()
{
  return robocup_ssl_msgs::msg::builder::Init_TrackedBall_pos();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__BUILDER_HPP_
