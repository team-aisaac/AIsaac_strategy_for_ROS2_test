// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__BUILDER_HPP_

#include "consai_msgs/msg/detail/constraint_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintPose_offset
{
public:
  explicit Init_ConstraintPose_offset(::consai_msgs::msg::ConstraintPose & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ConstraintPose offset(::consai_msgs::msg::ConstraintPose::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintPose msg_;
};

class Init_ConstraintPose_theta
{
public:
  explicit Init_ConstraintPose_theta(::consai_msgs::msg::ConstraintPose & msg)
  : msg_(msg)
  {}
  Init_ConstraintPose_offset theta(::consai_msgs::msg::ConstraintPose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_ConstraintPose_offset(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintPose msg_;
};

class Init_ConstraintPose_xy
{
public:
  Init_ConstraintPose_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintPose_theta xy(::consai_msgs::msg::ConstraintPose::_xy_type arg)
  {
    msg_.xy = std::move(arg);
    return Init_ConstraintPose_theta(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ConstraintPose>()
{
  return consai_msgs::msg::builder::Init_ConstraintPose_xy();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__BUILDER_HPP_
