// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__TRAITS_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__TRAITS_HPP_

#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object'
#include "consai_msgs/msg/detail/constraint_object__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::msg::ConstraintXY>()
{
  return "consai_msgs::msg::ConstraintXY";
}

template<>
inline const char * name<consai_msgs::msg::ConstraintXY>()
{
  return "consai_msgs/msg/ConstraintXY";
}

template<>
struct has_fixed_size<consai_msgs::msg::ConstraintXY>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<consai_msgs::msg::ConstraintXY>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::ConstraintObject>::value> {};

template<>
struct is_message<consai_msgs::msg::ConstraintXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__TRAITS_HPP_
