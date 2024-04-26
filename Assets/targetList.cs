using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using System.Linq;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

public class targetList : MonoBehaviour
{
    private TextToSpeech textToSpeech;
    public GameObject target;
    public GameObject errorMenu;
    public bool next = false;
    public bool error = false;
    public int i = 0;

    public string[] rooms;
    public float[][] coords;

    public string currKey;

    private Int8Msg path = new Int8Msg();

    private ROSConnection ros;

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
        path.data = 0;
        i = 0;
        next = false;
        error = false;
        currKey = "X-ray rm 12";
        textToSpeech = gameObject.GetComponent<TextToSpeech>();

        ROSConnection.GetOrCreateInstance().Subscribe<Int8Msg>("/path_status", nextTarget);
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Int8Msg>("/path_status");
        target.transform.position = new Vector3(locList[currKey][0], -1.73f, locList[currKey][1]);

        rooms = locList.Keys.ToArray();
        coords = locList.Values.ToArray();
    }

    // Update is called once per frame
    void Update()
    {
        if(next && i < locList.Count){
            next = false;
            i++;
            currKey = rooms[i];

            if(currKey == "Supply rm 7" || currKey == "Patient rm 11"){
                error = true;
                errorMenu.SetActive(true);
                textToSpeech.StartSpeaking("The robot is lost");
            }

            path.data = 0;
            
            if(!error){
                path.data = 1;
                ros.Publish("/path_status", path);
                target.transform.position = new Vector3(locList[currKey][0], -1.73f, locList[currKey][1]);
            }
        }
    }

    public void nextTarget(Int8Msg done){
        if(done.data == 3){
            next = true;
        }
        if(done.data == -2){
            error = true;
            errorMenu.SetActive(true);
            textToSpeech.StartSpeaking("The robot is stuck");
        }
    }

    public void clearError(){
        path.data = 1;
        ros.Publish("/path_status", path);
        error = false;
    }
}
