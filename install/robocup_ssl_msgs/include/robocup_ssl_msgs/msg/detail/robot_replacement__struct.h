// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/RobotReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turnon'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// turnon
enum
{
  robocup_ssl_msgs__msg__RobotReplacement__turnon__MAX_SIZE = 1
};

// Struct defined in msg/RobotReplacement in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__RobotReplacement
{
  double x;
  double y;
  double dir;
  uint32_t id;
  bool yellowteam;
  rosidl_runtime_c__boolean__Sequence turnon;
} robocup_ssl_msgs__msg__RobotReplacement;

// Struct for a sequence of robocup_ssl_msgs__msg__RobotReplacement.
typedef struct robocup_ssl_msgs__msg__RobotReplacement__Sequence
{
  robocup_ssl_msgs__msg__RobotReplacement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__RobotReplacement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_REPLACEMENT__STRUCT_H_
