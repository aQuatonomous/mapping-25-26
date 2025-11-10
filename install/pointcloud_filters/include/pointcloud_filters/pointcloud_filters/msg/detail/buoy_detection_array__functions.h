// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__FUNCTIONS_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pointcloud_filters/msg/rosidl_generator_c__visibility_control.h"

#include "pointcloud_filters/msg/detail/buoy_detection_array__struct.h"

/// Initialize msg/BuoyDetectionArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pointcloud_filters__msg__BuoyDetectionArray
 * )) before or use
 * pointcloud_filters__msg__BuoyDetectionArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetectionArray__init(pointcloud_filters__msg__BuoyDetectionArray * msg);

/// Finalize msg/BuoyDetectionArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetectionArray__fini(pointcloud_filters__msg__BuoyDetectionArray * msg);

/// Create msg/BuoyDetectionArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pointcloud_filters__msg__BuoyDetectionArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__BuoyDetectionArray *
pointcloud_filters__msg__BuoyDetectionArray__create();

/// Destroy msg/BuoyDetectionArray message.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetectionArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetectionArray__destroy(pointcloud_filters__msg__BuoyDetectionArray * msg);

/// Check for msg/BuoyDetectionArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetectionArray__are_equal(const pointcloud_filters__msg__BuoyDetectionArray * lhs, const pointcloud_filters__msg__BuoyDetectionArray * rhs);

/// Copy a msg/BuoyDetectionArray message.
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
pointcloud_filters__msg__BuoyDetectionArray__copy(
  const pointcloud_filters__msg__BuoyDetectionArray * input,
  pointcloud_filters__msg__BuoyDetectionArray * output);

/// Initialize array of msg/BuoyDetectionArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * pointcloud_filters__msg__BuoyDetectionArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetectionArray__Sequence__init(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array, size_t size);

/// Finalize array of msg/BuoyDetectionArray messages.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetectionArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetectionArray__Sequence__fini(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array);

/// Create array of msg/BuoyDetectionArray messages.
/**
 * It allocates the memory for the array and calls
 * pointcloud_filters__msg__BuoyDetectionArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__BuoyDetectionArray__Sequence *
pointcloud_filters__msg__BuoyDetectionArray__Sequence__create(size_t size);

/// Destroy array of msg/BuoyDetectionArray messages.
/**
 * It calls
 * pointcloud_filters__msg__BuoyDetectionArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__BuoyDetectionArray__Sequence__destroy(pointcloud_filters__msg__BuoyDetectionArray__Sequence * array);

/// Check for msg/BuoyDetectionArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__BuoyDetectionArray__Sequence__are_equal(const pointcloud_filters__msg__BuoyDetectionArray__Sequence * lhs, const pointcloud_filters__msg__BuoyDetectionArray__Sequence * rhs);

/// Copy an array of msg/BuoyDetectionArray messages.
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
pointcloud_filters__msg__BuoyDetectionArray__Sequence__copy(
  const pointcloud_filters__msg__BuoyDetectionArray__Sequence * input,
  pointcloud_filters__msg__BuoyDetectionArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__FUNCTIONS_H_
