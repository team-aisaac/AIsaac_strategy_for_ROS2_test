// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocup_ssl_msgs:msg/GeometryCameraCalibration.idl
// generated code does not contain a copyright notice

#ifndef ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__BUILDER_HPP_
#define ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__BUILDER_HPP_

#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robocup_ssl_msgs
{

namespace msg
{

namespace builder
{

class Init_GeometryCameraCalibration_pixel_image_height
{
public:
  explicit Init_GeometryCameraCalibration_pixel_image_height(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration pixel_image_height(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_pixel_image_height_type arg)
  {
    msg_.pixel_image_height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_pixel_image_width
{
public:
  explicit Init_GeometryCameraCalibration_pixel_image_width(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_pixel_image_height pixel_image_width(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_pixel_image_width_type arg)
  {
    msg_.pixel_image_width = std::move(arg);
    return Init_GeometryCameraCalibration_pixel_image_height(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_derived_camera_world_tz
{
public:
  explicit Init_GeometryCameraCalibration_derived_camera_world_tz(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_pixel_image_width derived_camera_world_tz(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_derived_camera_world_tz_type arg)
  {
    msg_.derived_camera_world_tz = std::move(arg);
    return Init_GeometryCameraCalibration_pixel_image_width(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_derived_camera_world_ty
{
public:
  explicit Init_GeometryCameraCalibration_derived_camera_world_ty(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_derived_camera_world_tz derived_camera_world_ty(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_derived_camera_world_ty_type arg)
  {
    msg_.derived_camera_world_ty = std::move(arg);
    return Init_GeometryCameraCalibration_derived_camera_world_tz(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_derived_camera_world_tx
{
public:
  explicit Init_GeometryCameraCalibration_derived_camera_world_tx(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_derived_camera_world_ty derived_camera_world_tx(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_derived_camera_world_tx_type arg)
  {
    msg_.derived_camera_world_tx = std::move(arg);
    return Init_GeometryCameraCalibration_derived_camera_world_ty(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_tz
{
public:
  explicit Init_GeometryCameraCalibration_tz(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_derived_camera_world_tx tz(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_tz_type arg)
  {
    msg_.tz = std::move(arg);
    return Init_GeometryCameraCalibration_derived_camera_world_tx(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_ty
{
public:
  explicit Init_GeometryCameraCalibration_ty(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_tz ty(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_ty_type arg)
  {
    msg_.ty = std::move(arg);
    return Init_GeometryCameraCalibration_tz(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_tx
{
public:
  explicit Init_GeometryCameraCalibration_tx(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_ty tx(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_tx_type arg)
  {
    msg_.tx = std::move(arg);
    return Init_GeometryCameraCalibration_ty(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_q3
{
public:
  explicit Init_GeometryCameraCalibration_q3(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_tx q3(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return Init_GeometryCameraCalibration_tx(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_q2
{
public:
  explicit Init_GeometryCameraCalibration_q2(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_q3 q2(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_GeometryCameraCalibration_q3(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_q1
{
public:
  explicit Init_GeometryCameraCalibration_q1(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_q2 q1(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_GeometryCameraCalibration_q2(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_q0
{
public:
  explicit Init_GeometryCameraCalibration_q0(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_q1 q0(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_q0_type arg)
  {
    msg_.q0 = std::move(arg);
    return Init_GeometryCameraCalibration_q1(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_distortion
{
public:
  explicit Init_GeometryCameraCalibration_distortion(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_q0 distortion(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_distortion_type arg)
  {
    msg_.distortion = std::move(arg);
    return Init_GeometryCameraCalibration_q0(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_principal_point_y
{
public:
  explicit Init_GeometryCameraCalibration_principal_point_y(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_distortion principal_point_y(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_principal_point_y_type arg)
  {
    msg_.principal_point_y = std::move(arg);
    return Init_GeometryCameraCalibration_distortion(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_principal_point_x
{
public:
  explicit Init_GeometryCameraCalibration_principal_point_x(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_principal_point_y principal_point_x(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_principal_point_x_type arg)
  {
    msg_.principal_point_x = std::move(arg);
    return Init_GeometryCameraCalibration_principal_point_y(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_focal_length
{
public:
  explicit Init_GeometryCameraCalibration_focal_length(::robocup_ssl_msgs::msg::GeometryCameraCalibration & msg)
  : msg_(msg)
  {}
  Init_GeometryCameraCalibration_principal_point_x focal_length(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_focal_length_type arg)
  {
    msg_.focal_length = std::move(arg);
    return Init_GeometryCameraCalibration_principal_point_x(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

class Init_GeometryCameraCalibration_camera_id
{
public:
  Init_GeometryCameraCalibration_camera_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometryCameraCalibration_focal_length camera_id(::robocup_ssl_msgs::msg::GeometryCameraCalibration::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_GeometryCameraCalibration_focal_length(msg_);
  }

private:
  ::robocup_ssl_msgs::msg::GeometryCameraCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocup_ssl_msgs::msg::GeometryCameraCalibration>()
{
  return robocup_ssl_msgs::msg::builder::Init_GeometryCameraCalibration_camera_id();
}

}  // namespace robocup_ssl_msgs

#endif  // ROBOCUP_SSL_MSGS__MSG__DETAIL__GEOMETRY_CAMERA_CALIBRATION__BUILDER_HPP_
