// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pointcloud_filters:msg/TrackedBuoyArray.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_HPP_
#define POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'buoys'
#include "pointcloud_filters/msg/detail/tracked_buoy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pointcloud_filters__msg__TrackedBuoyArray __attribute__((deprecated))
#else
# define DEPRECATED__pointcloud_filters__msg__TrackedBuoyArray __declspec(deprecated)
#endif

namespace pointcloud_filters
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedBuoyArray_
{
  using Type = TrackedBuoyArray_<ContainerAllocator>;

  explicit TrackedBuoyArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrackedBuoyArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _buoys_type =
    std::vector<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>>;
  _buoys_type buoys;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__buoys(
    const std::vector<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pointcloud_filters::msg::TrackedBuoy_<ContainerAllocator>>> & _arg)
  {
    this->buoys = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pointcloud_filters__msg__TrackedBuoyArray
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pointcloud_filters__msg__TrackedBuoyArray
    std::shared_ptr<pointcloud_filters::msg::TrackedBuoyArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedBuoyArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->buoys != other.buoys) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedBuoyArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedBuoyArray_

// alias to use template instance with default allocator
using TrackedBuoyArray =
  pointcloud_filters::msg::TrackedBuoyArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pointcloud_filters

#endif  // POINTCLOUD_FILTERS__MSG__DETAIL__TRACKED_BUOY_ARRAY__STRUCT_HPP_
