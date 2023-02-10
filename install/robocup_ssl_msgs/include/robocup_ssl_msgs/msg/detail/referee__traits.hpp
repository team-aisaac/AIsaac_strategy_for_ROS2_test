// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__TRAITS_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__TRAITS_HPP_

#include "robocup_ssl_msgs/msg/detail/referee__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'yellow'
// Member 'blue'
#include "robocup_ssl_msgs/msg/detail/team_info__traits.hpp"
// Member 'designated_position'
#include "robocup_ssl_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_ssl_msgs::msg::Referee>()
{
  return "robocup_ssl_msgs::msg::Referee";
}

template<>
inline const char * name<robocup_ssl_msgs::msg::Referee>()
{
  return "robocup_ssl_msgs/msg/Referee";
}

template<>
struct has_fixed_size<robocup_ssl_msgs::msg::Referee>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_ssl_msgs::msg::Referee>
  : std::integral_constant<bool, has_bounded_size<robocup_ssl_msgs::msg::Point>::value && has_bounded_size<robocup_ssl_msgs::msg::TeamInfo>::value> {};

template<>
struct is_message<robocup_ssl_msgs::msg::Referee>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__TRAITS_HPP_
