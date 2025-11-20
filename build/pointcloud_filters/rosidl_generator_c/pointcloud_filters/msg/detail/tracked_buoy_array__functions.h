// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__FUNCTIONS_H_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pointcloud_filters/msg/rosidl_generator_c__visibility_control.h"

#include "pointcloud_filters/msg/detail/tracked_buoy_array__struct.h"

/// Initialize msg/TrackedBuoyArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pointcloud_filters__msg__TrackedBuoyArray
 * )) before or use
 * pointcloud_filters__msg__TrackedBuoyArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoyArray__init(pointcloud_filters__msg__TrackedBuoyArray * msg);

/// Finalize msg/TrackedBuoyArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoyArray__fini(pointcloud_filters__msg__TrackedBuoyArray * msg);

/// Create msg/TrackedBuoyArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pointcloud_filters__msg__TrackedBuoyArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__TrackedBuoyArray *
pointcloud_filters__msg__TrackedBuoyArray__create();

/// Destroy msg/TrackedBuoyArray message.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoyArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoyArray__destroy(pointcloud_filters__msg__TrackedBuoyArray * msg);

/// Check for msg/TrackedBuoyArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoyArray__are_equal(const pointcloud_filters__msg__TrackedBuoyArray * lhs, const pointcloud_filters__msg__TrackedBuoyArray * rhs);

/// Copy a msg/TrackedBuoyArray message.
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
pointcloud_filters__msg__TrackedBuoyArray__copy(
  const pointcloud_filters__msg__TrackedBuoyArray * input,
  pointcloud_filters__msg__TrackedBuoyArray * output);

/// Initialize array of msg/TrackedBuoyArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * pointcloud_filters__msg__TrackedBuoyArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoyArray__Sequence__init(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array, size_t size);

/// Finalize array of msg/TrackedBuoyArray messages.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoyArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoyArray__Sequence__fini(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array);

/// Create array of msg/TrackedBuoyArray messages.
/**
 * It allocates the memory for the array and calls
 * pointcloud_filters__msg__TrackedBuoyArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
pointcloud_filters__msg__TrackedBuoyArray__Sequence *
pointcloud_filters__msg__TrackedBuoyArray__Sequence__create(size_t size);

/// Destroy array of msg/TrackedBuoyArray messages.
/**
 * It calls
 * pointcloud_filters__msg__TrackedBuoyArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
void
pointcloud_filters__msg__TrackedBuoyArray__Sequence__destroy(pointcloud_filters__msg__TrackedBuoyArray__Sequence * array);

/// Check for msg/TrackedBuoyArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pointcloud_filters
bool
pointcloud_filters__msg__TrackedBuoyArray__Sequence__are_equal(const pointcloud_filters__msg__TrackedBuoyArray__Sequence * lhs, const pointcloud_filters__msg__TrackedBuoyArray__Sequence * rhs);

/// Copy an array of msg/TrackedBuoyArray messages.
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
pointcloud_filters__msg__TrackedBuoyArray__Sequence__copy(
  const pointcloud_filters__msg__TrackedBuoyArray__Sequence * input,
  pointcloud_filters__msg__TrackedBuoyArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__FUNCTIONS_H_
