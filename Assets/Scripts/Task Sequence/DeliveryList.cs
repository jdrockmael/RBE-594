using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using System.Runtime.InteropServices;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using static System.Net.Mime.MediaTypeNames;

//This is the code that initializes and updates the list of points that the robot goes to. This was all written by us.
public class DeliveryList : MonoBehaviour
{
    //Intialize global variables
    //public GameObject _txtPromotionalCode;// This is our prefab object that will be exposed in the inspector
    public GameObject prefab;
    public GameObject redPrefab;

    public GameObject greenPrefab;

    public Material greenPlate;

    public GameObject errorMenu;

    public TextAsset medList;

    public int j;

    //Create a set of valid rooms so that we can mark errors on invalid ones.
    private HashSet<string> validRooms = new HashSet<string> {
        "Patient rm 1", "Patient rm 2", "Patient rm 3", "Patient rm 4","Patient rm 5",
        "Patient rm 6","Patient rm 7","Patient rm 8","Patient rm 9","Patient rm 10",
        "Nurse stn 11",
        "X-ray rm 12", "Ultrasound rm 13", "Gyn Exam rm 14", "Info stn 15", "Endoscopy Exam rm 16",
        "Supply rm 17", "Blood Test Lab 18","Sample Pickup Box",
        "Cafe"
    };

    //private List<string> meds = new List<string>();
    private TextMeshPro test;
    private GridObjectCollection gridObjectCollection;
    private ScrollingObjectCollection scrollingObjectCollection;
    // Start is called before the first frame update
    void Start()
    {
        //Initialize the task list and populate it with data
        j = 0;
        gridObjectCollection = GetComponentInChildren<GridObjectCollection>();
        scrollingObjectCollection = GetComponent<ScrollingObjectCollection>();

        Populate();
    }

    

    // Update is called once per frame
    void Update()
    {

    }

    void Populate()
    {
        GameObject obj; // Create GameObject instance  
        string[] data = medList.text.Split(new string[] { ",", "\n" }, StringSplitOptions.None); //Get a list of all the data from our CSV

        // Number of locations in list
        int rowNum = (data.Length - 1) / 3 - 1;
        //DateTime today = DateTime.Today.Date;

        for (int i = 1; i <= rowNum; i++)
        {
            // Create new instances of our prefab until we've created as many as we specified

            string item = data[i * 3].Trim(); //get all the tasks
            string origin = data[i*3 + 1].Trim(); //get robot origins
            string destination = data[i*3 + 2].Trim(); //get robot destinations

            bool isValidOrigin = validRooms.Contains(origin); //check if origin valid
            bool isValidDestination = validRooms.Contains(destination); //check if destination valid

            // Get ID
            if (!isValidDestination || !isValidOrigin)
            {
                //Create 3 instances of the gameobject and mark it red if origin or destination is invalid
                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = item;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = origin;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = destination;
                obj.SetActive(true);
            }
            else
            {
                //Create 3 instances of the gameobject and allow them to be marked green
                //In order to not have them marked green on startup, we have to disable the MeshRenderer in Unity
                obj = (GameObject)Instantiate(greenPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = item;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(greenPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = origin;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(greenPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = destination;
                obj.SetActive(true);
            }
        }

        gridObjectCollection.UpdateCollection(); //update the data in the list
        scrollingObjectCollection.UpdateContent(); //update the visible list

    }

    public void Mark(){
        GameObject obj; // Create GameObject instance  

        j+=3; //Add 3 because 3 instances of the same object
        // Create new instances of our prefab until we've created as many as we specified
        if(j <= 27){ //We use the number 27 here because we have 9 targets, but can be edited

            //Get the 3 instances of the object that correspond to the specific row
            obj = gridObjectCollection.transform.GetChild(j+1).gameObject;
            MeshFilter quad = obj.transform.Find("BackplateLarge").transform.Find("Quad").GetComponent<MeshFilter>(); //get the MeshFilter of the object
            MeshRenderer mesh = quad.GetComponent<MeshRenderer>(); //get the MeshRenderer of the object
            mesh.enabled = true; //enable the MeshRenderer so that it appears green
            obj.SetActive(true);


            //Repeat for the next two
            obj = gridObjectCollection.transform.GetChild(j+2).gameObject;
            quad = obj.transform.Find("BackplateLarge").transform.Find("Quad").GetComponent<MeshFilter>();
            mesh = quad.GetComponent<MeshRenderer>();
            mesh.enabled = true;
            obj.SetActive(true);

            obj = gridObjectCollection.transform.GetChild(j+3).gameObject;
            quad = obj.transform.Find("BackplateLarge").transform.Find("Quad").GetComponent<MeshFilter>();
            mesh = quad.GetComponent<MeshRenderer>();
            mesh.enabled = true;
            obj.SetActive(true);



            gridObjectCollection.UpdateCollection(); //update the data in the list
            scrollingObjectCollection.UpdateContent(); //update the visible list
        }
        
    }
}
