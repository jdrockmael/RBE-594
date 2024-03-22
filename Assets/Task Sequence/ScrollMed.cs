//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System;
using TMPro;
using System.Runtime.InteropServices;

public class ScrollMed : MonoBehaviour
{
    //public GameObject _txtPromotionalCode;// This is our prefab object that will be exposed in the inspector
    public GameObject prefab;
    public TextAsset medList;

    private List<string> meds = new List<string>();

    // Start is called before the first frame update
    void Start()
    {
        Populate();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void ReadCSV()
    {

        //Debug.Log(data[0]);
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
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i*3];
            if (expire) obj.GetComponent<Text>().color = Color.red;

            //obj.GetComponent<Text>().color = Color.red;
            // Get Name
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i * 3 + 1];
            if (expire) obj.GetComponent<Text>().color = Color.red;

            // Get Exp Date
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i * 3 + 2];
            if (expire) obj.GetComponent<Text>().color = Color.red;
        }
       
    }
}
 