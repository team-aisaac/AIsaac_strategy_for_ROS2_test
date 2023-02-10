// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryFieldSize.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'field_lines'
#include "robocup_ssl_msgs/msg/detail/field_line_segment__struct.hpp"
// Member 'field_arcs'
#include "robocup_ssl_msgs/msg/detail/field_circular_arc__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryFieldSize __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryFieldSize __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeometryFieldSize_
{
  using Type = GeometryFieldSize_<ContainerAllocator>;

  explicit GeometryFieldSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_length = 0l;
      this->field_width = 0l;
      this->goal_width = 0l;
      this->goal_depth = 0l;
      this->boundary_width = 0l;
    }
  }

  explicit GeometryFieldSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_length = 0l;
      this->field_width = 0l;
      this->goal_width = 0l;
      this->goal_depth = 0l;
      this->boundary_width = 0l;
    }
  }

  // field types and members
  using _field_length_type =
    int32_t;
  _field_length_type field_length;
  using _field_width_type =
    int32_t;
  _field_width_type field_width;
  using _goal_width_type =
    int32_t;
  _goal_width_type goal_width;
  using _goal_depth_type =
    int32_t;
  _goal_depth_type goal_depth;
  using _boundary_width_type =
    int32_t;
  _boundary_width_type boundary_width;
  using _field_lines_type =
    std::vector<robocup_ssl_msgs::msg::FieldLineSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::FieldLineSegment_<ContainerAllocator>>::other>;
  _field_lines_type field_lines;
  using _field_arcs_type =
    std::vector<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>::other>;
  _field_arcs_type field_arcs;
  using _penalty_area_depth_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other>;
  _penalty_area_depth_type penalty_area_depth;
  using _penalty_area_width_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other>;
  _penalty_area_width_type penalty_area_width;

  // setters for named parameter idiom
  Type & set__field_length(
    const int32_t & _arg)
  {
    this->field_length = _arg;
    return *this;
  }
  Type & set__field_width(
    const int32_t & _arg)
  {
    this->field_width = _arg;
    return *this;
  }
  Type & set__goal_width(
    const int32_t & _arg)
  {
    this->goal_width = _arg;
    return *this;
  }
  Type & set__goal_depth(
    const int32_t & _arg)
  {
    this->goal_depth = _arg;
    return *this;
  }
  Type & set__boundary_width(
    const int32_t & _arg)
  {
    this->boundary_width = _arg;
    return *this;
  }
  Type & set__field_lines(
    const std::vector<robocup_ssl_msgs::msg::FieldLineSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::FieldLineSegment_<ContainerAllocator>>::other> & _arg)
  {
    this->field_lines = _arg;
    return *this;
  }
  Type & set__field_arcs(
    const std::vector<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>::other> & _arg)
  {
    this->field_arcs = _arg;
    return *this;
  }
  Type & set__penalty_area_depth(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->penalty_area_depth = _arg;
    return *this;
  }
  Type & set__penalty_area_width(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->penalty_area_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryFieldSize
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryFieldSize
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeometryFieldSize_ & other) const
  {
    if (this->field_length != other.field_length) {
      return false;
    }
    if (this->field_width != other.field_width) {
      return false;
    }
    if (this->goal_width != other.goal_width) {
      return false;
    }
    if (this->goal_depth != other.goal_depth) {
      return false;
    }
    if (this->boundary_width != other.boundary_width) {
      return false;
    }
    if (this->field_lines != other.field_lines) {
      return false;
    }
    if (this->field_arcs != other.field_arcs) {
      return false;
    }
    if (this->penalty_area_depth != other.penalty_area_depth) {
      return false;
    }
    if (this->penalty_area_width != other.penalty_area_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeometryFieldSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeometryFieldSize_

// alias to use template instance with default allocator
using GeometryFieldSize =
  robocup_ssl_msgs::msg::GeometryFieldSize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_FIELD_SIZE__STRUCT_HPP_
