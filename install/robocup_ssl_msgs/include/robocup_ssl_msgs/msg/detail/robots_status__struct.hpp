// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/RobotsStatus.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robots_status'
#include "robocup_ssl_msgs/msg/detail/robot_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__RobotsStatus __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__RobotsStatus __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotsStatus_
{
  using Type = RobotsStatus_<ContainerAllocator>;

  explicit RobotsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _robots_status_type =
    std::vector<robocup_ssl_msgs::msg::RobotStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotStatus_<ContainerAllocator>>::other>;
  _robots_status_type robots_status;

  // setters for named parameter idiom
  Type & set__robots_status(
    const std::vector<robocup_ssl_msgs::msg::RobotStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->robots_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotsStatus
    std::shared_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotsStatus
    std::shared_ptr<robocup_ssl_msgs::msg::RobotsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotsStatus_ & other) const
  {
    if (this->robots_status != other.robots_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotsStatus_

// alias to use template instance with default allocator
using RobotsStatus =
  robocup_ssl_msgs::msg::RobotsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOTS_STATUS__STRUCT_HPP_
