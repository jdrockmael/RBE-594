using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterWorkSpace : MonoBehaviour
{
    private bool inWorkspace = false;
    public MeshRenderer plane;
    // Start is called before the first frame update
    void Start()
    {
        plane = gameObject.GetComponent<MeshRenderer> ();
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
    }

    public void exitWorkspace(){
        inWorkspace = false;
    }
}
