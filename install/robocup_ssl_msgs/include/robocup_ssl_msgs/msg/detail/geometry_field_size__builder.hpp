// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/geometry_field_size__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_GeometryFieldSize_penalty_area_width
{
public:
  explicit Init_GeometryFieldSize_penalty_area_width(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::GeometryFieldSize penalty_area_width(::robocup_ssl_msgs::msg::GeometryFieldSize::_penalty_area_width_type arg)
  {
    msg_.penalty_area_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_penalty_area_depth
{
public:
  explicit Init_GeometryFieldSize_penalty_area_depth(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_penalty_area_width penalty_area_depth(::robocup_ssl_msgs::msg::GeometryFieldSize::_penalty_area_depth_type arg)
  {
    msg_.penalty_area_depth = std::move(arg);
    return Init_GeometryFieldSize_penalty_area_width(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_field_arcs
{
public:
  explicit Init_GeometryFieldSize_field_arcs(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_penalty_area_depth field_arcs(::robocup_ssl_msgs::msg::GeometryFieldSize::_field_arcs_type arg)
  {
    msg_.field_arcs = std::move(arg);
    return Init_GeometryFieldSize_penalty_area_depth(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_field_lines
{
public:
  explicit Init_GeometryFieldSize_field_lines(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_field_arcs field_lines(::robocup_ssl_msgs::msg::GeometryFieldSize::_field_lines_type arg)
  {
    msg_.field_lines = std::move(arg);
    return Init_GeometryFieldSize_field_arcs(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_boundary_width
{
public:
  explicit Init_GeometryFieldSize_boundary_width(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_field_lines boundary_width(::robocup_ssl_msgs::msg::GeometryFieldSize::_boundary_width_type arg)
  {
    msg_.boundary_width = std::move(arg);
    return Init_GeometryFieldSize_field_lines(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_goal_depth
{
public:
  explicit Init_GeometryFieldSize_goal_depth(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_boundary_width goal_depth(::robocup_ssl_msgs::msg::GeometryFieldSize::_goal_depth_type arg)
  {
    msg_.goal_depth = std::move(arg);
    return Init_GeometryFieldSize_boundary_width(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_goal_width
{
public:
  explicit Init_GeometryFieldSize_goal_width(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_goal_depth goal_width(::robocup_ssl_msgs::msg::GeometryFieldSize::_goal_width_type arg)
  {
    msg_.goal_width = std::move(arg);
    return Init_GeometryFieldSize_goal_depth(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_field_width
{
public:
  explicit Init_GeometryFieldSize_field_width(::robocup_ssl_msgs::msg::GeometryFieldSize & msg)
  : msg_(msg)
  {}
  Init_GeometryFieldSize_goal_width field_width(::robocup_ssl_msgs::msg::GeometryFieldSize::_field_width_type arg)
  {
    msg_.field_width = std::move(arg);
    return Init_GeometryFieldSize_goal_width(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

class Init_GeometryFieldSize_field_length
{
public:
  Init_GeometryFieldSize_field_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometryFieldSize_field_width field_length(::robocup_ssl_msgs::msg::GeometryFieldSize::_field_length_type arg)
  {
    msg_.field_length = std::move(arg);
    return Init_GeometryFieldSize_field_width(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryFieldSize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::GeometryFieldSize>()
{
  return robocup_ssl_msgs::msg::builder::Init_GeometryFieldSize_field_length();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__BUILDER_HPP_
