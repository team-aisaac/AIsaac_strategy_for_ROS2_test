// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/BallReplacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__BallReplacement __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__BallReplacement __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallReplacement_
{
  using Type = BallReplacement_<ContainerAllocator>;

  explicit BallReplacement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BallReplacement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _x_type x;
  using _y_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _y_type y;
  using _vx_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _vx_type vx;
  using _vy_type =
    rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other>;
  _vy_type vy;

  // setters for named parameter idiom
  Type & set__x(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__vx(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const rosidl_runtime_cpp::BoundedVector<double, 1, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->vy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallReplacement
    std::shared_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__BallReplacement
    std::shared_ptr<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallReplacement_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallReplacement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallReplacement_

// alias to use template instance with default allocator
using BallReplacement =
  robocup_ssl_msgs::msg::BallReplacement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__BALL_REPLACEMENT__STRUCT_HPP_
