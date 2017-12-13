using System.Collections;
using System.Text;
using SimpleJSON;
using UnityEngine;

/**
from unity to simulink message type
// incline, leaning, running/stop, off-road, crash
 * 
 */

namespace ROSBridgeLib {
	namespace unity_package {
		public class Simulink2Unity : ROSBridgeMsg {
			// message data
			public float _roll, _pitch, _yaw, _speed, _rpm, _steering_angle, _brake_front, _throttle, _clutch_switch, _rigPositionX;
			public int _gear, _emergencyStop;


			public Simulink2Unity(JSONNode msg) {
				_roll = float.Parse (msg ["roll"]);
				_pitch = float.Parse (msg ["pitch"]);
				_yaw = float.Parse (msg ["yaw"]);
				_speed = float.Parse (msg ["speed"]);
				_rpm = float.Parse (msg ["rpm"]);
				_steering_angle = float.Parse (msg ["steering_angle"]);
				_brake_front = float.Parse (msg ["brake_front"]);
				_throttle = float.Parse (msg ["throttle"]);
				_clutch_switch = float.Parse (msg ["clutch_switch"]);
				_gear = int.Parse(msg["gear"]);
				_emergencyStop = int.Parse(msg["emergencyStop"]);
				_rigPositionX = float.Parse (msg ["rigPositionX"]);

			}

			public Simulink2Unity(float roll, float pitch, float yaw, float speed, float rpm, float steering_angle, float brake_front, float throttle, float clutch_switch, int gear, int emergencyStop, float rigPositionX) {
				_roll = roll;
				_pitch = pitch;
				_yaw = yaw;
				_speed = speed;
				_rpm = rpm;
				_steering_angle = steering_angle;
				_brake_front = brake_front;
				_throttle = throttle;
				_clutch_switch = clutch_switch;
				_rigPositionX = rigPositionX;
			}

			public static string getMessageType() {
				return "unity_package/Simulink2Unity";
			}

			public override string ToString() {
				return "unity_package/Simulink2Unity [roll=" + _roll.ToString() + ",  pitch=" + _pitch.ToString() + ", yaw=" + _yaw.ToString() + ", speed=" + _speed.ToString() + ", rpm=" + _rpm.ToString()+ ", steeringAngle=" + _steering_angle.ToString() + ", brake_front=" + _brake_front.ToString()+ ", throttle=" + _throttle.ToString()+ ", clutch_switch=" + _clutch_switch.ToString()+ ", gear=" + _gear.ToString() + ", emergencyStop=" + _emergencyStop.ToString() + ", rigPositionX=" + _rigPositionX.ToString()  + "]";
			}

			// message encoding for ROS, needs to be correct !
			public override string ToYAMLString() { 
				return "{\"roll\": " + _roll + ", \"pitch\": " + _pitch + ", \"yaw\": " + _yaw + ", \"speed\": " + _speed +", \"rpm\": " + _rpm + ", \"steeringAngle\": " + _steering_angle + ", \"brake_front\": " + _brake_front + ", \"throttle\": " + _throttle + ", \"clutch_switch\": " + _clutch_switch + ", \"gear\": " + _gear + ", \"emergencyStop\": " + _emergencyStop +  ",\"rigPositionX\": " +_rigPositionX+ "}";
			}
		}
	}
}