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

        
        for (int i = 1; i <= rowNum; i++)
        {
            // Create new instances of our prefab until we've created as many as we specified
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i*3];
            
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i * 3 + 1];
            obj = (GameObject)Instantiate(prefab, transform);
            obj.GetComponent<Text>().text = data[i * 3 + 2];
        }
       
    }
}
 