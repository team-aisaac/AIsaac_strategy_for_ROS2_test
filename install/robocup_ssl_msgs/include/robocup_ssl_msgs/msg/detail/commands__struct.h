// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_commands'
#include "robocup_ssl_msgs/msg/detail/robot_command__struct.h"

// Struct defined in msg/Commands in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__Commands
{
  double timestamp;
  bool isteamyellow;
  robocup_ssl_msgs__msg__RobotCommand__Sequence robot_commands;
} robocup_ssl_msgs__msg__Commands;

// Struct for a sequence of robocup_ssl_msgs__msg__Commands.
typedef struct robocup_ssl_msgs__msg__Commands__Sequence
{
  robocup_ssl_msgs__msg__Commands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__Commands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_H_
