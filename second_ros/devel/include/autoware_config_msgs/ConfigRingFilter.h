// Generated by gencpp from file autoware_config_msgs/ConfigRingFilter.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGRINGFILTER_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGRINGFILTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigRingFilter_
{
  typedef ConfigRingFilter_<ContainerAllocator> Type;

  ConfigRingFilter_()
    : ring_div(0)
    , voxel_leaf_size(0.0)
    , measurement_range(0.0)  {
    }
  ConfigRingFilter_(const ContainerAllocator& _alloc)
    : ring_div(0)
    , voxel_leaf_size(0.0)
    , measurement_range(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _ring_div_type;
  _ring_div_type ring_div;

   typedef float _voxel_leaf_size_type;
  _voxel_leaf_size_type voxel_leaf_size;

   typedef float _measurement_range_type;
  _measurement_range_type measurement_range;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigRingFilter_

typedef ::autoware_config_msgs::ConfigRingFilter_<std::allocator<void> > ConfigRingFilter;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigRingFilter > ConfigRingFilterPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigRingFilter const> ConfigRingFilterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_config_msgs': ['/home/xi/catkin_ws_second_detecter_tracker/second_ros/src/msgs/autoware_config_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e90a2e7ee37c2ae4a3ddd2fa191ba07";
  }

  static const char* value(const ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e90a2e7ee37c2aeULL;
  static const uint64_t static_value2 = 0x4a3ddd2fa191ba07ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigRingFilter";
  }

  static const char* value(const ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 ring_div\n\
float32 voxel_leaf_size\n\
float32 measurement_range\n\
";
  }

  static const char* value(const ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ring_div);
      stream.next(m.voxel_leaf_size);
      stream.next(m.measurement_range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigRingFilter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigRingFilter_<ContainerAllocator>& v)
  {
    s << indent << "ring_div: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ring_div);
    s << indent << "voxel_leaf_size: ";
    Printer<float>::stream(s, indent + "  ", v.voxel_leaf_size);
    s << indent << "measurement_range: ";
    Printer<float>::stream(s, indent + "  ", v.measurement_range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGRINGFILTER_H
