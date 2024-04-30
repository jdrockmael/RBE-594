//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Scripts
{
    [Serializable]
    public class UpdateStateRequest : Message
    {
        public const string k_RosMessageName = "Scripts/UpdateState";
        public override string RosMessageName => k_RosMessageName;

        public short state;

        public UpdateStateRequest()
        {
            this.state = 0;
        }

        public UpdateStateRequest(short state)
        {
            this.state = state;
        }

        public static UpdateStateRequest Deserialize(MessageDeserializer deserializer) => new UpdateStateRequest(deserializer);

        private UpdateStateRequest(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.state);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.state);
        }

        public override string ToString()
        {
            return "UpdateStateRequest: " +
            "\nstate: " + state.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}
