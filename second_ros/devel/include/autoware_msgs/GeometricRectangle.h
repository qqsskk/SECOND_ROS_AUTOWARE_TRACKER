// Generated by gencpp from file autoware_msgs/GeometricRectangle.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H
#define AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_msgs
{
template <class ContainerAllocator>
struct GeometricRectangle_
{
  typedef GeometricRectangle_<ContainerAllocator> Type;

  GeometricRectangle_()
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
    }
  GeometricRectangle_(const ContainerAllocator& _alloc)
    : wl(0.0)
    , wr(0.0)
    , lf(0.0)
    , lb(0.0)  {
  (void)_alloc;
    }



   typedef float _wl_type;
  _wl_type wl;

   typedef float _wr_type;
  _wr_type wr;

   typedef float _lf_type;
  _lf_type lf;

   typedef float _lb_type;
  _lb_type lb;





  typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const> ConstPtr;

}; // struct GeometricRectangle_

typedef ::autoware_msgs::GeometricRectangle_<std::allocator<void> > GeometricRectangle;

typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle > GeometricRectanglePtr;
typedef boost::shared_ptr< ::autoware_msgs::GeometricRectangle const> GeometricRectangleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/xi/catkin_ws_second_detecter_tracker/second_ros/src/msgs/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b41f6cf3f78cac5a789ad3f178ef94dc";
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb41f6cf3f78cac5aULL;
  static const uint64_t static_value2 = 0x789ad3f178ef94dcULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/GeometricRectangle";
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 wl\n\
float32 wr\n\
float32 lf\n\
float32 lb\n\
";
  }

  static const char* value(const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wl);
      stream.next(m.wr);
      stream.next(m.lf);
      stream.next(m.lb);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GeometricRectangle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::GeometricRectangle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::GeometricRectangle_<ContainerAllocator>& v)
  {
    s << indent << "wl: ";
    Printer<float>::stream(s, indent + "  ", v.wl);
    s << indent << "wr: ";
    Printer<float>::stream(s, indent + "  ", v.wr);
    s << indent << "lf: ";
    Printer<float>::stream(s, indent + "  ", v.lf);
    s << indent << "lb: ";
    Printer<float>::stream(s, indent + "  ", v.lb);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_GEOMETRICRECTANGLE_H