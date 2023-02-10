// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/BallReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'vx'
// Member 'vy'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// x
enum
{
  robocup_ssl_msgs__msg__BallReplacement__x__MAX_SIZE = 1
};
// y
enum
{
  robocup_ssl_msgs__msg__BallReplacement__y__MAX_SIZE = 1
};
// vx
enum
{
  robocup_ssl_msgs__msg__BallReplacement__vx__MAX_SIZE = 1
};
// vy
enum
{
  robocup_ssl_msgs__msg__BallReplacement__vy__MAX_SIZE = 1
};

// Struct defined in msg/BallReplacement in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__BallReplacement
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence vx;
  rosidl_runtime_c__double__Sequence vy;
} robocup_ssl_msgs__msg__BallReplacement;

// Struct for a sequence of robocup_ssl_msgs__msg__BallReplacement.
typedef struct robocup_ssl_msgs__msg__BallReplacement__Sequence
{
  robocup_ssl_msgs__msg__BallReplacement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__BallReplacement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_H_
