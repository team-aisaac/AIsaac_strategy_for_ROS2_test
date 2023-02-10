// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__functions.h"
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__struct.h"


// Include directives for member types
// Member `field_lines`
#include "robocup_ssl_msgs/msg/field_line_segment.h"
// Member `field_lines`
#include "robocup_ssl_msgs/msg/detail/field_line_segment__rosidl_typesupport_introspection_c.h"
// Member `field_arcs`
#include "robocup_ssl_msgs/msg/field_circular_arc.h"
// Member `field_arcs`
#include "robocup_ssl_msgs/msg/detail/field_circular_arc__rosidl_typesupport_introspection_c.h"
// Member `penalty_area_depth`
// Member `penalty_area_width`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__GeometryFieldSize__init(message_memory);
}

void GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__GeometryFieldSize__fini(message_memory);
}

size_t GeometryFieldSize__rosidl_typesupport_introspection_c__size_function__FieldLineSegment__field_lines(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__FieldLineSegment__Sequence * member =
    (const robocup_ssl_msgs__msg__FieldLineSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryFieldSize__rosidl_typesupport_introspection_c__get_const_function__FieldLineSegment__field_lines(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__FieldLineSegment__Sequence * member =
    (const robocup_ssl_msgs__msg__FieldLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryFieldSize__rosidl_typesupport_introspection_c__get_function__FieldLineSegment__field_lines(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence * member =
    (robocup_ssl_msgs__msg__FieldLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryFieldSize__rosidl_typesupport_introspection_c__resize_function__FieldLineSegment__field_lines(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence * member =
    (robocup_ssl_msgs__msg__FieldLineSegment__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__FieldLineSegment__Sequence__fini(member);
  return robocup_ssl_msgs__msg__FieldLineSegment__Sequence__init(member, size);
}

size_t GeometryFieldSize__rosidl_typesupport_introspection_c__size_function__FieldCircularArc__field_arcs(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__FieldCircularArc__Sequence * member =
    (const robocup_ssl_msgs__msg__FieldCircularArc__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryFieldSize__rosidl_typesupport_introspection_c__get_const_function__FieldCircularArc__field_arcs(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__FieldCircularArc__Sequence * member =
    (const robocup_ssl_msgs__msg__FieldCircularArc__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryFieldSize__rosidl_typesupport_introspection_c__get_function__FieldCircularArc__field_arcs(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence * member =
    (robocup_ssl_msgs__msg__FieldCircularArc__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryFieldSize__rosidl_typesupport_introspection_c__resize_function__FieldCircularArc__field_arcs(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence * member =
    (robocup_ssl_msgs__msg__FieldCircularArc__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__FieldCircularArc__Sequence__fini(member);
  return robocup_ssl_msgs__msg__FieldCircularArc__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_member_array[9] = {
  {
    "field_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, field_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, field_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, goal_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, goal_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "boundary_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, boundary_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, field_lines),  // bytes offset in struct
    NULL,  // default value
    GeometryFieldSize__rosidl_typesupport_introspection_c__size_function__FieldLineSegment__field_lines,  // size() function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__get_const_function__FieldLineSegment__field_lines,  // get_const(index) function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__get_function__FieldLineSegment__field_lines,  // get(index) function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__resize_function__FieldLineSegment__field_lines  // resize(index) function pointer
  },
  {
    "field_arcs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, field_arcs),  // bytes offset in struct
    NULL,  // default value
    GeometryFieldSize__rosidl_typesupport_introspection_c__size_function__FieldCircularArc__field_arcs,  // size() function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__get_const_function__FieldCircularArc__field_arcs,  // get_const(index) function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__get_function__FieldCircularArc__field_arcs,  // get(index) function pointer
    GeometryFieldSize__rosidl_typesupport_introspection_c__resize_function__FieldCircularArc__field_arcs  // resize(index) function pointer
  },
  {
    "penalty_area_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, penalty_area_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "penalty_area_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryFieldSize, penalty_area_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "GeometryFieldSize",  // message name
  9,  // number of fields
  sizeof(robocup_ssl_msgs__msg__GeometryFieldSize),
  GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_member_array,  // message members
  GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_type_support_handle = {
  0,
  &GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryFieldSize)() {
  GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, FieldLineSegment)();
  GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, FieldCircularArc)();
  if (!GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_type_support_handle.typesupport_identifier) {
    GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeometryFieldSize__rosidl_typesupport_introspection_c__GeometryFieldSize_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
