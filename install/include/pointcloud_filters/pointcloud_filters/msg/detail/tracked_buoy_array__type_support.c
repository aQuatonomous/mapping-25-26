// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pointcloud_filters/msg/detail/tracked_buoy_array__rosidl_typesupport_introspection_c.h"
#include "pointcloud_filters/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pointcloud_filters/msg/detail/tracked_buoy_array__functions.h"
#include "pointcloud_filters/msg/detail/tracked_buoy_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `buoys`
#include "pointcloud_filters/msg/tracked_buoy.h"
// Member `buoys`
#include "pointcloud_filters/msg/detail/tracked_buoy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pointcloud_filters__msg__TrackedBuoyArray__init(message_memory);
}

void pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_fini_function(void * message_memory)
{
  pointcloud_filters__msg__TrackedBuoyArray__fini(message_memory);
}

size_t pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__size_function__TrackedBuoyArray__buoys(
  const void * untyped_member)
{
  const pointcloud_filters__msg__TrackedBuoy__Sequence * member =
    (const pointcloud_filters__msg__TrackedBuoy__Sequence *)(untyped_member);
  return member->size;
}

const void * pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_const_function__TrackedBuoyArray__buoys(
  const void * untyped_member, size_t index)
{
  const pointcloud_filters__msg__TrackedBuoy__Sequence * member =
    (const pointcloud_filters__msg__TrackedBuoy__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_function__TrackedBuoyArray__buoys(
  void * untyped_member, size_t index)
{
  pointcloud_filters__msg__TrackedBuoy__Sequence * member =
    (pointcloud_filters__msg__TrackedBuoy__Sequence *)(untyped_member);
  return &member->data[index];
}

void pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__fetch_function__TrackedBuoyArray__buoys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pointcloud_filters__msg__TrackedBuoy * item =
    ((const pointcloud_filters__msg__TrackedBuoy *)
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_const_function__TrackedBuoyArray__buoys(untyped_member, index));
  pointcloud_filters__msg__TrackedBuoy * value =
    (pointcloud_filters__msg__TrackedBuoy *)(untyped_value);
  *value = *item;
}

void pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__assign_function__TrackedBuoyArray__buoys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pointcloud_filters__msg__TrackedBuoy * item =
    ((pointcloud_filters__msg__TrackedBuoy *)
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_function__TrackedBuoyArray__buoys(untyped_member, index));
  const pointcloud_filters__msg__TrackedBuoy * value =
    (const pointcloud_filters__msg__TrackedBuoy *)(untyped_value);
  *item = *value;
}

bool pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__resize_function__TrackedBuoyArray__buoys(
  void * untyped_member, size_t size)
{
  pointcloud_filters__msg__TrackedBuoy__Sequence * member =
    (pointcloud_filters__msg__TrackedBuoy__Sequence *)(untyped_member);
  pointcloud_filters__msg__TrackedBuoy__Sequence__fini(member);
  return pointcloud_filters__msg__TrackedBuoy__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters__msg__TrackedBuoyArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buoys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters__msg__TrackedBuoyArray, buoys),  // bytes offset in struct
    NULL,  // default value
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__size_function__TrackedBuoyArray__buoys,  // size() function pointer
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_const_function__TrackedBuoyArray__buoys,  // get_const(index) function pointer
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__get_function__TrackedBuoyArray__buoys,  // get(index) function pointer
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__fetch_function__TrackedBuoyArray__buoys,  // fetch(index, &value) function pointer
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__assign_function__TrackedBuoyArray__buoys,  // assign(index, value) function pointer
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__resize_function__TrackedBuoyArray__buoys  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_members = {
  "pointcloud_filters__msg",  // message namespace
  "TrackedBuoyArray",  // message name
  2,  // number of fields
  sizeof(pointcloud_filters__msg__TrackedBuoyArray),
  pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_member_array,  // message members
  pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_init_function,  // function to initialize message memory (memory has to be allocated)
  pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_type_support_handle = {
  0,
  &pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pointcloud_filters
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pointcloud_filters, msg, TrackedBuoyArray)() {
  pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pointcloud_filters, msg, TrackedBuoy)();
  if (!pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_type_support_handle.typesupport_identifier) {
    pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pointcloud_filters__msg__TrackedBuoyArray__rosidl_typesupport_introspection_c__TrackedBuoyArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
