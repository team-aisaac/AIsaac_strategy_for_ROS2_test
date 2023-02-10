// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/BallModelStraightTwoPhase.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__functions.h"
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__init(message_memory);
}

void BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_member_array[3] = {
  {
    "acc_slide",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase, acc_slide),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase, acc_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k_switch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase, k_switch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "BallModelStraightTwoPhase",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs__msg__BallModelStraightTwoPhase),
  BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_member_array,  // message members
  BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_init_function,  // function to initialize message memory (memory has to be allocated)
  BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_type_support_handle = {
  0,
  &BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallModelStraightTwoPhase)() {
  if (!BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_type_support_handle.typesupport_identifier) {
    BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BallModelStraightTwoPhase__rosidl_typesupport_introspection_c__BallModelStraightTwoPhase_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
