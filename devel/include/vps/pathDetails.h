// Generated by gencpp from file vps/pathDetails.msg
// DO NOT EDIT!


#ifndef VPS_MESSAGE_PATHDETAILS_H
#define VPS_MESSAGE_PATHDETAILS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vps
{
template <class ContainerAllocator>
struct pathDetails_
{
  typedef pathDetails_<ContainerAllocator> Type;

  pathDetails_()
    : oldX(0)
    , oldY(0)
    , newX(0)
    , newY(0)
    , oldAngle(0)
    , newAngle(0)
    , destX(0)
    , destY(0)
    , text()  {
    }
  pathDetails_(const ContainerAllocator& _alloc)
    : oldX(0)
    , oldY(0)
    , newX(0)
    , newY(0)
    , oldAngle(0)
    , newAngle(0)
    , destX(0)
    , destY(0)
    , text(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _oldX_type;
  _oldX_type oldX;

   typedef int32_t _oldY_type;
  _oldY_type oldY;

   typedef int32_t _newX_type;
  _newX_type newX;

   typedef int32_t _newY_type;
  _newY_type newY;

   typedef int32_t _oldAngle_type;
  _oldAngle_type oldAngle;

   typedef int32_t _newAngle_type;
  _newAngle_type newAngle;

   typedef int32_t _destX_type;
  _destX_type destX;

   typedef int32_t _destY_type;
  _destY_type destY;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;





  typedef boost::shared_ptr< ::vps::pathDetails_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vps::pathDetails_<ContainerAllocator> const> ConstPtr;

}; // struct pathDetails_

typedef ::vps::pathDetails_<std::allocator<void> > pathDetails;

typedef boost::shared_ptr< ::vps::pathDetails > pathDetailsPtr;
typedef boost::shared_ptr< ::vps::pathDetails const> pathDetailsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vps::pathDetails_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vps::pathDetails_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vps

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'vps': ['/home/ajay/vpns_ws/src/vps/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vps::pathDetails_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vps::pathDetails_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vps::pathDetails_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vps::pathDetails_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vps::pathDetails_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vps::pathDetails_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vps::pathDetails_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88795057299c09e1b94f01119118c950";
  }

  static const char* value(const ::vps::pathDetails_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88795057299c09e1ULL;
  static const uint64_t static_value2 = 0xb94f01119118c950ULL;
};

template<class ContainerAllocator>
struct DataType< ::vps::pathDetails_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vps/pathDetails";
  }

  static const char* value(const ::vps::pathDetails_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vps::pathDetails_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 oldX\n\
int32 oldY\n\
int32 newX\n\
int32 newY\n\
int32 oldAngle\n\
int32 newAngle\n\
int32 destX\n\
int32 destY\n\
string text\n\
";
  }

  static const char* value(const ::vps::pathDetails_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vps::pathDetails_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.oldX);
      stream.next(m.oldY);
      stream.next(m.newX);
      stream.next(m.newY);
      stream.next(m.oldAngle);
      stream.next(m.newAngle);
      stream.next(m.destX);
      stream.next(m.destY);
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pathDetails_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vps::pathDetails_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vps::pathDetails_<ContainerAllocator>& v)
  {
    s << indent << "oldX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.oldX);
    s << indent << "oldY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.oldY);
    s << indent << "newX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.newX);
    s << indent << "newY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.newY);
    s << indent << "oldAngle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.oldAngle);
    s << indent << "newAngle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.newAngle);
    s << indent << "destX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.destX);
    s << indent << "destY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.destY);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VPS_MESSAGE_PATHDETAILS_H
