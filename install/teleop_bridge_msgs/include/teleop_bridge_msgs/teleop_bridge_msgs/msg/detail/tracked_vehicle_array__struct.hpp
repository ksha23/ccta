// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle_array.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'vehicles'
#include "teleop_bridge_msgs/msg/detail/tracked_vehicle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicleArray __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicleArray __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedVehicleArray_
{
  using Type = TrackedVehicleArray_<ContainerAllocator>;

  explicit TrackedVehicleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit TrackedVehicleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _vehicles_type =
    std::vector<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>>;
  _vehicles_type vehicles;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__vehicles(
    const std::vector<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>> & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicleArray
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicleArray
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedVehicleArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedVehicleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedVehicleArray_

// alias to use template instance with default allocator
using TrackedVehicleArray =
  teleop_bridge_msgs::msg::TrackedVehicleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__STRUCT_HPP_
