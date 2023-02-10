// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/field_circular_arc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_FieldCircularArc_type
{
public:
  explicit Init_FieldCircularArc_type(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::FieldCircularArc type(::robocup_ssl_msgs::msg::FieldCircularArc::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_thickness
{
public:
  explicit Init_FieldCircularArc_thickness(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_type thickness(::robocup_ssl_msgs::msg::FieldCircularArc::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_FieldCircularArc_type(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_a2
{
public:
  explicit Init_FieldCircularArc_a2(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_thickness a2(::robocup_ssl_msgs::msg::FieldCircularArc::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_FieldCircularArc_thickness(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_a1
{
public:
  explicit Init_FieldCircularArc_a1(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_a2 a1(::robocup_ssl_msgs::msg::FieldCircularArc::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_FieldCircularArc_a2(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_radius
{
public:
  explicit Init_FieldCircularArc_radius(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_a1 radius(::robocup_ssl_msgs::msg::FieldCircularArc::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_FieldCircularArc_a1(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_center
{
public:
  explicit Init_FieldCircularArc_center(::robocup_ssl_msgs::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_radius center(::robocup_ssl_msgs::msg::FieldCircularArc::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_FieldCircularArc_radius(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_name
{
public:
  Init_FieldCircularArc_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldCircularArc_center name(::robocup_ssl_msgs::msg::FieldCircularArc::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FieldCircularArc_center(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::FieldCircularArc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::FieldCircularArc>()
{
  return robocup_ssl_msgs::msg::builder::Init_FieldCircularArc_name();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_
