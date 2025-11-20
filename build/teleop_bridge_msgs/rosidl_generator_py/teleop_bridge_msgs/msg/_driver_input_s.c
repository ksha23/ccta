// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from teleop_bridge_msgs:msg/DriverInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "teleop_bridge_msgs/msg/detail/driver_input__struct.h"
#include "teleop_bridge_msgs/msg/detail/driver_input__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool teleop_bridge_msgs__msg__driver_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("teleop_bridge_msgs.msg._driver_input.DriverInput", full_classname_dest, 48) == 0);
  }
  teleop_bridge_msgs__msg__DriverInput * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // auto_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // braking
    PyObject * field = PyObject_GetAttrString(_pymsg, "braking");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->braking = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // raw_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_steering");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->raw_steering = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // raw_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->raw_throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // raw_braking
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_braking");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->raw_braking = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * teleop_bridge_msgs__msg__driver_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DriverInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("teleop_bridge_msgs.msg._driver_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DriverInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  teleop_bridge_msgs__msg__DriverInput * ros_message = (teleop_bridge_msgs__msg__DriverInput *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braking
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->braking);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_steering
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->raw_steering);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_steering", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->raw_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_braking
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->raw_braking);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_braking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
