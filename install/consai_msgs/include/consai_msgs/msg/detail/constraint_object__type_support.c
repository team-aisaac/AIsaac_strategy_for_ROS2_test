// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai_msgs/msg/detail/constraint_object__rosidl_typesupport_introspection_c.h"
#include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai_msgs/msg/detail/constraint_object__functions.h"
#include "consai_msgs/msg/detail/constraint_object__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__msg__ConstraintObject__init(message_memory);
}

void ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_fini_function(void * message_memory)
{
  consai_msgs__msg__ConstraintObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintObject, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintObject, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_members = {
  "consai_msgs__msg",  // message namespace
  "ConstraintObject",  // message name
  2,  // number of fields
  sizeof(consai_msgs__msg__ConstraintObject),
  ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_member_array,  // message members
  ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_type_support_handle = {
  0,
  &ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintObject)() {
  if (!ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_type_support_handle.typesupport_identifier) {
    ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConstraintObject__rosidl_typesupport_introspection_c__ConstraintObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
