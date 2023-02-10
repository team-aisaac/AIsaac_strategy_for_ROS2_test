// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocup_ssl_msgs/msg/detail/geometry_data__struct.hpp"
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

void GeometryData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocup_ssl_msgs::msg::GeometryData(_init);
}

void GeometryData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocup_ssl_msgs::msg::GeometryData *>(message_memory);
  typed_message->~GeometryData();
}

size_t size_function__GeometryData__calib(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryData__calib(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryData__calib(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryData__calib(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GeometryData__models(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::GeometryModels> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GeometryData__models(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocup_ssl_msgs::msg::GeometryModels> *>(untyped_member);
  return &member[index];
}

void * get_function__GeometryData__models(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocup_ssl_msgs::msg::GeometryModels> *>(untyped_member);
  return &member[index];
}

void resize_function__GeometryData__models(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocup_ssl_msgs::msg::GeometryModels> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeometryData_message_member_array[3] = {
  {
    "field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::GeometryFieldSize>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryData, field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "calib",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::GeometryCameraCalibration>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryData, calib),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryData__calib,  // size() function pointer
    get_const_function__GeometryData__calib,  // get_const(index) function pointer
    get_function__GeometryData__calib,  // get(index) function pointer
    resize_function__GeometryData__calib  // resize(index) function pointer
  },
  {
    "models",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocup_ssl_msgs::msg::GeometryModels>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robocup_ssl_msgs::msg::GeometryData, models),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeometryData__models,  // size() function pointer
    get_const_function__GeometryData__models,  // get_const(index) function pointer
    get_function__GeometryData__models,  // get(index) function pointer
    resize_function__GeometryData__models  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeometryData_message_members = {
  "robocup_ssl_msgs::msg",  // message namespace
  "GeometryData",  // message name
  3,  // number of fields
  sizeof(robocup_ssl_msgs::msg::GeometryData),
  GeometryData_message_member_array,  // message members
  GeometryData_init_function,  // function to initialize message memory (memory has to be allocated)
  GeometryData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeometryData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeometryData_message_members,
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
get_message_type_support_handle<robocup_ssl_msgs::msg::GeometryData>()
{
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocup_ssl_msgs, msg, GeometryData)() {
  return &::robocup_ssl_msgs::msg::rosidl_typesupport_introspection_cpp::GeometryData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
