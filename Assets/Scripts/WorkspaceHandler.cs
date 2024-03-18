using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;

public class WorkspaceHandler : MonoBehaviour
{
    
    private bool inWorkspace = false;
    public MeshRenderer plane;
    private TextToSpeech textToSpeech;
    // Start is called before the first frame update
    void Start()
    {
        plane = gameObject.GetComponent<MeshRenderer> ();
        textToSpeech = GetComponent<TextToSpeech>();
    }

    // Update is called once per frame
    void Update()
    {
        if (inWorkspace == true){
            plane.materials[0].color = Color.red;

        }
        else{
            plane.materials[0].color = Color.blue;
        }
    }
    private void isTriggerEnter(Collider other){
        enterWorkspace();
        
    }

    private void isTriggerExit(Collider other){
        exitWorkspace();
    }

    public void enterWorkspace(){
        inWorkspace = true;
        textToSpeech.StartSpeaking("You have entered the workspace");
    }

    public void exitWorkspace(){
        inWorkspace = false;
        textToSpeech.StartSpeaking("You have left the workspace");
    }
}
