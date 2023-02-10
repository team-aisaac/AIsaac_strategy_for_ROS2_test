// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ConstraintLine.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p1'
// Member 'p2'
// Member 'p3'
// Member 'p4'
#include "consai_msgs/msg/detail/constraint_xy__struct.h"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__struct.h"

// constants for array fields with an upper bound
// p3
enum
{
  consai_msgs__msg__ConstraintLine__p3__MAX_SIZE = 1
};
// p4
enum
{
  consai_msgs__msg__ConstraintLine__p4__MAX_SIZE = 1
};

// Struct defined in msg/ConstraintLine in the package consai_msgs.
typedef struct consai_msgs__msg__ConstraintLine
{
  consai_msgs__msg__ConstraintXY p1;
  consai_msgs__msg__ConstraintXY p2;
  double distance;
  consai_msgs__msg__ConstraintTheta theta;
  consai_msgs__msg__ConstraintXY__Sequence p3;
  consai_msgs__msg__ConstraintXY__Sequence p4;
} consai_msgs__msg__ConstraintLine;

// Struct for a sequence of consai_msgs__msg__ConstraintLine.
typedef struct consai_msgs__msg__ConstraintLine__Sequence
{
  consai_msgs__msg__ConstraintLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ConstraintLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_H_
