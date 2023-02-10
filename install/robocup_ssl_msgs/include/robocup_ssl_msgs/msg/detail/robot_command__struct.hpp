// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__RobotCommand __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__RobotCommand __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_
{
  using Type = RobotCommand_<ContainerAllocator>;

  explicit RobotCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->kickspeedx = 0.0f;
      this->kickspeedz = 0.0f;
      this->veltangent = 0.0f;
      this->velnormal = 0.0f;
      this->velangular = 0.0f;
      this->spinner = false;
      this->wheelsspeed = false;
    }
  }

  explicit RobotCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->kickspeedx = 0.0f;
      this->kickspeedz = 0.0f;
      this->veltangent = 0.0f;
      this->velnormal = 0.0f;
      this->velangular = 0.0f;
      this->spinner = false;
      this->wheelsspeed = false;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _kickspeedx_type =
    float;
  _kickspeedx_type kickspeedx;
  using _kickspeedz_type =
    float;
  _kickspeedz_type kickspeedz;
  using _veltangent_type =
    float;
  _veltangent_type veltangent;
  using _velnormal_type =
    float;
  _velnormal_type velnormal;
  using _velangular_type =
    float;
  _velangular_type velangular;
  using _spinner_type =
    bool;
  _spinner_type spinner;
  using _wheelsspeed_type =
    bool;
  _wheelsspeed_type wheelsspeed;
  using _wheel1_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _wheel1_type wheel1;
  using _wheel2_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _wheel2_type wheel2;
  using _wheel3_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _wheel3_type wheel3;
  using _wheel4_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _wheel4_type wheel4;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__kickspeedx(
    const float & _arg)
  {
    this->kickspeedx = _arg;
    return *this;
  }
  Type & set__kickspeedz(
    const float & _arg)
  {
    this->kickspeedz = _arg;
    return *this;
  }
  Type & set__veltangent(
    const float & _arg)
  {
    this->veltangent = _arg;
    return *this;
  }
  Type & set__velnormal(
    const float & _arg)
  {
    this->velnormal = _arg;
    return *this;
  }
  Type & set__velangular(
    const float & _arg)
  {
    this->velangular = _arg;
    return *this;
  }
  Type & set__spinner(
    const bool & _arg)
  {
    this->spinner = _arg;
    return *this;
  }
  Type & set__wheelsspeed(
    const bool & _arg)
  {
    this->wheelsspeed = _arg;
    return *this;
  }
  Type & set__wheel1(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->wheel1 = _arg;
    return *this;
  }
  Type & set__wheel2(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->wheel2 = _arg;
    return *this;
  }
  Type & set__wheel3(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->wheel3 = _arg;
    return *this;
  }
  Type & set__wheel4(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->wheel4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotCommand
    std::shared_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__RobotCommand
    std::shared_ptr<robocup_ssl_msgs::msg::RobotCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->kickspeedx != other.kickspeedx) {
      return false;
    }
    if (this->kickspeedz != other.kickspeedz) {
      return false;
    }
    if (this->veltangent != other.veltangent) {
      return false;
    }
    if (this->velnormal != other.velnormal) {
      return false;
    }
    if (this->velangular != other.velangular) {
      return false;
    }
    if (this->spinner != other.spinner) {
      return false;
    }
    if (this->wheelsspeed != other.wheelsspeed) {
      return false;
    }
    if (this->wheel1 != other.wheel1) {
      return false;
    }
    if (this->wheel2 != other.wheel2) {
      return false;
    }
    if (this->wheel3 != other.wheel3) {
      return false;
    }
    if (this->wheel4 != other.wheel4) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_

// alias to use template instance with default allocator
using RobotCommand =
  robocup_ssl_msgs::msg::RobotCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
