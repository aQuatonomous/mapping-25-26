// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__FUNCTIONS_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pointcloud_filters/msg/rosidl_generator_c__visibility_control.h"

#include "pointcloud_filters/msg/detail/tracked_buoy__struct.h"

/// Initialize msg/TrackedBuoy message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pointcloud_filters__msg__TrackedBuoy
 * )) before or use
 * pointcloud_filters__msg__TrackedBuoy__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoy__init(pointcloud_filters__msg__TrackedBuoy * msg);

/// Finalize msg/TrackedBuoy message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoy__fini(pointcloud_filters__msg__TrackedBuoy * msg);

/// Create msg/TrackedBuoy message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pointcloud_filters__msg__TrackedBuoy__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__TrackedBuoy *
pointcloud_filters__msg__TrackedBuoy__create();

/// Destroy msg/TrackedBuoy message.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoy__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoy__destroy(pointcloud_filters__msg__TrackedBuoy * msg);

/// Check for msg/TrackedBuoy message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoy__are_equal(const pointcloud_filters__msg__TrackedBuoy * lhs, const pointcloud_filters__msg__TrackedBuoy * rhs);

/// Copy a msg/TrackedBuoy message.
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
pointcloud_filters__msg__TrackedBuoy__copy(
  const pointcloud_filters__msg__TrackedBuoy * input,
  pointcloud_filters__msg__TrackedBuoy * output);

/// Initialize array of msg/TrackedBuoy messages.
/**
 * It allocates the memory for the number of elements and calls
 * pointcloud_filters__msg__TrackedBuoy__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoy__Sequence__init(pointcloud_filters__msg__TrackedBuoy__Sequence * array, size_t size);

/// Finalize array of msg/TrackedBuoy messages.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoy__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoy__Sequence__fini(pointcloud_filters__msg__TrackedBuoy__Sequence * array);

/// Create array of msg/TrackedBuoy messages.
/**
 * It allocates the memory for the array and calls
 * pointcloud_filters__msg__TrackedBuoy__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__TrackedBuoy__Sequence *
pointcloud_filters__msg__TrackedBuoy__Sequence__create(size_t size);

/// Destroy array of msg/TrackedBuoy messages.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoy__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoy__Sequence__destroy(pointcloud_filters__msg__TrackedBuoy__Sequence * array);

/// Check for msg/TrackedBuoy message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoy__Sequence__are_equal(const pointcloud_filters__msg__TrackedBuoy__Sequence * lhs, const pointcloud_filters__msg__TrackedBuoy__Sequence * rhs);

/// Copy an array of msg/TrackedBuoy messages.
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
pointcloud_filters__msg__TrackedBuoy__Sequence__copy(
  const pointcloud_filters__msg__TrackedBuoy__Sequence * input,
  pointcloud_filters__msg__TrackedBuoy__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__FUNCTIONS_H_
