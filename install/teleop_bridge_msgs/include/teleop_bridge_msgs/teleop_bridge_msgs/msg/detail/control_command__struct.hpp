// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/control_command.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__teleop_bridge_msgs__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__ControlCommand __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->valid = false;
    }
  }

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->valid = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _steering_type =
    float;
  _steering_type steering;
  using _valid_type =
    bool;
  _valid_type valid;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__ControlCommand
    std::shared_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__ControlCommand
    std::shared_ptr<teleop_bridge_msgs::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  teleop_bridge_msgs::msg::ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
