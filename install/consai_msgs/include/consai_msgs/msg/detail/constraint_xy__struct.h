// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value_x'
// Member 'value_y'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'object'
#include "consai_msgs/msg/detail/constraint_object__struct.h"

// constants for array fields with an upper bound
// value_x
enum
{
  consai_msgs__msg__ConstraintXY__value_x__MAX_SIZE = 1
};
// value_y
enum
{
  consai_msgs__msg__ConstraintXY__value_y__MAX_SIZE = 1
};
// object
enum
{
  consai_msgs__msg__ConstraintXY__object__MAX_SIZE = 1
};

// Struct defined in msg/ConstraintXY in the package consai_msgs.
typedef struct consai_msgs__msg__ConstraintXY
{
  bool normalized;
  rosidl_runtime_c__double__Sequence value_x;
  rosidl_runtime_c__double__Sequence value_y;
  consai_msgs__msg__ConstraintObject__Sequence object;
} consai_msgs__msg__ConstraintXY;

// Struct for a sequence of consai_msgs__msg__ConstraintXY.
typedef struct consai_msgs__msg__ConstraintXY__Sequence
{
  consai_msgs__msg__ConstraintXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ConstraintXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_H_
