// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/driver_input.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__teleop_bridge_msgs__msg__DriverInput __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__DriverInput __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriverInput_
{
  using Type = DriverInput_<ContainerAllocator>;

  explicit DriverInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_mode = false;
      this->steering = 0.0f;
      this->throttle = 0.0f;
      this->braking = 0.0f;
      this->raw_steering = 0.0f;
      this->raw_throttle = 0.0f;
      this->raw_braking = 0.0f;
    }
  }

  explicit DriverInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_mode = false;
      this->steering = 0.0f;
      this->throttle = 0.0f;
      this->braking = 0.0f;
      this->raw_steering = 0.0f;
      this->raw_throttle = 0.0f;
      this->raw_braking = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _auto_mode_type =
    bool;
  _auto_mode_type auto_mode;
  using _steering_type =
    float;
  _steering_type steering;
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _braking_type =
    float;
  _braking_type braking;
  using _raw_steering_type =
    float;
  _raw_steering_type raw_steering;
  using _raw_throttle_type =
    float;
  _raw_throttle_type raw_throttle;
  using _raw_braking_type =
    float;
  _raw_braking_type raw_braking;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__auto_mode(
    const bool & _arg)
  {
    this->auto_mode = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__braking(
    const float & _arg)
  {
    this->braking = _arg;
    return *this;
  }
  Type & set__raw_steering(
    const float & _arg)
  {
    this->raw_steering = _arg;
    return *this;
  }
  Type & set__raw_throttle(
    const float & _arg)
  {
    this->raw_throttle = _arg;
    return *this;
  }
  Type & set__raw_braking(
    const float & _arg)
  {
    this->raw_braking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__DriverInput
    std::shared_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__DriverInput
    std::shared_ptr<teleop_bridge_msgs::msg::DriverInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriverInput_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->auto_mode != other.auto_mode) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->braking != other.braking) {
      return false;
    }
    if (this->raw_steering != other.raw_steering) {
      return false;
    }
    if (this->raw_throttle != other.raw_throttle) {
      return false;
    }
    if (this->raw_braking != other.raw_braking) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriverInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriverInput_

// alias to use template instance with default allocator
using DriverInput =
  teleop_bridge_msgs::msg::DriverInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__DRIVER_INPUT__STRUCT_HPP_
