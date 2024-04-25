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

public class DeliveryList : MonoBehaviour
{
    //public GameObject _txtPromotionalCode;// This is our prefab object that will be exposed in the inspector
    public GameObject prefab;
    public GameObject redPrefab;

    public GameObject errorMenu;

    public TextAsset medList;

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
        string[] data = medList.text.Split(new string[] { ",", "\n" }, StringSplitOptions.None);

        // Number of medicines in list
        int rowNum = (data.Length - 1) / 3 - 1;
        //DateTime today = DateTime.Today.Date;

        for (int i = 1; i <= rowNum; i++)
        {
            // Create new instances of our prefab until we've created as many as we specified

            string item = data[i * 3].Trim();
            string origin = data[i*3 + 1].Trim();
            string destination = data[i*3 + 2].Trim();

            bool isValidOrigin = validRooms.Contains(origin);
            bool isValidDestination = validRooms.Contains(destination);

            // Get ID
            if (!isValidDestination || !isValidOrigin)
            {
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
                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = item;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = origin;
                obj.SetActive(true);

                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = destination;
                obj.SetActive(true);
            }
        }

        gridObjectCollection.UpdateCollection();
        scrollingObjectCollection.UpdateContent();

    }

}
