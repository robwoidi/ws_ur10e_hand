// Generated by gencpp from file franka_msgs/FrankaState.msg
// DO NOT EDIT!


#ifndef FRANKA_MSGS_MESSAGE_FRANKASTATE_H
#define FRANKA_MSGS_MESSAGE_FRANKASTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <franka_msgs/Errors.h>
#include <franka_msgs/Errors.h>

namespace franka_msgs
{
template <class ContainerAllocator>
struct FrankaState_
{
  typedef FrankaState_<ContainerAllocator> Type;

  FrankaState_()
    : header()
    , cartesian_collision()
    , cartesian_contact()
    , q()
    , q_d()
    , dq()
    , dq_d()
    , ddq_d()
    , theta()
    , dtheta()
    , tau_J()
    , dtau_J()
    , tau_J_d()
    , K_F_ext_hat_K()
    , elbow()
    , elbow_d()
    , elbow_c()
    , delbow_c()
    , ddelbow_c()
    , joint_collision()
    , joint_contact()
    , O_F_ext_hat_K()
    , O_dP_EE_d()
    , O_dP_EE_c()
    , O_ddP_EE_c()
    , tau_ext_hat_filtered()
    , m_ee(0.0)
    , F_x_Cee()
    , I_ee()
    , m_load(0.0)
    , F_x_Cload()
    , I_load()
    , m_total(0.0)
    , F_x_Ctotal()
    , I_total()
    , O_T_EE()
    , O_T_EE_d()
    , O_T_EE_c()
    , F_T_EE()
    , F_T_NE()
    , NE_T_EE()
    , EE_T_K()
    , time(0.0)
    , control_command_success_rate(0.0)
    , robot_mode(0)
    , current_errors()
    , last_motion_errors()  {
      cartesian_collision.assign(0.0);

      cartesian_contact.assign(0.0);

      q.assign(0.0);

      q_d.assign(0.0);

      dq.assign(0.0);

      dq_d.assign(0.0);

      ddq_d.assign(0.0);

      theta.assign(0.0);

      dtheta.assign(0.0);

      tau_J.assign(0.0);

      dtau_J.assign(0.0);

      tau_J_d.assign(0.0);

      K_F_ext_hat_K.assign(0.0);

      elbow.assign(0.0);

      elbow_d.assign(0.0);

      elbow_c.assign(0.0);

      delbow_c.assign(0.0);

      ddelbow_c.assign(0.0);

      joint_collision.assign(0.0);

      joint_contact.assign(0.0);

      O_F_ext_hat_K.assign(0.0);

      O_dP_EE_d.assign(0.0);

      O_dP_EE_c.assign(0.0);

      O_ddP_EE_c.assign(0.0);

      tau_ext_hat_filtered.assign(0.0);

      F_x_Cee.assign(0.0);

      I_ee.assign(0.0);

      F_x_Cload.assign(0.0);

      I_load.assign(0.0);

      F_x_Ctotal.assign(0.0);

      I_total.assign(0.0);

      O_T_EE.assign(0.0);

      O_T_EE_d.assign(0.0);

      O_T_EE_c.assign(0.0);

      F_T_EE.assign(0.0);

      F_T_NE.assign(0.0);

      NE_T_EE.assign(0.0);

      EE_T_K.assign(0.0);
  }
  FrankaState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cartesian_collision()
    , cartesian_contact()
    , q()
    , q_d()
    , dq()
    , dq_d()
    , ddq_d()
    , theta()
    , dtheta()
    , tau_J()
    , dtau_J()
    , tau_J_d()
    , K_F_ext_hat_K()
    , elbow()
    , elbow_d()
    , elbow_c()
    , delbow_c()
    , ddelbow_c()
    , joint_collision()
    , joint_contact()
    , O_F_ext_hat_K()
    , O_dP_EE_d()
    , O_dP_EE_c()
    , O_ddP_EE_c()
    , tau_ext_hat_filtered()
    , m_ee(0.0)
    , F_x_Cee()
    , I_ee()
    , m_load(0.0)
    , F_x_Cload()
    , I_load()
    , m_total(0.0)
    , F_x_Ctotal()
    , I_total()
    , O_T_EE()
    , O_T_EE_d()
    , O_T_EE_c()
    , F_T_EE()
    , F_T_NE()
    , NE_T_EE()
    , EE_T_K()
    , time(0.0)
    , control_command_success_rate(0.0)
    , robot_mode(0)
    , current_errors(_alloc)
    , last_motion_errors(_alloc)  {
  (void)_alloc;
      cartesian_collision.assign(0.0);

      cartesian_contact.assign(0.0);

      q.assign(0.0);

      q_d.assign(0.0);

      dq.assign(0.0);

      dq_d.assign(0.0);

      ddq_d.assign(0.0);

      theta.assign(0.0);

      dtheta.assign(0.0);

      tau_J.assign(0.0);

      dtau_J.assign(0.0);

      tau_J_d.assign(0.0);

      K_F_ext_hat_K.assign(0.0);

      elbow.assign(0.0);

      elbow_d.assign(0.0);

      elbow_c.assign(0.0);

      delbow_c.assign(0.0);

      ddelbow_c.assign(0.0);

      joint_collision.assign(0.0);

      joint_contact.assign(0.0);

      O_F_ext_hat_K.assign(0.0);

      O_dP_EE_d.assign(0.0);

      O_dP_EE_c.assign(0.0);

      O_ddP_EE_c.assign(0.0);

      tau_ext_hat_filtered.assign(0.0);

      F_x_Cee.assign(0.0);

      I_ee.assign(0.0);

      F_x_Cload.assign(0.0);

      I_load.assign(0.0);

      F_x_Ctotal.assign(0.0);

      I_total.assign(0.0);

      O_T_EE.assign(0.0);

      O_T_EE_d.assign(0.0);

      O_T_EE_c.assign(0.0);

      F_T_EE.assign(0.0);

      F_T_NE.assign(0.0);

      NE_T_EE.assign(0.0);

      EE_T_K.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<double, 6>  _cartesian_collision_type;
  _cartesian_collision_type cartesian_collision;

   typedef boost::array<double, 6>  _cartesian_contact_type;
  _cartesian_contact_type cartesian_contact;

   typedef boost::array<double, 7>  _q_type;
  _q_type q;

   typedef boost::array<double, 7>  _q_d_type;
  _q_d_type q_d;

   typedef boost::array<double, 7>  _dq_type;
  _dq_type dq;

   typedef boost::array<double, 7>  _dq_d_type;
  _dq_d_type dq_d;

   typedef boost::array<double, 7>  _ddq_d_type;
  _ddq_d_type ddq_d;

   typedef boost::array<double, 7>  _theta_type;
  _theta_type theta;

   typedef boost::array<double, 7>  _dtheta_type;
  _dtheta_type dtheta;

   typedef boost::array<double, 7>  _tau_J_type;
  _tau_J_type tau_J;

   typedef boost::array<double, 7>  _dtau_J_type;
  _dtau_J_type dtau_J;

   typedef boost::array<double, 7>  _tau_J_d_type;
  _tau_J_d_type tau_J_d;

   typedef boost::array<double, 6>  _K_F_ext_hat_K_type;
  _K_F_ext_hat_K_type K_F_ext_hat_K;

   typedef boost::array<double, 2>  _elbow_type;
  _elbow_type elbow;

   typedef boost::array<double, 2>  _elbow_d_type;
  _elbow_d_type elbow_d;

   typedef boost::array<double, 2>  _elbow_c_type;
  _elbow_c_type elbow_c;

   typedef boost::array<double, 2>  _delbow_c_type;
  _delbow_c_type delbow_c;

   typedef boost::array<double, 2>  _ddelbow_c_type;
  _ddelbow_c_type ddelbow_c;

   typedef boost::array<double, 7>  _joint_collision_type;
  _joint_collision_type joint_collision;

   typedef boost::array<double, 7>  _joint_contact_type;
  _joint_contact_type joint_contact;

   typedef boost::array<double, 6>  _O_F_ext_hat_K_type;
  _O_F_ext_hat_K_type O_F_ext_hat_K;

   typedef boost::array<double, 6>  _O_dP_EE_d_type;
  _O_dP_EE_d_type O_dP_EE_d;

   typedef boost::array<double, 6>  _O_dP_EE_c_type;
  _O_dP_EE_c_type O_dP_EE_c;

   typedef boost::array<double, 6>  _O_ddP_EE_c_type;
  _O_ddP_EE_c_type O_ddP_EE_c;

   typedef boost::array<double, 7>  _tau_ext_hat_filtered_type;
  _tau_ext_hat_filtered_type tau_ext_hat_filtered;

   typedef double _m_ee_type;
  _m_ee_type m_ee;

   typedef boost::array<double, 3>  _F_x_Cee_type;
  _F_x_Cee_type F_x_Cee;

   typedef boost::array<double, 9>  _I_ee_type;
  _I_ee_type I_ee;

   typedef double _m_load_type;
  _m_load_type m_load;

   typedef boost::array<double, 3>  _F_x_Cload_type;
  _F_x_Cload_type F_x_Cload;

   typedef boost::array<double, 9>  _I_load_type;
  _I_load_type I_load;

   typedef double _m_total_type;
  _m_total_type m_total;

   typedef boost::array<double, 3>  _F_x_Ctotal_type;
  _F_x_Ctotal_type F_x_Ctotal;

   typedef boost::array<double, 9>  _I_total_type;
  _I_total_type I_total;

   typedef boost::array<double, 16>  _O_T_EE_type;
  _O_T_EE_type O_T_EE;

   typedef boost::array<double, 16>  _O_T_EE_d_type;
  _O_T_EE_d_type O_T_EE_d;

   typedef boost::array<double, 16>  _O_T_EE_c_type;
  _O_T_EE_c_type O_T_EE_c;

   typedef boost::array<double, 16>  _F_T_EE_type;
  _F_T_EE_type F_T_EE;

   typedef boost::array<double, 16>  _F_T_NE_type;
  _F_T_NE_type F_T_NE;

   typedef boost::array<double, 16>  _NE_T_EE_type;
  _NE_T_EE_type NE_T_EE;

   typedef boost::array<double, 16>  _EE_T_K_type;
  _EE_T_K_type EE_T_K;

   typedef double _time_type;
  _time_type time;

   typedef double _control_command_success_rate_type;
  _control_command_success_rate_type control_command_success_rate;

   typedef uint8_t _robot_mode_type;
  _robot_mode_type robot_mode;

   typedef  ::franka_msgs::Errors_<ContainerAllocator>  _current_errors_type;
  _current_errors_type current_errors;

   typedef  ::franka_msgs::Errors_<ContainerAllocator>  _last_motion_errors_type;
  _last_motion_errors_type last_motion_errors;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ROBOT_MODE_OTHER)
  #undef ROBOT_MODE_OTHER
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_IDLE)
  #undef ROBOT_MODE_IDLE
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_MOVE)
  #undef ROBOT_MODE_MOVE
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_GUIDING)
  #undef ROBOT_MODE_GUIDING
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_REFLEX)
  #undef ROBOT_MODE_REFLEX
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_USER_STOPPED)
  #undef ROBOT_MODE_USER_STOPPED
