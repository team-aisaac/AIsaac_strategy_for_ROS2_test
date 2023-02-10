// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocup_ssl_msgs/msg/detail/geometry_models__rosidl_typesupport_introspection_c.h"
#include "robocup_ssl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocup_ssl_msgs/msg/detail/geometry_models__functions.h"
#include "robocup_ssl_msgs/msg/detail/geometry_models__struct.h"


// Include directives for member types
// Member `straight_two_phase`
#include "robocup_ssl_msgs/msg/ball_model_straight_two_phase.h"
// Member `straight_two_phase`
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__rosidl_typesupport_introspection_c.h"
// Member `chip_fixed_loss`
#include "robocup_ssl_msgs/msg/ball_model_chip_fixed_loss.h"
// Member `chip_fixed_loss`
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocup_ssl_msgs__msg__GeometryModels__init(message_memory);
}

void GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_fini_function(void * message_memory)
{
  robocup_ssl_msgs__msg__GeometryModels__fini(message_memory);
}

size_t GeometryModels__rosidl_typesupport_introspection_c__size_function__BallModelStraightTwoPhase__straight_two_phase(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * member =
    (const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryModels__rosidl_typesupport_introspection_c__get_const_function__BallModelStraightTwoPhase__straight_two_phase(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * member =
    (const robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryModels__rosidl_typesupport_introspection_c__get_function__BallModelStraightTwoPhase__straight_two_phase(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * member =
    (robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryModels__rosidl_typesupport_introspection_c__resize_function__BallModelStraightTwoPhase__straight_two_phase(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence * member =
    (robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__fini(member);
  return robocup_ssl_msgs__msg__BallModelStraightTwoPhase__Sequence__init(member, size);
}

size_t GeometryModels__rosidl_typesupport_introspection_c__size_function__BallModelChipFixedLoss__chip_fixed_loss(
  const void * untyped_member)
{
  const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * member =
    (const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *)(untyped_member);
  return member->size;
}

const void * GeometryModels__rosidl_typesupport_introspection_c__get_const_function__BallModelChipFixedLoss__chip_fixed_loss(
  const void * untyped_member, size_t index)
{
  const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * member =
    (const robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GeometryModels__rosidl_typesupport_introspection_c__get_function__BallModelChipFixedLoss__chip_fixed_loss(
  void * untyped_member, size_t index)
{
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * member =
    (robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GeometryModels__rosidl_typesupport_introspection_c__resize_function__BallModelChipFixedLoss__chip_fixed_loss(
  void * untyped_member, size_t size)
{
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence * member =
    (robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence *)(untyped_member);
  robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__fini(member);
  return robocup_ssl_msgs__msg__BallModelChipFixedLoss__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_member_array[2] = {
  {
    "straight_two_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryModels, straight_two_phase),  // bytes offset in struct
    NULL,  // default value
    GeometryModels__rosidl_typesupport_introspection_c__size_function__BallModelStraightTwoPhase__straight_two_phase,  // size() function pointer
    GeometryModels__rosidl_typesupport_introspection_c__get_const_function__BallModelStraightTwoPhase__straight_two_phase,  // get_const(index) function pointer
    GeometryModels__rosidl_typesupport_introspection_c__get_function__BallModelStraightTwoPhase__straight_two_phase,  // get(index) function pointer
    GeometryModels__rosidl_typesupport_introspection_c__resize_function__BallModelStraightTwoPhase__straight_two_phase  // resize(index) function pointer
  },
  {
    "chip_fixed_loss",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs__msg__GeometryModels, chip_fixed_loss),  // bytes offset in struct
    NULL,  // default value
    GeometryModels__rosidl_typesupport_introspection_c__size_function__BallModelChipFixedLoss__chip_fixed_loss,  // size() function pointer
    GeometryModels__rosidl_typesupport_introspection_c__get_const_function__BallModelChipFixedLoss__chip_fixed_loss,  // get_const(index) function pointer
    GeometryModels__rosidl_typesupport_introspection_c__get_function__BallModelChipFixedLoss__chip_fixed_loss,  // get(index) function pointer
    GeometryModels__rosidl_typesupport_introspection_c__resize_function__BallModelChipFixedLoss__chip_fixed_loss  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_members = {
  "robocup_ssl_msgs__msg",  // message namespace
  "GeometryModels",  // message name
  2,  // number of fields
  sizeof(robocup_ssl_msgs__msg__GeometryModels),
  GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_member_array,  // message members
  GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_type_support_handle = {
  0,
  &GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocup_ssl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, GeometryModels)() {
  GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallModelStraightTwoPhase)();
  GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocup_ssl_msgs, msg, BallModelChipFixedLoss)();
  if (!GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_type_support_handle.typesupport_identifier) {
    GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GeometryModels__rosidl_typesupport_introspection_c__GeometryModels_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
