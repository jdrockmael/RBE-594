using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

//This script is originally from Lorena's repo. We repurposed it for manual control of the robot when we push the buttons in Unity, so most of it is modified.
public class ArrowsManager : MonoBehaviour
{
    private TwistMsg buttonPressed = new TwistMsg();
    public ROSPublisher publisher;
    ROSConnection ros;
    [SerializeField] private Interactable toggleSwitchBase;
    private TextToSpeech textToSpeech;

    private float timeElapsed = 0.0f;

    public float publishMessageFrequency = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        // start the ROS connection to the real robot
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
        textToSpeech = gameObject.GetComponent<TextToSpeech>();
    }
    
    //Update every step in unity, which is about 60Hz
    void Update()
    {
        ros.Publish("/cmd_vel", buttonPressed);
    }

    //We dont use this function, it is for when there was multiple control options for the chest and arm as well
    public void AppearArrowsBaseControl(){

        if (toggleSwitchBase.IsToggled){
            gameObject.SetActive(true);

            // Position the objectToActivate in front of you
            gameObject.transform.position = Camera.main.transform.position + Camera.main.transform.forward * 0.5f;
            Vector3 cameraEulerAngles = Camera.main.transform.rotation.eulerAngles;
            Quaternion desiredRotation = Quaternion.Euler(0, cameraEulerAngles.y, 0);
            gameObject.transform.rotation = desiredRotation;

            textToSpeech.StartSpeaking("You can now control the mobile base.");
        }
        else {
            textToSpeech.StartSpeaking("Mobile base control was disabled.");            
            gameObject.SetActive(false);

        }
    }

    //Functions that we wrote to tell each arrow what to do
    public void upPressed()
    {
        //Move the robot at 50cm per second forward
        buttonPressed.linear.x = 0.5;
    }

    public void Released()
    {
        //When no button is being pressed, constantly tell the robot not to move
        buttonPressed.linear.x = 0.0;
        buttonPressed.angular.z = 0.0;
    }

    public void downPressed()
    {
        //Move the robot at 50cm per second backward
        buttonPressed.linear.x = -0.5;
    }

    public void rightPressed()
    {
        //Move the robot at 1 radian per second clockwise
        buttonPressed.angular.z = -1.0;
    }

    public void leftPressed()
    {
        //Move the robot at 1 radian per second counter-clockwise
        buttonPressed.angular.z = 1.0;
    }
}
