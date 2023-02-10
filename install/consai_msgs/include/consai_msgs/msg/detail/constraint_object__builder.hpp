// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__BUILDER_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__BUILDER_HPP_

#include "consai_msgs/msg/detail/constraint_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace consai_msgs
{

namespace msg
{

namespace builder
{

class Init_ConstraintObject_robot_id
{
public:
  explicit Init_ConstraintObject_robot_id(::consai_msgs::msg::ConstraintObject & msg)
  : msg_(msg)
  {}
  ::consai_msgs::msg::ConstraintObject robot_id(::consai_msgs::msg::ConstraintObject::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintObject msg_;
};

class Init_ConstraintObject_type
{
public:
  Init_ConstraintObject_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConstraintObject_robot_id type(::consai_msgs::msg::ConstraintObject::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ConstraintObject_robot_id(msg_);
  }

private:
  ::consai_msgs::msg::ConstraintObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::consai_msgs::msg::ConstraintObject>()
{
  return consai_msgs::msg::builder::Init_ConstraintObject_type();
}

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__BUILDER_HPP_
