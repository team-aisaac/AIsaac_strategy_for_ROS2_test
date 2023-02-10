// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/geometry_data__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/geometry_data__functions.h"
#include "robocup_ssl_msgs/msg/detail/geometry_data__struct.h"


// Include directives for member types
// Member `field`
#include "robocup_ssl_msgs/msg/geometry_field_size.h"
// Member `field`
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__rosidl_typesupport_introspection_c.h"
// Member `calib`
#include "robocup_ssl_msgs/msg/geometry_camera_calibration.h"
// Member `calib`
#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__rosidl_typesupport_introspection_c.h"
// Member `models`
#include "robocup_ssl_msgs/msg/geometry_models.h"
// Member `models`
#include "robocup_ssl_msgs/msg/detail/geometry_models__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeometryData__rosidl_typesupport_introspection_c__GeometryData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__GeometryData__init(message_memory);
}

void GeometryData__rosidl_typesupport_introspection_c__GeometryData_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__GeometryData__fini(message_memory);
}

size_t GeometryData__rosidl_typesupport_introspection_c__size_function__GeometryCameraCalibration__calib(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * member =
    (const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryData__rosidl_typesupport_introspection_c__get_const_function__GeometryCameraCalibration__calib(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * member =
    (const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryData__rosidl_typesupport_introspection_c__get_function__GeometryCameraCalibration__calib(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * member =
    (robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryData__rosidl_typesupport_introspection_c__resize_function__GeometryCameraCalibration__calib(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * member =
    (robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__fini(member);
  return robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__init(member, size);
}

size_t GeometryData__rosidl_typesupport_introspection_c__size_function__GeometryModels__models(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__GeometryModels__Sequence * member =
    (const robocup_ssl_msgs__msg__GeometryModels__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryData__rosidl_typesupport_introspection_c__get_const_function__GeometryModels__models(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__GeometryModels__Sequence * member =
    (const robocup_ssl_msgs__msg__GeometryModels__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryData__rosidl_typesupport_introspection_c__get_function__GeometryModels__models(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__GeometryModels__Sequence * member =
    (robocup_ssl_msgs__msg__GeometryModels__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryData__rosidl_typesupport_introspection_c__resize_function__GeometryModels__models(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__GeometryModels__Sequence * member =
    (robocup_ssl_msgs__msg__GeometryModels__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__GeometryModels__Sequence__fini(member);
  return robocup_ssl_msgs__msg__GeometryModels__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_member_array[3] = {
  {
    "field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryData, field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calib",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryData, calib),  // bytes offset in struct
    NULL,  // default value
    GeometryData__rosidl_typesupport_introspection_c__size_function__GeometryCameraCalibration__calib,  // size() function pointer
    GeometryData__rosidl_typesupport_introspection_c__get_const_function__GeometryCameraCalibration__calib,  // get_const(index) function pointer
    GeometryData__rosidl_typesupport_introspection_c__get_function__GeometryCameraCalibration__calib,  // get(index) function pointer
    GeometryData__rosidl_typesupport_introspection_c__resize_function__GeometryCameraCalibration__calib  // resize(index) function pointer
  },
  {
    "models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryData, models),  // bytes offset in struct
    NULL,  // default value
    GeometryData__rosidl_typesupport_introspection_c__size_function__GeometryModels__models,  // size() function pointer
    GeometryData__rosidl_typesupport_introspection_c__get_const_function__GeometryModels__models,  // get_const(index) function pointer
    GeometryData__rosidl_typesupport_introspection_c__get_function__GeometryModels__models,  // get(index) function pointer
    GeometryData__rosidl_typesupport_introspection_c__resize_function__GeometryModels__models  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "GeometryData",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs__msg__GeometryData),
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_member_array,  // message members
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_type_support_handle = {
  0,
  &GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryData)() {
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryFieldSize)();
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryCameraCalibration)();
  GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryModels)();
  if (!GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_type_support_handle.typesupport_identifier) {
    GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeometryData__rosidl_typesupport_introspection_c__GeometryData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
