// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__RobotId __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__RobotId __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotId_
{
  using Type = RobotId_<ContainerAllocator>;

  explicit RobotId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->team_color = 0ul;
    }
  }

  explicit RobotId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->team_color = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _team_color_type =
    uint32_t;
  _team_color_type team_color;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__team_color(
    const uint32_t & _arg)
  {
    this->team_color = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t TEAM_COLOR_UNKNOWN =
    0u;
  static constexpr uint32_t TEAM_COLOR_YELLOW =
    1u;
  static constexpr uint32_t TEAM_COLOR_BLUE =
    2u;

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotId
    std::shared_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotId
    std::shared_ptr<robocup_ssl_msgs::msg::RobotId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotId_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->team_color != other.team_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotId_

// alias to use template instance with default allocator
using RobotId =
  robocup_ssl_msgs::msg::RobotId_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t RobotId_<ContainerAllocator>::TEAM_COLOR_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint32_t RobotId_<ContainerAllocator>::TEAM_COLOR_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t RobotId_<ContainerAllocator>::TEAM_COLOR_BLUE;

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_
