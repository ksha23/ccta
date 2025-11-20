// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicle __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicle __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedVehicle_
{
  using Type = TrackedVehicle_<ContainerAllocator>;

  explicit TrackedVehicle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->label = "";
      this->active = false;
    }
  }

  explicit TrackedVehicle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    label(_alloc),
    pose(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->label = "";
      this->active = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _id_type =
    uint32_t;
  _id_type id;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _active_type =
    bool;
  _active_type active;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicle
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__TrackedVehicle
    std::shared_ptr<teleop_bridge_msgs::msg::TrackedVehicle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedVehicle_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedVehicle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedVehicle_

// alias to use template instance with default allocator
using TrackedVehicle =
  teleop_bridge_msgs::msg::TrackedVehicle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE__STRUCT_HPP_
