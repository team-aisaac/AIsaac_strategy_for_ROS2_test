// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  consai_msgs__msg__ConstraintObject__UNKNOWN = 0ul
};

/// Constant 'BALL'.
enum
{
  consai_msgs__msg__ConstraintObject__BALL = 1ul
};

/// Constant 'BLUE_ROBOT'.
enum
{
  consai_msgs__msg__ConstraintObject__BLUE_ROBOT = 2ul
};

/// Constant 'YELLOW_ROBOT'.
enum
{
  consai_msgs__msg__ConstraintObject__YELLOW_ROBOT = 3ul
};

/// Constant 'ROBOT_ID_UNKNOWN'.
enum
{
  consai_msgs__msg__ConstraintObject__ROBOT_ID_UNKNOWN = 99ul
};

// Struct defined in msg/ConstraintObject in the package consai_msgs.
typedef struct consai_msgs__msg__ConstraintObject
{
  uint32_t type;
  uint32_t robot_id;
} consai_msgs__msg__ConstraintObject;

// Struct for a sequence of consai_msgs__msg__ConstraintObject.
typedef struct consai_msgs__msg__ConstraintObject__Sequence
{
  consai_msgs__msg__ConstraintObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__ConstraintObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_H_
