// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/GoalPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "consai_msgs/msg/detail/state2_d__struct.h"

// Struct defined in msg/GoalPose in the package consai_msgs.
typedef struct consai_msgs__msg__GoalPose
{
  uint32_t robot_id;
  bool team_is_yellow;
  consai_msgs__msg__State2D pose;
} consai_msgs__msg__GoalPose;

// Struct for a sequence of consai_msgs__msg__GoalPose.
typedef struct consai_msgs__msg__GoalPose__Sequence
{
  consai_msgs__msg__GoalPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__GoalPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__GOAL_POSE__STRUCT_H_
