// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
#include "robocup_ssl_msgs/msg/detail/vector2f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__FieldCircularArc __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__FieldCircularArc __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldCircularArc_
{
  using Type = FieldCircularArc_<ContainerAllocator>;

  explicit FieldCircularArc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->radius = 0.0f;
      this->a1 = 0.0f;
      this->a2 = 0.0f;
      this->thickness = 0.0f;
    }
  }

  explicit FieldCircularArc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->radius = 0.0f;
      this->a1 = 0.0f;
      this->a2 = 0.0f;
      this->thickness = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _center_type =
    robocup_ssl_msgs::msg::Vector2f_<ContainerAllocator>;
  _center_type center;
  using _radius_type =
    float;
  _radius_type radius;
  using _a1_type =
    float;
  _a1_type a1;
  using _a2_type =
    float;
  _a2_type a2;
  using _thickness_type =
    float;
  _thickness_type thickness;
  using _type_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__center(
    const robocup_ssl_msgs::msg::Vector2f_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__a1(
    const float & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a2(
    const float & _arg)
  {
    this->a2 = _arg;
    return *this;
  }
  Type & set__thickness(
    const float & _arg)
  {
    this->thickness = _arg;
    return *this;
  }
  Type & set__type(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t UNDEFINED =
    0u;
  static constexpr uint32_t CENTER_CIRCLE =
    1u;
  static constexpr uint32_t TOP_TOUCH_LINE =
    2u;
  static constexpr uint32_t BOTTOM_TOUCH_LINE =
    3u;
  static constexpr uint32_t LEFT_GOAL_LINE =
    4u;
  static constexpr uint32_t RIGHT_GOAL_LINE =
    5u;
  static constexpr uint32_t HALFWAY_LINE =
    6u;
  static constexpr uint32_t CENTER_LINE =
    7u;
  static constexpr uint32_t LEFT_PENALTY_STRETCH =
    8u;
  static constexpr uint32_t RIGHT_PENALTY_STRETCH =
    9u;
  static constexpr uint32_t LEFT_FIELD_LEFT_PENALTY_STRETCH =
    10u;
  static constexpr uint32_t LEFT_FIELD_RIGHT_PENALTY_STRETCH =
    11u;
  static constexpr uint32_t RIGHT_FIELD_LEFT_PENALTY_STRETCH =
    12u;
  static constexpr uint32_t RIGHT_FIELD_RIGHT_PENALTY_STRETCH =
    13u;

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__FieldCircularArc
    std::shared_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__FieldCircularArc
    std::shared_ptr<robocup_ssl_msgs::msg::FieldCircularArc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldCircularArc_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldCircularArc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldCircularArc_

// alias to use template instance with default allocator
using FieldCircularArc =
  robocup_ssl_msgs::msg::FieldCircularArc_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::UNDEFINED;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::CENTER_CIRCLE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::TOP_TOUCH_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::BOTTOM_TOUCH_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::LEFT_GOAL_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::RIGHT_GOAL_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::HALFWAY_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::CENTER_LINE;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::LEFT_PENALTY_STRETCH;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::RIGHT_PENALTY_STRETCH;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::LEFT_FIELD_LEFT_PENALTY_STRETCH;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::LEFT_FIELD_RIGHT_PENALTY_STRETCH;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::RIGHT_FIELD_LEFT_PENALTY_STRETCH;
template<typename ContainerAllocator>
constexpr uint32_t FieldCircularArc_<ContainerAllocator>::RIGHT_FIELD_RIGHT_PENALTY_STRETCH;

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_
