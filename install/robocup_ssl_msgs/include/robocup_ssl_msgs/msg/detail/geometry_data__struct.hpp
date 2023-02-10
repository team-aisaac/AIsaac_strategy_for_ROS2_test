// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'field'
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__struct.hpp"
// Member 'calib'
#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__struct.hpp"
// Member 'models'
#include "robocup_ssl_msgs/msg/detail/geometry_models__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryData __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryData __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeometryData_
{
  using Type = GeometryData_<ContainerAllocator>;

  explicit GeometryData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_init)
  {
    (void)_init;
  }

  explicit GeometryData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _field_type =
    robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator>;
  _field_type field;
  using _calib_type =
    std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>::other>;
  _calib_type calib;
  using _models_type =
    rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>::other>;
  _models_type models;

  // setters for named parameter idiom
  Type & set__field(
    const robocup_ssl_msgs::msg::GeometryFieldSize_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__calib(
    const std::vector<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>::other> & _arg)
  {
    this->calib = _arg;
    return *this;
  }
  Type & set__models(
    const rosidl_runtime_cpp::BoundedVector<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>, 1, typename ContainerAllocator::template rebind<robocup_ssl_msgs::msg::GeometryModels_<ContainerAllocator>>::other> & _arg)
  {
    this->models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryData
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryData
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeometryData_ & other) const
  {
    if (this->field != other.field) {
      return false;
    }
    if (this->calib != other.calib) {
      return false;
    }
    if (this->models != other.models) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeometryData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeometryData_

// alias to use template instance with default allocator
using GeometryData =
  robocup_ssl_msgs::msg::GeometryData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_DATA__STRUCT_HPP_
