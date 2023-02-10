// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__TRAITS_HPP_
#define CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__TRAITS_HPP_

#include "consai_msgs/msg/detail/parsed_referee__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'designated_position'
#include "consai_msgs/msg/detail/state2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::msg::ParsedReferee>()
{
  return "consai_msgs::msg::ParsedReferee";
}

template<>
inline const char * name<consai_msgs::msg::ParsedReferee>()
{
  return "consai_msgs/msg/ParsedReferee";
}

template<>
struct has_fixed_size<consai_msgs::msg::ParsedReferee>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::msg::State2D>::value> {};

template<>
struct has_bounded_size<consai_msgs::msg::ParsedReferee>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::State2D>::value> {};

template<>
struct is_message<consai_msgs::msg::ParsedReferee>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__TRAITS_HPP_
