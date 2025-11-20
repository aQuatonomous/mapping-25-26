// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TrackedBuoy in the package pointcloud_filters.
/**
  * Persistent tracked buoy with stable ID and data fusion from LiDAR + vision
 */
typedef struct pointcloud_filters__msg__TrackedBuoy
{
  /// Unique persistent ID (starts at 0, increments)
  uint32_t id;
  /// Distance from sensor (meters)
  float range;
  /// Angle from sensor (radians)
  float bearing;
  /// Cartesian x position (meters)
  float x;
  /// Cartesian y position (meters)
  float y;
  /// Average z height (meters)
  float z_mean;
  /// Color from vision: "red", "green", "yellow", "unknown"
  rosidl_runtime_c__String color;
  /// Detection confidence (0.0 to 1.0)
  float confidence;
  /// Number of times this buoy has been detected
  uint32_t observation_count;
  /// Timestamp when first detected
  builtin_interfaces__msg__Time first_seen;
  /// Timestamp of most recent detection
  builtin_interfaces__msg__Time last_seen;
} pointcloud_filters__msg__TrackedBuoy;

// Struct for a sequence of pointcloud_filters__msg__TrackedBuoy.
typedef struct pointcloud_filters__msg__TrackedBuoy__Sequence
{
  pointcloud_filters__msg__TrackedBuoy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pointcloud_filters__msg__TrackedBuoy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_H_
