// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "consai_msgs/msg/detail/constraint_theta__rosidl_typesupport_introspection_c.h"
#include "consai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "consai_msgs/msg/detail/constraint_theta__functions.h"
#include "consai_msgs/msg/detail/constraint_theta__struct.h"


// Include directives for member types
// Member `value_theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `object`
#include "consai_msgs/msg/constraint_object.h"
// Member `object`
#include "consai_msgs/msg/detail/constraint_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  consai_msgs__msg__ConstraintTheta__init(message_memory);
}

void ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_fini_function(void * message_memory)
{
  consai_msgs__msg__ConstraintTheta__fini(message_memory);
}

size_t ConstraintTheta__rosidl_typesupport_introspection_c__size_function__ConstraintObject__object(
  const void * untyped_member)
{
  const consai_msgs__msg__ConstraintObject__Sequence * member =
    (const consai_msgs__msg__ConstraintObject__Sequence *)(untyped_member);
  return member->size;
}

const void * ConstraintTheta__rosidl_typesupport_introspection_c__get_const_function__ConstraintObject__object(
  const void * untyped_member, size_t index)
{
  const consai_msgs__msg__ConstraintObject__Sequence * member =
    (const consai_msgs__msg__ConstraintObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ConstraintTheta__rosidl_typesupport_introspection_c__get_function__ConstraintObject__object(
  void * untyped_member, size_t index)
{
  consai_msgs__msg__ConstraintObject__Sequence * member =
    (consai_msgs__msg__ConstraintObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ConstraintTheta__rosidl_typesupport_introspection_c__resize_function__ConstraintObject__object(
  void * untyped_member, size_t size)
{
  consai_msgs__msg__ConstraintObject__Sequence * member =
    (consai_msgs__msg__ConstraintObject__Sequence *)(untyped_member);
  consai_msgs__msg__ConstraintObject__Sequence__fini(member);
  return consai_msgs__msg__ConstraintObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_member_array[3] = {
  {
    "value_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintTheta, value_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintTheta, object),  // bytes offset in struct
    NULL,  // default value
    ConstraintTheta__rosidl_typesupport_introspection_c__size_function__ConstraintObject__object,  // size() function pointer
    ConstraintTheta__rosidl_typesupport_introspection_c__get_const_function__ConstraintObject__object,  // get_const(index) function pointer
    ConstraintTheta__rosidl_typesupport_introspection_c__get_function__ConstraintObject__object,  // get(index) function pointer
    ConstraintTheta__rosidl_typesupport_introspection_c__resize_function__ConstraintObject__object  // resize(index) function pointer
  },
  {
    "param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(consai_msgs__msg__ConstraintTheta, param),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_members = {
  "consai_msgs__msg",  // message namespace
  "ConstraintTheta",  // message name
  3,  // number of fields
  sizeof(consai_msgs__msg__ConstraintTheta),
  ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_member_array,  // message members
  ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_init_function,  // function to initialize message memory (memory has to be allocated)
  ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_type_support_handle = {
  0,
  &ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_consai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintTheta)() {
  ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, consai_msgs, msg, ConstraintObject)();
  if (!ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_type_support_handle.typesupport_identifier) {
    ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConstraintTheta__rosidl_typesupport_introspection_c__ConstraintTheta_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
