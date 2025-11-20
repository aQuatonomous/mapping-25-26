// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pointcloud_filters/msg/detail/tracked_buoy_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pointcloud_filters
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrackedBuoyArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pointcloud_filters::msg::TrackedBuoyArray(_init);
}

void TrackedBuoyArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pointcloud_filters::msg::TrackedBuoyArray *>(message_memory);
  typed_message->~TrackedBuoyArray();
}

size_t size_function__TrackedBuoyArray__buoys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pointcloud_filters::msg::TrackedBuoy> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedBuoyArray__buoys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pointcloud_filters::msg::TrackedBuoy> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedBuoyArray__buoys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pointcloud_filters::msg::TrackedBuoy> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrackedBuoyArray__buoys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pointcloud_filters::msg::TrackedBuoy *>(
    get_const_function__TrackedBuoyArray__buoys(untyped_member, index));
  auto & value = *reinterpret_cast<pointcloud_filters::msg::TrackedBuoy *>(untyped_value);
  value = item;
}

void assign_function__TrackedBuoyArray__buoys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pointcloud_filters::msg::TrackedBuoy *>(
    get_function__TrackedBuoyArray__buoys(untyped_member, index));
  const auto & value = *reinterpret_cast<const pointcloud_filters::msg::TrackedBuoy *>(untyped_value);
  item = value;
}

void resize_function__TrackedBuoyArray__buoys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pointcloud_filters::msg::TrackedBuoy> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedBuoyArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters::msg::TrackedBuoyArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buoys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pointcloud_filters::msg::TrackedBuoy>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud_filters::msg::TrackedBuoyArray, buoys),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedBuoyArray__buoys,  // size() function pointer
    get_const_function__TrackedBuoyArray__buoys,  // get_const(index) function pointer
    get_function__TrackedBuoyArray__buoys,  // get(index) function pointer
    fetch_function__TrackedBuoyArray__buoys,  // fetch(index, &value) function pointer
    assign_function__TrackedBuoyArray__buoys,  // assign(index, value) function pointer
    resize_function__TrackedBuoyArray__buoys  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedBuoyArray_message_members = {
  "pointcloud_filters::msg",  // message namespace
  "TrackedBuoyArray",  // message name
  2,  // number of fields
  sizeof(pointcloud_filters::msg::TrackedBuoyArray),
  TrackedBuoyArray_message_member_array,  // message members
  TrackedBuoyArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedBuoyArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedBuoyArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedBuoyArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pointcloud_filters


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pointcloud_filters::msg::TrackedBuoyArray>()
{
  return &::pointcloud_filters::msg::rosidl_typesupport_introspection_cpp::TrackedBuoyArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pointcloud_filters, msg, TrackedBuoyArray)() {
  return &::pointcloud_filters::msg::rosidl_typesupport_introspection_cpp::TrackedBuoyArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
