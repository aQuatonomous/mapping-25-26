// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__TRAITS_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pointcloud_filters/msg/detail/tracked_buoy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pointcloud_filters
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedBuoy & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

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

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z_mean
  {
    out << "z_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.z_mean, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: observation_count
  {
    out << "observation_count: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_count, out);
    out << ", ";
  }

  // member: first_seen
  {
    out << "first_seen: ";
    to_flow_style_yaml(msg.first_seen, out);
    out << ", ";
  }

  // member: last_seen
  {
    out << "last_seen: ";
    to_flow_style_yaml(msg.last_seen, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedBuoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
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

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
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

  // member: observation_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation_count: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_count, out);
    out << "\n";
  }

  // member: first_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_seen:\n";
    to_block_style_yaml(msg.first_seen, out, indentation + 2);
  }

  // member: last_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_seen:\n";
    to_block_style_yaml(msg.last_seen, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedBuoy & msg, bool use_flow_style = false)
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
  const pointcloud_filters::msg::TrackedBuoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  pointcloud_filters::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pointcloud_filters::msg::to_yaml() instead")]]
inline std::string to_yaml(const pointcloud_filters::msg::TrackedBuoy & msg)
{
  return pointcloud_filters::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pointcloud_filters::msg::TrackedBuoy>()
{
  return "pointcloud_filters::msg::TrackedBuoy";
}

template<>
inline const char * name<pointcloud_filters::msg::TrackedBuoy>()
{
  return "pointcloud_filters/msg/TrackedBuoy";
}

template<>
struct has_fixed_size<pointcloud_filters::msg::TrackedBuoy>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pointcloud_filters::msg::TrackedBuoy>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pointcloud_filters::msg::TrackedBuoy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__TRAITS_HPP_
