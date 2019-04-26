// Generated by gencpp from file autoware_config_msgs/ConfigTwistFilter.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGTWISTFILTER_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGTWISTFILTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigTwistFilter_
{
  typedef ConfigTwistFilter_<ContainerAllocator> Type;

  ConfigTwistFilter_()
    : header()
    , lateral_accel_limit(0.0)
    , lowpass_gain_linear_x(0.0)
    , lowpass_gain_angular_z(0.0)  {
    }
  ConfigTwistFilter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lateral_accel_limit(0.0)
    , lowpass_gain_linear_x(0.0)
    , lowpass_gain_angular_z(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _lateral_accel_limit_type;
  _lateral_accel_limit_type lateral_accel_limit;

   typedef float _lowpass_gain_linear_x_type;
  _lowpass_gain_linear_x_type lowpass_gain_linear_x;

   typedef float _lowpass_gain_angular_z_type;
  _lowpass_gain_angular_z_type lowpass_gain_angular_z;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigTwistFilter_

typedef ::autoware_config_msgs::ConfigTwistFilter_<std::allocator<void> > ConfigTwistFilter;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigTwistFilter > ConfigTwistFilterPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigTwistFilter const> ConfigTwistFilterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_config_msgs': ['/home/xi/catkin_ws_second_detecter_tracker/second_ros/src/msgs/autoware_config_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "335a86e776e694c10602a1ee3d9a09de";
  }

  static const char* value(const ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x335a86e776e694c1ULL;
  static const uint64_t static_value2 = 0x0602a1ee3d9a09deULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigTwistFilter";
  }

  static const char* value(const ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 lateral_accel_limit\n\
float32 lowpass_gain_linear_x\n\
float32 lowpass_gain_angular_z\n\
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
";
  }

  static const char* value(const ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lateral_accel_limit);
      stream.next(m.lowpass_gain_linear_x);
      stream.next(m.lowpass_gain_angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigTwistFilter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigTwistFilter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lateral_accel_limit: ";
    Printer<float>::stream(s, indent + "  ", v.lateral_accel_limit);
    s << indent << "lowpass_gain_linear_x: ";
    Printer<float>::stream(s, indent + "  ", v.lowpass_gain_linear_x);
    s << indent << "lowpass_gain_angular_z: ";
    Printer<float>::stream(s, indent + "  ", v.lowpass_gain_angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGTWISTFILTER_H
