using System.Collections;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using Microsoft.MixedReality.Toolkit.UI;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;

public class VelocityPublisher : MonoBehaviour
{
    public float maxLinVel = 0.5f; // Max linear velocity in meters per second
    public float maxRotVel = Mathf.Deg2Rad * 60; // Max angular velocity in radians per second (converted from degrees)

    private float linAccel = 0.5f; // Linear acceleration in meters per second squared
    private float rotAccel = Mathf.Deg2Rad * 600; // Rotational acceleration in radians per second squared (converted from degrees)

    private float currentLinVel = 0f; // Current linear velocity
    private float currentRotVel = 0f; // Current angular velocity

    private bool emergencyStop = false; // Flag for the emergency stop state

    // ROS publisher for Twist messages
    //private Publisher<TwistMsg> twistPub;

    void Start()
    {
        // Initialize the ROS connection and the publisher
        ROSConnection ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
        //twistPub = rosConnection.Advertise<TwistMsg>("/cmd_vel");
    }

    void Update()
    {
        /*if (!emergencyStop)
        {
            // Regular operation: update and publish velocities
            UpdateAndPublishVelocities();
        }
        else
        {
            // Emergency stop is active: publish zero velocities to halt the robot
            PublishZeroVelocities();
        }
        */
        if(emergencyStop)
        {
            PublishZeroVelocities();
        }
    }

    // Update velocities based on acceleration and publish the Twist message
    private void UpdateAndPublishVelocities()
    {
        // Assuming target velocities are set elsewhere (e.g., through user input)
        currentLinVel = UpdateVelocity(targetLinVel, currentLinVel, linAccel);
        currentRotVel = UpdateVelocity(targetRotVel, currentRotVel, rotAccel);

        // Construct and publish the Twist message
        PublishTwistMessage(currentLinVel, currentRotVel);
    }

    // Calculate updated velocity based on target velocity, current velocity, and acceleration
    private float UpdateVelocity(float targetVel, float currentVel, float accel)
    {
        float velocityDifference = targetVel - currentVel;
        float velocityChange = accel * Time.deltaTime;

        if (Mathf.Abs(velocityDifference) < velocityChange)
        {
            // Target velocity is within the change limit; use target velocity
            return targetVel;
        }
        else
        {
            // Move towards the target velocity
            return currentVel + Mathf.Sign(velocityDifference) * velocityChange;
        }
    }

    // Publish zero velocities to immediately stop the robot
    private void PublishZeroVelocities()
    {
        PublishTwistMessage(0f, 0f);
    }

    // General method to publish Twist messages with given linear and angular velocities
    private void PublishTwistMessage(float linearVelocity, float angularVelocity)
    {
        TwistMsg twistMsg = new TwistMsg
        {
            linear = new Vector3Msg { x = linearVelocity, y = 0f, z = 0f },
            angular = new Vector3Msg { x = 0f, y = 0f, z = angularVelocity }
        };

        //twistPub.Publish(twistMsg);
        ROSConnection.GetOrCreateInstance().Publish("/cmd_vel", twistMsg);
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

    // Placeholder for target velocities, adjust as necessary
    private float targetLinVel = 0.5f; // Target linear velocity
    private float targetRotVel = Mathf.Deg2Rad * 60; // Target angular velocity (converted from degrees)
}
