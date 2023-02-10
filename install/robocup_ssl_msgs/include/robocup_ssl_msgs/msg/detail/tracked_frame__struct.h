// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAPABILITY_UNKNOWN'.
enum
{
  robocup_ssl_msgs__msg__TrackedFrame__CAPABILITY_UNKNOWN = 0ul
};

/// Constant 'CAPABILITY_DETECT_FLYING_BALLS'.
enum
{
  robocup_ssl_msgs__msg__TrackedFrame__CAPABILITY_DETECT_FLYING_BALLS = 1ul
};

/// Constant 'CAPABILITY_DETECT_MULTIPLE_BALLS'.
enum
{
  robocup_ssl_msgs__msg__TrackedFrame__CAPABILITY_DETECT_MULTIPLE_BALLS = 2ul
};

/// Constant 'CAPABILITY_DETECT_KICKED_BALLS'.
enum
{
  robocup_ssl_msgs__msg__TrackedFrame__CAPABILITY_DETECT_KICKED_BALLS = 3ul
};

// Include directives for member types
// Member 'balls'
#include "robocup_ssl_msgs/msg/detail/tracked_ball__struct.h"
// Member 'robots'
#include "robocup_ssl_msgs/msg/detail/tracked_robot__struct.h"
// Member 'kicked_ball'
#include "robocup_ssl_msgs/msg/detail/kicked_ball__struct.h"
// Member 'capabilities'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// kicked_ball
enum
{
  robocup_ssl_msgs__msg__TrackedFrame__kicked_ball__MAX_SIZE = 1
};

// Struct defined in msg/TrackedFrame in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__TrackedFrame
{
  uint32_t frame_number;
  double timestamp;
  robocup_ssl_msgs__msg__TrackedBall__Sequence balls;
  robocup_ssl_msgs__msg__TrackedRobot__Sequence robots;
  robocup_ssl_msgs__msg__KickedBall__Sequence kicked_ball;
  rosidl_runtime_c__uint32__Sequence capabilities;
} robocup_ssl_msgs__msg__TrackedFrame;

// Struct for a sequence of robocup_ssl_msgs__msg__TrackedFrame.
typedef struct robocup_ssl_msgs__msg__TrackedFrame__Sequence
{
  robocup_ssl_msgs__msg__TrackedFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__TrackedFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_FRAME__STRUCT_H_
