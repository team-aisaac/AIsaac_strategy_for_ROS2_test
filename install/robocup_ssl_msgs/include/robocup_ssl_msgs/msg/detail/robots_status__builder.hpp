// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/robots_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotsStatus_robots_status
{
public:
  Init_RobotsStatus_robots_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robocup_ssl_msgs::msg::RobotsStatus robots_status(::robocup_ssl_msgs::msg::RobotsStatus::_robots_status_type arg)
  {
    msg_.robots_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::RobotsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::RobotsStatus>()
{
  return robocup_ssl_msgs::msg::builder::Init_RobotsStatus_robots_status();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__BUILDER_HPP_
