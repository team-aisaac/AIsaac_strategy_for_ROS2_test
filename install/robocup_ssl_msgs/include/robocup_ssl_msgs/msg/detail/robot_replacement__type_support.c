// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/RobotReplacement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/robot_replacement__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/robot_replacement__functions.h"
#include "robocup_ssl_msgs/msg/detail/robot_replacement__struct.h"


// Include directives for member types
// Member `turnon`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__RobotReplacement__init(message_memory);
}

void RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__RobotReplacement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, dir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellowteam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, yellowteam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turnon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotReplacement, turnon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "RobotReplacement",  // message name
  6,  // number of fields
  sizeof(robocup_ssl_msgs__msg__RobotReplacement),
  RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_member_array,  // message members
  RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_type_support_handle = {
  0,
  &RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotReplacement)() {
  if (!RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_type_support_handle.typesupport_identifier) {
    RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotReplacement__rosidl_typesupport_introspection_c__RobotReplacement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
