// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/robots_status__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/robots_status__functions.h"
#include "robocup_ssl_msgs/msg/detail/robots_status__struct.h"


// Include directives for member types
// Member `robots_status`
#include "robocup_ssl_msgs/msg/robot_status.h"
// Member `robots_status`
#include "robocup_ssl_msgs/msg/detail/robot_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__RobotsStatus__init(message_memory);
}

void RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__RobotsStatus__fini(message_memory);
}

size_t RobotsStatus__rosidl_typesupport_introspection_c__size_function__RobotStatus__robots_status(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__RobotStatus__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotsStatus__rosidl_typesupport_introspection_c__get_const_function__RobotStatus__robots_status(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__RobotStatus__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotsStatus__rosidl_typesupport_introspection_c__get_function__RobotStatus__robots_status(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__RobotStatus__Sequence * member =
    (robocup_ssl_msgs__msg__RobotStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotsStatus__rosidl_typesupport_introspection_c__resize_function__RobotStatus__robots_status(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__RobotStatus__Sequence * member =
    (robocup_ssl_msgs__msg__RobotStatus__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__RobotStatus__Sequence__fini(member);
  return robocup_ssl_msgs__msg__RobotStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_member_array[1] = {
  {
    "robots_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__RobotsStatus, robots_status),  // bytes offset in struct
    NULL,  // default value
    RobotsStatus__rosidl_typesupport_introspection_c__size_function__RobotStatus__robots_status,  // size() function pointer
    RobotsStatus__rosidl_typesupport_introspection_c__get_const_function__RobotStatus__robots_status,  // get_const(index) function pointer
    RobotsStatus__rosidl_typesupport_introspection_c__get_function__RobotStatus__robots_status,  // get(index) function pointer
    RobotsStatus__rosidl_typesupport_introspection_c__resize_function__RobotStatus__robots_status  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "RobotsStatus",  // message name
  1,  // number of fields
  sizeof(robocup_ssl_msgs__msg__RobotsStatus),
  RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_member_array,  // message members
  RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_type_support_handle = {
  0,
  &RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotsStatus)() {
  RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotStatus)();
  if (!RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_type_support_handle.typesupport_identifier) {
    RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotsStatus__rosidl_typesupport_introspection_c__RobotsStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
