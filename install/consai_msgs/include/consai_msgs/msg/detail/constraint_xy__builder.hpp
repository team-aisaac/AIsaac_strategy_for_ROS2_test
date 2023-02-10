// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__BUILDER_HPP_

#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintXY_object
{
public:
  explicit Init_ConstraintXY_object(::consai_msgs::msg::ConstraintXY & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ConstraintXY object(::consai_msgs::msg::ConstraintXY::_object_type arg)
  {
    msg_.object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintXY msg_;
};

class Init_ConstraintXY_value_y
{
public:
  explicit Init_ConstraintXY_value_y(::consai_msgs::msg::ConstraintXY & msg)
  : msg_(msg)
  {}
  Init_ConstraintXY_object value_y(::consai_msgs::msg::ConstraintXY::_value_y_type arg)
  {
    msg_.value_y = std::move(arg);
    return Init_ConstraintXY_object(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintXY msg_;
};

class Init_ConstraintXY_value_x
{
public:
  explicit Init_ConstraintXY_value_x(::consai_msgs::msg::ConstraintXY & msg)
  : msg_(msg)
  {}
  Init_ConstraintXY_value_y value_x(::consai_msgs::msg::ConstraintXY::_value_x_type arg)
  {
    msg_.value_x = std::move(arg);
    return Init_ConstraintXY_value_y(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintXY msg_;
};

class Init_ConstraintXY_normalized
{
public:
  Init_ConstraintXY_normalized()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintXY_value_x normalized(::consai_msgs::msg::ConstraintXY::_normalized_type arg)
  {
    msg_.normalized = std::move(arg);
    return Init_ConstraintXY_value_x(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ConstraintXY>()
{
  return consai_msgs::msg::builder::Init_ConstraintXY_normalized();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__BUILDER_HPP_
