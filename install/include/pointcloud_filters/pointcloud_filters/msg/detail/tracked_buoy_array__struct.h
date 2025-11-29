// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'buoys'
#include "pointcloud_filters/msg/detail/tracked_buoy__struct.h"

/// Struct defined in msg/TrackedBuoyArray in the package pointcloud_filters.
/**
  * Array of tracked buoys with stable IDs
 */
typedef struct pointcloud_filters__msg__TrackedBuoyArray
{
  std_msgs__msg__Header header;
  pointcloud_filters__msg__TrackedBuoy__Sequence buoys;
} pointcloud_filters__msg__TrackedBuoyArray;

// Struct for a sequence of pointcloud_filters__msg__TrackedBuoyArray.
typedef struct pointcloud_filters__msg__TrackedBuoyArray__Sequence
{
  pointcloud_filters__msg__TrackedBuoyArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pointcloud_filters__msg__TrackedBuoyArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_H_
