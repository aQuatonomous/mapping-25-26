// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__BUILDER_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pointcloud_filters/msg/detail/tracked_buoy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pointcloud_filters
{

namespace msg
{

namespace builder
{

class Init_TrackedBuoy_last_seen
{
public:
  explicit Init_TrackedBuoy_last_seen(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  ::pointcloud_filters::msg::TrackedBuoy last_seen(::pointcloud_filters::msg::TrackedBuoy::_last_seen_type arg)
  {
    msg_.last_seen = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_first_seen
{
public:
  explicit Init_TrackedBuoy_first_seen(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_last_seen first_seen(::pointcloud_filters::msg::TrackedBuoy::_first_seen_type arg)
  {
    msg_.first_seen = std::move(arg);
    return Init_TrackedBuoy_last_seen(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_observation_count
{
public:
  explicit Init_TrackedBuoy_observation_count(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_first_seen observation_count(::pointcloud_filters::msg::TrackedBuoy::_observation_count_type arg)
  {
    msg_.observation_count = std::move(arg);
    return Init_TrackedBuoy_first_seen(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_confidence
{
public:
  explicit Init_TrackedBuoy_confidence(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_observation_count confidence(::pointcloud_filters::msg::TrackedBuoy::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TrackedBuoy_observation_count(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_color
{
public:
  explicit Init_TrackedBuoy_color(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_confidence color(::pointcloud_filters::msg::TrackedBuoy::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrackedBuoy_confidence(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_z_mean
{
public:
  explicit Init_TrackedBuoy_z_mean(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_color z_mean(::pointcloud_filters::msg::TrackedBuoy::_z_mean_type arg)
  {
    msg_.z_mean = std::move(arg);
    return Init_TrackedBuoy_color(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_y
{
public:
  explicit Init_TrackedBuoy_y(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_z_mean y(::pointcloud_filters::msg::TrackedBuoy::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrackedBuoy_z_mean(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_x
{
public:
  explicit Init_TrackedBuoy_x(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_y x(::pointcloud_filters::msg::TrackedBuoy::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrackedBuoy_y(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_bearing
{
public:
  explicit Init_TrackedBuoy_bearing(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_x bearing(::pointcloud_filters::msg::TrackedBuoy::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_TrackedBuoy_x(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_range
{
public:
  explicit Init_TrackedBuoy_range(::pointcloud_filters::msg::TrackedBuoy & msg)
  : msg_(msg)
  {}
  Init_TrackedBuoy_bearing range(::pointcloud_filters::msg::TrackedBuoy::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_TrackedBuoy_bearing(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

class Init_TrackedBuoy_id
{
public:
  Init_TrackedBuoy_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedBuoy_range id(::pointcloud_filters::msg::TrackedBuoy::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrackedBuoy_range(msg_);
  }

private:
  ::pointcloud_filters::msg::TrackedBuoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pointcloud_filters::msg::TrackedBuoy>()
{
  return pointcloud_filters::msg::builder::Init_TrackedBuoy_id();
}

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__BUILDER_HPP_
