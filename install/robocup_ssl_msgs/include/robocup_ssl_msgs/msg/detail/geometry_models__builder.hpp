// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/geometry_models__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_GeometryModels_chip_fixed_loss
{
public:
  explicit Init_GeometryModels_chip_fixed_loss(::robocup_ssl_msgs::msg::GeometryModels & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::GeometryModels chip_fixed_loss(::robocup_ssl_msgs::msg::GeometryModels::_chip_fixed_loss_type arg)
  {
    msg_.chip_fixed_loss = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryModels msg_;
};

class Init_GeometryModels_straight_two_phase
{
public:
  Init_GeometryModels_straight_two_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometryModels_chip_fixed_loss straight_two_phase(::robocup_ssl_msgs::msg::GeometryModels::_straight_two_phase_type arg)
  {
    msg_.straight_two_phase = std::move(arg);
    return Init_GeometryModels_chip_fixed_loss(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::GeometryModels>()
{
  return robocup_ssl_msgs::msg::builder::Init_GeometryModels_straight_two_phase();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__BUILDER_HPP_
