// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robot_commands'
#include "robocup_ssl_msgs/msg/detail/robot_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__Commands __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__Commands __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Commands_
{
  using Type = Commands_<ContainerAllocator>;

  explicit Commands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->isteamyellow = false;
    }
  }

  explicit Commands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->isteamyellow = false;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _isteamyellow_type =
    bool;
  _isteamyellow_type isteamyellow;
  using _robot_commands_type =
    std::vector<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>::other>;
  _robot_commands_type robot_commands;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__isteamyellow(
    const bool & _arg)
  {
    this->isteamyellow = _arg;
    return *this;
  }
  Type & set__robot_commands(
    const std::vector<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->robot_commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::Commands_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::Commands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Commands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Commands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__Commands
    std::shared_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__Commands
    std::shared_ptr<robocup_ssl_msgs::msg::Commands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Commands_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->isteamyellow != other.isteamyellow) {
      return false;
    }
    if (this->robot_commands != other.robot_commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const Commands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Commands_

// alias to use template instance with default allocator
using Commands =
  robocup_ssl_msgs::msg::Commands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__COMMANDS__STRUCT_HPP_
