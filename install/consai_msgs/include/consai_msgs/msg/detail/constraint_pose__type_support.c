// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai_msgs/msg/detail/constraint_pose__rosidl_typesupport_introspection_c.h"
#include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai_msgs/msg/detail/constraint_pose__functions.h"
#include "consai_msgs/msg/detail/constraint_pose__struct.h"


// Include directives for member types
// Member `xy`
#include "consai_msgs/msg/constraint_xy.h"
// Member `xy`
#include "consai_msgs/msg/detail/constraint_xy__rosidl_typesupport_introspection_c.h"
// Member `theta`
#include "consai_msgs/msg/constraint_theta.h"
// Member `theta`
#include "consai_msgs/msg/detail/constraint_theta__rosidl_typesupport_introspection_c.h"
// Member `offset`
#include "consai_msgs/msg/state2_d.h"
// Member `offset`
#include "consai_msgs/msg/detail/state2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__msg__ConstraintPose__init(message_memory);
}

void ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_fini_function(void * message_memory)
{
  consai_msgs__msg__ConstraintPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_member_array[3] = {
  {
    "xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintPose, xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintPose, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintPose, offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_members = {
  "consai_msgs__msg",  // message namespace
  "ConstraintPose",  // message name
  3,  // number of fields
  sizeof(consai_msgs__msg__ConstraintPose),
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_member_array,  // message members
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_type_support_handle = {
  0,
  &ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintPose)() {
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintXY)();
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintTheta)();
  ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, State2D)();
  if (!ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_type_support_handle.typesupport_identifier) {
    ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConstraintPose__rosidl_typesupport_introspection_c__ConstraintPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
