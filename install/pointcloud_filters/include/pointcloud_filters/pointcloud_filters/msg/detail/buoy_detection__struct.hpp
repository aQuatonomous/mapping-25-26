// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pointcloud_filters:msg/BuoyDetection.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pointcloud_filters__msg__BuoyDetection __attribute__((deprecated))
#else
# define DEPRECATED__pointcloud_filters__msg__BuoyDetection __declspec(deprecated)
#endif

namespace pointcloud_filters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BuoyDetection_
{
  using Type = BuoyDetection_<ContainerAllocator>;

  explicit BuoyDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->z_mean = 0.0f;
      this->num_points = 0ul;
      this->lateral_extent = 0.0f;
      this->radial_extent = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit BuoyDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->bearing = 0.0f;
      this->z_mean = 0.0f;
      this->num_points = 0ul;
      this->lateral_extent = 0.0f;
      this->radial_extent = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _range_type =
    float;
  _range_type range;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _z_mean_type =
    float;
  _z_mean_type z_mean;
  using _num_points_type =
    uint32_t;
  _num_points_type num_points;
  using _lateral_extent_type =
    float;
  _lateral_extent_type lateral_extent;
  using _radial_extent_type =
    float;
  _radial_extent_type radial_extent;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
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
  Type & set__z_mean(
    const float & _arg)
  {
    this->z_mean = _arg;
    return *this;
  }
  Type & set__num_points(
    const uint32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }
  Type & set__lateral_extent(
    const float & _arg)
  {
    this->lateral_extent = _arg;
    return *this;
  }
  Type & set__radial_extent(
    const float & _arg)
  {
    this->radial_extent = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pointcloud_filters__msg__BuoyDetection
    std::shared_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pointcloud_filters__msg__BuoyDetection
    std::shared_ptr<pointcloud_filters::msg::BuoyDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BuoyDetection_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->z_mean != other.z_mean) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    if (this->lateral_extent != other.lateral_extent) {
      return false;
    }
    if (this->radial_extent != other.radial_extent) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const BuoyDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BuoyDetection_

// alias to use template instance with default allocator
using BuoyDetection =
  pointcloud_filters::msg::BuoyDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__BUOY_DETECTION__STRUCT_HPP_
