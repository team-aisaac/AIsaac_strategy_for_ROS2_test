// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/Replacement.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ball'
#include "robocup_ssl_msgs/msg/detail/ball_replacement__struct.hpp"
// Member 'robots'
#include "robocup_ssl_msgs/msg/detail/robot_replacement__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__Replacement __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__Replacement __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Replacement_
{
  using Type = Replacement_<ContainerAllocator>;

  explicit Replacement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Replacement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ball_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>::other>;
  _ball_type ball;
  using _robots_type =
    std::vector<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>::other>;
  _robots_type robots;

  // setters for named parameter idiom
  Type & set__ball(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallReplacement_<ContainerAllocator>>::other> & _arg)
  {
    this->ball = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotReplacement_<ContainerAllocator>>::other> & _arg)
  {
    this->robots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__Replacement
    std::shared_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__Replacement
    std::shared_ptr<robocup_ssl_msgs::msg::Replacement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Replacement_ & other) const
  {
    if (this->ball != other.ball) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    return true;
  }
  bool operator!=(const Replacement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Replacement_

// alias to use template instance with default allocator
using Replacement =
  robocup_ssl_msgs::msg::Replacement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REPLACEMENT__STRUCT_HPP_
