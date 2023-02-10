// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from consai_msgs:msg/State2D.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__STATE2_D__STRUCT_H_
#define CONSAI_MSGS__MSG__DETAIL__STATE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/State2D in the package consai_msgs.
typedef struct consai_msgs__msg__State2D
{
  double x;
  double y;
  double theta;
} consai_msgs__msg__State2D;

// Struct for a sequence of consai_msgs__msg__State2D.
typedef struct consai_msgs__msg__State2D__Sequence
{
  consai_msgs__msg__State2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} consai_msgs__msg__State2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONSAI_MSGS__MSG__DETAIL__STATE2_D__STRUCT_H_
