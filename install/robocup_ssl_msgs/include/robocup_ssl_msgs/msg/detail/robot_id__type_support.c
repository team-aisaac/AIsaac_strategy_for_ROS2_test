// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/robot_id__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/robot_id__functions.h"
#include "robocup_ssl_msgs/msg/detail/robot_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotId__rosidl_typesupport_introspection_c__RobotId_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__RobotId__init(message_memory);
}

void RobotId__rosidl_typesupport_introspection_c__RobotId_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__RobotId__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotId__rosidl_typesupport_introspection_c__RobotId_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotId, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "team_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotId, team_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotId__rosidl_typesupport_introspection_c__RobotId_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "RobotId",  // message name
  2,  // number of fields
  sizeof(robocup_ssl_msgs__msg__RobotId),
  RobotId__rosidl_typesupport_introspection_c__RobotId_message_member_array,  // message members
  RobotId__rosidl_typesupport_introspection_c__RobotId_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotId__rosidl_typesupport_introspection_c__RobotId_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotId__rosidl_typesupport_introspection_c__RobotId_message_type_support_handle = {
  0,
  &RobotId__rosidl_typesupport_introspection_c__RobotId_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotId)() {
  if (!RobotId__rosidl_typesupport_introspection_c__RobotId_message_type_support_handle.typesupport_identifier) {
    RobotId__rosidl_typesupport_introspection_c__RobotId_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotId__rosidl_typesupport_introspection_c__RobotId_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
