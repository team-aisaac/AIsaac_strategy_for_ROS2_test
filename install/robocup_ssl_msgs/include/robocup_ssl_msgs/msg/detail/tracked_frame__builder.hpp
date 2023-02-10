// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/tracked_frame__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedFrame_capabilities
{
public:
  explicit Init_TrackedFrame_capabilities(::robocup_ssl_msgs::msg::TrackedFrame & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::TrackedFrame capabilities(::robocup_ssl_msgs::msg::TrackedFrame::_capabilities_type arg)
  {
    msg_.capabilities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

class Init_TrackedFrame_kicked_ball
{
public:
  explicit Init_TrackedFrame_kicked_ball(::robocup_ssl_msgs::msg::TrackedFrame & msg)
  : msg_(msg)
  {}
  Init_TrackedFrame_capabilities kicked_ball(::robocup_ssl_msgs::msg::TrackedFrame::_kicked_ball_type arg)
  {
    msg_.kicked_ball = std::move(arg);
    return Init_TrackedFrame_capabilities(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

class Init_TrackedFrame_robots
{
public:
  explicit Init_TrackedFrame_robots(::robocup_ssl_msgs::msg::TrackedFrame & msg)
  : msg_(msg)
  {}
  Init_TrackedFrame_kicked_ball robots(::robocup_ssl_msgs::msg::TrackedFrame::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_TrackedFrame_kicked_ball(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

class Init_TrackedFrame_balls
{
public:
  explicit Init_TrackedFrame_balls(::robocup_ssl_msgs::msg::TrackedFrame & msg)
  : msg_(msg)
  {}
  Init_TrackedFrame_robots balls(::robocup_ssl_msgs::msg::TrackedFrame::_balls_type arg)
  {
    msg_.balls = std::move(arg);
    return Init_TrackedFrame_robots(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

class Init_TrackedFrame_timestamp
{
public:
  explicit Init_TrackedFrame_timestamp(::robocup_ssl_msgs::msg::TrackedFrame & msg)
  : msg_(msg)
  {}
  Init_TrackedFrame_balls timestamp(::robocup_ssl_msgs::msg::TrackedFrame::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrackedFrame_balls(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

class Init_TrackedFrame_frame_number
{
public:
  Init_TrackedFrame_frame_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedFrame_timestamp frame_number(::robocup_ssl_msgs::msg::TrackedFrame::_frame_number_type arg)
  {
    msg_.frame_number = std::move(arg);
    return Init_TrackedFrame_timestamp(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::TrackedFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::TrackedFrame>()
{
  return robocup_ssl_msgs::msg::builder::Init_TrackedFrame_frame_number();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__BUILDER_HPP_
