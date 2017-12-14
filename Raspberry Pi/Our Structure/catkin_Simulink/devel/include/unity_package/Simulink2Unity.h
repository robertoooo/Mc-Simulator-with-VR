// Generated by gencpp from file unity_package/Simulink2Unity.msg
// DO NOT EDIT!


#ifndef UNITY_PACKAGE_MESSAGE_SIMULINK2UNITY_H
#define UNITY_PACKAGE_MESSAGE_SIMULINK2UNITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace unity_package
{
template <class ContainerAllocator>
struct Simulink2Unity_
{
  typedef Simulink2Unity_<ContainerAllocator> Type;

  Simulink2Unity_()
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , speed(0.0)
    , rpm(0.0)
    , steering_angle(0.0)
    , brake_front(0.0)
    , throttle(0.0)
    , clutch_switch(0.0)
    , gear(0)
    , emergencyStop(0)
    , rigPositionX(0.0)  {
    }
  Simulink2Unity_(const ContainerAllocator& _alloc)
    : roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , speed(0.0)
    , rpm(0.0)
    , steering_angle(0.0)
    , brake_front(0.0)
    , throttle(0.0)
    , clutch_switch(0.0)
    , gear(0)
    , emergencyStop(0)
    , rigPositionX(0.0)  {
  (void)_alloc;
    }



   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _rpm_type;
  _rpm_type rpm;

   typedef float _steering_angle_type;
  _steering_angle_type steering_angle;

   typedef float _brake_front_type;
  _brake_front_type brake_front;

   typedef float _throttle_type;
  _throttle_type throttle;

   typedef float _clutch_switch_type;
  _clutch_switch_type clutch_switch;

   typedef int32_t _gear_type;
  _gear_type gear;

   typedef int32_t _emergencyStop_type;
  _emergencyStop_type emergencyStop;

   typedef float _rigPositionX_type;
  _rigPositionX_type rigPositionX;




  typedef boost::shared_ptr< ::unity_package::Simulink2Unity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::unity_package::Simulink2Unity_<ContainerAllocator> const> ConstPtr;

}; // struct Simulink2Unity_

typedef ::unity_package::Simulink2Unity_<std::allocator<void> > Simulink2Unity;

typedef boost::shared_ptr< ::unity_package::Simulink2Unity > Simulink2UnityPtr;
typedef boost::shared_ptr< ::unity_package::Simulink2Unity const> Simulink2UnityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::unity_package::Simulink2Unity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::unity_package::Simulink2Unity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace unity_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'unity_package': ['/home/mcsim/catkin_Simulink/src/unity_package/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::unity_package::Simulink2Unity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::unity_package::Simulink2Unity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unity_package::Simulink2Unity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unity_package::Simulink2Unity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unity_package::Simulink2Unity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unity_package::Simulink2Unity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::unity_package::Simulink2Unity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f1a4dc149ebeba4a6042b9b16a4dd4f";
  }

  static const char* value(const ::unity_package::Simulink2Unity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f1a4dc149ebeba4ULL;
  static const uint64_t static_value2 = 0xa6042b9b16a4dd4fULL;
};

template<class ContainerAllocator>
struct DataType< ::unity_package::Simulink2Unity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "unity_package/Simulink2Unity";
  }

  static const char* value(const ::unity_package::Simulink2Unity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::unity_package::Simulink2Unity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 roll\n\
float32 pitch\n\
float32 yaw\n\
float32 speed\n\
float32 rpm\n\
float32 steering_angle\n\
float32 brake_front\n\
float32 throttle\n\
float32 clutch_switch\n\
int32 gear\n\
int32 emergencyStop\n\
float32 rigPositionX\n\
";
  }

  static const char* value(const ::unity_package::Simulink2Unity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::unity_package::Simulink2Unity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.speed);
      stream.next(m.rpm);
      stream.next(m.steering_angle);
      stream.next(m.brake_front);
      stream.next(m.throttle);
      stream.next(m.clutch_switch);
      stream.next(m.gear);
      stream.next(m.emergencyStop);
      stream.next(m.rigPositionX);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Simulink2Unity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::unity_package::Simulink2Unity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::unity_package::Simulink2Unity_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "rpm: ";
    Printer<float>::stream(s, indent + "  ", v.rpm);
    s << indent << "steering_angle: ";
    Printer<float>::stream(s, indent + "  ", v.steering_angle);
    s << indent << "brake_front: ";
    Printer<float>::stream(s, indent + "  ", v.brake_front);
    s << indent << "throttle: ";
    Printer<float>::stream(s, indent + "  ", v.throttle);
    s << indent << "clutch_switch: ";
    Printer<float>::stream(s, indent + "  ", v.clutch_switch);
    s << indent << "gear: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gear);
    s << indent << "emergencyStop: ";
    Printer<int32_t>::stream(s, indent + "  ", v.emergencyStop);
    s << indent << "rigPositionX: ";
    Printer<float>::stream(s, indent + "  ", v.rigPositionX);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNITY_PACKAGE_MESSAGE_SIMULINK2UNITY_H
