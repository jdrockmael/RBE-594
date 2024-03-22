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

public class ScrollMedV2 : MonoBehaviour
{
    //public GameObject _txtPromotionalCode;// This is our prefab object that will be exposed in the inspector
    public GameObject prefab;
    public GameObject redPrefab;

    public TextAsset medList;

    private List<string> meds = new List<string>();
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
        DateTime today = DateTime.Today.Date;

        for (int i = 1; i <= rowNum; i++)
        {
            // Create new instances of our prefab until we've created as many as we specified

            // Check if medicine is expired
            DateTime medExp = DateTime.Parse(data[i * 3 + 2]);

            Boolean expire = false;
            if (today > medExp)
            {
                expire = true;
            }

            // Get ID
            if (expire)
            {
                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3];
                obj.SetActive(true);

                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 1];
                obj.SetActive(true);

                obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 2];
                obj.SetActive(true);
            }
            else
            {
                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3];
                obj.SetActive(true);

                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 1];
                obj.SetActive(true);

                obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
                obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 2];
                obj.SetActive(true);
            }

            /*
            obj = (GameObject)Instantiate(redPrefab, gridObjectCollection.transform);
            obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3];
            //obj.transform.GetChild(1).gameObject.GetComponentInChildren<MeshRenderer>().material.color = Color.red;
            obj.SetActive(true);
            //obj.GetComponent<Text>().text = data[i * 3];
            //if (expire) obj.GetComponent<Text>().color = Color.red;

            //obj.GetComponent<Text>().color = Color.red;
            // Get Name
            obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
            obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 1];
            obj.SetActive(true);
            //obj.GetComponent<Text>().text = data[i * 3 + 1];
            //if (expire) obj.GetComponent<Text>().color = Color.red;

            // Get Exp Date
            obj = (GameObject)Instantiate(prefab, gridObjectCollection.transform);
            obj.GetComponentInChildren<TextMeshPro>().GetComponent<TextMeshPro>().text = data[i * 3 + 2];
            obj.SetActive(true);
            //obj.GetComponent<Text>().text = data[i * 3 + 2];
            //if (expire) obj.GetComponent<Text>().color = Color.red;*/
        }

        gridObjectCollection.UpdateCollection();
        scrollingObjectCollection.UpdateContent();

    }
}
