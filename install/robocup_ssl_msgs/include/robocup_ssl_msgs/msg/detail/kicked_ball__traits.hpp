// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__TRAITS_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__TRAITS_HPP_

#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pos'
// Member 'stop_pos'
#include "robocup_ssl_msgs/msg/detail/vector2__traits.hpp"
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector3__traits.hpp"
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_ssl_msgs::msg::KickedBall>()
{
  return "robocup_ssl_msgs::msg::KickedBall";
}

template<>
inline const char * name<robocup_ssl_msgs::msg::KickedBall>()
{
  return "robocup_ssl_msgs/msg/KickedBall";
}

template<>
struct has_fixed_size<robocup_ssl_msgs::msg::KickedBall>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_ssl_msgs::msg::KickedBall>
  : std::integral_constant<bool, has_bounded_size<robocup_ssl_msgs::msg::RobotId>::value && has_bounded_size<robocup_ssl_msgs::msg::Vector2>::value && has_bounded_size<robocup_ssl_msgs::msg::Vector3>::value> {};

template<>
struct is_message<robocup_ssl_msgs::msg::KickedBall>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__TRAITS_HPP_
