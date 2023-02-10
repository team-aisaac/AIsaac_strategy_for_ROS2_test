// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/GeometryCameraCalibration.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `derived_camera_world_tx`
// Member `derived_camera_world_ty`
// Member `derived_camera_world_tz`
// Member `pixel_image_width`
// Member `pixel_image_height`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__init(robocup_ssl_msgs__msg__GeometryCameraCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // camera_id
  // focal_length
  // principal_point_x
  // principal_point_y
  // distortion
  // q0
  // q1
  // q2
  // q3
  // tx
  // ty
  // tz
  // derived_camera_world_tx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->derived_camera_world_tx, 0)) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
    return false;
  }
  // derived_camera_world_ty
  if (!rosidl_runtime_c__float__Sequence__init(&msg->derived_camera_world_ty, 0)) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
    return false;
  }
  // derived_camera_world_tz
  if (!rosidl_runtime_c__float__Sequence__init(&msg->derived_camera_world_tz, 0)) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
    return false;
  }
  // pixel_image_width
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pixel_image_width, 0)) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
    return false;
  }
  // pixel_image_height
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pixel_image_height, 0)) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(robocup_ssl_msgs__msg__GeometryCameraCalibration * msg)
{
  if (!msg) {
    return;
  }
  // camera_id
  // focal_length
  // principal_point_x
  // principal_point_y
  // distortion
  // q0
  // q1
  // q2
  // q3
  // tx
  // ty
  // tz
  // derived_camera_world_tx
  rosidl_runtime_c__float__Sequence__fini(&msg->derived_camera_world_tx);
  // derived_camera_world_ty
  rosidl_runtime_c__float__Sequence__fini(&msg->derived_camera_world_ty);
  // derived_camera_world_tz
  rosidl_runtime_c__float__Sequence__fini(&msg->derived_camera_world_tz);
  // pixel_image_width
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pixel_image_width);
  // pixel_image_height
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pixel_image_height);
}

bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__are_equal(const robocup_ssl_msgs__msg__GeometryCameraCalibration * lhs, const robocup_ssl_msgs__msg__GeometryCameraCalibration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_id
  if (lhs->camera_id != rhs->camera_id) {
    return false;
  }
  // focal_length
  if (lhs->focal_length != rhs->focal_length) {
    return false;
  }
  // principal_point_x
  if (lhs->principal_point_x != rhs->principal_point_x) {
    return false;
  }
  // principal_point_y
  if (lhs->principal_point_y != rhs->principal_point_y) {
    return false;
  }
  // distortion
  if (lhs->distortion != rhs->distortion) {
    return false;
  }
  // q0
  if (lhs->q0 != rhs->q0) {
    return false;
  }
  // q1
  if (lhs->q1 != rhs->q1) {
    return false;
  }
  // q2
  if (lhs->q2 != rhs->q2) {
    return false;
  }
  // q3
  if (lhs->q3 != rhs->q3) {
    return false;
  }
  // tx
  if (lhs->tx != rhs->tx) {
    return false;
  }
  // ty
  if (lhs->ty != rhs->ty) {
    return false;
  }
  // tz
  if (lhs->tz != rhs->tz) {
    return false;
  }
  // derived_camera_world_tx
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->derived_camera_world_tx), &(rhs->derived_camera_world_tx)))
  {
    return false;
  }
  // derived_camera_world_ty
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->derived_camera_world_ty), &(rhs->derived_camera_world_ty)))
  {
    return false;
  }
  // derived_camera_world_tz
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->derived_camera_world_tz), &(rhs->derived_camera_world_tz)))
  {
    return false;
  }
  // pixel_image_width
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pixel_image_width), &(rhs->pixel_image_width)))
  {
    return false;
  }
  // pixel_image_height
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pixel_image_height), &(rhs->pixel_image_height)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__copy(
  const robocup_ssl_msgs__msg__GeometryCameraCalibration * input,
  robocup_ssl_msgs__msg__GeometryCameraCalibration * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_id
  output->camera_id = input->camera_id;
  // focal_length
  output->focal_length = input->focal_length;
  // principal_point_x
  output->principal_point_x = input->principal_point_x;
  // principal_point_y
  output->principal_point_y = input->principal_point_y;
  // distortion
  output->distortion = input->distortion;
  // q0
  output->q0 = input->q0;
  // q1
  output->q1 = input->q1;
  // q2
  output->q2 = input->q2;
  // q3
  output->q3 = input->q3;
  // tx
  output->tx = input->tx;
  // ty
  output->ty = input->ty;
  // tz
  output->tz = input->tz;
  // derived_camera_world_tx
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->derived_camera_world_tx), &(output->derived_camera_world_tx)))
  {
    return false;
  }
  // derived_camera_world_ty
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->derived_camera_world_ty), &(output->derived_camera_world_ty)))
  {
    return false;
  }
  // derived_camera_world_tz
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->derived_camera_world_tz), &(output->derived_camera_world_tz)))
  {
    return false;
  }
  // pixel_image_width
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pixel_image_width), &(output->pixel_image_width)))
  {
    return false;
  }
  // pixel_image_height
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pixel_image_height), &(output->pixel_image_height)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__GeometryCameraCalibration *
robocup_ssl_msgs__msg__GeometryCameraCalibration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryCameraCalibration * msg = (robocup_ssl_msgs__msg__GeometryCameraCalibration *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryCameraCalibration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__GeometryCameraCalibration));
  bool success = robocup_ssl_msgs__msg__GeometryCameraCalibration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__GeometryCameraCalibration__destroy(robocup_ssl_msgs__msg__GeometryCameraCalibration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__init(robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryCameraCalibration * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__GeometryCameraCalibration *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__GeometryCameraCalibration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__GeometryCameraCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__fini(robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * array = (robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__destroy(robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__are_equal(const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * lhs, const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__copy(
  const robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * input,
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__GeometryCameraCalibration);
    robocup_ssl_msgs__msg__GeometryCameraCalibration * data =
      (robocup_ssl_msgs__msg__GeometryCameraCalibration *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__GeometryCameraCalibration__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
