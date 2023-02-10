// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/field_line_segment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_FieldLineSegment_type
{
public:
  explicit Init_FieldLineSegment_type(::robocup_ssl_msgs::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::FieldLineSegment type(::robocup_ssl_msgs::msg::FieldLineSegment::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_thickness
{
public:
  explicit Init_FieldLineSegment_thickness(::robocup_ssl_msgs::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_type thickness(::robocup_ssl_msgs::msg::FieldLineSegment::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_FieldLineSegment_type(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p2
{
public:
  explicit Init_FieldLineSegment_p2(::robocup_ssl_msgs::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_thickness p2(::robocup_ssl_msgs::msg::FieldLineSegment::_p2_type arg)
  {
    msg_.p2 = std::move(arg);
    return Init_FieldLineSegment_thickness(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p1
{
public:
  explicit Init_FieldLineSegment_p1(::robocup_ssl_msgs::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_p2 p1(::robocup_ssl_msgs::msg::FieldLineSegment::_p1_type arg)
  {
    msg_.p1 = std::move(arg);
    return Init_FieldLineSegment_p2(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_name
{
public:
  Init_FieldLineSegment_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldLineSegment_p1 name(::robocup_ssl_msgs::msg::FieldLineSegment::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FieldLineSegment_p1(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldLineSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::FieldLineSegment>()
{
  return robocup_ssl_msgs::msg::builder::Init_FieldLineSegment_name();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_
