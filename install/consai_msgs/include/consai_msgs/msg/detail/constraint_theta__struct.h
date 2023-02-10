// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PARAM_UNKNOWN'.
enum
{
  consai_msgs__msg__ConstraintTheta__PARAM_UNKNOWN = 0ul
};

/// Constant 'PARAM_THETA'.
enum
{
  consai_msgs__msg__ConstraintTheta__PARAM_THETA = 1ul
};

/// Constant 'PARAM_LOOK_TO'.
enum
{
  consai_msgs__msg__ConstraintTheta__PARAM_LOOK_TO = 2ul
};

/// Constant 'PARAM_LOOK_FROM'.
enum
{
  consai_msgs__msg__ConstraintTheta__PARAM_LOOK_FROM = 3ul
};

// Include directives for member types
// Member 'value_theta'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'object'
#include "consai_msgs/msg/detail/constraint_object__struct.h"

// constants for array fields with an upper bound
// value_theta
enum
{
  consai_msgs__msg__ConstraintTheta__value_theta__MAX_SIZE = 1
};
// object
enum
{
  consai_msgs__msg__ConstraintTheta__object__MAX_SIZE = 1
};

// Struct defined in msg/ConstraintTheta in the package consai_msgs.
typedef struct consai_msgs__msg__ConstraintTheta
{
  rosidl_runtime_c__double__Sequence value_theta;
  consai_msgs__msg__ConstraintObject__Sequence object;
  uint32_t param;
} consai_msgs__msg__ConstraintTheta;

// Struct for a sequence of consai_msgs__msg__ConstraintTheta.
typedef struct consai_msgs__msg__ConstraintTheta__Sequence
{
  consai_msgs__msg__ConstraintTheta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ConstraintTheta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_H_
