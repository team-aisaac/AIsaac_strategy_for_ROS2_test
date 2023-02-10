// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__TRAITS_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__TRAITS_HPP_

#include "robocup_ssl_msgs/msg/detail/tracked_robot__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__traits.hpp"
// Member 'pos'
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_ssl_msgs::msg::TrackedRobot>()
{
  return "robocup_ssl_msgs::msg::TrackedRobot";
}

template<>
inline const char * name<robocup_ssl_msgs::msg::TrackedRobot>()
{
  return "robocup_ssl_msgs/msg/TrackedRobot";
}

template<>
struct has_fixed_size<robocup_ssl_msgs::msg::TrackedRobot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_ssl_msgs::msg::TrackedRobot>
  : std::integral_constant<bool, has_bounded_size<robocup_ssl_msgs::msg::RobotId>::value && has_bounded_size<robocup_ssl_msgs::msg::Vector2>::value> {};

template<>
struct is_message<robocup_ssl_msgs::msg::TrackedRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__TRAITS_HPP_
