# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_bridge_msgs:msg/DriverInput.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DriverInput(type):
    """Metaclass of message 'DriverInput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('teleop_bridge_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_bridge_msgs.msg.DriverInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driver_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driver_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driver_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driver_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driver_input

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DriverInput(metaclass=Metaclass_DriverInput):
    """Message class 'DriverInput'."""

    __slots__ = [
        '_stamp',
        '_auto_mode',
        '_steering',
        '_throttle',
        '_braking',
        '_raw_steering',
        '_raw_throttle',
        '_raw_braking',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'auto_mode': 'boolean',
        'steering': 'float',
        'throttle': 'float',
        'braking': 'float',
        'raw_steering': 'float',
        'raw_throttle': 'float',
        'raw_braking': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.auto_mode = kwargs.get('auto_mode', bool())
        self.steering = kwargs.get('steering', float())
        self.throttle = kwargs.get('throttle', float())
        self.braking = kwargs.get('braking', float())
        self.raw_steering = kwargs.get('raw_steering', float())
        self.raw_throttle = kwargs.get('raw_throttle', float())
        self.raw_braking = kwargs.get('raw_braking', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.auto_mode != other.auto_mode:
            return False
        if self.steering != other.steering:
            return False
        if self.throttle != other.throttle:
            return False
        if self.braking != other.braking:
            return False
        if self.raw_steering != other.raw_steering:
            return False
        if self.raw_throttle != other.raw_throttle:
            return False
        if self.raw_braking != other.raw_braking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def auto_mode(self):
        """Message field 'auto_mode'."""
        return self._auto_mode

    @auto_mode.setter
    def auto_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'auto_mode' field must be of type 'bool'"
        self._auto_mode = value

    @builtins.property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle = value

    @builtins.property
    def braking(self):
        """Message field 'braking'."""
        return self._braking

    @braking.setter
    def braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'braking' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'braking' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._braking = value

    @builtins.property
    def raw_steering(self):
        """Message field 'raw_steering'."""
        return self._raw_steering

    @raw_steering.setter
    def raw_steering(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'raw_steering' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'raw_steering' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._raw_steering = value

    @builtins.property
    def raw_throttle(self):
        """Message field 'raw_throttle'."""
        return self._raw_throttle

    @raw_throttle.setter
    def raw_throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'raw_throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'raw_throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._raw_throttle = value

    @builtins.property
    def raw_braking(self):
        """Message field 'raw_braking'."""
        return self._raw_braking

    @raw_braking.setter
    def raw_braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'raw_braking' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'raw_braking' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._raw_braking = value
