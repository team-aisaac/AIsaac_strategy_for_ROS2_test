// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__TRAITS_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__TRAITS_HPP_

#include "robocup_ssl_msgs/msg/detail/robots_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robocup_ssl_msgs::msg::RobotsStatus>()
{
  return "robocup_ssl_msgs::msg::RobotsStatus";
}

template<>
inline const char * name<robocup_ssl_msgs::msg::RobotsStatus>()
{
  return "robocup_ssl_msgs/msg/RobotsStatus";
}

template<>
struct has_fixed_size<robocup_ssl_msgs::msg::RobotsStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocup_ssl_msgs::msg::RobotsStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robocup_ssl_msgs::msg::RobotsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__TRAITS_HPP_
