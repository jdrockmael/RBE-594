using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

public class WorkspaceHandler : MonoBehaviour
{
    private TwistMsg stop = new TwistMsg();
    ROSConnection ros;
    private bool inWorkspace = false;
    public MeshRenderer plane;
    private TextToSpeech textToSpeech;
    // Start is called before the first frame update
    public Collider OtherCollider01 = null;
    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<TwistMsg>("/cmd_vel");
        plane = gameObject.GetComponent<MeshRenderer> ();
        textToSpeech = gameObject.GetComponent<TextToSpeech>();
    }

    // Update is called once per frame
    void Update()
    {
        if (inWorkspace == true){
            plane.materials[0].color = Color.red;
            ros.Publish("/cmd_vel", stop);
        }
        else{
            plane.materials[0].color = Color.blue;
        }
    }
    private void OnTriggerEnter(Collider other){
        if (other.gameObject.name == OtherCollider01.name)
        {
            enterWorkspace(); 
        }
        
        
    }

    private void OnTriggerExit(Collider other){
            exitWorkspace();
    }

    public void enterWorkspace(){
        inWorkspace = true;
        textToSpeech.StartSpeaking("You have entered the workspace");
        stop.linear.x = 0.0;
        stop.angular.z =0.0;
    }

    public void exitWorkspace(){
        inWorkspace = false;
        textToSpeech.StartSpeaking("You have left the workspace");
    }
}
