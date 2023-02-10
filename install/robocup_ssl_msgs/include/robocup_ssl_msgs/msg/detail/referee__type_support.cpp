// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/referee__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robocup_ssl_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Referee_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::Referee(_init);
}

void Referee_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::Referee *>(message_memory);
  typed_message->~Referee();
}

size_t size_function__Referee__stage_time_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Referee__stage_time_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Referee__stage_time_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Referee__stage_time_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Referee__designated_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Referee__designated_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Referee__designated_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void resize_function__Referee__designated_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Referee__next_command(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Referee__next_command(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Referee__next_command(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Referee__next_command(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Referee__current_action_time_remaining(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Referee__current_action_time_remaining(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Referee__current_action_time_remaining(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Referee__current_action_time_remaining(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Referee_message_member_array[12] = {
  {
    "packet_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, packet_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, stage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stage_time_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, stage_time_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__Referee__stage_time_left,  // size() function pointer
    get_const_function__Referee__stage_time_left,  // get_const(index) function pointer
    get_function__Referee__stage_time_left,  // get(index) function pointer
    resize_function__Referee__stage_time_left  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, command_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, command_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::TeamInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, yellow),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::TeamInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, blue),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "designated_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, designated_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__Referee__designated_position,  // size() function pointer
    get_const_function__Referee__designated_position,  // get_const(index) function pointer
    get_function__Referee__designated_position,  // get(index) function pointer
    resize_function__Referee__designated_position  // resize(index) function pointer
  },
  {
    "blue_team_on_positive_half",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, blue_team_on_positive_half),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "next_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, next_command),  // bytes offset in struct
    nullptr,  // default value
    size_function__Referee__next_command,  // size() function pointer
    get_const_function__Referee__next_command,  // get_const(index) function pointer
    get_function__Referee__next_command,  // get(index) function pointer
    resize_function__Referee__next_command  // resize(index) function pointer
  },
  {
    "current_action_time_remaining",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::Referee, current_action_time_remaining),  // bytes offset in struct
    nullptr,  // default value
    size_function__Referee__current_action_time_remaining,  // size() function pointer
    get_const_function__Referee__current_action_time_remaining,  // get_const(index) function pointer
    get_function__Referee__current_action_time_remaining,  // get(index) function pointer
    resize_function__Referee__current_action_time_remaining  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Referee_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "Referee",  // message name
  12,  // number of fields
  sizeof(robocup_ssl_msgs::msg::Referee),
  Referee_message_member_array,  // message members
  Referee_init_function,  // function to initialize message memory (memory has to be allocated)
  Referee_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Referee_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Referee_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robocup_ssl_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robocup_ssl_msgs::msg::Referee>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::Referee_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, Referee)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::Referee_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
