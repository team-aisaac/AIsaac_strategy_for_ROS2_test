// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robots_status'
#include "robocup_ssl_msgs/msg/detail/robot_status__struct.h"

// Struct defined in msg/RobotsStatus in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__RobotsStatus
{
  robocup_ssl_msgs__msg__RobotStatus__Sequence robots_status;
} robocup_ssl_msgs__msg__RobotsStatus;

// Struct for a sequence of robocup_ssl_msgs__msg__RobotsStatus.
typedef struct robocup_ssl_msgs__msg__RobotsStatus__Sequence
{
  robocup_ssl_msgs__msg__RobotsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__RobotsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_H_
