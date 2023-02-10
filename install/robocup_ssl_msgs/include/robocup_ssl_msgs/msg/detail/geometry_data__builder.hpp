// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/geometry_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_GeometryData_models
{
public:
  explicit Init_GeometryData_models(::robocup_ssl_msgs::msg::GeometryData & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::GeometryData models(::robocup_ssl_msgs::msg::GeometryData::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryData msg_;
};

class Init_GeometryData_calib
{
public:
  explicit Init_GeometryData_calib(::robocup_ssl_msgs::msg::GeometryData & msg)
  : msg_(msg)
  {}
  Init_GeometryData_models calib(::robocup_ssl_msgs::msg::GeometryData::_calib_type arg)
  {
    msg_.calib = std::move(arg);
    return Init_GeometryData_models(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryData msg_;
};

class Init_GeometryData_field
{
public:
  Init_GeometryData_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometryData_calib field(::robocup_ssl_msgs::msg::GeometryData::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_GeometryData_calib(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::GeometryData>()
{
  return robocup_ssl_msgs::msg::builder::Init_GeometryData_field();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__BUILDER_HPP_
