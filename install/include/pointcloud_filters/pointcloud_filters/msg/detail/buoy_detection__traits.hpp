// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__TRAITS_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pointcloud_filters/msg/detail/buoy_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pointcloud_filters
{

namespace msg
{

inline void to_flow_style_yaml(
  const BuoyDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: bearing
  {
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << ", ";
  }

  // member: z_mean
  {
    out << "z_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.z_mean, out);
    out << ", ";
  }

  // member: num_points
  {
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << ", ";
  }

  // member: lateral_extent
  {
    out << "lateral_extent: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_extent, out);
    out << ", ";
  }

  // member: radial_extent
  {
    out << "radial_extent: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_extent, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuoyDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << "\n";
  }

  // member: z_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.z_mean, out);
    out << "\n";
  }

  // member: num_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << "\n";
  }

  // member: lateral_extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_extent: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_extent, out);
    out << "\n";
  }

  // member: radial_extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radial_extent: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_extent, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuoyDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pointcloud_filters

namespace rosidl_generator_traits
{

[[deprecated("use pointcloud_filters::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pointcloud_filters::msg::BuoyDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  pointcloud_filters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pointcloud_filters::msg::to_yaml() instead")]]
inline std::string to_yaml(const pointcloud_filters::msg::BuoyDetection & msg)
{
  return pointcloud_filters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pointcloud_filters::msg::BuoyDetection>()
{
  return "pointcloud_filters::msg::BuoyDetection";
}

template<>
inline const char * name<pointcloud_filters::msg::BuoyDetection>()
{
  return "pointcloud_filters/msg/BuoyDetection";
}

template<>
struct has_fixed_size<pointcloud_filters::msg::BuoyDetection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pointcloud_filters::msg::BuoyDetection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pointcloud_filters::msg::BuoyDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__TRAITS_HPP_
