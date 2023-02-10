// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/detection_robot__struct.hpp"
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

void DetectionRobot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::DetectionRobot(_init);
}

void DetectionRobot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::DetectionRobot *>(message_memory);
  typed_message->~DetectionRobot();
}

size_t size_function__DetectionRobot__robot_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionRobot__robot_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionRobot__robot_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionRobot__robot_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectionRobot__orientation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionRobot__orientation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionRobot__orientation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionRobot__orientation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectionRobot__height(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionRobot__height(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionRobot__height(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionRobot__height(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectionRobot_message_member_array[8] = {
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, robot_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionRobot__robot_id,  // size() function pointer
    get_const_function__DetectionRobot__robot_id,  // get_const(index) function pointer
    get_function__DetectionRobot__robot_id,  // get(index) function pointer
    resize_function__DetectionRobot__robot_id  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, orientation),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionRobot__orientation,  // size() function pointer
    get_const_function__DetectionRobot__orientation,  // get_const(index) function pointer
    get_function__DetectionRobot__orientation,  // get(index) function pointer
    resize_function__DetectionRobot__orientation  // resize(index) function pointer
  },
  {
    "pixel_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, pixel_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pixel_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, pixel_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::DetectionRobot, height),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionRobot__height,  // size() function pointer
    get_const_function__DetectionRobot__height,  // get_const(index) function pointer
    get_function__DetectionRobot__height,  // get(index) function pointer
    resize_function__DetectionRobot__height  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectionRobot_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "DetectionRobot",  // message name
  8,  // number of fields
  sizeof(robocup_ssl_msgs::msg::DetectionRobot),
  DetectionRobot_message_member_array,  // message members
  DetectionRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionRobot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectionRobot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectionRobot_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::DetectionRobot>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::DetectionRobot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, DetectionRobot)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::DetectionRobot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
