// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_

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
// Member 'orientation'
// Member 'height'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// robot_id
enum
{
  robocup_ssl_msgs__msg__DetectionRobot__robot_id__MAX_SIZE = 1
};
// orientation
enum
{
  robocup_ssl_msgs__msg__DetectionRobot__orientation__MAX_SIZE = 1
};
// height
enum
{
  robocup_ssl_msgs__msg__DetectionRobot__height__MAX_SIZE = 1
};

// Struct defined in msg/DetectionRobot in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__DetectionRobot
{
  float confidence;
  rosidl_runtime_c__uint32__Sequence robot_id;
  float x;
  float y;
  rosidl_runtime_c__float__Sequence orientation;
  float pixel_x;
  float pixel_y;
  rosidl_runtime_c__float__Sequence height;
} robocup_ssl_msgs__msg__DetectionRobot;

// Struct for a sequence of robocup_ssl_msgs__msg__DetectionRobot.
typedef struct robocup_ssl_msgs__msg__DetectionRobot__Sequence
{
  robocup_ssl_msgs__msg__DetectionRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__DetectionRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_
