// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from consai_msgs:msg/GoalPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__TRAITS_HPP_
#define CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__TRAITS_HPP_

#include "consai_msgs/msg/detail/goal_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "consai_msgs/msg/detail/state2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<consai_msgs::msg::GoalPose>()
{
  return "consai_msgs::msg::GoalPose";
}

template<>
inline const char * name<consai_msgs::msg::GoalPose>()
{
  return "consai_msgs/msg/GoalPose";
}

template<>
struct has_fixed_size<consai_msgs::msg::GoalPose>
  : std::integral_constant<bool, has_fixed_size<consai_msgs::msg::State2D>::value> {};

template<>
struct has_bounded_size<consai_msgs::msg::GoalPose>
  : std::integral_constant<bool, has_bounded_size<consai_msgs::msg::State2D>::value> {};

template<>
struct is_message<consai_msgs::msg::GoalPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__TRAITS_HPP_
