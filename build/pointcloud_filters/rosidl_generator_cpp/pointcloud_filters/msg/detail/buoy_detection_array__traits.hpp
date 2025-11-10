// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pointcloud_filters:msg/BuoyDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__TRAITS_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pointcloud_filters/msg/detail/buoy_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "pointcloud_filters/msg/detail/buoy_detection__traits.hpp"

namespace pointcloud_filters
{

namespace msg
{

inline void to_flow_style_yaml(
  const BuoyDetectionArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BuoyDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuoyDetectionArray & msg, bool use_flow_style = false)
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
  const pointcloud_filters::msg::BuoyDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  pointcloud_filters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pointcloud_filters::msg::to_yaml() instead")]]
inline std::string to_yaml(const pointcloud_filters::msg::BuoyDetectionArray & msg)
{
  return pointcloud_filters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pointcloud_filters::msg::BuoyDetectionArray>()
{
  return "pointcloud_filters::msg::BuoyDetectionArray";
}

template<>
inline const char * name<pointcloud_filters::msg::BuoyDetectionArray>()
{
  return "pointcloud_filters/msg/BuoyDetectionArray";
}

template<>
struct has_fixed_size<pointcloud_filters::msg::BuoyDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pointcloud_filters::msg::BuoyDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pointcloud_filters::msg::BuoyDetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION_ARRAY__TRAITS_HPP_
