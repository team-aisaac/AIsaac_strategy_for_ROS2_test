// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ConstraintXY.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_HPP_

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
# define DEPRECATED__consai_msgs__msg__ConstraintXY __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ConstraintXY __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintXY_
{
  using Type = ConstraintXY_<ContainerAllocator>;

  explicit ConstraintXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->normalized = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->normalized = false;
    }
  }

  explicit ConstraintXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->normalized = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->normalized = false;
    }
  }

  // field types and members
  using _normalized_type =
    bool;
  _normalized_type normalized;
  using _value_x_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _value_x_type value_x;
  using _value_y_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _value_y_type value_y;
  using _object_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintObject_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>::other>;
  _object_type object;

  // setters for named parameter idiom
  Type & set__normalized(
    const bool & _arg)
  {
    this->normalized = _arg;
    return *this;
  }
  Type & set__value_x(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->value_x = _arg;
    return *this;
  }
  Type & set__value_y(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->value_y = _arg;
    return *this;
  }
  Type & set__object(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintObject_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintObject_<ContainerAllocator>>::other> & _arg)
  {
    this->object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ConstraintXY
    std::shared_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ConstraintXY
    std::shared_ptr<consai_msgs::msg::ConstraintXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintXY_ & other) const
  {
    if (this->normalized != other.normalized) {
      return false;
    }
    if (this->value_x != other.value_x) {
      return false;
    }
    if (this->value_y != other.value_y) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintXY_

// alias to use template instance with default allocator
using ConstraintXY =
  consai_msgs::msg::ConstraintXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_XY__STRUCT_HPP_
