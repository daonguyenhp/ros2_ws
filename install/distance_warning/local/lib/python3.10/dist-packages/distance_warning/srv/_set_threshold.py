# generated from rosidl_generator_py/resource/_idl.py.em
# with input from distance_warning:srv/SetThreshold.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetThreshold_Request(type):
    """Metaclass of message 'SetThreshold_Request'."""

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
            module = import_type_support('distance_warning')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'distance_warning.srv.SetThreshold_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_threshold__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_threshold__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_threshold__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_threshold__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_threshold__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetThreshold_Request(metaclass=Metaclass_SetThreshold_Request):
    """Message class 'SetThreshold_Request'."""

    __slots__ = [
        '_increase',
    ]

    _fields_and_field_types = {
        'increase': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.increase = kwargs.get('increase', bool())

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
        if self.increase != other.increase:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def increase(self):
        """Message field 'increase'."""
        return self._increase

    @increase.setter
    def increase(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'increase' field must be of type 'bool'"
        self._increase = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SetThreshold_Response(type):
    """Metaclass of message 'SetThreshold_Response'."""

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
            module = import_type_support('distance_warning')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'distance_warning.srv.SetThreshold_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_threshold__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_threshold__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_threshold__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_threshold__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_threshold__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetThreshold_Response(metaclass=Metaclass_SetThreshold_Response):
    """Message class 'SetThreshold_Response'."""

    __slots__ = [
        '_success',
        '_new_threshold',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'new_threshold': 'float',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.new_threshold = kwargs.get('new_threshold', float())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.new_threshold != other.new_threshold:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def new_threshold(self):
        """Message field 'new_threshold'."""
        return self._new_threshold

    @new_threshold.setter
    def new_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'new_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._new_threshold = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetThreshold(type):
    """Metaclass of service 'SetThreshold'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('distance_warning')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'distance_warning.srv.SetThreshold')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_threshold

            from distance_warning.srv import _set_threshold
            if _set_threshold.Metaclass_SetThreshold_Request._TYPE_SUPPORT is None:
                _set_threshold.Metaclass_SetThreshold_Request.__import_type_support__()
            if _set_threshold.Metaclass_SetThreshold_Response._TYPE_SUPPORT is None:
                _set_threshold.Metaclass_SetThreshold_Response.__import_type_support__()


class SetThreshold(metaclass=Metaclass_SetThreshold):
    from distance_warning.srv._set_threshold import SetThreshold_Request as Request
    from distance_warning.srv._set_threshold import SetThreshold_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
