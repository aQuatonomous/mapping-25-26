// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__FUNCTIONS_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pointcloud_filters/msg/rosidl_generator_c__visibility_control.h"

#include "pointcloud_filters/msg/detail/buoy_detection__struct.h"

/// Initialize msg/BuoyDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pointcloud_filters__msg__BuoyDetection
 * )) before or use
 * pointcloud_filters__msg__BuoyDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__init(pointcloud_filters__msg__BuoyDetection * msg);

/// Finalize msg/BuoyDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetection__fini(pointcloud_filters__msg__BuoyDetection * msg);

/// Create msg/BuoyDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pointcloud_filters__msg__BuoyDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__BuoyDetection *
pointcloud_filters__msg__BuoyDetection__create();

/// Destroy msg/BuoyDetection message.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetection__destroy(pointcloud_filters__msg__BuoyDetection * msg);

/// Check for msg/BuoyDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__are_equal(const pointcloud_filters__msg__BuoyDetection * lhs, const pointcloud_filters__msg__BuoyDetection * rhs);

/// Copy a msg/BuoyDetection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__copy(
  const pointcloud_filters__msg__BuoyDetection * input,
  pointcloud_filters__msg__BuoyDetection * output);

/// Initialize array of msg/BuoyDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * pointcloud_filters__msg__BuoyDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__Sequence__init(pointcloud_filters__msg__BuoyDetection__Sequence * array, size_t size);

/// Finalize array of msg/BuoyDetection messages.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetection__Sequence__fini(pointcloud_filters__msg__BuoyDetection__Sequence * array);

/// Create array of msg/BuoyDetection messages.
/**
 * It allocates the memory for the array and calls
 * pointcloud_filters__msg__BuoyDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__BuoyDetection__Sequence *
pointcloud_filters__msg__BuoyDetection__Sequence__create(size_t size);

/// Destroy array of msg/BuoyDetection messages.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetection__Sequence__destroy(pointcloud_filters__msg__BuoyDetection__Sequence * array);

/// Check for msg/BuoyDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__Sequence__are_equal(const pointcloud_filters__msg__BuoyDetection__Sequence * lhs, const pointcloud_filters__msg__BuoyDetection__Sequence * rhs);

/// Copy an array of msg/BuoyDetection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetection__Sequence__copy(
  const pointcloud_filters__msg__BuoyDetection__Sequence * input,
  pointcloud_filters__msg__BuoyDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__FUNCTIONS_H_
