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

    public TextAsset medList;

    private HashSet<string> validRooms = new HashSet<string> {
        "E301", "E302", "E303", "E304", "E305", "E306", "E307", "E308", "E309", "E310",
        "E311", "E312", "E313", "E314", "E401", "E402", "E403", "E404", "E405", "E406",
        "E407", "E408", "E409", "E410", "E411", "E412", "E413", "E414", "E415", "E416",
        "E417", "E418", "E419", "E420", "E421", "E501", "E502", "E503", "E504", "E505",
        "E506", "E507", "E508", "E509", "E510", "E511", "E512", "E513", "E514", "E515",
        "E516", "E517", "E701", "E702", "E703", "E704", "E705"
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
