// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'yellow'
// Member 'blue'
#include "robocup_ssl_msgs/msg/detail/team_info__struct.hpp"
// Member 'designated_position'
#include "robocup_ssl_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__Referee __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__Referee __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Referee_
{
  using Type = Referee_<ContainerAllocator>;

  explicit Referee_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : yellow(_init),
    blue(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->packet_timestamp = 0ull;
      this->stage = 0ul;
      this->command = 0ul;
      this->command_counter = 0ul;
      this->command_timestamp = 0ull;
    }
  }

  explicit Referee_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : yellow(_alloc, _init),
    blue(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->packet_timestamp = 0ull;
      this->stage = 0ul;
      this->command = 0ul;
      this->command_counter = 0ul;
      this->command_timestamp = 0ull;
    }
  }

  // field types and members
  using _packet_timestamp_type =
    uint64_t;
  _packet_timestamp_type packet_timestamp;
  using _stage_type =
    uint32_t;
  _stage_type stage;
  using _stage_time_left_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other>;
  _stage_time_left_type stage_time_left;
  using _command_type =
    uint32_t;
  _command_type command;
  using _command_counter_type =
    uint32_t;
  _command_counter_type command_counter;
  using _command_timestamp_type =
    uint64_t;
  _command_timestamp_type command_timestamp;
  using _yellow_type =
    robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>;
  _yellow_type yellow;
  using _blue_type =
    robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator>;
  _blue_type blue;
  using _designated_position_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Point_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Point_<ContainerAllocator>>::other>;
  _designated_position_type designated_position;
  using _blue_team_on_positive_half_type =
    rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other>;
  _blue_team_on_positive_half_type blue_team_on_positive_half;
  using _next_command_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _next_command_type next_command;
  using _current_action_time_remaining_type =
    rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other>;
  _current_action_time_remaining_type current_action_time_remaining;

  // setters for named parameter idiom
  Type & set__packet_timestamp(
    const uint64_t & _arg)
  {
    this->packet_timestamp = _arg;
    return *this;
  }
  Type & set__stage(
    const uint32_t & _arg)
  {
    this->stage = _arg;
    return *this;
  }
  Type & set__stage_time_left(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->stage_time_left = _arg;
    return *this;
  }
  Type & set__command(
    const uint32_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__command_counter(
    const uint32_t & _arg)
  {
    this->command_counter = _arg;
    return *this;
  }
  Type & set__command_timestamp(
    const uint64_t & _arg)
  {
    this->command_timestamp = _arg;
    return *this;
  }
  Type & set__yellow(
    const robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> & _arg)
  {
    this->yellow = _arg;
    return *this;
  }
  Type & set__blue(
    const robocup_ssl_msgs::msg::TeamInfo_<ContainerAllocator> & _arg)
  {
    this->blue = _arg;
    return *this;
  }
  Type & set__designated_position(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::Point_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->designated_position = _arg;
    return *this;
  }
  Type & set__blue_team_on_positive_half(
    const rosidl_runtime_cpp::BoundedVector<bool, 1, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->blue_team_on_positive_half = _arg;
    return *this;
  }
  Type & set__next_command(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->next_command = _arg;
    return *this;
  }
  Type & set__current_action_time_remaining(
    const rosidl_runtime_cpp::BoundedVector<int32_t, 1, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->current_action_time_remaining = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t STAGE_NORMAL_FIRST_HALF_PRE =
    0u;
  static constexpr uint32_t STAGE_NORMAL_FIRST_HALF =
    1u;
  static constexpr uint32_t STAGE_NORMAL_HALF_TIME =
    2u;
  static constexpr uint32_t STAGE_NORMAL_SECOND_HALF_PRE =
    3u;
  static constexpr uint32_t STAGE_NORMAL_SECOND_HALF =
    4u;
  static constexpr uint32_t STAGE_EXTRA_TIME_BREAK =
    5u;
  static constexpr uint32_t STAGE_EXTRA_FIRST_HALF_PRE =
    6u;
  static constexpr uint32_t STAGE_EXTRA_FIRST_HALF =
    7u;
  static constexpr uint32_t STAGE_EXTRA_HALF_TIME =
    8u;
  static constexpr uint32_t STAGE_EXTRA_SECOND_HALF_PRE =
    9u;
  static constexpr uint32_t STAGE_EXTRA_SECOND_HALF =
    10u;
  static constexpr uint32_t STAGE_PENALTY_SHOOTOUT_BREAK =
    11u;
  static constexpr uint32_t STAGE_PENALTY_SHOOTOUT =
    12u;
  static constexpr uint32_t STAGE_POST_GAME =
    13u;
  static constexpr uint32_t COMMAND_HALT =
    0u;
  static constexpr uint32_t COMMAND_STOP =
    1u;
  static constexpr uint32_t COMMAND_NORMAL_START =
    2u;
  static constexpr uint32_t COMMAND_FORCE_START =
    3u;
  static constexpr uint32_t COMMAND_PREPARE_KICKOFF_YELLOW =
    4u;
  static constexpr uint32_t COMMAND_PREPARE_KICKOFF_BLUE =
    5u;
  static constexpr uint32_t COMMAND_PREPARE_PENALTY_YELLOW =
    6u;
  static constexpr uint32_t COMMAND_PREPARE_PENALTY_BLUE =
    7u;
  static constexpr uint32_t COMMAND_DIRECT_FREE_YELLOW =
    8u;
  static constexpr uint32_t COMMAND_DIRECT_FREE_BLUE =
    9u;
  static constexpr uint32_t COMMAND_INDIRECT_FREE_YELLOW =
    10u;
  static constexpr uint32_t COMMAND_INDIRECT_FREE_BLUE =
    11u;
  static constexpr uint32_t COMMAND_TIMEOUT_YELLOW =
    12u;
  static constexpr uint32_t COMMAND_TIMEOUT_BLUE =
    13u;
  static constexpr uint32_t COMMAND_GOAL_YELLOW =
    14u;
  static constexpr uint32_t COMMAND_GOAL_BLUE =
    15u;
  static constexpr uint32_t COMMAND_BALL_PLACEMENT_YELLOW =
    16u;
  static constexpr uint32_t COMMAND_BALL_PLACEMENT_BLUE =
    17u;

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::Referee_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::Referee_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Referee_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::Referee_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__Referee
    std::shared_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__Referee
    std::shared_ptr<robocup_ssl_msgs::msg::Referee_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Referee_ & other) const
  {
    if (this->packet_timestamp != other.packet_timestamp) {
      return false;
    }
    if (this->stage != other.stage) {
      return false;
    }
    if (this->stage_time_left != other.stage_time_left) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->command_counter != other.command_counter) {
      return false;
    }
    if (this->command_timestamp != other.command_timestamp) {
      return false;
    }
    if (this->yellow != other.yellow) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    if (this->designated_position != other.designated_position) {
      return false;
    }
    if (this->blue_team_on_positive_half != other.blue_team_on_positive_half) {
      return false;
    }
    if (this->next_command != other.next_command) {
      return false;
    }
    if (this->current_action_time_remaining != other.current_action_time_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const Referee_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Referee_

// alias to use template instance with default allocator
using Referee =
  robocup_ssl_msgs::msg::Referee_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_NORMAL_FIRST_HALF_PRE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_NORMAL_FIRST_HALF;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_NORMAL_HALF_TIME;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_NORMAL_SECOND_HALF_PRE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_NORMAL_SECOND_HALF;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_TIME_BREAK;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_FIRST_HALF_PRE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_FIRST_HALF;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_HALF_TIME;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_SECOND_HALF_PRE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_EXTRA_SECOND_HALF;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_PENALTY_SHOOTOUT_BREAK;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_PENALTY_SHOOTOUT;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::STAGE_POST_GAME;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_HALT;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_STOP;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_NORMAL_START;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_FORCE_START;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_PREPARE_KICKOFF_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_PREPARE_KICKOFF_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_PREPARE_PENALTY_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_PREPARE_PENALTY_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_DIRECT_FREE_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_DIRECT_FREE_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_INDIRECT_FREE_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_INDIRECT_FREE_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_TIMEOUT_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_TIMEOUT_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_GOAL_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_GOAL_BLUE;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_BALL_PLACEMENT_YELLOW;
template<typename ContainerAllocator>
constexpr uint32_t Referee_<ContainerAllocator>::COMMAND_BALL_PLACEMENT_BLUE;

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__REFEREE__STRUCT_HPP_
