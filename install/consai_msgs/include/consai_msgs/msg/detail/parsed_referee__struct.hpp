// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from consai_msgs:msg/ParsedReferee.idl
// generated code does not contain a copyright notice

#ifndef CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_HPP_
#define CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'designated_position'
#include "consai_msgs/msg/detail/state2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__consai_msgs__msg__ParsedReferee __attribute__((deprecated))
#else
# define DEPRECATED__consai_msgs__msg__ParsedReferee __declspec(deprecated)
#endif

namespace consai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParsedReferee_
{
  using Type = ParsedReferee_<ContainerAllocator>;

  explicit ParsedReferee_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : designated_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_placement = false;
      this->is_inplay = false;
      this->is_their_setplay = false;
      this->is_our_setplay = false;
    }
  }

  explicit ParsedReferee_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : designated_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_placement = false;
      this->is_inplay = false;
      this->is_their_setplay = false;
      this->is_our_setplay = false;
    }
  }

  // field types and members
  using _designated_position_type =
    consai_msgs::msg::State2D_<ContainerAllocator>;
  _designated_position_type designated_position;
  using _is_placement_type =
    bool;
  _is_placement_type is_placement;
  using _is_inplay_type =
    bool;
  _is_inplay_type is_inplay;
  using _is_their_setplay_type =
    bool;
  _is_their_setplay_type is_their_setplay;
  using _is_our_setplay_type =
    bool;
  _is_our_setplay_type is_our_setplay;

  // setters for named parameter idiom
  Type & set__designated_position(
    const consai_msgs::msg::State2D_<ContainerAllocator> & _arg)
  {
    this->designated_position = _arg;
    return *this;
  }
  Type & set__is_placement(
    const bool & _arg)
  {
    this->is_placement = _arg;
    return *this;
  }
  Type & set__is_inplay(
    const bool & _arg)
  {
    this->is_inplay = _arg;
    return *this;
  }
  Type & set__is_their_setplay(
    const bool & _arg)
  {
    this->is_their_setplay = _arg;
    return *this;
  }
  Type & set__is_our_setplay(
    const bool & _arg)
  {
    this->is_our_setplay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    consai_msgs::msg::ParsedReferee_<ContainerAllocator> *;
  using ConstRawPtr =
    const consai_msgs::msg::ParsedReferee_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ParsedReferee_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      consai_msgs::msg::ParsedReferee_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__consai_msgs__msg__ParsedReferee
    std::shared_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__consai_msgs__msg__ParsedReferee
    std::shared_ptr<consai_msgs::msg::ParsedReferee_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParsedReferee_ & other) const
  {
    if (this->designated_position != other.designated_position) {
      return false;
    }
    if (this->is_placement != other.is_placement) {
      return false;
    }
    if (this->is_inplay != other.is_inplay) {
      return false;
    }
    if (this->is_their_setplay != other.is_their_setplay) {
      return false;
    }
    if (this->is_our_setplay != other.is_our_setplay) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParsedReferee_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParsedReferee_

// alias to use template instance with default allocator
using ParsedReferee =
  consai_msgs::msg::ParsedReferee_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace consai_msgs

#endif  // CONSAI_MSGS__MSG__DETAIL__PARSED_REFEREE__STRUCT_HPP_
