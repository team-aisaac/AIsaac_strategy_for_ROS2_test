// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/TrackedFrame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/tracked_frame__struct.hpp"
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

void TrackedFrame_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::TrackedFrame(_init);
}

void TrackedFrame_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::TrackedFrame *>(message_memory);
  typed_message->~TrackedFrame();
}

size_t size_function__TrackedFrame__balls(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::TrackedBall> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedFrame__balls(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::TrackedBall> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedFrame__balls(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::TrackedBall> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedFrame__balls(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::TrackedBall> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrackedFrame__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::TrackedRobot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedFrame__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::TrackedRobot> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedFrame__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::TrackedRobot> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedFrame__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::TrackedRobot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrackedFrame__kicked_ball(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::KickedBall> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedFrame__kicked_ball(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::KickedBall> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedFrame__kicked_ball(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::KickedBall> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedFrame__kicked_ball(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::KickedBall> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrackedFrame__capabilities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedFrame__capabilities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedFrame__capabilities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__TrackedFrame__capabilities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedFrame_message_member_array[6] = {
  {
    "frame_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, frame_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "balls",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::TrackedBall>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, balls),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedFrame__balls,  // size() function pointer
    get_const_function__TrackedFrame__balls,  // get_const(index) function pointer
    get_function__TrackedFrame__balls,  // get(index) function pointer
    resize_function__TrackedFrame__balls  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::TrackedRobot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedFrame__robots,  // size() function pointer
    get_const_function__TrackedFrame__robots,  // get_const(index) function pointer
    get_function__TrackedFrame__robots,  // get(index) function pointer
    resize_function__TrackedFrame__robots  // resize(index) function pointer
  },
  {
    "kicked_ball",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::KickedBall>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, kicked_ball),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedFrame__kicked_ball,  // size() function pointer
    get_const_function__TrackedFrame__kicked_ball,  // get_const(index) function pointer
    get_function__TrackedFrame__kicked_ball,  // get(index) function pointer
    resize_function__TrackedFrame__kicked_ball  // resize(index) function pointer
  },
  {
    "capabilities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::TrackedFrame, capabilities),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedFrame__capabilities,  // size() function pointer
    get_const_function__TrackedFrame__capabilities,  // get_const(index) function pointer
    get_function__TrackedFrame__capabilities,  // get(index) function pointer
    resize_function__TrackedFrame__capabilities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedFrame_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "TrackedFrame",  // message name
  6,  // number of fields
  sizeof(robocup_ssl_msgs::msg::TrackedFrame),
  TrackedFrame_message_member_array,  // message members
  TrackedFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedFrame_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedFrame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedFrame_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::TrackedFrame>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedFrame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, TrackedFrame)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedFrame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
