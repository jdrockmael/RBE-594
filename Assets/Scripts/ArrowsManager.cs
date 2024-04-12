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
    private Twist buttonPressed = 0;
    public ROSPublisher publisher;
    ROSConnection ros;
    [SerializeField] private Interactable toggleSwitchBase;
    private TextToSpeech textToSpeech;

    // Start is called before the first frame update
    void Start()
    {
        // start the ROS connection
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Twist>("/base_controller/command");
        textToSpeech = gameObject.GetComponent<TextToSpeech>();
    }

    void Update()
    {
        publisher.TwistMessage("/base_controller/command", buttonPressed);
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
        Vector3 pos = Vector3.Set(1.0f, 0.0f, 0.0f);
        Vector3 rot = Vector3.Set(0.0f, 0.0f, 0.0f);
        buttonPressed = (pos, rot);
    }

    public void Released()
    {
        buttonPressed = (Vector3.Set(0.0f, 0.0f, 0.0f), Vector3.Set(0.0f, 0.0f, 0.0f));
    }

    public void downPressed()
    {
        // Send 2 if down button is pressed
        Vector3 pos = Vector3.Set(-1.0f, 0.0f, 0.0f);
        Vector3 rot = Vector3.Set(0.0f, 0.0f, 0.0f);
        buttonPressed = (pos, rot);
    }

    public void rightPressed()
    {
        // Send 3 if right button is pressed
        Vector3 pos = Vector3.Set(0.0f, 0.0f, 0.0f);
        Vector3 rot = Vector3.Set(0.0f, 0.0f, 0.1f);
        buttonPressed = (pos, rot);
    }

    public void leftPressed()
    {
        // Send 4 if left button is pressed
        Vector3 pos = Vector3.Set(0.0f, 0.0f, 0.0f);
        Vector3 rot = Vector3.Set(0.0f, 0.0f, -0.1f);
        buttonPressed = (pos, rot);
    }
}
