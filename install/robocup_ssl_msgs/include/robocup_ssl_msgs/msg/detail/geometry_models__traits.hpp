// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__TRAITS_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__TRAITS_HPP_

#include "robocup_ssl_msgs/msg/detail/geometry_models__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'straight_two_phase'
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__traits.hpp"
// Member 'chip_fixed_loss'
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_ssl_msgs::msg::GeometryModels>()
{
  return "robocup_ssl_msgs::msg::GeometryModels";
}

template<>
inline const char * name<robocup_ssl_msgs::msg::GeometryModels>()
{
  return "robocup_ssl_msgs/msg/GeometryModels";
}

template<>
struct has_fixed_size<robocup_ssl_msgs::msg::GeometryModels>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_ssl_msgs::msg::GeometryModels>
  : std::integral_constant<bool, has_bounded_size<robocup_ssl_msgs::msg::BallModelChipFixedLoss>::value && has_bounded_size<robocup_ssl_msgs::msg::BallModelStraightTwoPhase>::value> {};

template<>
struct is_message<robocup_ssl_msgs::msg::GeometryModels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__TRAITS_HPP_
