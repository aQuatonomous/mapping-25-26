// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pointcloud_filters/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pointcloud_filters/msg/detail/tracked_buoy_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pointcloud_filters
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud_filters
cdr_serialize(
  const pointcloud_filters::msg::TrackedBuoyArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud_filters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pointcloud_filters::msg::TrackedBuoyArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud_filters
get_serialized_size(
  const pointcloud_filters::msg::TrackedBuoyArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud_filters
max_serialized_size_TrackedBuoyArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pointcloud_filters

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud_filters
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pointcloud_filters, msg, TrackedBuoyArray)();

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
