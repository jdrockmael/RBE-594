using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using System.Linq;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

//This code gives us a list of targets to go to and updates the task list accordingly. This was all written by us.
public class targetList : MonoBehaviour
{
    //Initialize global variables
    private TextToSpeech textToSpeech;
    public GameObject target;
    public GameObject errorMenu;

    public GameObject medList;
    public bool next = false;
    public bool error = false;
    public int i = 0;

    public string[] rooms;
    public float[][] coords;

    public string currKey;

    private Int8Msg path = new Int8Msg();

    private ROSConnection ros;

    
    //List of targets for the robot, we determined these by placing the robot around the lab and getting its position from Unity data
    public Dictionary<string, float[]> locList = new Dictionary<string, float[]>{
        {"X-ray rm 12", new float[] {-0.62f, 2.5f}}, //Inside between the tables where we work and the center board
        {"Nurse stn 11", new float[] {-6.42f, 0.01f}}, //Just behind the wall leading to Hiro
        {"Supply rm 7", new float[] {-9.46f, 1.73f}}, //Invalid point, inside of 200B 
        {"Ultrasound rm 13", new float[] {-6.53f, -5.09f}}, //Outside Hiro
        {"Patient rm 1", new float[] {-6.33f, 4.89f}}, //In front of garbage can
        {"Patient rm 5", new float[] {2.87f, 1.4f}}, //Just below the center board
        {"Patient rm 11", new float[] {-9.24f, 10.25f}}, //Invalid point in the hallway of Unity
        {"Blood Test Lab 18", new float[] {13.3f, -3.74f}}, //Outside 200E
        {"Gyn Exam rm 14", new float[] {12.53f, 3.71f}} //Top right of map (near lab entrance not by stairs)
    };
    // Start is called before the first frame update
    void Start()
    {
        //Instantiate variables
        path.data = 0;
        i = 0;
        next = false;
        error = false;
        currKey = "X-ray rm 12";
        textToSpeech = gameObject.GetComponent<TextToSpeech>();

        //Set up ROS connection to connect Unity robot to real robot
        ROSConnection.GetOrCreateInstance().Subscribe<Int8Msg>("/path_status", nextTarget);
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Int8Msg>("/path_status");

        //Set initial target point
        target.transform.position = new Vector3(locList[currKey][0], -1.73f, locList[currKey][1]);

        rooms = locList.Keys.ToArray();
        coords = locList.Values.ToArray();
    }

    // Update is called once per frame
    void Update()
    {
        //Iterate through the list of targets when requested
        if(next && i < locList.Count){
            next = false;
            i++;
            currKey = rooms[i];

            //Established invalid points that the robot cannot reach
            if(currKey == "Supply rm 7" || currKey == "Patient rm 11"){
                error = true;
                //Bring up the error menu and notify the user of the error
                errorMenu.SetActive(true);
                textToSpeech.StartSpeaking("The robot is lost");
            }

            path.data = 0;
            
            //If the target is valid continue to the next target
            if(!error){
                path.data = 1; //1 lets the real life robot know that it successfully completed its previous task and can go to the next one
                ros.Publish("/path_status", path);
                medList.GetComponent<DeliveryList>().Mark(); //Update the task list by marking the previous task green 
                target.transform.position = new Vector3(locList[currKey][0], -1.73f, locList[currKey][1]); //Update the new target in Unity
            }
        }
    }

    public void nextTarget(Int8Msg done){
        if(done.data == 3){
            next = true; //The robot lets Unity know when it is done with a 3
        }
        if(done.data == -2){
            error = true;
            //The robot lets Unity know when it is stuck with a -2. Bring up the error menu and notify the user when this happens.
            errorMenu.SetActive(true);
            textToSpeech.StartSpeaking("The robot is stuck");
        }
    }

    public void clearError(){
        path.data = 1; //Once the error is cleared, the robot continues to the next task.
        ros.Publish("/path_status", path);
        medList.GetComponent<DeliveryList>().Mark(); //Update the task list as necessary
        error = false;
    }
}
