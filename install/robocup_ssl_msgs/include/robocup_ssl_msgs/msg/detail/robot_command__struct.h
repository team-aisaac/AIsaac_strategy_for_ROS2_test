// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wheel1'
// Member 'wheel2'
// Member 'wheel3'
// Member 'wheel4'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// wheel1
enum
{
  robocup_ssl_msgs__msg__RobotCommand__wheel1__MAX_SIZE = 1
};
// wheel2
enum
{
  robocup_ssl_msgs__msg__RobotCommand__wheel2__MAX_SIZE = 1
};
// wheel3
enum
{
  robocup_ssl_msgs__msg__RobotCommand__wheel3__MAX_SIZE = 1
};
// wheel4
enum
{
  robocup_ssl_msgs__msg__RobotCommand__wheel4__MAX_SIZE = 1
};

// Struct defined in msg/RobotCommand in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__RobotCommand
{
  uint32_t id;
  float kickspeedx;
  float kickspeedz;
  float veltangent;
  float velnormal;
  float velangular;
  bool spinner;
  bool wheelsspeed;
  rosidl_runtime_c__float__Sequence wheel1;
  rosidl_runtime_c__float__Sequence wheel2;
  rosidl_runtime_c__float__Sequence wheel3;
  rosidl_runtime_c__float__Sequence wheel4;
} robocup_ssl_msgs__msg__RobotCommand;

// Struct for a sequence of robocup_ssl_msgs__msg__RobotCommand.
typedef struct robocup_ssl_msgs__msg__RobotCommand__Sequence
{
  robocup_ssl_msgs__msg__RobotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__RobotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
