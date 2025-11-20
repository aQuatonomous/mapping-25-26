// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoy.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pointcloud_filters__msg__TrackedBuoy __attribute__((deprecated))
#else
# define DEPRECATED__pointcloud_filters__msg__TrackedBuoy __declspec(deprecated)
#endif

namespace pointcloud_filters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedBuoy_
{
  using Type = TrackedBuoy_<ContainerAllocator>;

  explicit TrackedBuoy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_seen(_init),
    last_seen(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z_mean = 0.0f;
      this->color = "";
      this->confidence = 0.0f;
      this->observation_count = 0ul;
    }
  }

  explicit TrackedBuoy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc),
    first_seen(_alloc, _init),
    last_seen(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z_mean = 0.0f;
      this->color = "";
      this->confidence = 0.0f;
      this->observation_count = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _range_type =
    float;
  _range_type range;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_mean_type =
    float;
  _z_mean_type z_mean;
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _observation_count_type =
    uint32_t;
  _observation_count_type observation_count;
  using _first_seen_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _first_seen_type first_seen;
  using _last_seen_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_seen_type last_seen;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z_mean(
    const float & _arg)
  {
    this->z_mean = _arg;
    return *this;
  }
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__observation_count(
    const uint32_t & _arg)
  {
    this->observation_count = _arg;
    return *this;
  }
  Type & set__first_seen(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->first_seen = _arg;
    return *this;
  }
  Type & set__last_seen(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_seen = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> *;
  using ConstRawPtr =
    const pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pointcloud_filters__msg__TrackedBuoy
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pointcloud_filters__msg__TrackedBuoy
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedBuoy_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z_mean != other.z_mean) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->observation_count != other.observation_count) {
      return false;
    }
    if (this->first_seen != other.first_seen) {
      return false;
    }
    if (this->last_seen != other.last_seen) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedBuoy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedBuoy_

// alias to use template instance with default allocator
using TrackedBuoy =
  pointcloud_filters::msg::TrackedBuoy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY__STRUCT_HPP_
