using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Power;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

public class BreakerService : MonoBehaviour
{
    BreakerCommandRequest breakerRequest;
    private bool state = false;
    ROSConnection ros;
     void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterRosService<BreakerCommandRequest, BreakerCommandResponse>("base_breaker");
    }

    // Update is called once per frame
    void Update()
    {
        ros.SendServiceMessage<BreakerCommandResponse>("base_breaker", breakerRequest);
    }

    public void BreakerOn(){
        state = true;
        breakerRequest = new BreakerCommandRequest(state);
    }

    public void BreakerOff(){
        state = false;
        breakerRequest = new BreakerCommandRequest(state);
    }
}