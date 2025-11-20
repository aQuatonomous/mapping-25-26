# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pointcloud_filters:msg/TrackedBuoy.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedBuoy(type):
    """Metaclass of message 'TrackedBuoy'."""

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
            module = import_type_support('pointcloud_filters')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pointcloud_filters.msg.TrackedBuoy')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_buoy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_buoy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_buoy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_buoy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_buoy

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


class TrackedBuoy(metaclass=Metaclass_TrackedBuoy):
    """Message class 'TrackedBuoy'."""

    __slots__ = [
        '_id',
        '_range',
        '_bearing',
        '_x',
        '_y',
        '_z_mean',
        '_color',
        '_confidence',
        '_observation_count',
        '_first_seen',
        '_last_seen',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'range': 'float',
        'bearing': 'float',
        'x': 'float',
        'y': 'float',
        'z_mean': 'float',
        'color': 'string',
        'confidence': 'float',
        'observation_count': 'uint32',
        'first_seen': 'builtin_interfaces/Time',
        'last_seen': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.range = kwargs.get('range', float())
        self.bearing = kwargs.get('bearing', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z_mean = kwargs.get('z_mean', float())
        self.color = kwargs.get('color', str())
        self.confidence = kwargs.get('confidence', float())
        self.observation_count = kwargs.get('observation_count', int())
        from builtin_interfaces.msg import Time
        self.first_seen = kwargs.get('first_seen', Time())
        from builtin_interfaces.msg import Time
        self.last_seen = kwargs.get('last_seen', Time())

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
        if self.id != other.id:
            return False
        if self.range != other.range:
            return False
        if self.bearing != other.bearing:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z_mean != other.z_mean:
            return False
        if self.color != other.color:
            return False
        if self.confidence != other.confidence:
            return False
        if self.observation_count != other.observation_count:
            return False
        if self.first_seen != other.first_seen:
            return False
        if self.last_seen != other.last_seen:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value

    @builtins.property
    def bearing(self):
        """Message field 'bearing'."""
        return self._bearing

    @bearing.setter
    def bearing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bearing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bearing = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z_mean(self):
        """Message field 'z_mean'."""
        return self._z_mean

    @z_mean.setter
    def z_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_mean = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color' field must be of type 'str'"
        self._color = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def observation_count(self):
        """Message field 'observation_count'."""
        return self._observation_count

    @observation_count.setter
    def observation_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'observation_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'observation_count' field must be an unsigned integer in [0, 4294967295]"
        self._observation_count = value

    @builtins.property
    def first_seen(self):
        """Message field 'first_seen'."""
        return self._first_seen

    @first_seen.setter
    def first_seen(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'first_seen' field must be a sub message of type 'Time'"
        self._first_seen = value

    @builtins.property
    def last_seen(self):
        """Message field 'last_seen'."""
        return self._last_seen

    @last_seen.setter
    def last_seen(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'last_seen' field must be a sub message of type 'Time'"
        self._last_seen = value
