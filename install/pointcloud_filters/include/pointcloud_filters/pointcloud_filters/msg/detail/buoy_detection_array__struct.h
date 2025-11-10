// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__STRUCT_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__STRUCT_H_

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
// Member 'detections'
#include "pointcloud_filters/msg/detail/buoy_detection__struct.h"

/// Struct defined in msg/BuoyDetectionArray in the package pointcloud_filters.
/**
  * Array of buoy detections from a single LiDAR scan
 */
typedef struct pointcloud_filters__msg__BuoyDetectionArray
{
  std_msgs__msg__Header header;
  pointcloud_filters__msg__BuoyDetection__Sequence detections;
} pointcloud_filters__msg__BuoyDetectionArray;

// Struct for a sequence of pointcloud_filters__msg__BuoyDetectionArray.
typedef struct pointcloud_filters__msg__BuoyDetectionArray__Sequence
{
  pointcloud_filters__msg__BuoyDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pointcloud_filters__msg__BuoyDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__STRUCT_H_
