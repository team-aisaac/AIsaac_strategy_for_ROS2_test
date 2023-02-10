// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'balls'
#include "robocup_ssl_msgs/msg/detail/detection_ball__struct.h"
// Member 'robots_yellow'
// Member 'robots_blue'
#include "robocup_ssl_msgs/msg/detail/detection_robot__struct.h"

// Struct defined in msg/DetectionFrame in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__DetectionFrame
{
  uint32_t frame_number;
  double t_capture;
  double t_sent;
  uint32_t camera_id;
  robocup_ssl_msgs__msg__DetectionBall__Sequence balls;
  robocup_ssl_msgs__msg__DetectionRobot__Sequence robots_yellow;
  robocup_ssl_msgs__msg__DetectionRobot__Sequence robots_blue;
} robocup_ssl_msgs__msg__DetectionFrame;

// Struct for a sequence of robocup_ssl_msgs__msg__DetectionFrame.
typedef struct robocup_ssl_msgs__msg__DetectionFrame__Sequence
{
  robocup_ssl_msgs__msg__DetectionFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__DetectionFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_
