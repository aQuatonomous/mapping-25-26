// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice
#include "pointcloud_filters/msg/detail/tracked_buoy_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `buoys`
#include "pointcloud_filters/msg/detail/tracked_buoy__functions.h"

bool
pointcloud_filters__msg__TrackedBuoyArray__init(pointcloud_filters__msg__TrackedBuoyArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pointcloud_filters__msg__TrackedBuoyArray__fini(msg);
    return false;
  }
  // buoys
  if (!pointcloud_filters__msg__TrackedBuoy__Sequence__init(&msg->buoys, 0)) {
    pointcloud_filters__msg__TrackedBuoyArray__fini(msg);
    return false;
  }
  return true;
}

void
pointcloud_filters__msg__TrackedBuoyArray__fini(pointcloud_filters__msg__TrackedBuoyArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // buoys
  pointcloud_filters__msg__TrackedBuoy__Sequence__fini(&msg->buoys);
}

bool
pointcloud_filters__msg__TrackedBuoyArray__are_equal(const pointcloud_filters__msg__TrackedBuoyArray * lhs, const pointcloud_filters__msg__TrackedBuoyArray * rhs)
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
  // buoys
  if (!pointcloud_filters__msg__TrackedBuoy__Sequence__are_equal(
      &(lhs->buoys), &(rhs->buoys)))
  {
    return false;
  }
  return true;
}

bool
pointcloud_filters__msg__TrackedBuoyArray__copy(
  const pointcloud_filters__msg__TrackedBuoyArray * input,
  pointcloud_filters__msg__TrackedBuoyArray * output)
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
  // buoys
  if (!pointcloud_filters__msg__TrackedBuoy__Sequence__copy(
      &(input->buoys), &(output->buoys)))
  {
    return false;
  }
  return true;
}

pointcloud_filters__msg__TrackedBuoyArray *
pointcloud_filters__msg__TrackedBuoyArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoyArray * msg = (pointcloud_filters__msg__TrackedBuoyArray *)allocator.allocate(sizeof(pointcloud_filters__msg__TrackedBuoyArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pointcloud_filters__msg__TrackedBuoyArray));
  bool success = pointcloud_filters__msg__TrackedBuoyArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pointcloud_filters__msg__TrackedBuoyArray__destroy(pointcloud_filters__msg__TrackedBuoyArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pointcloud_filters__msg__TrackedBuoyArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pointcloud_filters__msg__TrackedBuoyArray__Sequence__init(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoyArray * data = NULL;

  if (size) {
    data = (pointcloud_filters__msg__TrackedBuoyArray *)allocator.zero_allocate(size, sizeof(pointcloud_filters__msg__TrackedBuoyArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pointcloud_filters__msg__TrackedBuoyArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pointcloud_filters__msg__TrackedBuoyArray__fini(&data[i - 1]);
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
pointcloud_filters__msg__TrackedBuoyArray__Sequence__fini(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array)
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
      pointcloud_filters__msg__TrackedBuoyArray__fini(&array->data[i]);
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

pointcloud_filters__msg__TrackedBuoyArray__Sequence *
pointcloud_filters__msg__TrackedBuoyArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud_filters__msg__TrackedBuoyArray__Sequence * array = (pointcloud_filters__msg__TrackedBuoyArray__Sequence *)allocator.allocate(sizeof(pointcloud_filters__msg__TrackedBuoyArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pointcloud_filters__msg__TrackedBuoyArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pointcloud_filters__msg__TrackedBuoyArray__Sequence__destroy(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pointcloud_filters__msg__TrackedBuoyArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pointcloud_filters__msg__TrackedBuoyArray__Sequence__are_equal(const pointcloud_filters__msg__TrackedBuoyArray__Sequence * lhs, const pointcloud_filters__msg__TrackedBuoyArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pointcloud_filters__msg__TrackedBuoyArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pointcloud_filters__msg__TrackedBuoyArray__Sequence__copy(
  const pointcloud_filters__msg__TrackedBuoyArray__Sequence * input,
  pointcloud_filters__msg__TrackedBuoyArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pointcloud_filters__msg__TrackedBuoyArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pointcloud_filters__msg__TrackedBuoyArray * data =
      (pointcloud_filters__msg__TrackedBuoyArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pointcloud_filters__msg__TrackedBuoyArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pointcloud_filters__msg__TrackedBuoyArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pointcloud_filters__msg__TrackedBuoyArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
