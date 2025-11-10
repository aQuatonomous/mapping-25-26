// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__BUILDER_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pointcloud_filters/msg/detail/buoy_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pointcloud_filters
{

namespace msg
{

namespace builder
{

class Init_BuoyDetectionArray_detections
{
public:
  explicit Init_BuoyDetectionArray_detections(::pointcloud_filters::msg::BuoyDetectionArray & msg)
  : msg_(msg)
  {}
  ::pointcloud_filters::msg::BuoyDetectionArray detections(::pointcloud_filters::msg::BuoyDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetectionArray msg_;
};

class Init_BuoyDetectionArray_header
{
public:
  Init_BuoyDetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BuoyDetectionArray_detections header(::pointcloud_filters::msg::BuoyDetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BuoyDetectionArray_detections(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pointcloud_filters::msg::BuoyDetectionArray>()
{
  return pointcloud_filters::msg::builder::Init_BuoyDetectionArray_header();
}

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__BUILDER_HPP_
