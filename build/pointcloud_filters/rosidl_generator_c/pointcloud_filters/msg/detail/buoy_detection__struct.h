// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BuoyDetection in the package pointcloud_filters.
/**
  * Single buoy detection (polar coordinates)
 */
typedef struct pointcloud_filters__msg__BuoyDetection
{
  /// Distance from boat to buoy (meters)
  float range;
  /// Angle from boat's forward axis (radians, -π to +π, CCW per REP 103)
  float bearing;
  /// Average height above base_link (meters)
  float z_mean;
  /// Number of LiDAR points in cluster
  uint32_t num_points;
  /// Bounding box diagonal (meters)
  float lateral_extent;
  /// Depth toward/away from boat (meters)
  float radial_extent;
  /// Detection quality score (0.0 to 1.0)
  float confidence;
} pointcloud_filters__msg__BuoyDetection;

// Struct for a sequence of pointcloud_filters__msg__BuoyDetection.
typedef struct pointcloud_filters__msg__BuoyDetection__Sequence
{
  pointcloud_filters__msg__BuoyDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pointcloud_filters__msg__BuoyDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_H_
