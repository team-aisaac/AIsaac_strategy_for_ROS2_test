// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TEAM_COLOR_UNKNOWN'.
enum
{
  robocup_ssl_msgs__msg__RobotId__TEAM_COLOR_UNKNOWN = 0ul
};

/// Constant 'TEAM_COLOR_YELLOW'.
enum
{
  robocup_ssl_msgs__msg__RobotId__TEAM_COLOR_YELLOW = 1ul
};

/// Constant 'TEAM_COLOR_BLUE'.
enum
{
  robocup_ssl_msgs__msg__RobotId__TEAM_COLOR_BLUE = 2ul
};

// Struct defined in msg/RobotId in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__RobotId
{
  uint32_t id;
  uint32_t team_color;
} robocup_ssl_msgs__msg__RobotId;

// Struct for a sequence of robocup_ssl_msgs__msg__RobotId.
typedef struct robocup_ssl_msgs__msg__RobotId__Sequence
{
  robocup_ssl_msgs__msg__RobotId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__RobotId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_H_
