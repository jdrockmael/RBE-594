using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Power;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

//This is our emergency stop code, it was all written by us
public class BreakerService : MonoBehaviour
{
    BreakerCommandRequest breakerRequest;
    private bool state = false;
    ROSConnection ros;
    //Initialize ROS connection and ROS Service
    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        //ROS services need a request and response, in this case the request is a simple boolean 
        //base_breaker is a service that comes with the robot, that puts a mechanical lock on the wheels, similar to engaging the physical EStop button
        ros.RegisterRosService<BreakerCommandRequest, BreakerCommandResponse>("base_breaker");
    }

    // Update is called once per frame, but not needed here
    void Update()
    {
        
    }

    public void BreakerOn(){
        //Turn the breaker on, this will not allow the robot to move until we turn it off
        state = true;
        breakerRequest = new BreakerCommandRequest(state);
        ros.SendServiceMessage<BreakerCommandResponse>("base_breaker", breakerRequest);
    }

    public void BreakerOff(){
        //Turn the breaker off, the robot can now move freely
        state = false;
        breakerRequest = new BreakerCommandRequest(state);
        ros.SendServiceMessage<BreakerCommandResponse>("base_breaker", breakerRequest);
    }
}