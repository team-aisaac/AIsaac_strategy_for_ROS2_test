// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocup_ssl_msgs:msg/GeometryData.idl
// generated code does not contain a copyright notice
#include "robocup_ssl_msgs/msg/detail/geometry_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `field`
#include "robocup_ssl_msgs/msg/detail/geometry_field_size__functions.h"
// Member `calib`
#include "robocup_ssl_msgs/msg/detail/geometry_camera_calibration__functions.h"
// Member `models`
#include "robocup_ssl_msgs/msg/detail/geometry_models__functions.h"

bool
robocup_ssl_msgs__msg__GeometryData__init(robocup_ssl_msgs__msg__GeometryData * msg)
{
  if (!msg) {
    return false;
  }
  // field
  if (!robocup_ssl_msgs__msg__GeometryFieldSize__init(&msg->field)) {
    robocup_ssl_msgs__msg__GeometryData__fini(msg);
    return false;
  }
  // calib
  if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__init(&msg->calib, 0)) {
    robocup_ssl_msgs__msg__GeometryData__fini(msg);
    return false;
  }
  // models
  if (!robocup_ssl_msgs__msg__GeometryModels__Sequence__init(&msg->models, 0)) {
    robocup_ssl_msgs__msg__GeometryData__fini(msg);
    return false;
  }
  return true;
}

void
robocup_ssl_msgs__msg__GeometryData__fini(robocup_ssl_msgs__msg__GeometryData * msg)
{
  if (!msg) {
    return;
  }
  // field
  robocup_ssl_msgs__msg__GeometryFieldSize__fini(&msg->field);
  // calib
  robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__fini(&msg->calib);
  // models
  robocup_ssl_msgs__msg__GeometryModels__Sequence__fini(&msg->models);
}

bool
robocup_ssl_msgs__msg__GeometryData__are_equal(const robocup_ssl_msgs__msg__GeometryData * lhs, const robocup_ssl_msgs__msg__GeometryData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // field
  if (!robocup_ssl_msgs__msg__GeometryFieldSize__are_equal(
      &(lhs->field), &(rhs->field)))
  {
    return false;
  }
  // calib
  if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__are_equal(
      &(lhs->calib), &(rhs->calib)))
  {
    return false;
  }
  // models
  if (!robocup_ssl_msgs__msg__GeometryModels__Sequence__are_equal(
      &(lhs->models), &(rhs->models)))
  {
    return false;
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryData__copy(
  const robocup_ssl_msgs__msg__GeometryData * input,
  robocup_ssl_msgs__msg__GeometryData * output)
{
  if (!input || !output) {
    return false;
  }
  // field
  if (!robocup_ssl_msgs__msg__GeometryFieldSize__copy(
      &(input->field), &(output->field)))
  {
    return false;
  }
  // calib
  if (!robocup_ssl_msgs__msg__GeometryCameraCalibration__Sequence__copy(
      &(input->calib), &(output->calib)))
  {
    return false;
  }
  // models
  if (!robocup_ssl_msgs__msg__GeometryModels__Sequence__copy(
      &(input->models), &(output->models)))
  {
    return false;
  }
  return true;
}

robocup_ssl_msgs__msg__GeometryData *
robocup_ssl_msgs__msg__GeometryData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryData * msg = (robocup_ssl_msgs__msg__GeometryData *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocup_ssl_msgs__msg__GeometryData));
  bool success = robocup_ssl_msgs__msg__GeometryData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocup_ssl_msgs__msg__GeometryData__destroy(robocup_ssl_msgs__msg__GeometryData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocup_ssl_msgs__msg__GeometryData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocup_ssl_msgs__msg__GeometryData__Sequence__init(robocup_ssl_msgs__msg__GeometryData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryData * data = NULL;

  if (size) {
    data = (robocup_ssl_msgs__msg__GeometryData *)allocator.zero_allocate(size, sizeof(robocup_ssl_msgs__msg__GeometryData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocup_ssl_msgs__msg__GeometryData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocup_ssl_msgs__msg__GeometryData__fini(&data[i - 1]);
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
robocup_ssl_msgs__msg__GeometryData__Sequence__fini(robocup_ssl_msgs__msg__GeometryData__Sequence * array)
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
      robocup_ssl_msgs__msg__GeometryData__fini(&array->data[i]);
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

robocup_ssl_msgs__msg__GeometryData__Sequence *
robocup_ssl_msgs__msg__GeometryData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocup_ssl_msgs__msg__GeometryData__Sequence * array = (robocup_ssl_msgs__msg__GeometryData__Sequence *)allocator.allocate(sizeof(robocup_ssl_msgs__msg__GeometryData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocup_ssl_msgs__msg__GeometryData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocup_ssl_msgs__msg__GeometryData__Sequence__destroy(robocup_ssl_msgs__msg__GeometryData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocup_ssl_msgs__msg__GeometryData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocup_ssl_msgs__msg__GeometryData__Sequence__are_equal(const robocup_ssl_msgs__msg__GeometryData__Sequence * lhs, const robocup_ssl_msgs__msg__GeometryData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocup_ssl_msgs__msg__GeometryData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocup_ssl_msgs__msg__GeometryData__Sequence__copy(
  const robocup_ssl_msgs__msg__GeometryData__Sequence * input,
  robocup_ssl_msgs__msg__GeometryData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocup_ssl_msgs__msg__GeometryData);
    robocup_ssl_msgs__msg__GeometryData * data =
      (robocup_ssl_msgs__msg__GeometryData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocup_ssl_msgs__msg__GeometryData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robocup_ssl_msgs__msg__GeometryData__fini(&data[i]);
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
    if (!robocup_ssl_msgs__msg__GeometryData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
