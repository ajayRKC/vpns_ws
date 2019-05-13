# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vps/pathDetails.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class pathDetails(genpy.Message):
  _md5sum = "88795057299c09e1b94f01119118c950"
  _type = "vps/pathDetails"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 oldX
int32 oldY
int32 newX
int32 newY
int32 oldAngle
int32 newAngle
int32 destX
int32 destY
string text
"""
  __slots__ = ['oldX','oldY','newX','newY','oldAngle','newAngle','destX','destY','text']
  _slot_types = ['int32','int32','int32','int32','int32','int32','int32','int32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       oldX,oldY,newX,newY,oldAngle,newAngle,destX,destY,text

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(pathDetails, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.oldX is None:
        self.oldX = 0
      if self.oldY is None:
        self.oldY = 0
      if self.newX is None:
        self.newX = 0
      if self.newY is None:
        self.newY = 0
      if self.oldAngle is None:
        self.oldAngle = 0
      if self.newAngle is None:
        self.newAngle = 0
      if self.destX is None:
        self.destX = 0
      if self.destY is None:
        self.destY = 0
      if self.text is None:
        self.text = ''
    else:
      self.oldX = 0
      self.oldY = 0
      self.newX = 0
      self.newY = 0
      self.oldAngle = 0
      self.newAngle = 0
      self.destX = 0
      self.destY = 0
      self.text = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_8i().pack(_x.oldX, _x.oldY, _x.newX, _x.newY, _x.oldAngle, _x.newAngle, _x.destX, _x.destY))
      _x = self.text
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.oldX, _x.oldY, _x.newX, _x.newY, _x.oldAngle, _x.newAngle, _x.destX, _x.destY,) = _get_struct_8i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.text = str[start:end].decode('utf-8')
      else:
        self.text = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_8i().pack(_x.oldX, _x.oldY, _x.newX, _x.newY, _x.oldAngle, _x.newAngle, _x.destX, _x.destY))
      _x = self.text
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.oldX, _x.oldY, _x.newX, _x.newY, _x.oldAngle, _x.newAngle, _x.destX, _x.destY,) = _get_struct_8i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.text = str[start:end].decode('utf-8')
      else:
        self.text = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8i = None
def _get_struct_8i():
    global _struct_8i
    if _struct_8i is None:
        _struct_8i = struct.Struct("<8i")
    return _struct_8i
