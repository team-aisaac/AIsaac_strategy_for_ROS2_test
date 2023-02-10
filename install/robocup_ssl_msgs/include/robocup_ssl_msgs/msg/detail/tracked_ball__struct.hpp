// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/TrackedBall.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pos'
// Member 'vel'
#include "robocup_ssl_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedBall __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__TrackedBall __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedBall_
{
  using Type = TrackedBall_<ContainerAllocator>;

  explicit TrackedBall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    (void)_init;
  }

  explicit TrackedBall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pos_type =
    robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>;
  _pos_type pos;
  using _vel_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>>::other>;
  _vel_type vel;
  using _visibility_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _visibility_type visibility;

  // setters for named parameter idiom
  Type & set__pos(
    const robocup_ssl_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__vel(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Vector3_<ContainerAllocator>>::other> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__visibility(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->visibility = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedBall
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__TrackedBall
    std::shared_ptr<robocup_ssl_msgs::msg::TrackedBall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedBall_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->visibility != other.visibility) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedBall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedBall_

// alias to use template instance with default allocator
using TrackedBall =
  robocup_ssl_msgs::msg::TrackedBall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__TRACKED_BALL__STRUCT_HPP_
