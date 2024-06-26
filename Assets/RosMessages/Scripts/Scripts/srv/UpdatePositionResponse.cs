//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Scripts
{
    [Serializable]
    public class UpdatePositionResponse : Message
    {
        public const string k_RosMessageName = "Scripts/UpdatePosition";
        public override string RosMessageName => k_RosMessageName;

        public Geometry.PointMsg position;

        public UpdatePositionResponse()
        {
            this.position = new Geometry.PointMsg();
        }

        public UpdatePositionResponse(Geometry.PointMsg position)
        {
            this.position = position;
        }

        public static UpdatePositionResponse Deserialize(MessageDeserializer deserializer) => new UpdatePositionResponse(deserializer);

        private UpdatePositionResponse(MessageDeserializer deserializer)
        {
            this.position = Geometry.PointMsg.Deserialize(deserializer);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.position);
        }

        public override string ToString()
        {
            return "UpdatePositionResponse: " +
            "\nposition: " + position.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize, MessageSubtopic.Response);
        }
    }
}
