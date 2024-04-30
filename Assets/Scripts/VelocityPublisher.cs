using System.Collections;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using Microsoft.MixedReality.Toolkit.UI;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;

//This is a separate method of emergency stop that is not as limiting as the other. This was all written by us.
public class VelocityPublisher : MonoBehaviour
{
    private TwistMsg twistMsg = new TwistMsg();
    ROSConnection ros;
    private bool emergencyStop = false; // Flag for the emergency stop state

    // ROS publisher for Twist messages
    void Start()
    {
        // Initialize the ROS connection and the publisher
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
    }

    void Update()
    {

        if(emergencyStop)
        {
            PublishZeroVelocities();
            ros.Publish("/cmd_vel", twistMsg);
        }
    }

    // General method to publish Twist messages with given linear and angular velocities
    private void PublishZeroVelocities()
    {
        //Tell the robot to go to a linear and angular speed of zero rather than the mechanical lock.
        twistMsg.linear.x = 0.0;
        twistMsg.angular.z = 0.0;
    }

    // Method to trigger the emergency stop
    public void EStop()
    {
        emergencyStop = true;
    }

    // Method to resume normal operation from an emergency stop
    public void Resume()
    {
        emergencyStop = false;
    }
}
