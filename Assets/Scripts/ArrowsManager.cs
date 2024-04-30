using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

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
        // start the ROS connection
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
        textToSpeech = gameObject.GetComponent<TextToSpeech>();
    }

    void Update()
    {
        ros.Publish("/cmd_vel", buttonPressed);
    }

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

    public void upPressed()
    {
        // Send 1 if up button is pressed
        buttonPressed.linear.x = 0.5;
    }

    public void Released()
    {
        buttonPressed.linear.x = 0.0;
        buttonPressed.angular.z = 0.0;
    }

    public void downPressed()
    {
        // Send 2 if down button is pressed
        buttonPressed.linear.x = -0.5;
    }

    public void rightPressed()
    {
        // Send 3 if right button is pressed
        buttonPressed.angular.z = -1.0;
    }

    public void leftPressed()
    {
        // Send 4 if left button is pressed
        buttonPressed.angular.z = 1.0;
    }
}
