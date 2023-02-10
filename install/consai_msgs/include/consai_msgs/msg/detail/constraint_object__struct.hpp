// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ConstraintObject.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__ConstraintObject __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ConstraintObject __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintObject_
{
  using Type = ConstraintObject_<ContainerAllocator>;

  explicit ConstraintObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 0ul;
      this->robot_id = 99ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0ul;
      this->robot_id = 0ul;
    }
  }

  explicit ConstraintObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->type = 0ul;
      this->robot_id = 99ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->type = 0ul;
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _type_type =
    uint32_t;
  _type_type type;
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;

  // setters for named parameter idiom
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t UNKNOWN =
    0u;
  static constexpr uint32_t BALL =
    1u;
  static constexpr uint32_t BLUE_ROBOT =
    2u;
  static constexpr uint32_t YELLOW_ROBOT =
    3u;
  static constexpr uint32_t ROBOT_ID_UNKNOWN =
    99u;

  // pointer types
  using RawPtr =
    consai_msgs::msg::ConstraintObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ConstraintObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ConstraintObject
    std::shared_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ConstraintObject
    std::shared_ptr<consai_msgs::msg::ConstraintObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintObject_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintObject_

// alias to use template instance with default allocator
using ConstraintObject =
  consai_msgs::msg::ConstraintObject_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t ConstraintObject_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintObject_<ContainerAllocator>::BALL;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintObject_<ContainerAllocator>::BLUE_ROBOT;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintObject_<ContainerAllocator>::YELLOW_ROBOT;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintObject_<ContainerAllocator>::ROBOT_ID_UNKNOWN;

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_OBJECT__STRUCT_HPP_
