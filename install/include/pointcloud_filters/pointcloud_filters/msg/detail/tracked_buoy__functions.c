// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice
#include "pointcloud_filters/msg/detail/tracked_buoy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"
// Member `first_seen`
// Member `last_seen`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pointcloud_filters__msg__TrackedBuoy__init(pointcloud_filters__msg__TrackedBuoy * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // range
  // bearing
  // x
  // y
  // z_mean
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    pointcloud_filters__msg__TrackedBuoy__fini(msg);
    return false;
  }
  // confidence
  // observation_count
  // first_seen
  if (!builtin_interfaces__msg__Time__init(&msg->first_seen)) {
    pointcloud_filters__msg__TrackedBuoy__fini(msg);
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__init(&msg->last_seen)) {
    pointcloud_filters__msg__TrackedBuoy__fini(msg);
    return false;
  }
  return true;
}

void
pointcloud_filters__msg__TrackedBuoy__fini(pointcloud_filters__msg__TrackedBuoy * msg)
{
  if (!msg) {
    return;
  }
  // id
  // range
  // bearing
  // x
  // y
  // z_mean
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // confidence
  // observation_count
  // first_seen
  builtin_interfaces__msg__Time__fini(&msg->first_seen);
  // last_seen
  builtin_interfaces__msg__Time__fini(&msg->last_seen);
}

bool
pointcloud_filters__msg__TrackedBuoy__are_equal(const pointcloud_filters__msg__TrackedBuoy * lhs, const pointcloud_filters__msg__TrackedBuoy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z_mean
  if (lhs->z_mean != rhs->z_mean) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // observation_count
  if (lhs->observation_count != rhs->observation_count) {
    return false;
  }
  // first_seen
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->first_seen), &(rhs->first_seen)))
  {
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_seen), &(rhs->last_seen)))
  {
    return false;
  }
  return true;
}

bool
pointcloud_filters__msg__TrackedBuoy__copy(
  const pointcloud_filters__msg__TrackedBuoy * input,
  pointcloud_filters__msg__TrackedBuoy * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // range
  output->range = input->range;
  // bearing
  output->bearing = input->bearing;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z_mean
  output->z_mean = input->z_mean;
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // observation_count
  output->observation_count = input->observation_count;
  // first_seen
  if (!builtin_interfaces__msg__Time__copy(
      &(input->first_seen), &(output->first_seen)))
  {
    return false;
  }
  // last_seen
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_seen), &(output->last_seen)))
  {
    return false;
  }
  return true;
}

pointcloud_filters__msg__TrackedBuoy *
pointcloud_filters__msg__TrackedBuoy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoy * msg = (pointcloud_filters__msg__TrackedBuoy *)allocator.allocate(sizeof(pointcloud_filters__msg__TrackedBuoy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pointcloud_filters__msg__TrackedBuoy));
  bool success = pointcloud_filters__msg__TrackedBuoy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pointcloud_filters__msg__TrackedBuoy__destroy(pointcloud_filters__msg__TrackedBuoy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pointcloud_filters__msg__TrackedBuoy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pointcloud_filters__msg__TrackedBuoy__Sequence__init(pointcloud_filters__msg__TrackedBuoy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoy * data = NULL;

  if (size) {
    data = (pointcloud_filters__msg__TrackedBuoy *)allocator.zero_allocate(size, sizeof(pointcloud_filters__msg__TrackedBuoy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pointcloud_filters__msg__TrackedBuoy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pointcloud_filters__msg__TrackedBuoy__fini(&data[i - 1]);
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
pointcloud_filters__msg__TrackedBuoy__Sequence__fini(pointcloud_filters__msg__TrackedBuoy__Sequence * array)
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
      pointcloud_filters__msg__TrackedBuoy__fini(&array->data[i]);
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

pointcloud_filters__msg__TrackedBuoy__Sequence *
pointcloud_filters__msg__TrackedBuoy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoy__Sequence * array = (pointcloud_filters__msg__TrackedBuoy__Sequence *)allocator.allocate(sizeof(pointcloud_filters__msg__TrackedBuoy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pointcloud_filters__msg__TrackedBuoy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pointcloud_filters__msg__TrackedBuoy__Sequence__destroy(pointcloud_filters__msg__TrackedBuoy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pointcloud_filters__msg__TrackedBuoy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pointcloud_filters__msg__TrackedBuoy__Sequence__are_equal(const pointcloud_filters__msg__TrackedBuoy__Sequence * lhs, const pointcloud_filters__msg__TrackedBuoy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pointcloud_filters__msg__TrackedBuoy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pointcloud_filters__msg__TrackedBuoy__Sequence__copy(
  const pointcloud_filters__msg__TrackedBuoy__Sequence * input,
  pointcloud_filters__msg__TrackedBuoy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pointcloud_filters__msg__TrackedBuoy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pointcloud_filters__msg__TrackedBuoy * data =
      (pointcloud_filters__msg__TrackedBuoy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pointcloud_filters__msg__TrackedBuoy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pointcloud_filters__msg__TrackedBuoy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pointcloud_filters__msg__TrackedBuoy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
