// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pointcloud_filters/msg/detail/buoy_detection_array__rosidl_typesupport_introspection_c.h"
#include "pointcloud_filters/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pointcloud_filters/msg/detail/buoy_detection_array__functions.h"
#include "pointcloud_filters/msg/detail/buoy_detection_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "pointcloud_filters/msg/buoy_detection.h"
// Member `detections`
#include "pointcloud_filters/msg/detail/buoy_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pointcloud_filters__msg__BuoyDetectionArray__init(message_memory);
}

void pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_fini_function(void * message_memory)
{
  pointcloud_filters__msg__BuoyDetectionArray__fini(message_memory);
}

size_t pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__size_function__BuoyDetectionArray__detections(
  const void * untyped_member)
{
  const pointcloud_filters__msg__BuoyDetection__Sequence * member =
    (const pointcloud_filters__msg__BuoyDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_const_function__BuoyDetectionArray__detections(
  const void * untyped_member, size_t index)
{
  const pointcloud_filters__msg__BuoyDetection__Sequence * member =
    (const pointcloud_filters__msg__BuoyDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_function__BuoyDetectionArray__detections(
  void * untyped_member, size_t index)
{
  pointcloud_filters__msg__BuoyDetection__Sequence * member =
    (pointcloud_filters__msg__BuoyDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__fetch_function__BuoyDetectionArray__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pointcloud_filters__msg__BuoyDetection * item =
    ((const pointcloud_filters__msg__BuoyDetection *)
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_const_function__BuoyDetectionArray__detections(untyped_member, index));
  pointcloud_filters__msg__BuoyDetection * value =
    (pointcloud_filters__msg__BuoyDetection *)(untyped_value);
  *value = *item;
}

void pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__assign_function__BuoyDetectionArray__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pointcloud_filters__msg__BuoyDetection * item =
    ((pointcloud_filters__msg__BuoyDetection *)
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_function__BuoyDetectionArray__detections(untyped_member, index));
  const pointcloud_filters__msg__BuoyDetection * value =
    (const pointcloud_filters__msg__BuoyDetection *)(untyped_value);
  *item = *value;
}

bool pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__resize_function__BuoyDetectionArray__detections(
  void * untyped_member, size_t size)
{
  pointcloud_filters__msg__BuoyDetection__Sequence * member =
    (pointcloud_filters__msg__BuoyDetection__Sequence *)(untyped_member);
  pointcloud_filters__msg__BuoyDetection__Sequence__fini(member);
  return pointcloud_filters__msg__BuoyDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters__msg__BuoyDetectionArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters__msg__BuoyDetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__size_function__BuoyDetectionArray__detections,  // size() function pointer
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_const_function__BuoyDetectionArray__detections,  // get_const(index) function pointer
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__get_function__BuoyDetectionArray__detections,  // get(index) function pointer
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__fetch_function__BuoyDetectionArray__detections,  // fetch(index, &value) function pointer
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__assign_function__BuoyDetectionArray__detections,  // assign(index, value) function pointer
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__resize_function__BuoyDetectionArray__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_members = {
  "pointcloud_filters__msg",  // message namespace
  "BuoyDetectionArray",  // message name
  2,  // number of fields
  sizeof(pointcloud_filters__msg__BuoyDetectionArray),
  pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_member_array,  // message members
  pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_type_support_handle = {
  0,
  &pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pointcloud_filters
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pointcloud_filters, msg, BuoyDetectionArray)() {
  pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pointcloud_filters, msg, BuoyDetection)();
  if (!pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_type_support_handle.typesupport_identifier) {
    pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pointcloud_filters__msg__BuoyDetectionArray__rosidl_typesupport_introspection_c__BuoyDetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
