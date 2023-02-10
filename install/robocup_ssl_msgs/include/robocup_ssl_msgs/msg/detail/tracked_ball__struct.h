// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/TrackedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pos'
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector3__struct.h"
// Member 'visibility'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// vel
enum
{
  robocup_ssl_msgs__msg__TrackedBall__vel__MAX_SIZE = 1
};
// visibility
enum
{
  robocup_ssl_msgs__msg__TrackedBall__visibility__MAX_SIZE = 1
};

// Struct defined in msg/TrackedBall in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__TrackedBall
{
  robocup_ssl_msgs__msg__Vector3 pos;
  robocup_ssl_msgs__msg__Vector3__Sequence vel;
  rosidl_runtime_c__float__Sequence visibility;
} robocup_ssl_msgs__msg__TrackedBall;

// Struct for a sequence of robocup_ssl_msgs__msg__TrackedBall.
typedef struct robocup_ssl_msgs__msg__TrackedBall__Sequence
{
  robocup_ssl_msgs__msg__TrackedBall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__TrackedBall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_H_
