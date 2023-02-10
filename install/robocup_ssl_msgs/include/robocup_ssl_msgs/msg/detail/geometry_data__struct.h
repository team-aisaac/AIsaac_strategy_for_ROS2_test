// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_H_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field'
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__struct.h"
// Member 'calib'
#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__struct.h"
// Member 'models'
#include "robocup_ssl_msgs/msg/detail/geometry_models__struct.h"

// constants for array fields with an upper bound
// models
enum
{
  robocup_ssl_msgs__msg__GeometryData__models__MAX_SIZE = 1
};

// Struct defined in msg/GeometryData in the package robocup_ssl_msgs.
typedef struct robocup_ssl_msgs__msg__GeometryData
{
  robocup_ssl_msgs__msg__GeometryFieldSize field;
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence calib;
  robocup_ssl_msgs__msg__GeometryModels__Sequence models;
} robocup_ssl_msgs__msg__GeometryData;

// Struct for a sequence of robocup_ssl_msgs__msg__GeometryData.
typedef struct robocup_ssl_msgs__msg__GeometryData__Sequence
{
  robocup_ssl_msgs__msg__GeometryData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocup_ssl_msgs__msg__GeometryData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_H_
