// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/EgoState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/ego_state.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__STRUCT_HPP_

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
# define DEPRECATED__teleop_bridge_msgs__msg__EgoState __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__EgoState __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoState_
{
  using Type = EgoState_<ContainerAllocator>;

  explicit EgoState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steering = 0.0f;
      this->beta = 0.0f;
    }
  }

  explicit EgoState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steering = 0.0f;
      this->beta = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _speed_type =
    float;
  _speed_type speed;
  using _steering_type =
    float;
  _steering_type steering;
  using _beta_type =
    float;
  _beta_type beta;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
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
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__beta(
    const float & _arg)
  {
    this->beta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__EgoState
    std::shared_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__EgoState
    std::shared_ptr<teleop_bridge_msgs::msg::EgoState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->beta != other.beta) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoState_

// alias to use template instance with default allocator
using EgoState =
  teleop_bridge_msgs::msg::EgoState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__EGO_STATE__STRUCT_HPP_
