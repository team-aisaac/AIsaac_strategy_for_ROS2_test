// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ConstraintLine.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'p1'
// Member 'p2'
// Member 'p3'
// Member 'p4'
#include "consai_msgs/msg/detail/constraint_xy__struct.hpp"
// Member 'theta'
#include "consai_msgs/msg/detail/constraint_theta__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__ConstraintLine __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ConstraintLine __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConstraintLine_
{
  using Type = ConstraintLine_<ContainerAllocator>;

  explicit ConstraintLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p1(_init),
    p2(_init),
    theta(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  explicit ConstraintLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p1(_alloc, _init),
    p2(_alloc, _init),
    theta(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0;
    }
  }

  // field types and members
  using _p1_type =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator>;
  _p1_type p1;
  using _p2_type =
    consai_msgs::msg::ConstraintXY_<ContainerAllocator>;
  _p2_type p2;
  using _distance_type =
    double;
  _distance_type distance;
  using _theta_type =
    consai_msgs::msg::ConstraintTheta_<ContainerAllocator>;
  _theta_type theta;
  using _p3_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintXY_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>::other>;
  _p3_type p3;
  using _p4_type =
    rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintXY_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>::other>;
  _p4_type p4;

  // setters for named parameter idiom
  Type & set__p1(
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> & _arg)
  {
    this->p1 = _arg;
    return *this;
  }
  Type & set__p2(
    const consai_msgs::msg::ConstraintXY_<ContainerAllocator> & _arg)
  {
    this->p2 = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__theta(
    const consai_msgs::msg::ConstraintTheta_<ContainerAllocator> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__p3(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintXY_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>::other> & _arg)
  {
    this->p3 = _arg;
    return *this;
  }
  Type & set__p4(
    const rosidl_runtime_cpp::BoundedVector<consai_msgs::msg::ConstraintXY_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<consai_msgs::msg::ConstraintXY_<ContainerAllocator>>::other> & _arg)
  {
    this->p4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::msg::ConstraintLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ConstraintLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ConstraintLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ConstraintLine
    std::shared_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ConstraintLine
    std::shared_ptr<consai_msgs::msg::ConstraintLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConstraintLine_ & other) const
  {
    if (this->p1 != other.p1) {
      return false;
    }
    if (this->p2 != other.p2) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->p3 != other.p3) {
      return false;
    }
    if (this->p4 != other.p4) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConstraintLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConstraintLine_

// alias to use template instance with default allocator
using ConstraintLine =
  consai_msgs::msg::ConstraintLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__CONSTRAINT_LINE__STRUCT_HPP_
