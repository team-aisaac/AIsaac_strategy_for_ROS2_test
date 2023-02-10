// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryCameraCalibration __attribute__((deprecated))
#else
# define DEPRECATED__robocup_ssl_msgs__msg__GeometryCameraCalibration __declspec(deprecated)
#endif

namespace robocup_ssl_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeometryCameraCalibration_
{
  using Type = GeometryCameraCalibration_<ContainerAllocator>;

  explicit GeometryCameraCalibration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = 0ul;
      this->focal_length = 0.0f;
      this->principal_point_x = 0.0f;
      this->principal_point_y = 0.0f;
      this->distortion = 0.0f;
      this->q0 = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->tx = 0.0f;
      this->ty = 0.0f;
      this->tz = 0.0f;
    }
  }

  explicit GeometryCameraCalibration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_id = 0ul;
      this->focal_length = 0.0f;
      this->principal_point_x = 0.0f;
      this->principal_point_y = 0.0f;
      this->distortion = 0.0f;
      this->q0 = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->tx = 0.0f;
      this->ty = 0.0f;
      this->tz = 0.0f;
    }
  }

  // field types and members
  using _camera_id_type =
    uint32_t;
  _camera_id_type camera_id;
  using _focal_length_type =
    float;
  _focal_length_type focal_length;
  using _principal_point_x_type =
    float;
  _principal_point_x_type principal_point_x;
  using _principal_point_y_type =
    float;
  _principal_point_y_type principal_point_y;
  using _distortion_type =
    float;
  _distortion_type distortion;
  using _q0_type =
    float;
  _q0_type q0;
  using _q1_type =
    float;
  _q1_type q1;
  using _q2_type =
    float;
  _q2_type q2;
  using _q3_type =
    float;
  _q3_type q3;
  using _tx_type =
    float;
  _tx_type tx;
  using _ty_type =
    float;
  _ty_type ty;
  using _tz_type =
    float;
  _tz_type tz;
  using _derived_camera_world_tx_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _derived_camera_world_tx_type derived_camera_world_tx;
  using _derived_camera_world_ty_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _derived_camera_world_ty_type derived_camera_world_ty;
  using _derived_camera_world_tz_type =
    rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other>;
  _derived_camera_world_tz_type derived_camera_world_tz;
  using _pixel_image_width_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _pixel_image_width_type pixel_image_width;
  using _pixel_image_height_type =
    rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _pixel_image_height_type pixel_image_height;

  // setters for named parameter idiom
  Type & set__camera_id(
    const uint32_t & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__focal_length(
    const float & _arg)
  {
    this->focal_length = _arg;
    return *this;
  }
  Type & set__principal_point_x(
    const float & _arg)
  {
    this->principal_point_x = _arg;
    return *this;
  }
  Type & set__principal_point_y(
    const float & _arg)
  {
    this->principal_point_y = _arg;
    return *this;
  }
  Type & set__distortion(
    const float & _arg)
  {
    this->distortion = _arg;
    return *this;
  }
  Type & set__q0(
    const float & _arg)
  {
    this->q0 = _arg;
    return *this;
  }
  Type & set__q1(
    const float & _arg)
  {
    this->q1 = _arg;
    return *this;
  }
  Type & set__q2(
    const float & _arg)
  {
    this->q2 = _arg;
    return *this;
  }
  Type & set__q3(
    const float & _arg)
  {
    this->q3 = _arg;
    return *this;
  }
  Type & set__tx(
    const float & _arg)
  {
    this->tx = _arg;
    return *this;
  }
  Type & set__ty(
    const float & _arg)
  {
    this->ty = _arg;
    return *this;
  }
  Type & set__tz(
    const float & _arg)
  {
    this->tz = _arg;
    return *this;
  }
  Type & set__derived_camera_world_tx(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->derived_camera_world_tx = _arg;
    return *this;
  }
  Type & set__derived_camera_world_ty(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->derived_camera_world_ty = _arg;
    return *this;
  }
  Type & set__derived_camera_world_tz(
    const rosidl_runtime_cpp::BoundedVector<float, 1, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->derived_camera_world_tz = _arg;
    return *this;
  }
  Type & set__pixel_image_width(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->pixel_image_width = _arg;
    return *this;
  }
  Type & set__pixel_image_height(
    const rosidl_runtime_cpp::BoundedVector<uint32_t, 1, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->pixel_image_height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryCameraCalibration
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocup_ssl_msgs__msg__GeometryCameraCalibration
    std::shared_ptr<robocup_ssl_msgs::msg::GeometryCameraCalibration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeometryCameraCalibration_ & other) const
  {
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->focal_length != other.focal_length) {
      return false;
    }
    if (this->principal_point_x != other.principal_point_x) {
      return false;
    }
    if (this->principal_point_y != other.principal_point_y) {
      return false;
    }
    if (this->distortion != other.distortion) {
      return false;
    }
    if (this->q0 != other.q0) {
      return false;
    }
    if (this->q1 != other.q1) {
      return false;
    }
    if (this->q2 != other.q2) {
      return false;
    }
    if (this->q3 != other.q3) {
      return false;
    }
    if (this->tx != other.tx) {
      return false;
    }
    if (this->ty != other.ty) {
      return false;
    }
    if (this->tz != other.tz) {
      return false;
    }
    if (this->derived_camera_world_tx != other.derived_camera_world_tx) {
      return false;
    }
    if (this->derived_camera_world_ty != other.derived_camera_world_ty) {
      return false;
    }
    if (this->derived_camera_world_tz != other.derived_camera_world_tz) {
      return false;
    }
    if (this->pixel_image_width != other.pixel_image_width) {
      return false;
    }
    if (this->pixel_image_height != other.pixel_image_height) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeometryCameraCalibration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeometryCameraCalibration_

// alias to use template instance with default allocator
using GeometryCameraCalibration =
  robocup_ssl_msgs::msg::GeometryCameraCalibration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__STRUCT_HPP_
