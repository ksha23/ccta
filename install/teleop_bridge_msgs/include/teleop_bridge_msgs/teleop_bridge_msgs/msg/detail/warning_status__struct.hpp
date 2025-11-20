// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_bridge_msgs:msg/WarningStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/warning_status.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_HPP_

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
# define DEPRECATED__teleop_bridge_msgs__msg__WarningStatus __attribute__((deprecated))
#else
# define DEPRECATED__teleop_bridge_msgs__msg__WarningStatus __declspec(deprecated)
#endif

namespace teleop_bridge_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WarningStatus_
{
  using Type = WarningStatus_<ContainerAllocator>;

  explicit WarningStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->warning = false;
      this->score = 0.0f;
    }
  }

  explicit WarningStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->warning = false;
      this->score = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _warning_type =
    bool;
  _warning_type warning;
  using _score_type =
    float;
  _score_type score;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__warning(
    const bool & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_bridge_msgs__msg__WarningStatus
    std::shared_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_bridge_msgs__msg__WarningStatus
    std::shared_ptr<teleop_bridge_msgs::msg::WarningStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WarningStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->warning != other.warning) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const WarningStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WarningStatus_

// alias to use template instance with default allocator
using WarningStatus =
  teleop_bridge_msgs::msg::WarningStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__WARNING_STATUS__STRUCT_HPP_
