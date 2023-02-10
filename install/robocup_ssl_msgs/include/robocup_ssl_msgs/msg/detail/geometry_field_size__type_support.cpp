// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__struct.hpp"
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

void GeometryFieldSize_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::GeometryFieldSize(_init);
}

void GeometryFieldSize_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::GeometryFieldSize *>(message_memory);
  typed_message->~GeometryFieldSize();
}

size_t size_function__GeometryFieldSize__field_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::FieldLineSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryFieldSize__field_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::FieldLineSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryFieldSize__field_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::FieldLineSegment> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryFieldSize__field_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::FieldLineSegment> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeometryFieldSize__field_arcs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::FieldCircularArc> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryFieldSize__field_arcs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::FieldCircularArc> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryFieldSize__field_arcs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::FieldCircularArc> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryFieldSize__field_arcs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::FieldCircularArc> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeometryFieldSize__penalty_area_depth(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryFieldSize__penalty_area_depth(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryFieldSize__penalty_area_depth(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryFieldSize__penalty_area_depth(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeometryFieldSize__penalty_area_width(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryFieldSize__penalty_area_width(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryFieldSize__penalty_area_width(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryFieldSize__penalty_area_width(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeometryFieldSize_message_member_array[9] = {
  {
    "field_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, field_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "field_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, field_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, goal_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal_depth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, goal_depth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "boundary_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, boundary_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "field_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::FieldLineSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, field_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryFieldSize__field_lines,  // size() function pointer
    get_const_function__GeometryFieldSize__field_lines,  // get_const(index) function pointer
    get_function__GeometryFieldSize__field_lines,  // get(index) function pointer
    resize_function__GeometryFieldSize__field_lines  // resize(index) function pointer
  },
  {
    "field_arcs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::FieldCircularArc>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, field_arcs),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryFieldSize__field_arcs,  // size() function pointer
    get_const_function__GeometryFieldSize__field_arcs,  // get_const(index) function pointer
    get_function__GeometryFieldSize__field_arcs,  // get(index) function pointer
    resize_function__GeometryFieldSize__field_arcs  // resize(index) function pointer
  },
  {
    "penalty_area_depth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, penalty_area_depth),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryFieldSize__penalty_area_depth,  // size() function pointer
    get_const_function__GeometryFieldSize__penalty_area_depth,  // get_const(index) function pointer
    get_function__GeometryFieldSize__penalty_area_depth,  // get(index) function pointer
    resize_function__GeometryFieldSize__penalty_area_depth  // resize(index) function pointer
  },
  {
    "penalty_area_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryFieldSize, penalty_area_width),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryFieldSize__penalty_area_width,  // size() function pointer
    get_const_function__GeometryFieldSize__penalty_area_width,  // get_const(index) function pointer
    get_function__GeometryFieldSize__penalty_area_width,  // get(index) function pointer
    resize_function__GeometryFieldSize__penalty_area_width  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeometryFieldSize_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "GeometryFieldSize",  // message name
  9,  // number of fields
  sizeof(robocup_ssl_msgs::msg::GeometryFieldSize),
  GeometryFieldSize_message_member_array,  // message members
  GeometryFieldSize_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryFieldSize_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeometryFieldSize_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeometryFieldSize_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::GeometryFieldSize>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryFieldSize_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, GeometryFieldSize)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryFieldSize_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
