using UnityEngine;
using System.Collections;
// Note this line, if it is left out, the script won't know that the class 'Path' exists and it will throw compiler errors
// This line should always be present at the top of scripts which use pathfinding
using Pathfinding;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.UnityRoboticsDemo;
using RosMessageTypes.Std;
using RosMessageTypes.Geometry;
//using static UnityEditor.PlayerSettings;
using System;

public class ARastarAI : MonoBehaviour
{
    public Transform targetPosition;

    private Seeker seeker;
    private CharacterController controller;

    public Path path;

    public float speed = 2;

    public float nextWaypointDistance = 3;

    private int currentWaypoint = 0;

    public float repathRate = 0.5f;
    private float lastRepath = float.NegativeInfinity;

    public bool reachedEndOfPath;

    ROSConnection ros;
    private string topicName = "/fuck";
    public float publishMessageFrequency = 0.5f;

    private float timeElapsed;

    public void Start()
    {
        // Get a reference to the Seeker component we added earlier
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Float32MultiArrayMsg>(topicName);
        ros.RegisterPublisher<TwistMsg>("/fuckTwist");

        seeker = GetComponent<Seeker>();

        controller = GetComponent<CharacterController>();

        

        // Start to calculate a new path to the targetPosition object, return the result to the OnPathComplete method.
        // Path requests are asynchronous, so when the OnPathComplete method is called depends on how long it
        // takes to calculate the path. Usually it is called the next frame.
        //seeker.StartPath(transform.position, targetPosition.position, OnPathComplete);
    }

    public void OnPathComplete(Path p)
    {
        //Debug.Log("A path was calculated. Did it fail with an error? " + p.error);

        // Path pooling. To avoid unnecessary allocations paths are reference counted.
        // Calling Claim will increase the reference count by 1 and Release will reduce
        // it by one, when it reaches zero the path will be pooled and then it may be used
        // by other scripts. The ABPath.Construct and Seeker.StartPath methods will
        // take a path from the pool if possible. See also the documentation page about path pooling.
        p.Claim(this);
        if (!p.error)
        {
            if (path != null) path.Release(this);
            path = p;
            // Reset the waypoint counter so that we start to move towards the first point in the path
            currentWaypoint = 0;

            timeElapsed += Time.deltaTime;

            if (timeElapsed > publishMessageFrequency)
            {
                int pathLength = path.vectorPath.Count;
                float[] pathMulti = new float[pathLength + 1];
                // Finally send the message to server_endpoint.py running in ROS

                for (int i = 0; i < pathLength; i++)
                {
                    pathMulti[i] = path.vectorPath[i].x;
                    //pathMulti[i + 1] = path.vectorPath[i].y;
                    pathMulti[i + 1] = path.vectorPath[i].z;
                }

                Float32MultiArrayMsg floatMsg = new Float32MultiArrayMsg { data = pathMulti };

                ros.Publish(topicName, floatMsg);
                timeElapsed = 0;

                TwistMsg twistMsg = new TwistMsg();
                twistMsg.linear.x = 1.0;
                ros.Publish("/fuckTwist", twistMsg);
            }
        }
        else
        {
            p.Release(this);
        }
    }

    public void Update()
    {


        //float[,] fucku2 = { { 1f, 2f, 3f }, { 4f, 5f, 6f } };


        //GameObject.Find("Ground").GetComponent<Renderer>().enabled = false;
        if (Time.time > lastRepath + repathRate && seeker.IsDone())
        {
            GameObject[] des = GameObject.FindGameObjectsWithTag("path");
            foreach (GameObject item in des)
            {
                Destroy(item);
            }
            lastRepath = Time.time;

            // Start a new path to the targetPosition, call the the OnPathComplete function
            // when the path has been calculated (which may take a few frames depending on the complexity)
            seeker.StartPath(transform.position, targetPosition.position, OnPathComplete);
        }

        if (path == null)
        {
            // We have no path to follow yet, so don't do anything
            return;
        }

        
        


        // Check in a loop if we are close enough to the current waypoint to switch to the next one.
        // We do this in a loop because many waypoints might be close to each other and we may reach
        // several of them in the same frame.
        reachedEndOfPath = false;
        // The distance to the next waypoint in the path

        /*
        foreach(Vector3 pos in path.vectorPath)
        {
            Debug.Log(pos.ToString());
        }*/

        float distanceToWaypoint;
        while (true)
        {
            // If you want maximum performance you can check the squared distance instead to get rid of a
            // square root calculation. But that is outside the scope of this tutorial.
            distanceToWaypoint = Vector3.Distance(transform.position, path.vectorPath[currentWaypoint]);
            if (distanceToWaypoint < nextWaypointDistance)
            {
                // Check if there is another waypoint or if we have reached the end of the path
                if (currentWaypoint + 1 < path.vectorPath.Count)
                {
                    currentWaypoint++;
                }
                else
                {
                    // Set a status variable to indicate that the agent has reached the end of the path.
                    // You can use this to trigger some special code if your game requires that.
                    reachedEndOfPath = true;
                    break;
                }
            }
            else
            {
                break;
            }
        }

        // Slow down smoothly upon approaching the end of the path
        // This value will smoothly go from 1 to 0 as the agent approaches the last waypoint in the path.
        var speedFactor = reachedEndOfPath ? Mathf.Sqrt(distanceToWaypoint / nextWaypointDistance) : 1f;

        // Direction to the next waypoint
        // Normalize it so that it has a length of 1 world unit
        Vector3 dir = (path.vectorPath[currentWaypoint] - transform.position).normalized;
        //Debug.Log(dir);
        // Multiply the direction by our desired speed to get a velocity
        Vector3 velocity = dir * speed * speedFactor;
        //Debug.Log(velocity);
        // Move the agent using the CharacterController component
        // Note that SimpleMove takes a velocity in meters/second, so we should not multiply by Time.deltaTime
        //controller.SimpleMove(velocity);

        // If you are writing a 2D game you should remove the CharacterController code above and instead move the transform directly by uncommenting the next line
        // transform.position += velocity * Time.deltaTime;
    }
}