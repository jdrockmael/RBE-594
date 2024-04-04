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
    public Collider OtherCollider01 = null;
    void Start()
    {
        plane = gameObject.GetComponent<MeshRenderer> ();
        textToSpeech = gameObject.GetComponent<TextToSpeech>();
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
    }

    public void exitWorkspace(){
        inWorkspace = false;
        textToSpeech.StartSpeaking("You have left the workspace");
    }
}
