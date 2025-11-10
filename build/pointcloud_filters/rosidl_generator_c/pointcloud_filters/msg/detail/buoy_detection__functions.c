// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice
#include "pointcloud_filters/msg/detail/buoy_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pointcloud_filters__msg__BuoyDetection__init(pointcloud_filters__msg__BuoyDetection * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // bearing
  // z_mean
  // num_points
  // lateral_extent
  // radial_extent
  // confidence
  return true;
}

void
pointcloud_filters__msg__BuoyDetection__fini(pointcloud_filters__msg__BuoyDetection * msg)
{
  if (!msg) {
    return;
  }
  // range
  // bearing
  // z_mean
  // num_points
  // lateral_extent
  // radial_extent
  // confidence
}

bool
pointcloud_filters__msg__BuoyDetection__are_equal(const pointcloud_filters__msg__BuoyDetection * lhs, const pointcloud_filters__msg__BuoyDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // bearing
  if (lhs->bearing != rhs->bearing) {
    return false;
  }
  // z_mean
  if (lhs->z_mean != rhs->z_mean) {
    return false;
  }
  // num_points
  if (lhs->num_points != rhs->num_points) {
    return false;
  }
  // lateral_extent
  if (lhs->lateral_extent != rhs->lateral_extent) {
    return false;
  }
  // radial_extent
  if (lhs->radial_extent != rhs->radial_extent) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
pointcloud_filters__msg__BuoyDetection__copy(
  const pointcloud_filters__msg__BuoyDetection * input,
  pointcloud_filters__msg__BuoyDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // bearing
  output->bearing = input->bearing;
  // z_mean
  output->z_mean = input->z_mean;
  // num_points
  output->num_points = input->num_points;
  // lateral_extent
  output->lateral_extent = input->lateral_extent;
  // radial_extent
  output->radial_extent = input->radial_extent;
  // confidence
  output->confidence = input->confidence;
  return true;
}

pointcloud_filters__msg__BuoyDetection *
pointcloud_filters__msg__BuoyDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetection * msg = (pointcloud_filters__msg__BuoyDetection *)allocator.allocate(sizeof(pointcloud_filters__msg__BuoyDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pointcloud_filters__msg__BuoyDetection));
  bool success = pointcloud_filters__msg__BuoyDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pointcloud_filters__msg__BuoyDetection__destroy(pointcloud_filters__msg__BuoyDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pointcloud_filters__msg__BuoyDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pointcloud_filters__msg__BuoyDetection__Sequence__init(pointcloud_filters__msg__BuoyDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetection * data = NULL;

  if (size) {
    data = (pointcloud_filters__msg__BuoyDetection *)allocator.zero_allocate(size, sizeof(pointcloud_filters__msg__BuoyDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pointcloud_filters__msg__BuoyDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pointcloud_filters__msg__BuoyDetection__fini(&data[i - 1]);
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
pointcloud_filters__msg__BuoyDetection__Sequence__fini(pointcloud_filters__msg__BuoyDetection__Sequence * array)
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
      pointcloud_filters__msg__BuoyDetection__fini(&array->data[i]);
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

pointcloud_filters__msg__BuoyDetection__Sequence *
pointcloud_filters__msg__BuoyDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__BuoyDetection__Sequence * array = (pointcloud_filters__msg__BuoyDetection__Sequence *)allocator.allocate(sizeof(pointcloud_filters__msg__BuoyDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pointcloud_filters__msg__BuoyDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pointcloud_filters__msg__BuoyDetection__Sequence__destroy(pointcloud_filters__msg__BuoyDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pointcloud_filters__msg__BuoyDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pointcloud_filters__msg__BuoyDetection__Sequence__are_equal(const pointcloud_filters__msg__BuoyDetection__Sequence * lhs, const pointcloud_filters__msg__BuoyDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pointcloud_filters__msg__BuoyDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pointcloud_filters__msg__BuoyDetection__Sequence__copy(
  const pointcloud_filters__msg__BuoyDetection__Sequence * input,
  pointcloud_filters__msg__BuoyDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pointcloud_filters__msg__BuoyDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pointcloud_filters__msg__BuoyDetection * data =
      (pointcloud_filters__msg__BuoyDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pointcloud_filters__msg__BuoyDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pointcloud_filters__msg__BuoyDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pointcloud_filters__msg__BuoyDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
