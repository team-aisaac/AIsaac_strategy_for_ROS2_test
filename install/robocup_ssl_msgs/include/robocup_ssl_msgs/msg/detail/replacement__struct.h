// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ball'
#include "robocup_ssl_msgs/msg/detail/ball_replacement__struct.h"
// Member 'robots'
#include "robocup_ssl_msgs/msg/detail/robot_replacement__struct.h"

// constants for array fields with an upper bound
// ball
enum
{
  robocup_ssl_msgs__msg__Replacement__ball__MAX_SIZE = 1
};

// Struct defined in msg/Replacement in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__Replacement
{
  robocup_ssl_msgs__msg__BallReplacement__Sequence ball;
  robocup_ssl_msgs__msg__RobotReplacement__Sequence robots;
} robocup_ssl_msgs__msg__Replacement;

// Struct for a sequence of robocup_ssl_msgs__msg__Replacement.
typedef struct robocup_ssl_msgs__msg__Replacement__Sequence
{
  robocup_ssl_msgs__msg__Replacement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__Replacement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_H_
