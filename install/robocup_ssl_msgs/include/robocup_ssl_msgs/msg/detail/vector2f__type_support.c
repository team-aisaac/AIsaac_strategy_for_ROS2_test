// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/Vector2f.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/vector2f__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/vector2f__functions.h"
#include "robocup_ssl_msgs/msg/detail/vector2f__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Vector2f__rosidl_typesupport_introspection_c__Vector2f_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__Vector2f__init(message_memory);
}

void Vector2f__rosidl_typesupport_introspection_c__Vector2f_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__Vector2f__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Vector2f, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Vector2f, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "Vector2f",  // message name
  2,  // number of fields
  sizeof(robocup_ssl_msgs__msg__Vector2f),
  Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_member_array,  // message members
  Vector2f__rosidl_typesupport_introspection_c__Vector2f_init_function,  // function to initialize message memory (memory has to be allocated)
  Vector2f__rosidl_typesupport_introspection_c__Vector2f_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_type_support_handle = {
  0,
  &Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Vector2f)() {
  if (!Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_type_support_handle.typesupport_identifier) {
    Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Vector2f__rosidl_typesupport_introspection_c__Vector2f_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
