// Generated by gencpp from file autoware_msgs/TunedResult.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_TUNEDRESULT_H
#define AUTOWARE_MSGS_MESSAGE_TUNEDRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_msgs/ColorSet.h>
#include <autoware_msgs/ColorSet.h>
#include <autoware_msgs/ColorSet.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct TunedResult_
{
  typedef TunedResult_<ContainerAllocator> Type;

  TunedResult_()
    : header()
    , Red()
    , Yellow()
    , Green()  {
    }
  TunedResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Red(_alloc)
    , Yellow(_alloc)
    , Green(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::autoware_msgs::ColorSet_<ContainerAllocator>  _Red_type;
  _Red_type Red;

   typedef  ::autoware_msgs::ColorSet_<ContainerAllocator>  _Yellow_type;
  _Yellow_type Yellow;

   typedef  ::autoware_msgs::ColorSet_<ContainerAllocator>  _Green_type;
  _Green_type Green;





  typedef boost::shared_ptr< ::autoware_msgs::TunedResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::TunedResult_<ContainerAllocator> const> ConstPtr;

}; // struct TunedResult_

typedef ::autoware_msgs::TunedResult_<std::allocator<void> > TunedResult;

typedef boost::shared_ptr< ::autoware_msgs::TunedResult > TunedResultPtr;
typedef boost::shared_ptr< ::autoware_msgs::TunedResult const> TunedResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::TunedResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::TunedResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/xi/catkin_ws_second_detecter_tracker/second_ros/src/msgs/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::TunedResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::TunedResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::TunedResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::TunedResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::TunedResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::TunedResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::TunedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ddef3f42dffa20afab285bb50468c18e";
  }

  static const char* value(const ::autoware_msgs::TunedResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xddef3f42dffa20afULL;
  static const uint64_t static_value2 = 0xab285bb50468c18eULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::TunedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/TunedResult";
  }

  static const char* value(const ::autoware_msgs::TunedResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::TunedResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
ColorSet Red\n\
ColorSet Yellow\n\
ColorSet Green\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: autoware_msgs/ColorSet\n\
ValueSet Hue\n\
ValueSet Sat\n\
ValueSet Val\n\
\n\
================================================================================\n\
MSG: autoware_msgs/ValueSet\n\
int32 center\n\
int32 range\n\
";
  }

  static const char* value(const ::autoware_msgs::TunedResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::TunedResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Red);
      stream.next(m.Yellow);
      stream.next(m.Green);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TunedResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::TunedResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::TunedResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Red: ";
    s << std::endl;
    Printer< ::autoware_msgs::ColorSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Red);
    s << indent << "Yellow: ";
    s << std::endl;
    Printer< ::autoware_msgs::ColorSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Yellow);
    s << indent << "Green: ";
    s << std::endl;
    Printer< ::autoware_msgs::ColorSet_<ContainerAllocator> >::stream(s, indent + "  ", v.Green);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_TUNEDRESULT_H
