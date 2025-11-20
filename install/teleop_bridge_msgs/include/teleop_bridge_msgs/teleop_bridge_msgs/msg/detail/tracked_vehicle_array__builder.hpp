// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_bridge_msgs:msg/TrackedVehicleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "teleop_bridge_msgs/msg/tracked_vehicle_array.hpp"


#ifndef TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__BUILDER_HPP_
#define TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_bridge_msgs/msg/detail/tracked_vehicle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_bridge_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedVehicleArray_vehicles
{
public:
  explicit Init_TrackedVehicleArray_vehicles(::teleop_bridge_msgs::msg::TrackedVehicleArray & msg)
  : msg_(msg)
  {}
  ::teleop_bridge_msgs::msg::TrackedVehicleArray vehicles(::teleop_bridge_msgs::msg::TrackedVehicleArray::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicleArray msg_;
};

class Init_TrackedVehicleArray_stamp
{
public:
  Init_TrackedVehicleArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedVehicleArray_vehicles stamp(::teleop_bridge_msgs::msg::TrackedVehicleArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrackedVehicleArray_vehicles(msg_);
  }

private:
  ::teleop_bridge_msgs::msg::TrackedVehicleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_bridge_msgs::msg::TrackedVehicleArray>()
{
  return teleop_bridge_msgs::msg::builder::Init_TrackedVehicleArray_stamp();
}

}  // namespace teleop_bridge_msgs

#endif  // TELEOP_BRIDGE_MSGS__MSG__DETAIL__TRACKED_VEHICLE_ARRAY__BUILDER_HPP_
