# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/WheelVelocityCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelVelocityCommand(type):
    """Metaclass of message 'WheelVelocityCommand'."""

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
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.msg.WheelVelocityCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_velocity_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_velocity_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_velocity_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_velocity_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_velocity_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WheelVelocityCommand(metaclass=Metaclass_WheelVelocityCommand):
    """Message class 'WheelVelocityCommand'."""

    __slots__ = [
        '_v_rf',
        '_v_lf',
        '_v_rb',
        '_v_lb',
    ]

    _fields_and_field_types = {
        'v_rf': 'double',
        'v_lf': 'double',
        'v_rb': 'double',
        'v_lb': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.v_rf = kwargs.get('v_rf', float())
        self.v_lf = kwargs.get('v_lf', float())
        self.v_rb = kwargs.get('v_rb', float())
        self.v_lb = kwargs.get('v_lb', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.v_rf != other.v_rf:
            return False
        if self.v_lf != other.v_lf:
            return False
        if self.v_rb != other.v_rb:
            return False
        if self.v_lb != other.v_lb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def v_rf(self):
        """Message field 'v_rf'."""
        return self._v_rf

    @v_rf.setter
    def v_rf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_rf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_rf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_rf = value

    @builtins.property
    def v_lf(self):
        """Message field 'v_lf'."""
        return self._v_lf

    @v_lf.setter
    def v_lf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_lf' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_lf' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_lf = value

    @builtins.property
    def v_rb(self):
        """Message field 'v_rb'."""
        return self._v_rb

    @v_rb.setter
    def v_rb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_rb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_rb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_rb = value

    @builtins.property
    def v_lb(self):
        """Message field 'v_lb'."""
        return self._v_lb

    @v_lb.setter
    def v_lb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_lb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_lb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_lb = value
