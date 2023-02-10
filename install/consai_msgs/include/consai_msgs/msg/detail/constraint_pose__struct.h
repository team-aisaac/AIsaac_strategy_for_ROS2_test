// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xy'
#include "consai_msgs/msg/detail/constraint_xy__struct.h"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__struct.h"
// Member 'offset'
#include "consai_msgs/msg/detail/state2_d__struct.h"

// Struct defined in msg/ConstraintPose in the package consai_msgs.
typedef struct consai_msgs__msg__ConstraintPose
{
  consai_msgs__msg__ConstraintXY xy;
  consai_msgs__msg__ConstraintTheta theta;
  consai_msgs__msg__State2D offset;
} consai_msgs__msg__ConstraintPose;

// Struct for a sequence of consai_msgs__msg__ConstraintPose.
typedef struct consai_msgs__msg__ConstraintPose__Sequence
{
  consai_msgs__msg__ConstraintPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ConstraintPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_H_
