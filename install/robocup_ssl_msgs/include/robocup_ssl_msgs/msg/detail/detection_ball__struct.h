// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/DetectionBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'area'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// area
enum
{
  robocup_ssl_msgs__msg__DetectionBall__area__MAX_SIZE = 1
};
// z
enum
{
  robocup_ssl_msgs__msg__DetectionBall__z__MAX_SIZE = 1
};

// Struct defined in msg/DetectionBall in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__DetectionBall
{
  float confidence;
  rosidl_runtime_c__uint32__Sequence area;
  float x;
  float y;
  rosidl_runtime_c__float__Sequence z;
  float pixel_x;
  float pixel_y;
} robocup_ssl_msgs__msg__DetectionBall;

// Struct for a sequence of robocup_ssl_msgs__msg__DetectionBall.
typedef struct robocup_ssl_msgs__msg__DetectionBall__Sequence
{
  robocup_ssl_msgs__msg__DetectionBall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__DetectionBall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_BALL__STRUCT_H_
