// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__TRAITS_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__TRAITS_HPP_

#include "consai_msgs/msg/detail/constraint_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'xy'
#include "consai_msgs/msg/detail/constraint_xy__traits.hpp"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__traits.hpp"
// Member 'offset'
#include "consai_msgs/msg/detail/state2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::msg::ConstraintPose>()
{
  return "consai_msgs::msg::ConstraintPose";
}

template<>
inline const char * name<consai_msgs::msg::ConstraintPose>()
{
  return "consai_msgs/msg/ConstraintPose";
}

template<>
struct has_fixed_size<consai_msgs::msg::ConstraintPose>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::msg::ConstraintTheta>::value && has_fixed_size<consai_msgs::msg::ConstraintXY>::value && has_fixed_size<consai_msgs::msg::State2D>::value> {};

template<>
struct has_bounded_size<consai_msgs::msg::ConstraintPose>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::ConstraintTheta>::value && has_bounded_size<consai_msgs::msg::ConstraintXY>::value && has_bounded_size<consai_msgs::msg::State2D>::value> {};

template<>
struct is_message<consai_msgs::msg::ConstraintPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__TRAITS_HPP_
