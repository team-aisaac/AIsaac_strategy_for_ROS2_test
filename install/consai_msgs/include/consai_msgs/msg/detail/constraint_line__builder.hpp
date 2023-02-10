// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ConstraintLine.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__BUILDER_HPP_

#include "consai_msgs/msg/detail/constraint_line__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintLine_p4
{
public:
  explicit Init_ConstraintLine_p4(::consai_msgs::msg::ConstraintLine & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ConstraintLine p4(::consai_msgs::msg::ConstraintLine::_p4_type arg)
  {
    msg_.p4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

class Init_ConstraintLine_p3
{
public:
  explicit Init_ConstraintLine_p3(::consai_msgs::msg::ConstraintLine & msg)
  : msg_(msg)
  {}
  Init_ConstraintLine_p4 p3(::consai_msgs::msg::ConstraintLine::_p3_type arg)
  {
    msg_.p3 = std::move(arg);
    return Init_ConstraintLine_p4(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

class Init_ConstraintLine_theta
{
public:
  explicit Init_ConstraintLine_theta(::consai_msgs::msg::ConstraintLine & msg)
  : msg_(msg)
  {}
  Init_ConstraintLine_p3 theta(::consai_msgs::msg::ConstraintLine::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ConstraintLine_p3(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

class Init_ConstraintLine_distance
{
public:
  explicit Init_ConstraintLine_distance(::consai_msgs::msg::ConstraintLine & msg)
  : msg_(msg)
  {}
  Init_ConstraintLine_theta distance(::consai_msgs::msg::ConstraintLine::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_ConstraintLine_theta(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

class Init_ConstraintLine_p2
{
public:
  explicit Init_ConstraintLine_p2(::consai_msgs::msg::ConstraintLine & msg)
  : msg_(msg)
  {}
  Init_ConstraintLine_distance p2(::consai_msgs::msg::ConstraintLine::_p2_type arg)
  {
    msg_.p2 = std::move(arg);
    return Init_ConstraintLine_distance(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

class Init_ConstraintLine_p1
{
public:
  Init_ConstraintLine_p1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintLine_p2 p1(::consai_msgs::msg::ConstraintLine::_p1_type arg)
  {
    msg_.p1 = std::move(arg);
    return Init_ConstraintLine_p2(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ConstraintLine>()
{
  return consai_msgs::msg::builder::Init_ConstraintLine_p1();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__BUILDER_HPP_
