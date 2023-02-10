// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/Commands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/commands__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/commands__functions.h"
#include "robocup_ssl_msgs/msg/detail/commands__struct.h"


// Include directives for member types
// Member `robot_commands`
#include "robocup_ssl_msgs/msg/robot_command.h"
// Member `robot_commands`
#include "robocup_ssl_msgs/msg/detail/robot_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Commands__rosidl_typesupport_introspection_c__Commands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__Commands__init(message_memory);
}

void Commands__rosidl_typesupport_introspection_c__Commands_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__Commands__fini(message_memory);
}

size_t Commands__rosidl_typesupport_introspection_c__size_function__RobotCommand__robot_commands(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__RobotCommand__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * Commands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__robot_commands(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__RobotCommand__Sequence * member =
    (const robocup_ssl_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Commands__rosidl_typesupport_introspection_c__get_function__RobotCommand__robot_commands(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__RobotCommand__Sequence * member =
    (robocup_ssl_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Commands__rosidl_typesupport_introspection_c__resize_function__RobotCommand__robot_commands(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__RobotCommand__Sequence * member =
    (robocup_ssl_msgs__msg__RobotCommand__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__RobotCommand__Sequence__fini(member);
  return robocup_ssl_msgs__msg__RobotCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Commands__rosidl_typesupport_introspection_c__Commands_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Commands, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "isteamyellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Commands, isteamyellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__Commands, robot_commands),  // bytes offset in struct
    NULL,  // default value
    Commands__rosidl_typesupport_introspection_c__size_function__RobotCommand__robot_commands,  // size() function pointer
    Commands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__robot_commands,  // get_const(index) function pointer
    Commands__rosidl_typesupport_introspection_c__get_function__RobotCommand__robot_commands,  // get(index) function pointer
    Commands__rosidl_typesupport_introspection_c__resize_function__RobotCommand__robot_commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Commands__rosidl_typesupport_introspection_c__Commands_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "Commands",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs__msg__Commands),
  Commands__rosidl_typesupport_introspection_c__Commands_message_member_array,  // message members
  Commands__rosidl_typesupport_introspection_c__Commands_init_function,  // function to initialize message memory (memory has to be allocated)
  Commands__rosidl_typesupport_introspection_c__Commands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle = {
  0,
  &Commands__rosidl_typesupport_introspection_c__Commands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, Commands)() {
  Commands__rosidl_typesupport_introspection_c__Commands_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, RobotCommand)();
  if (!Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle.typesupport_identifier) {
    Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
