// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryModels.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'straight_two_phase'
#include "robocup_ssl_msgs/msg/detail/ball_model_straight_two_phase__struct.hpp"
// Member 'chip_fixed_loss'
#include "robocup_ssl_msgs/msg/detail/ball_model_chip_fixed_loss__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryModels __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryModels __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeometryModels_
{
  using Type = GeometryModels_<ContainerAllocator>;

  explicit GeometryModels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GeometryModels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _straight_two_phase_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>::other>;
  _straight_two_phase_type straight_two_phase;
  using _chip_fixed_loss_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>::other>;
  _chip_fixed_loss_type chip_fixed_loss;

  // setters for named parameter idiom
  Type & set__straight_two_phase(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallModelStraightTwoPhase_<ContainerAllocator>>::other> & _arg)
  {
    this->straight_two_phase = _arg;
    return *this;
  }
  Type & set__chip_fixed_loss(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::BallModelChipFixedLoss_<ContainerAllocator>>::other> & _arg)
  {
    this->chip_fixed_loss = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryModels
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryModels
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeometryModels_ & other) const
  {
    if (this->straight_two_phase != other.straight_two_phase) {
      return false;
    }
    if (this->chip_fixed_loss != other.chip_fixed_loss) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeometryModels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeometryModels_

// alias to use template instance with default allocator
using GeometryModels =
  robocup_ssl_msgs::msg::GeometryModels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_MODELS__STRUCT_HPP_