#endif
#if defined(_WIN32) && defined(ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY)
  #undef ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY
#endif

  enum {
    ROBOT_MODE_OTHER = 0u,
    ROBOT_MODE_IDLE = 1u,
    ROBOT_MODE_MOVE = 2u,
    ROBOT_MODE_GUIDING = 3u,
    ROBOT_MODE_REFLEX = 4u,
    ROBOT_MODE_USER_STOPPED = 5u,
    ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY = 6u,
  };


  typedef boost::shared_ptr< ::franka_msgs::FrankaState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_msgs::FrankaState_<ContainerAllocator> const> ConstPtr;

}; // struct FrankaState_

typedef ::franka_msgs::FrankaState_<std::allocator<void> > FrankaState;

typedef boost::shared_ptr< ::franka_msgs::FrankaState > FrankaStatePtr;
typedef boost::shared_ptr< ::franka_msgs::FrankaState const> FrankaStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_msgs::FrankaState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_msgs::FrankaState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::franka_msgs::FrankaState_<ContainerAllocator1> & lhs, const ::franka_msgs::FrankaState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cartesian_collision == rhs.cartesian_collision &&
    lhs.cartesian_contact == rhs.cartesian_contact &&
    lhs.q == rhs.q &&
    lhs.q_d == rhs.q_d &&
    lhs.dq == rhs.dq &&
    lhs.dq_d == rhs.dq_d &&
    lhs.ddq_d == rhs.ddq_d &&
    lhs.theta == rhs.theta &&
    lhs.dtheta == rhs.dtheta &&
    lhs.tau_J == rhs.tau_J &&
    lhs.dtau_J == rhs.dtau_J &&
    lhs.tau_J_d == rhs.tau_J_d &&
    lhs.K_F_ext_hat_K == rhs.K_F_ext_hat_K &&
    lhs.elbow == rhs.elbow &&
    lhs.elbow_d == rhs.elbow_d &&
    lhs.elbow_c == rhs.elbow_c &&
    lhs.delbow_c == rhs.delbow_c &&
    lhs.ddelbow_c == rhs.ddelbow_c &&
    lhs.joint_collision == rhs.joint_collision &&
    lhs.joint_contact == rhs.joint_contact &&
    lhs.O_F_ext_hat_K == rhs.O_F_ext_hat_K &&
    lhs.O_dP_EE_d == rhs.O_dP_EE_d &&
    lhs.O_dP_EE_c == rhs.O_dP_EE_c &&
    lhs.O_ddP_EE_c == rhs.O_ddP_EE_c &&
    lhs.tau_ext_hat_filtered == rhs.tau_ext_hat_filtered &&
    lhs.m_ee == rhs.m_ee &&
    lhs.F_x_Cee == rhs.F_x_Cee &&
    lhs.I_ee == rhs.I_ee &&
    lhs.m_load == rhs.m_load &&
    lhs.F_x_Cload == rhs.F_x_Cload &&
    lhs.I_load == rhs.I_load &&
    lhs.m_total == rhs.m_total &&
    lhs.F_x_Ctotal == rhs.F_x_Ctotal &&
    lhs.I_total == rhs.I_total &&
    lhs.O_T_EE == rhs.O_T_EE &&
    lhs.O_T_EE_d == rhs.O_T_EE_d &&
    lhs.O_T_EE_c == rhs.O_T_EE_c &&
    lhs.F_T_EE == rhs.F_T_EE &&
    lhs.F_T_NE == rhs.F_T_NE &&
    lhs.NE_T_EE == rhs.NE_T_EE &&
    lhs.EE_T_K == rhs.EE_T_K &&
    lhs.time == rhs.time &&
    lhs.control_command_success_rate == rhs.control_command_success_rate &&
    lhs.robot_mode == rhs.robot_mode &&
    lhs.current_errors == rhs.current_errors &&
    lhs.last_motion_errors == rhs.last_motion_errors;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::franka_msgs::FrankaState_<ContainerAllocator1> & lhs, const ::franka_msgs::FrankaState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace franka_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::franka_msgs::FrankaState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_msgs::FrankaState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_msgs::FrankaState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_msgs::FrankaState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_msgs::FrankaState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_msgs::FrankaState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_msgs::FrankaState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ada2a2f352d5bb0df96bc0a5d3c9d6e1";
  }

  static const char* value(const ::franka_msgs::FrankaState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xada2a2f352d5bb0dULL;
  static const uint64_t static_value2 = 0xf96bc0a5d3c9d6e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_msgs::FrankaState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_msgs/FrankaState";
  }

  static const char* value(const ::franka_msgs::FrankaState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_msgs::FrankaState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"float64[6] cartesian_collision\n"
"float64[6] cartesian_contact\n"
"float64[7] q\n"
"float64[7] q_d\n"
"float64[7] dq\n"
"float64[7] dq_d\n"
"float64[7] ddq_d\n"
"float64[7] theta\n"
"float64[7] dtheta\n"
"float64[7] tau_J\n"
"float64[7] dtau_J\n"
"float64[7] tau_J_d\n"
"float64[6] K_F_ext_hat_K\n"
"float64[2] elbow\n"
"float64[2] elbow_d\n"
"float64[2] elbow_c\n"
"float64[2] delbow_c\n"
"float64[2] ddelbow_c\n"
"float64[7] joint_collision\n"
"float64[7] joint_contact\n"
"float64[6] O_F_ext_hat_K\n"
"float64[6] O_dP_EE_d\n"
"float64[6] O_dP_EE_c\n"
"float64[6] O_ddP_EE_c\n"
"float64[7] tau_ext_hat_filtered\n"
"float64 m_ee\n"
"float64[3] F_x_Cee\n"
"float64[9] I_ee\n"
"float64 m_load\n"
"float64[3] F_x_Cload\n"
"float64[9] I_load\n"
"float64 m_total\n"
"float64[3] F_x_Ctotal\n"
"float64[9] I_total\n"
"float64[16] O_T_EE\n"
"float64[16] O_T_EE_d\n"
"float64[16] O_T_EE_c\n"
"float64[16] F_T_EE\n"
"float64[16] F_T_NE\n"
"float64[16] NE_T_EE\n"
"float64[16] EE_T_K\n"
"float64 time\n"
"float64 control_command_success_rate\n"
"uint8 ROBOT_MODE_OTHER=0\n"
"uint8 ROBOT_MODE_IDLE=1\n"
"uint8 ROBOT_MODE_MOVE=2\n"
"uint8 ROBOT_MODE_GUIDING=3\n"
"uint8 ROBOT_MODE_REFLEX=4\n"
"uint8 ROBOT_MODE_USER_STOPPED=5\n"
"uint8 ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY=6\n"
"uint8 robot_mode\n"
"franka_msgs/Errors current_errors\n"
"franka_msgs/Errors last_motion_errors\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: franka_msgs/Errors\n"
"bool joint_position_limits_violation\n"
"bool cartesian_position_limits_violation\n"
"bool self_collision_avoidance_violation\n"
"bool joint_velocity_violation\n"
"bool cartesian_velocity_violation\n"
"bool force_control_safety_violation\n"
"bool joint_reflex\n"
"bool cartesian_reflex\n"
"bool max_goal_pose_deviation_violation\n"
"bool max_path_pose_deviation_violation\n"
"bool cartesian_velocity_profile_safety_violation\n"
"bool joint_position_motion_generator_start_pose_invalid\n"
"bool joint_motion_generator_position_limits_violation\n"
"bool joint_motion_generator_velocity_limits_violation\n"
"bool joint_motion_generator_velocity_discontinuity\n"
"bool joint_motion_generator_acceleration_discontinuity\n"
"bool cartesian_position_motion_generator_start_pose_invalid\n"
"bool cartesian_motion_generator_elbow_limit_violation\n"
"bool cartesian_motion_generator_velocity_limits_violation\n"
"bool cartesian_motion_generator_velocity_discontinuity\n"
"bool cartesian_motion_generator_acceleration_discontinuity\n"
"bool cartesian_motion_generator_elbow_sign_inconsistent\n"
"bool cartesian_motion_generator_start_elbow_invalid\n"
"bool cartesian_motion_generator_joint_position_limits_violation\n"
"bool cartesian_motion_generator_joint_velocity_limits_violation\n"
"bool cartesian_motion_generator_joint_velocity_discontinuity\n"
"bool cartesian_motion_generator_joint_acceleration_discontinuity\n"
"bool cartesian_position_motion_generator_invalid_frame\n"
"bool force_controller_desired_force_tolerance_violation\n"
"bool controller_torque_discontinuity\n"
"bool start_elbow_sign_inconsistent\n"
"bool communication_constraints_violation\n"
"bool power_limit_violation\n"
"bool joint_p2p_insufficient_torque_for_planning\n"
"bool tau_j_range_violation\n"
"bool instability_detected\n"
;
  }

  static const char* value(const ::franka_msgs::FrankaState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_msgs::FrankaState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cartesian_collision);
      stream.next(m.cartesian_contact);
      stream.next(m.q);
      stream.next(m.q_d);
      stream.next(m.dq);
      stream.next(m.dq_d);
      stream.next(m.ddq_d);
      stream.next(m.theta);
      stream.next(m.dtheta);
      stream.next(m.tau_J);
      stream.next(m.dtau_J);
      stream.next(m.tau_J_d);
      stream.next(m.K_F_ext_hat_K);
      stream.next(m.elbow);
      stream.next(m.elbow_d);
      stream.next(m.elbow_c);
      stream.next(m.delbow_c);
      stream.next(m.ddelbow_c);
      stream.next(m.joint_collision);
      stream.next(m.joint_contact);
      stream.next(m.O_F_ext_hat_K);
      stream.next(m.O_dP_EE_d);
      stream.next(m.O_dP_EE_c);
      stream.next(m.O_ddP_EE_c);
      stream.next(m.tau_ext_hat_filtered);
      stream.next(m.m_ee);
      stream.next(m.F_x_Cee);
      stream.next(m.I_ee);
      stream.next(m.m_load);
      stream.next(m.F_x_Cload);
      stream.next(m.I_load);
      stream.next(m.m_total);
      stream.next(m.F_x_Ctotal);
      stream.next(m.I_total);
      stream.next(m.O_T_EE);
      stream.next(m.O_T_EE_d);
      stream.next(m.O_T_EE_c);
      stream.next(m.F_T_EE);
      stream.next(m.F_T_NE);
      stream.next(m.NE_T_EE);
      stream.next(m.EE_T_K);
      stream.next(m.time);
      stream.next(m.control_command_success_rate);
      stream.next(m.robot_mode);
      stream.next(m.current_errors);
      stream.next(m.last_motion_errors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FrankaState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_msgs::FrankaState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_msgs::FrankaState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cartesian_collision[]" << std::endl;
    for (size_t i = 0; i < v.cartesian_collision.size(); ++i)
    {
      s << indent << "  cartesian_collision[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cartesian_collision[i]);
    }
    s << indent << "cartesian_contact[]" << std::endl;
    for (size_t i = 0; i < v.cartesian_contact.size(); ++i)
    {
      s << indent << "  cartesian_contact[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cartesian_contact[i]);
    }
    s << indent << "q[]" << std::endl;
    for (size_t i = 0; i < v.q.size(); ++i)
    {
      s << indent << "  q[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q[i]);
    }
    s << indent << "q_d[]" << std::endl;
    for (size_t i = 0; i < v.q_d.size(); ++i)
    {
      s << indent << "  q_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_d[i]);
    }
    s << indent << "dq[]" << std::endl;
    for (size_t i = 0; i < v.dq.size(); ++i)
    {
      s << indent << "  dq[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dq[i]);
    }
    s << indent << "dq_d[]" << std::endl;
    for (size_t i = 0; i < v.dq_d.size(); ++i)
    {
      s << indent << "  dq_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dq_d[i]);
    }
    s << indent << "ddq_d[]" << std::endl;
    for (size_t i = 0; i < v.ddq_d.size(); ++i)
    {
      s << indent << "  ddq_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.ddq_d[i]);
    }
    s << indent << "theta[]" << std::endl;
    for (size_t i = 0; i < v.theta.size(); ++i)
    {
      s << indent << "  theta[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.theta[i]);
    }
    s << indent << "dtheta[]" << std::endl;
    for (size_t i = 0; i < v.dtheta.size(); ++i)
    {
      s << indent << "  dtheta[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dtheta[i]);
    }
    s << indent << "tau_J[]" << std::endl;
    for (size_t i = 0; i < v.tau_J.size(); ++i)
    {
      s << indent << "  tau_J[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_J[i]);
    }
    s << indent << "dtau_J[]" << std::endl;
    for (size_t i = 0; i < v.dtau_J.size(); ++i)
    {
      s << indent << "  dtau_J[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dtau_J[i]);
    }
    s << indent << "tau_J_d[]" << std::endl;
    for (size_t i = 0; i < v.tau_J_d.size(); ++i)
    {
      s << indent << "  tau_J_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_J_d[i]);
    }
    s << indent << "K_F_ext_hat_K[]" << std::endl;
    for (size_t i = 0; i < v.K_F_ext_hat_K.size(); ++i)
    {
      s << indent << "  K_F_ext_hat_K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.K_F_ext_hat_K[i]);
    }
    s << indent << "elbow[]" << std::endl;
    for (size_t i = 0; i < v.elbow.size(); ++i)
    {
      s << indent << "  elbow[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.elbow[i]);
    }
    s << indent << "elbow_d[]" << std::endl;
    for (size_t i = 0; i < v.elbow_d.size(); ++i)
    {
      s << indent << "  elbow_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.elbow_d[i]);
    }
    s << indent << "elbow_c[]" << std::endl;
    for (size_t i = 0; i < v.elbow_c.size(); ++i)
    {
      s << indent << "  elbow_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.elbow_c[i]);
    }
    s << indent << "delbow_c[]" << std::endl;
    for (size_t i = 0; i < v.delbow_c.size(); ++i)
    {
      s << indent << "  delbow_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.delbow_c[i]);
    }
    s << indent << "ddelbow_c[]" << std::endl;
    for (size_t i = 0; i < v.ddelbow_c.size(); ++i)
    {
      s << indent << "  ddelbow_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.ddelbow_c[i]);
    }
    s << indent << "joint_collision[]" << std::endl;
    for (size_t i = 0; i < v.joint_collision.size(); ++i)
    {
      s << indent << "  joint_collision[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_collision[i]);
    }
    s << indent << "joint_contact[]" << std::endl;
    for (size_t i = 0; i < v.joint_contact.size(); ++i)
    {
      s << indent << "  joint_contact[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.joint_contact[i]);
    }
    s << indent << "O_F_ext_hat_K[]" << std::endl;
    for (size_t i = 0; i < v.O_F_ext_hat_K.size(); ++i)
    {
      s << indent << "  O_F_ext_hat_K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_F_ext_hat_K[i]);
    }
    s << indent << "O_dP_EE_d[]" << std::endl;
    for (size_t i = 0; i < v.O_dP_EE_d.size(); ++i)
    {
      s << indent << "  O_dP_EE_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_dP_EE_d[i]);
    }
    s << indent << "O_dP_EE_c[]" << std::endl;
    for (size_t i = 0; i < v.O_dP_EE_c.size(); ++i)
    {
      s << indent << "  O_dP_EE_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_dP_EE_c[i]);
    }
    s << indent << "O_ddP_EE_c[]" << std::endl;
    for (size_t i = 0; i < v.O_ddP_EE_c.size(); ++i)
    {
      s << indent << "  O_ddP_EE_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_ddP_EE_c[i]);
    }
    s << indent << "tau_ext_hat_filtered[]" << std::endl;
    for (size_t i = 0; i < v.tau_ext_hat_filtered.size(); ++i)
    {
      s << indent << "  tau_ext_hat_filtered[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_ext_hat_filtered[i]);
    }
    s << indent << "m_ee: ";
    Printer<double>::stream(s, indent + "  ", v.m_ee);
    s << indent << "F_x_Cee[]" << std::endl;
    for (size_t i = 0; i < v.F_x_Cee.size(); ++i)
    {
      s << indent << "  F_x_Cee[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.F_x_Cee[i]);
    }
    s << indent << "I_ee[]" << std::endl;
    for (size_t i = 0; i < v.I_ee.size(); ++i)
    {
      s << indent << "  I_ee[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.I_ee[i]);
    }
    s << indent << "m_load: ";
    Printer<double>::stream(s, indent + "  ", v.m_load);
    s << indent << "F_x_Cload[]" << std::endl;
    for (size_t i = 0; i < v.F_x_Cload.size(); ++i)
    {
      s << indent << "  F_x_Cload[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.F_x_Cload[i]);
    }
    s << indent << "I_load[]" << std::endl;
    for (size_t i = 0; i < v.I_load.size(); ++i)
    {
      s << indent << "  I_load[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.I_load[i]);
    }
    s << indent << "m_total: ";
    Printer<double>::stream(s, indent + "  ", v.m_total);
    s << indent << "F_x_Ctotal[]" << std::endl;
    for (size_t i = 0; i < v.F_x_Ctotal.size(); ++i)
    {
      s << indent << "  F_x_Ctotal[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.F_x_Ctotal[i]);
    }
    s << indent << "I_total[]" << std::endl;
    for (size_t i = 0; i < v.I_total.size(); ++i)
    {
      s << indent << "  I_total[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.I_total[i]);
    }
    s << indent << "O_T_EE[]" << std::endl;
    for (size_t i = 0; i < v.O_T_EE.size(); ++i)
    {
      s << indent << "  O_T_EE[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_T_EE[i]);
    }
    s << indent << "O_T_EE_d[]" << std::endl;
    for (size_t i = 0; i < v.O_T_EE_d.size(); ++i)
    {
      s << indent << "  O_T_EE_d[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_T_EE_d[i]);
    }
    s << indent << "O_T_EE_c[]" << std::endl;
    for (size_t i = 0; i < v.O_T_EE_c.size(); ++i)
    {
      s << indent << "  O_T_EE_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.O_T_EE_c[i]);
    }
    s << indent << "F_T_EE[]" << std::endl;
    for (size_t i = 0; i < v.F_T_EE.size(); ++i)
    {
      s << indent << "  F_T_EE[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.F_T_EE[i]);
    }
    s << indent << "F_T_NE[]" << std::endl;
    for (size_t i = 0; i < v.F_T_NE.size(); ++i)
    {
      s << indent << "  F_T_NE[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.F_T_NE[i]);
    }
    s << indent << "NE_T_EE[]" << std::endl;
    for (size_t i = 0; i < v.NE_T_EE.size(); ++i)
    {
      s << indent << "  NE_T_EE[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.NE_T_EE[i]);
    }
    s << indent << "EE_T_K[]" << std::endl;
    for (size_t i = 0; i < v.EE_T_K.size(); ++i)
    {
      s << indent << "  EE_T_K[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.EE_T_K[i]);
    }
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "control_command_success_rate: ";
    Printer<double>::stream(s, indent + "  ", v.control_command_success_rate);
    s << indent << "robot_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.robot_mode);
    s << indent << "current_errors: ";
    s << std::endl;
    Printer< ::franka_msgs::Errors_<ContainerAllocator> >::stream(s, indent + "  ", v.current_errors);
    s << indent << "last_motion_errors: ";
    s << std::endl;
    Printer< ::franka_msgs::Errors_<ContainerAllocator> >::stream(s, indent + "  ", v.last_motion_errors);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_MSGS_MESSAGE_FRANKASTATE_H
