// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/BallModelChipFixedLoss.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__functions.h"
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__init(message_memory);
}

void BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_member_array[3] = {
  {
    "damping_xy_first_hop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelChipFixedLoss, damping_xy_first_hop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_xy_other_hops",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelChipFixedLoss, damping_xy_other_hops),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelChipFixedLoss, damping_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "BallModelChipFixedLoss",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs__msg__BallModelChipFixedLoss),
  BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_member_array,  // message members
  BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_init_function,  // function to initialize message memory (memory has to be allocated)
  BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_type_support_handle = {
  0,
  &BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallModelChipFixedLoss)() {
  if (!BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_type_support_handle.typesupport_identifier) {
    BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BallModelChipFixedLoss__rosidl_typesupport_introspection_c__BallModelChipFixedLoss_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
