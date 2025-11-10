// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__BUILDER_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pointcloud_filters/msg/detail/buoy_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pointcloud_filters
{

namespace msg
{

namespace builder
{

class Init_BuoyDetection_confidence
{
public:
  explicit Init_BuoyDetection_confidence(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  ::pointcloud_filters::msg::BuoyDetection confidence(::pointcloud_filters::msg::BuoyDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_radial_extent
{
public:
  explicit Init_BuoyDetection_radial_extent(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  Init_BuoyDetection_confidence radial_extent(::pointcloud_filters::msg::BuoyDetection::_radial_extent_type arg)
  {
    msg_.radial_extent = std::move(arg);
    return Init_BuoyDetection_confidence(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_lateral_extent
{
public:
  explicit Init_BuoyDetection_lateral_extent(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  Init_BuoyDetection_radial_extent lateral_extent(::pointcloud_filters::msg::BuoyDetection::_lateral_extent_type arg)
  {
    msg_.lateral_extent = std::move(arg);
    return Init_BuoyDetection_radial_extent(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_num_points
{
public:
  explicit Init_BuoyDetection_num_points(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  Init_BuoyDetection_lateral_extent num_points(::pointcloud_filters::msg::BuoyDetection::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return Init_BuoyDetection_lateral_extent(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_z_mean
{
public:
  explicit Init_BuoyDetection_z_mean(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  Init_BuoyDetection_num_points z_mean(::pointcloud_filters::msg::BuoyDetection::_z_mean_type arg)
  {
    msg_.z_mean = std::move(arg);
    return Init_BuoyDetection_num_points(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_bearing
{
public:
  explicit Init_BuoyDetection_bearing(::pointcloud_filters::msg::BuoyDetection & msg)
  : msg_(msg)
  {}
  Init_BuoyDetection_z_mean bearing(::pointcloud_filters::msg::BuoyDetection::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_BuoyDetection_z_mean(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

class Init_BuoyDetection_range
{
public:
  Init_BuoyDetection_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BuoyDetection_bearing range(::pointcloud_filters::msg::BuoyDetection::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_BuoyDetection_bearing(msg_);
  }

private:
  ::pointcloud_filters::msg::BuoyDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pointcloud_filters::msg::BuoyDetection>()
{
  return pointcloud_filters::msg::builder::Init_BuoyDetection_range();
}

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__BUILDER_HPP_
