// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice
#include "pointcloud_filters/msg/detail/buoy_detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "pointcloud_filters/msg/detail/buoy_detection__functions.h"

bool
pointcloud_filters__msg__BuoyDetectionArray__init(pointcloud_filters__msg__BuoyDetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pointcloud_filters__msg__BuoyDetectionArray__fini(msg);
    return false;
  }
  // detections
  if (!pointcloud_filters__msg__BuoyDetection__Sequence__init(&msg->detections, 0)) {
    pointcloud_filters__msg__BuoyDetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
pointcloud_filters__msg__BuoyDetectionArray__fini(pointcloud_filters__msg__BuoyDetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  pointcloud_filters__msg__BuoyDetection__Sequence__fini(&msg->detections);
}

bool
pointcloud_filters__msg__BuoyDetectionArray__are_equal(const pointcloud_filters__msg__BuoyDetectionArray * lhs, const pointcloud_filters__msg__BuoyDetectionArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // detections
  if (!pointcloud_filters__msg__BuoyDetection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
pointcloud_filters__msg__BuoyDetectionArray__copy(
  const pointcloud_filters__msg__BuoyDetectionArray * input,
  pointcloud_filters__msg__BuoyDetectionArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // detections
  if (!pointcloud_filters__msg__BuoyDetection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

pointcloud_filters__msg__BuoyDetectionArray *
pointcloud_filters__msg__BuoyDetectionArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetectionArray * msg = (pointcloud_filters__msg__BuoyDetectionArray *)allocator.allocate(sizeof(pointcloud_filters__msg__BuoyDetectionArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pointcloud_filters__msg__BuoyDetectionArray));
  bool success = pointcloud_filters__msg__BuoyDetectionArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pointcloud_filters__msg__BuoyDetectionArray__destroy(pointcloud_filters__msg__BuoyDetectionArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pointcloud_filters__msg__BuoyDetectionArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pointcloud_filters__msg__BuoyDetectionArray__Sequence__init(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetectionArray * data = NULL;

  if (size) {
    data = (pointcloud_filters__msg__BuoyDetectionArray *)allocator.zero_allocate(size, sizeof(pointcloud_filters__msg__BuoyDetectionArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pointcloud_filters__msg__BuoyDetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pointcloud_filters__msg__BuoyDetectionArray__fini(&data[i - 1]);
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
pointcloud_filters__msg__BuoyDetectionArray__Sequence__fini(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array)
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
      pointcloud_filters__msg__BuoyDetectionArray__fini(&array->data[i]);
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

pointcloud_filters__msg__BuoyDetectionArray__Sequence *
pointcloud_filters__msg__BuoyDetectionArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetectionArray__Sequence * array = (pointcloud_filters__msg__BuoyDetectionArray__Sequence *)allocator.allocate(sizeof(pointcloud_filters__msg__BuoyDetectionArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pointcloud_filters__msg__BuoyDetectionArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pointcloud_filters__msg__BuoyDetectionArray__Sequence__destroy(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pointcloud_filters__msg__BuoyDetectionArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pointcloud_filters__msg__BuoyDetectionArray__Sequence__are_equal(const pointcloud_filters__msg__BuoyDetectionArray__Sequence * lhs, const pointcloud_filters__msg__BuoyDetectionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pointcloud_filters__msg__BuoyDetectionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pointcloud_filters__msg__BuoyDetectionArray__Sequence__copy(
  const pointcloud_filters__msg__BuoyDetectionArray__Sequence * input,
  pointcloud_filters__msg__BuoyDetectionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pointcloud_filters__msg__BuoyDetectionArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pointcloud_filters__msg__BuoyDetectionArray * data =
      (pointcloud_filters__msg__BuoyDetectionArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pointcloud_filters__msg__BuoyDetectionArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pointcloud_filters__msg__BuoyDetectionArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pointcloud_filters__msg__BuoyDetectionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
