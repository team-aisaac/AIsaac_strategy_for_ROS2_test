// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/State2D.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__STATE2_D__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__STATE2_D__BUILDER_HPP_

#include "consai_msgs/msg/detail/state2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_State2D_theta
{
public:
  explicit Init_State2D_theta(::consai_msgs::msg::State2D & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::State2D theta(::consai_msgs::msg::State2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::State2D msg_;
};

class Init_State2D_y
{
public:
  explicit Init_State2D_y(::consai_msgs::msg::State2D & msg)
  : msg_(msg)
  {}
  Init_State2D_theta y(::consai_msgs::msg::State2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_State2D_theta(msg_);
  }

private:
  ::consai_msgs::msg::State2D msg_;
};

class Init_State2D_x
{
public:
  Init_State2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State2D_y x(::consai_msgs::msg::State2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_State2D_y(msg_);
  }

private:
  ::consai_msgs::msg::State2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::State2D>()
{
  return consai_msgs::msg::builder::Init_State2D_x();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__STATE2_D__BUILDER_HPP_
