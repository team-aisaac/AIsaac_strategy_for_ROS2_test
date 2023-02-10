// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/KickedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_H_

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
// Member 'stop_pos'
#include "robocup_ssl_msgs/msg/detail/vector2__struct.h"
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector3__struct.h"
// Member 'stop_timestamp'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__struct.h"

// constants for array fields with an upper bound
// stop_timestamp
enum
{
  robocup_ssl_msgs__msg__KickedBall__stop_timestamp__MAX_SIZE = 1
};
// stop_pos
enum
{
  robocup_ssl_msgs__msg__KickedBall__stop_pos__MAX_SIZE = 1
};
// robot_id
enum
{
  robocup_ssl_msgs__msg__KickedBall__robot_id__MAX_SIZE = 1
};

// Struct defined in msg/KickedBall in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__KickedBall
{
  robocup_ssl_msgs__msg__Vector2 pos;
  robocup_ssl_msgs__msg__Vector3 vel;
  double start_timestamp;
  rosidl_runtime_c__double__Sequence stop_timestamp;
  robocup_ssl_msgs__msg__Vector2__Sequence stop_pos;
  robocup_ssl_msgs__msg__RobotId__Sequence robot_id;
} robocup_ssl_msgs__msg__KickedBall;

// Struct for a sequence of robocup_ssl_msgs__msg__KickedBall.
typedef struct robocup_ssl_msgs__msg__KickedBall__Sequence
{
  robocup_ssl_msgs__msg__KickedBall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__KickedBall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__KICKED_BALL__STRUCT_H_
