using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
using RosMessageTypes.Scripts;
using Unity.Robotics.ROSTCPConnector.ROSGeometry;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Audio;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System.Security.Authentication.ExtendedProtection;
using System.Collections.Specialized;
using System.Linq.Expressions;

public class BetterHelp : MonoBehaviour
{
    [SerializeField] private ROSPublisher publisher;
    [SerializeField] private GameObject spatialAnchor, TODOMenu;

    private TextToSpeech textToSpeech;
    private RadialView radialView;
    private Interactable menuInteractable;

    [SerializeField]
    [Tooltip("Assign DialogSmall_192x96.prefab")]
    private GameObject dialogPrefab;
    private bool lhHelp = false;
    private int requestID, markerID, counter;
    private int robotState = 0;
    private string messageMenu;
    private string medicineName = "";

    float awaitingResponseUntilTimestamp = -1;

    // Small dialog prefab to be displayed
    public GameObject DialogPrefab
    {
        get => dialogPrefab;
        set => dialogPrefab = value;
    }

    // Start is called before the first frame update
    void Start()
    {
        medicineName = "None";

        ROSConnection.GetOrCreateInstance().ImplementService<UpdateStateRequest, UpdateStateResponse>("/local_help_request_service", RequestHelpCallback);

        textToSpeech = TODOMenu.GetComponent<TextToSpeech>();

        radialView = TODOMenu.GetComponent<RadialView>();
    }

    // Call service to resume task
    // Update is called once per frame
    void Update()
    {

    }

    private UpdateStateResponse RequestHelpCallback(UpdateStateRequest request)
    {
        requestID = request.state;
        lhHelp = true;
        TODOMenu.SetActive(true);
        radialView.enabled = true;

        messageMenu = requestID switch
        {
            0 => "The Robot is stuck.",
            1 => $"Help the robot look for {medicineName} (ID {markerID}).",
            _ => messageMenu // In case of an unexpected requestID, keep the current message
        };

        TODOMenu.GetComponentInChildren<ButtonConfigHelper>().MainLabelText = messageMenu;
        TODOMenu.GetComponentInChildren<Interactable>().IsToggled = false;

        textToSpeech.StartSpeaking("Robot has requested your help.");

        return new UpdateStateResponse { response = true };
    }
}
