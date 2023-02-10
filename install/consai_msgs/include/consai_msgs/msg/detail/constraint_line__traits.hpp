// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:msg/ConstraintLine.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__TRAITS_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__TRAITS_HPP_

#include "consai_msgs/msg/detail/constraint_line__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'p1'
// Member 'p2'
// Member 'p3'
// Member 'p4'
#include "consai_msgs/msg/detail/constraint_xy__traits.hpp"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::msg::ConstraintLine>()
{
  return "consai_msgs::msg::ConstraintLine";
}

template<>
inline const char * name<consai_msgs::msg::ConstraintLine>()
{
  return "consai_msgs/msg/ConstraintLine";
}

template<>
struct has_fixed_size<consai_msgs::msg::ConstraintLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<consai_msgs::msg::ConstraintLine>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::ConstraintTheta>::value && has_bounded_size<consai_msgs::msg::ConstraintXY>::value> {};

template<>
struct is_message<consai_msgs::msg::ConstraintLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__TRAITS_HPP_
