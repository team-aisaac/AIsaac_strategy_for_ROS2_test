// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ConstraintPose.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'xy'
#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__struct.hpp"
// Member 'offset'
#include "consai_msgs/msg/detail/state2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__ConstraintPose __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ConstraintPose __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintPose_
{
  using Type = ConstraintPose_<ContainerAllocator>;

  explicit ConstraintPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xy(_init),
    theta(_init),
    offset(_init)
  {
    (void)_init;
  }

  explicit ConstraintPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xy(_alloc, _init),
    theta(_alloc, _init),
    offset(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _xy_type =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator>;
  _xy_type xy;
  using _theta_type =
    consai_msgs::msg::ConstraintTheta_<ContainerAllocator>;
  _theta_type theta;
  using _offset_type =
    consai_msgs::msg::State2D_<ContainerAllocator>;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__xy(
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> & _arg)
  {
    this->xy = _arg;
    return *this;
  }
  Type & set__theta(
    const consai_msgs::msg::ConstraintTheta_<ContainerAllocator> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__offset(
    const consai_msgs::msg::State2D_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::msg::ConstraintPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ConstraintPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ConstraintPose
    std::shared_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ConstraintPose
    std::shared_ptr<consai_msgs::msg::ConstraintPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintPose_ & other) const
  {
    if (this->xy != other.xy) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintPose_

// alias to use template instance with default allocator
using ConstraintPose =
  consai_msgs::msg::ConstraintPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_POSE__STRUCT_HPP_
