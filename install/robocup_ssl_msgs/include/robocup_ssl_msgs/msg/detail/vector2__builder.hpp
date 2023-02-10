// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/vector2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector2_y
{
public:
  explicit Init_Vector2_y(::robocup_ssl_msgs::msg::Vector2 & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::Vector2 y(::robocup_ssl_msgs::msg::Vector2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Vector2 msg_;
};

class Init_Vector2_x
{
public:
  Init_Vector2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2_y x(::robocup_ssl_msgs::msg::Vector2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::Vector2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::Vector2>()
{
  return robocup_ssl_msgs::msg::builder::Init_Vector2_x();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
