// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/TrackedRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
#include "robocup_ssl_msgs/msg/detail/robot_id__struct.h"
// Member 'pos'
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector2__struct.h"
// Member 'vel_angular'
// Member 'visibility'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// vel
enum
{
  robocup_ssl_msgs__msg__TrackedRobot__vel__MAX_SIZE = 1
};
// vel_angular
enum
{
  robocup_ssl_msgs__msg__TrackedRobot__vel_angular__MAX_SIZE = 1
};
// visibility
enum
{
  robocup_ssl_msgs__msg__TrackedRobot__visibility__MAX_SIZE = 1
};

// Struct defined in msg/TrackedRobot in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__TrackedRobot
{
  robocup_ssl_msgs__msg__RobotId robot_id;
  robocup_ssl_msgs__msg__Vector2 pos;
  float orientation;
  robocup_ssl_msgs__msg__Vector2__Sequence vel;
  rosidl_runtime_c__float__Sequence vel_angular;
  rosidl_runtime_c__float__Sequence visibility;
} robocup_ssl_msgs__msg__TrackedRobot;

// Struct for a sequence of robocup_ssl_msgs__msg__TrackedRobot.
typedef struct robocup_ssl_msgs__msg__TrackedRobot__Sequence
{
  robocup_ssl_msgs__msg__TrackedRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__TrackedRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_ROBOT__STRUCT_H_
