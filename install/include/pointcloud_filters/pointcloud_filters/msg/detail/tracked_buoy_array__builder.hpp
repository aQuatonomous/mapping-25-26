// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__BUILDER_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pointcloud_filters/msg/detail/tracked_buoy_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pointcloud_filters
{

namespace msg
{

namespace builder
{

class Init_TrackedBuoyArray_buoys
{
public:
  explicit Init_TrackedBuoyArray_buoys(::pointcloud_filters::msg::TrackedBuoyArray & msg)
  : msg_(msg)
  {}
  ::pointcloud_filters::msg::TrackedBuoyArray buoys(::pointcloud_filters::msg::TrackedBuoyArray::_buoys_type arg)
  {
    msg_.buoys = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoyArray msg_;
};

class Init_TrackedBuoyArray_header
{
public:
  Init_TrackedBuoyArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedBuoyArray_buoys header(::pointcloud_filters::msg::TrackedBuoyArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedBuoyArray_buoys(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoyArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pointcloud_filters::msg::TrackedBuoyArray>()
{
  return pointcloud_filters::msg::builder::Init_TrackedBuoyArray_header();
}

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__BUILDER_HPP_
