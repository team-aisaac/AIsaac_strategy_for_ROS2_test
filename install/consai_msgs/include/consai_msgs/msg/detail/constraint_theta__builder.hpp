// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__BUILDER_HPP_

#include "consai_msgs/msg/detail/constraint_theta__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintTheta_param
{
public:
  explicit Init_ConstraintTheta_param(::consai_msgs::msg::ConstraintTheta & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ConstraintTheta param(::consai_msgs::msg::ConstraintTheta::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintTheta msg_;
};

class Init_ConstraintTheta_object
{
public:
  explicit Init_ConstraintTheta_object(::consai_msgs::msg::ConstraintTheta & msg)
  : msg_(msg)
  {}
  Init_ConstraintTheta_param object(::consai_msgs::msg::ConstraintTheta::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_ConstraintTheta_param(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintTheta msg_;
};

class Init_ConstraintTheta_value_theta
{
public:
  Init_ConstraintTheta_value_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintTheta_object value_theta(::consai_msgs::msg::ConstraintTheta::_value_theta_type arg)
  {
    msg_.value_theta = std::move(arg);
    return Init_ConstraintTheta_object(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintTheta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ConstraintTheta>()
{
  return consai_msgs::msg::builder::Init_ConstraintTheta_value_theta();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__BUILDER_HPP_
