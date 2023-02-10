// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ConstraintTheta.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'object'
#include "consai_msgs/msg/detail/constraint_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__ConstraintTheta __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ConstraintTheta __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintTheta_
{
  using Type = ConstraintTheta_<ContainerAllocator>;

  explicit ConstraintTheta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->param = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->param = 0ul;
    }
  }

  explicit ConstraintTheta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->param = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->param = 0ul;
    }
  }

  // field types and members
  using _value_theta_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _value_theta_type value_theta;
  using _object_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintObject_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>::other>;
  _object_type object;
  using _param_type =
    uint32_t;
  _param_type param;

  // setters for named parameter idiom
  Type & set__value_theta(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->value_theta = _arg;
    return *this;
  }
  Type & set__object(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintObject_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>::other> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__param(
    const uint32_t & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t PARAM_UNKNOWN =
    0u;
  static constexpr uint32_t PARAM_THETA =
    1u;
  static constexpr uint32_t PARAM_LOOK_TO =
    2u;
  static constexpr uint32_t PARAM_LOOK_FROM =
    3u;

  // pointer types
  using RawPtr =
    consai_msgs::msg::ConstraintTheta_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ConstraintTheta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintTheta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintTheta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ConstraintTheta
    std::shared_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ConstraintTheta
    std::shared_ptr<consai_msgs::msg::ConstraintTheta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintTheta_ & other) const
  {
    if (this->value_theta != other.value_theta) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintTheta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintTheta_

// alias to use template instance with default allocator
using ConstraintTheta =
  consai_msgs::msg::ConstraintTheta_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t ConstraintTheta_<ContainerAllocator>::PARAM_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintTheta_<ContainerAllocator>::PARAM_THETA;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintTheta_<ContainerAllocator>::PARAM_LOOK_TO;
template<typename ContainerAllocator>
constexpr uint32_t ConstraintTheta_<ContainerAllocator>::PARAM_LOOK_FROM;

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_THETA__STRUCT_HPP_
