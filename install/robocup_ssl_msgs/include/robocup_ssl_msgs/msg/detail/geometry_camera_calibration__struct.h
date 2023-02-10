// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/GeometryCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'derived_camera_world_tx'
// Member 'derived_camera_world_ty'
// Member 'derived_camera_world_tz'
// Member 'pixel_image_width'
// Member 'pixel_image_height'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// derived_camera_world_tx
enum
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__derived_camera_world_tx__MAX_SIZE = 1
};
// derived_camera_world_ty
enum
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__derived_camera_world_ty__MAX_SIZE = 1
};
// derived_camera_world_tz
enum
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__derived_camera_world_tz__MAX_SIZE = 1
};
// pixel_image_width
enum
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__pixel_image_width__MAX_SIZE = 1
};
// pixel_image_height
enum
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__pixel_image_height__MAX_SIZE = 1
};

// Struct defined in msg/GeometryCameraCalibration in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__GeometryCameraCalibration
{
  uint32_t camera_id;
  float focal_length;
  float principal_point_x;
  float principal_point_y;
  float distortion;
  float q0;
  float q1;
  float q2;
  float q3;
  float tx;
  float ty;
  float tz;
  rosidl_runtime_c__float__Sequence derived_camera_world_tx;
  rosidl_runtime_c__float__Sequence derived_camera_world_ty;
  rosidl_runtime_c__float__Sequence derived_camera_world_tz;
  rosidl_runtime_c__uint32__Sequence pixel_image_width;
  rosidl_runtime_c__uint32__Sequence pixel_image_height;
} robocup_ssl_msgs__msg__GeometryCameraCalibration;

// Struct for a sequence of robocup_ssl_msgs__msg__GeometryCameraCalibration.
typedef struct robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_H_
