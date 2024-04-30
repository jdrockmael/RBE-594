using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

//This is our code for controlling the workspace. This was all written by us.
public class WorkspaceHandler : MonoBehaviour
{
    //Intialize global variables
    private TwistMsg stop = new TwistMsg();
    ROSConnection ros;
    private bool inWorkspace = false;
    public MeshRenderer plane;
    private TextToSpeech textToSpeech;
    // Start is called before the first frame update
    public Collider OtherCollider01 = null;
    void Start()
    {
        //Start ROS connection
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
        plane = gameObject.GetComponent<MeshRenderer> (); //Instantiate the visible plane
        textToSpeech = gameObject.GetComponent<TextToSpeech>(); //Instantiate text to speech
    }

    // Update is called once per frame
    void Update()
    {
        if (inWorkspace == true){
            //Make the physical plane red and tell the robot to stop moving on enter
            plane.materials[0].color = Color.red;
            ros.Publish("/cmd_vel", stop);
        }
        else{
            //On exit, make the plane blue again and stop publishing velocity to the robot
            plane.materials[0].color = Color.blue;
        }
    }
    //Triggers are default Unity methods that activate when a new event happens in the unity scene
    private void OnTriggerEnter(Collider other){
        //If the camera of the hololens enters the workspace, trigger a new event
        if (other.gameObject.name == OtherCollider01.name)
        {
            enterWorkspace(); 
        }
        
        
    }

    private void OnTriggerExit(Collider other){
        //If the camera of the hololens exits the workspace, trigger a new event
            exitWorkspace();
    }

    public void enterWorkspace(){
        inWorkspace = true;
        textToSpeech.StartSpeaking("You have entered the workspace"); //Notify the user that they are in the workspace
        //If the user is in the workspace, the robot is not allowed to move
        stop.linear.x = 0.0;
        stop.angular.z = 0.0;
    }

    public void exitWorkspace(){
        inWorkspace = false;
        textToSpeech.StartSpeaking("You have left the workspace"); //Notify the user that they are not in the workspace 
    }
}
