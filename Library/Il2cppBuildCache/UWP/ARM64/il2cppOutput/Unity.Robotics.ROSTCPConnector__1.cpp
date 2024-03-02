#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<RosMessageTypes.Tf2.TFMessageMsg>
struct Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26;
// System.Action`1<TFStream>
struct Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_tD98ADCC1BFF5DC825B8A00C49AC0BC72ED7A50CC;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>>
struct ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421;
// System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>
struct ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Robotics.ROSTCPConnector.TaskPauser>
struct Dictionary_2_tBAADB31E63FC1CC696806D76DC56325264C1A444;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Robotics.ROSTCPConnector.RosTopicState>
struct Dictionary_2_tD7FC88FBF9A3F025BF2131B05F7931D8EC56D004;
// System.Collections.Generic.Dictionary`2<System.String,TFStream>
struct Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>>
struct Func_2_t53C30E50CA34E7D8CD95CC8DF0C8F2C04C8CB641;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Func_2_tC057D8A1F14A047321A4281EB887CAB734969010;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Func_2_tDF15217118E975816709A90F855C00DF6CBE404C;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<TFStream>
struct IEnumerable_1_t6DFAC52EFAD7DC4EE576ED45226D7332F5EB9FEB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TFStream>
struct KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2;
// System.Collections.Generic.LinkedList`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct LinkedList_1_t1853CF4A7E3C67A2F04BE705825E6BDCFD72861F;
// System.Collections.Generic.List`1<System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>>
struct List_1_t0E1A8C4C1766DF62189A7A5C9C68933DD2FA5A6E;
// System.Collections.Generic.List`1<System.Action`1<System.String[]>>
struct List_1_t5F00E3DDE8A15B7F96E441618D2520267C14049B;
// System.Collections.Generic.List`1<System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct List_1_t5CD3176686DC2F5D07455FF5C2B951A00D35B441;
// System.Collections.Generic.List`1<System.Action`1<Unity.Robotics.ROSTCPConnector.RosTopicState>>
struct List_1_t1811431EA0EDAB5C5E37509DFDDB8EA847F91C09;
// System.Collections.Generic.List`1<System.Action`1<TFStream>>
struct List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TFFrame>
struct List_1_tA9793009C28E731F6DD77EC2B186EADE3D6AD0F0;
// System.Collections.Generic.List`1<TFStream>
struct List_1_tCDCDC9071A6D80F21D6B9CC7F5806E2CC3A796FD;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<System.Tuple`2<System.String,System.Byte[]>>
struct Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>
struct Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14;
// System.Threading.Tasks.TaskFactory`1<System.Tuple`2<System.String,System.Byte[]>>
struct TaskFactory_1_tBD817F031B8DFBD48571E987091FC0D1EDC839AB;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct TaskFactory_1_tCC16C715B246274D030919EF751E32597BF44F28;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>
struct Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Task_1_t2BA5344BFCD9088736C17267111669B81556F686;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`2<System.String,System.Byte[]>
struct Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TFStream>
struct ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE;
// System.Action`1<TFStream>[]
struct Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TFStream>[]
struct EntryU5BU5D_t418E33420FCD65379011E109327433ED28694AD5;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// RosMessageTypes.Geometry.TransformStampedMsg[]
struct TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// RosMessageTypes.Std.HeaderMsg
struct HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC;
// Unity.Robotics.ROSTCPConnector.HudPanel
struct HudPanel_t212247373E11954797313F78667AB6AAEB33BD24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Robotics.ROSTCPConnector.IMessagePool
struct IMessagePool_t567DC8414BDC187EFEDBF822B7006F825A89AF5A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// Unity.Robotics.ROSTCPConnector.OutgoingMessageSender
struct OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F;
// RosMessageTypes.Geometry.QuaternionMsg
struct QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF;
// Unity.Robotics.ROSTCPConnector.ROSConnection
struct ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646;
// Unity.Robotics.ROSTCPConnector.RosTopicState
struct RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// RosMessageTypes.Tf2.TFMessageMsg
struct TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7;
// TFStream
struct TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// Unity.Robotics.ROSTCPConnector.TaskPauser
struct TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// RosMessageTypes.BuiltinInterfaces.TimeMsg
struct TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// Unity.Robotics.ROSTCPConnector.TopicMessageSender
struct TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69;
// RosMessageTypes.Geometry.TransformMsg
struct TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42;
// RosMessageTypes.Geometry.TransformStampedMsg
struct TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111;
// RosMessageTypes.Geometry.Vector3Msg
struct Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue
struct OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35;
// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tF38E6C7464135D531375BFBAE8403F646657AF2E;
// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t3761CE8E697D4ED59154D7C60D9644DF18F0695C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// TFSystem/TFTopicState
struct TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCanceledException_t8C4641920752790DEE40C9F907D7E10F90DE072B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0551A6B5882D29E66A190E28F0957D424A8B88CA;
IL2CPP_EXTERN_C String_t* _stringLiteral187B6F45E6C72965325D1D0E41F952304ABBDB0B;
IL2CPP_EXTERN_C String_t* _stringLiteral2C384C883E5BF8402615DAD3461FDC3262E46D74;
IL2CPP_EXTERN_C String_t* _stringLiteral353D32E8D7BC623E2BBEA46AAD31F73F9B002E0D;
IL2CPP_EXTERN_C String_t* _stringLiteral63E9424F20C383B160F708CA2E5DDEA543A1AC38;
IL2CPP_EXTERN_C String_t* _stringLiteral642F1BBAF2FE4EA77DE8C2885B423E1A9B200BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral65F09C00AD6049CB190922F30455082DB3301FC9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8F69868A72D4D9F51FE5B80A8E34E65A45AB54;
IL2CPP_EXTERN_C String_t* _stringLiteral6C7E2CA5155E4B3133FA1206AF977E5ED3EE64D7;
IL2CPP_EXTERN_C String_t* _stringLiteral746DAEAF0AAE08B8FF08855FFD24153883A06021;
IL2CPP_EXTERN_C String_t* _stringLiteral84B89B8119816C5541CBC4AC2F62BAAB477EDDE0;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9984D961F05D7CF0CCE53E6817AC721170DAE5C8;
IL2CPP_EXTERN_C String_t* _stringLiteralA228C63628C64DC8F7CBC1CE11F46D2D0AB48611;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AD016E36596E4DC28E9F50E220A7F794409A3E;
IL2CPP_EXTERN_C String_t* _stringLiteralD7639D5A6B0DD8423C13B4343D7D0E527E1003AD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D604AD3C7E778C6667C37428CB5FF31188AAF3;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE55D1AC08095D5709632811BFDB625841BDFD8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD199854B63E0FE83DEC3B459444D5A8F1BF09150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_m9D9D07E9D91FC884703ED3C79388887F8DCF220C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m95D741946E89C8ED50E36E3643AD841C6288286D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mEE8AEB153DD822295E96CC476FFAA994AC94CEE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_m1E8C18BE24AA12BFA3E507CD480ECCC1BA911B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m32693680AC5CFFB5F206E12C51EE5DF3600258E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m586731BA73DEE5BF1A0806E23E330F83A695B7A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5DF6D85F2EBFDA31E81DACB9837BC1C7E8A7E292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mCA87B106B48617FBC592C93DC8CD73CD04605F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m17740A5E65B682D818A2F50E33CB6C1569974E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAF04F7D58F9688C7F7FF0BF40D2CA799BA96C701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB0C5660BE80F63299FE222D43E7B2FEAF97E87A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m905FDD4CDFECFABB0E50422A7DF27732D724D71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9702080EE23B0F046C5B10E3DB09BA7F83BC33D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB663A5EC4A18D286D12C1A57DBD0C436FA680A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD62F60FA07DFE72F895DC78B3310E250FC15FCF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m11665158226FC6CAE04CCA779FFF99A552C3EC00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m2577E3D9E3E3399B1A3A4E613C56EF1A35840B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2E3DA3CD26FDDD3626A707D9758D9A5C29DB07BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mED486CF01AA0DB7E14761D7313750EFBECB63C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m28A06310BD6E012C1B3A58F69656EF53454820CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ROSConnection_Subscribe_TisTFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_mC1DB458F3D267FC86C0BCE5A179AB85C0D1C8FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TFTopicState_ReceiveTF_m4F69722AF3BFE23EDEDD7E20BACAC164C2D5373C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF7BB352C5320A92F62331B8038E155D0FA78E5EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mFD404E76E39E43579026FD03F2565BB0205D6304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m785DAB38536FEF95D0FA0F82FCAAC22ABA7A14AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m2FD6F08A9CDE50D2FA1C8D1F26E8075CCC753BC5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>>
struct ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE, ____tail_3)); }
	inline Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * get__tail_3() const { return ____tail_3; }
	inline Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE, ____head_4)); }
	inline Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * get__head_4() const { return ____head_4; }
	inline Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_tD32DCF3970152AD6D79BDD94717E3CC1CCB43965 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>
struct ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80, ____tail_3)); }
	inline Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * get__tail_3() const { return ____tail_3; }
	inline Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80, ____head_4)); }
	inline Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * get__head_4() const { return ____head_4; }
	inline Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t879FDE9177AD5C2121990C28536ED771F11D7E14 * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,TFStream>
struct Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t418E33420FCD65379011E109327433ED28694AD5* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___entries_1)); }
	inline EntryU5BU5D_t418E33420FCD65379011E109327433ED28694AD5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t418E33420FCD65379011E109327433ED28694AD5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t418E33420FCD65379011E109327433ED28694AD5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___keys_7)); }
	inline KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ___values_8)); }
	inline ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TFStream>
struct KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2, ___dictionary_0)); }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<TFStream>>
struct List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B, ____items_1)); }
	inline Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`2<System.String,System.Byte[]>
struct Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	String_t* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26, ___m_Item1_0)); }
	inline String_t* get_m_Item1_0() const { return ___m_Item1_0; }
	inline String_t** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(String_t* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26, ___m_Item2_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_Item2_1() const { return ___m_Item2_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TFStream>
struct ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE, ___dictionary_0)); }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F  : public RuntimeObject
{
public:

public:
};


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074  : public RuntimeObject
{
public:
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_0;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::offset
	int32_t ___offset_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074, ___data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}
};


// Unity.Robotics.ROSTCPConnector.OutgoingMessageSender
struct OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};


// TFStream
struct TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE  : public RuntimeObject
{
public:
	// System.String TFStream::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String TFStream::<TFTopic>k__BackingField
	String_t* ___U3CTFTopicU3Ek__BackingField_1;
	// TFStream TFStream::<Parent>k__BackingField
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___U3CParentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Int64> TFStream::m_Timestamps
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___m_Timestamps_3;
	// System.Collections.Generic.List`1<TFFrame> TFStream::m_Frames
	List_1_tA9793009C28E731F6DD77EC2B186EADE3D6AD0F0 * ___m_Frames_4;
	// System.Collections.Generic.List`1<TFStream> TFStream::m_Children
	List_1_tCDCDC9071A6D80F21D6B9CC7F5806E2CC3A796FD * ___m_Children_5;
	// UnityEngine.GameObject TFStream::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_6;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTFTopicU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___U3CTFTopicU3Ek__BackingField_1)); }
	inline String_t* get_U3CTFTopicU3Ek__BackingField_1() const { return ___U3CTFTopicU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTFTopicU3Ek__BackingField_1() { return &___U3CTFTopicU3Ek__BackingField_1; }
	inline void set_U3CTFTopicU3Ek__BackingField_1(String_t* value)
	{
		___U3CTFTopicU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTFTopicU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___U3CParentU3Ek__BackingField_2)); }
	inline TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * get_U3CParentU3Ek__BackingField_2() const { return ___U3CParentU3Ek__BackingField_2; }
	inline TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE ** get_address_of_U3CParentU3Ek__BackingField_2() { return &___U3CParentU3Ek__BackingField_2; }
	inline void set_U3CParentU3Ek__BackingField_2(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * value)
	{
		___U3CParentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timestamps_3() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___m_Timestamps_3)); }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * get_m_Timestamps_3() const { return ___m_Timestamps_3; }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 ** get_address_of_m_Timestamps_3() { return &___m_Timestamps_3; }
	inline void set_m_Timestamps_3(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * value)
	{
		___m_Timestamps_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timestamps_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Frames_4() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___m_Frames_4)); }
	inline List_1_tA9793009C28E731F6DD77EC2B186EADE3D6AD0F0 * get_m_Frames_4() const { return ___m_Frames_4; }
	inline List_1_tA9793009C28E731F6DD77EC2B186EADE3D6AD0F0 ** get_address_of_m_Frames_4() { return &___m_Frames_4; }
	inline void set_m_Frames_4(List_1_tA9793009C28E731F6DD77EC2B186EADE3D6AD0F0 * value)
	{
		___m_Frames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Frames_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_5() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___m_Children_5)); }
	inline List_1_tCDCDC9071A6D80F21D6B9CC7F5806E2CC3A796FD * get_m_Children_5() const { return ___m_Children_5; }
	inline List_1_tCDCDC9071A6D80F21D6B9CC7F5806E2CC3A796FD ** get_address_of_m_Children_5() { return &___m_Children_5; }
	inline void set_m_Children_5(List_1_tCDCDC9071A6D80F21D6B9CC7F5806E2CC3A796FD * value)
	{
		___m_Children_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_GameObject_6() { return static_cast<int32_t>(offsetof(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE, ___m_GameObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_6() const { return ___m_GameObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_6() { return &___m_GameObject_6; }
	inline void set_m_GameObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_6), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.TaskPauser
struct TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource Unity.Robotics.ROSTCPConnector.TaskPauser::m_Source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_Source_0;
	// System.Object Unity.Robotics.ROSTCPConnector.TaskPauser::<Result>k__BackingField
	RuntimeObject * ___U3CResultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15, ___m_Source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_Source_0() const { return ___m_Source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_Source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Source_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15, ___U3CResultU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CResultU3Ek__BackingField_1() const { return ___U3CResultU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CResultU3Ek__BackingField_1() { return &___U3CResultU3Ek__BackingField_1; }
	inline void set_U3CResultU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_1), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue
struct OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender> Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::m_OutgoingMessageQueue
	ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * ___m_OutgoingMessageQueue_0;
	// System.Threading.ManualResetEvent Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::NewMessageReadyToSendEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___NewMessageReadyToSendEvent_1;

public:
	inline static int32_t get_offset_of_m_OutgoingMessageQueue_0() { return static_cast<int32_t>(offsetof(OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35, ___m_OutgoingMessageQueue_0)); }
	inline ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * get_m_OutgoingMessageQueue_0() const { return ___m_OutgoingMessageQueue_0; }
	inline ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 ** get_address_of_m_OutgoingMessageQueue_0() { return &___m_OutgoingMessageQueue_0; }
	inline void set_m_OutgoingMessageQueue_0(ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * value)
	{
		___m_OutgoingMessageQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutgoingMessageQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_NewMessageReadyToSendEvent_1() { return static_cast<int32_t>(offsetof(OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35, ___NewMessageReadyToSendEvent_1)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_NewMessageReadyToSendEvent_1() const { return ___NewMessageReadyToSendEvent_1; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_NewMessageReadyToSendEvent_1() { return &___NewMessageReadyToSendEvent_1; }
	inline void set_NewMessageReadyToSendEvent_1(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___NewMessageReadyToSendEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewMessageReadyToSendEvent_1), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tF38E6C7464135D531375BFBAE8403F646657AF2E  : public RuntimeObject
{
public:
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0::message
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass56_0_tF38E6C7464135D531375BFBAE8403F646657AF2E, ___message_0)); }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * get_message_0() const { return ___message_0; }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F ** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t3761CE8E697D4ED59154D7C60D9644DF18F0695C  : public RuntimeObject
{
public:
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0::message
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t3761CE8E697D4ED59154D7C60D9644DF18F0695C, ___message_0)); }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * get_message_0() const { return ___message_0; }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F ** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}
};


// TFSystem/TFTopicState
struct TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02  : public RuntimeObject
{
public:
	// System.String TFSystem/TFTopicState::m_TFTopic
	String_t* ___m_TFTopic_0;
	// System.Collections.Generic.Dictionary`2<System.String,TFStream> TFSystem/TFTopicState::m_TransformTable
	Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * ___m_TransformTable_1;
	// System.Collections.Generic.List`1<System.Action`1<TFStream>> TFSystem/TFTopicState::m_Listeners
	List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * ___m_Listeners_2;

public:
	inline static int32_t get_offset_of_m_TFTopic_0() { return static_cast<int32_t>(offsetof(TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02, ___m_TFTopic_0)); }
	inline String_t* get_m_TFTopic_0() const { return ___m_TFTopic_0; }
	inline String_t** get_address_of_m_TFTopic_0() { return &___m_TFTopic_0; }
	inline void set_m_TFTopic_0(String_t* value)
	{
		___m_TFTopic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TFTopic_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformTable_1() { return static_cast<int32_t>(offsetof(TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02, ___m_TransformTable_1)); }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * get_m_TransformTable_1() const { return ___m_TransformTable_1; }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED ** get_address_of_m_TransformTable_1() { return &___m_TransformTable_1; }
	inline void set_m_TransformTable_1(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * value)
	{
		___m_TransformTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransformTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Listeners_2() { return static_cast<int32_t>(offsetof(TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02, ___m_Listeners_2)); }
	inline List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * get_m_Listeners_2() const { return ___m_Listeners_2; }
	inline List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B ** get_address_of_m_Listeners_2() { return &___m_Listeners_2; }
	inline void set_m_Listeners_2(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * value)
	{
		___m_Listeners_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Listeners_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>
struct Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF, ___list_0)); }
	inline List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * get_list_0() const { return ___list_0; }
	inline List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF, ___current_3)); }
	inline Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * get_current_3() const { return ___current_3; }
	inline Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>
struct Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782, ___dictionary_0)); }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782, ___currentValue_3)); }
	inline TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * get_currentValue_3() const { return ___currentValue_3; }
	inline TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>
struct TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6, ___m_task_0)); }
	inline Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93, ___m_task_0)); }
	inline Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2BA5344BFCD9088736C17267111669B81556F686 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// RosMessageTypes.Std.HeaderMsg
struct HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// System.UInt32 RosMessageTypes.Std.HeaderMsg::seq
	uint32_t ___seq_0;
	// RosMessageTypes.BuiltinInterfaces.TimeMsg RosMessageTypes.Std.HeaderMsg::stamp
	TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 * ___stamp_1;
	// System.String RosMessageTypes.Std.HeaderMsg::frame_id
	String_t* ___frame_id_2;

public:
	inline static int32_t get_offset_of_seq_0() { return static_cast<int32_t>(offsetof(HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC, ___seq_0)); }
	inline uint32_t get_seq_0() const { return ___seq_0; }
	inline uint32_t* get_address_of_seq_0() { return &___seq_0; }
	inline void set_seq_0(uint32_t value)
	{
		___seq_0 = value;
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC, ___stamp_1)); }
	inline TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 * get_stamp_1() const { return ___stamp_1; }
	inline TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 ** get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 * value)
	{
		___stamp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stamp_1), (void*)value);
	}

	inline static int32_t get_offset_of_frame_id_2() { return static_cast<int32_t>(offsetof(HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC, ___frame_id_2)); }
	inline String_t* get_frame_id_2() const { return ___frame_id_2; }
	inline String_t** get_address_of_frame_id_2() { return &___frame_id_2; }
	inline void set_frame_id_2(String_t* value)
	{
		___frame_id_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_id_2), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// RosMessageTypes.Geometry.QuaternionMsg
struct QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// System.Double RosMessageTypes.Geometry.QuaternionMsg::x
	double ___x_0;
	// System.Double RosMessageTypes.Geometry.QuaternionMsg::y
	double ___y_1;
	// System.Double RosMessageTypes.Geometry.QuaternionMsg::z
	double ___z_2;
	// System.Double RosMessageTypes.Geometry.QuaternionMsg::w
	double ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF, ___w_3)); }
	inline double get_w_3() const { return ___w_3; }
	inline double* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(double value)
	{
		___w_3 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration
struct SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760 
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration::topic
	String_t* ___topic_0;
	// System.String Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration::message_name
	String_t* ___message_name_1;
	// System.Int32 Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration::queue_size
	int32_t ___queue_size_2;
	// System.Boolean Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration::latch
	bool ___latch_3;

public:
	inline static int32_t get_offset_of_topic_0() { return static_cast<int32_t>(offsetof(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760, ___topic_0)); }
	inline String_t* get_topic_0() const { return ___topic_0; }
	inline String_t** get_address_of_topic_0() { return &___topic_0; }
	inline void set_topic_0(String_t* value)
	{
		___topic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_name_1() { return static_cast<int32_t>(offsetof(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760, ___message_name_1)); }
	inline String_t* get_message_name_1() const { return ___message_name_1; }
	inline String_t** get_address_of_message_name_1() { return &___message_name_1; }
	inline void set_message_name_1(String_t* value)
	{
		___message_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_queue_size_2() { return static_cast<int32_t>(offsetof(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760, ___queue_size_2)); }
	inline int32_t get_queue_size_2() const { return ___queue_size_2; }
	inline int32_t* get_address_of_queue_size_2() { return &___queue_size_2; }
	inline void set_queue_size_2(int32_t value)
	{
		___queue_size_2 = value;
	}

	inline static int32_t get_offset_of_latch_3() { return static_cast<int32_t>(offsetof(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760, ___latch_3)); }
	inline bool get_latch_3() const { return ___latch_3; }
	inline bool* get_address_of_latch_3() { return &___latch_3; }
	inline void set_latch_3(bool value)
	{
		___latch_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration
struct SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760_marshaled_pinvoke
{
	char* ___topic_0;
	char* ___message_name_1;
	int32_t ___queue_size_2;
	int32_t ___latch_3;
};
// Native definition for COM marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration
struct SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760_marshaled_com
{
	Il2CppChar* ___topic_0;
	Il2CppChar* ___message_name_1;
	int32_t ___queue_size_2;
	int32_t ___latch_3;
};

// Unity.Robotics.ROSTCPConnector.SysCommand_Service
struct SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.SysCommand_Service::srv_id
	int32_t ___srv_id_0;

public:
	inline static int32_t get_offset_of_srv_id_0() { return static_cast<int32_t>(offsetof(SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F, ___srv_id_0)); }
	inline int32_t get_srv_id_0() const { return ___srv_id_0; }
	inline int32_t* get_address_of_srv_id_0() { return &___srv_id_0; }
	inline void set_srv_id_0(int32_t value)
	{
		___srv_id_0 = value;
	}
};


// Unity.Robotics.ROSTCPConnector.SysCommand_Topic
struct SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5 
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.SysCommand_Topic::topic
	String_t* ___topic_0;

public:
	inline static int32_t get_offset_of_topic_0() { return static_cast<int32_t>(offsetof(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5, ___topic_0)); }
	inline String_t* get_topic_0() const { return ___topic_0; }
	inline String_t** get_address_of_topic_0() { return &___topic_0; }
	inline void set_topic_0(String_t* value)
	{
		___topic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_Topic
struct SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_marshaled_pinvoke
{
	char* ___topic_0;
};
// Native definition for COM marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_Topic
struct SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_marshaled_com
{
	Il2CppChar* ___topic_0;
};

// Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType
struct SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324 
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType::topic
	String_t* ___topic_0;
	// System.String Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType::message_name
	String_t* ___message_name_1;

public:
	inline static int32_t get_offset_of_topic_0() { return static_cast<int32_t>(offsetof(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324, ___topic_0)); }
	inline String_t* get_topic_0() const { return ___topic_0; }
	inline String_t** get_address_of_topic_0() { return &___topic_0; }
	inline void set_topic_0(String_t* value)
	{
		___topic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_name_1() { return static_cast<int32_t>(offsetof(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324, ___message_name_1)); }
	inline String_t* get_message_name_1() const { return ___message_name_1; }
	inline String_t** get_address_of_message_name_1() { return &___message_name_1; }
	inline void set_message_name_1(String_t* value)
	{
		___message_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_name_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType
struct SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_marshaled_pinvoke
{
	char* ___topic_0;
	char* ___message_name_1;
};
// Native definition for COM marshalling of Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType
struct SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_marshaled_com
{
	Il2CppChar* ___topic_0;
	Il2CppChar* ___message_name_1;
};

// RosMessageTypes.Tf2.TFMessageMsg
struct TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// RosMessageTypes.Geometry.TransformStampedMsg[] RosMessageTypes.Tf2.TFMessageMsg::transforms
	TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* ___transforms_0;

public:
	inline static int32_t get_offset_of_transforms_0() { return static_cast<int32_t>(offsetof(TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7, ___transforms_0)); }
	inline TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* get_transforms_0() const { return ___transforms_0; }
	inline TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503** get_address_of_transforms_0() { return &___transforms_0; }
	inline void set_transforms_0(TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* value)
	{
		___transforms_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transforms_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// RosMessageTypes.BuiltinInterfaces.TimeMsg
struct TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// System.UInt32 RosMessageTypes.BuiltinInterfaces.TimeMsg::sec
	uint32_t ___sec_0;
	// System.UInt32 RosMessageTypes.BuiltinInterfaces.TimeMsg::nanosec
	uint32_t ___nanosec_1;

public:
	inline static int32_t get_offset_of_sec_0() { return static_cast<int32_t>(offsetof(TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1, ___sec_0)); }
	inline uint32_t get_sec_0() const { return ___sec_0; }
	inline uint32_t* get_address_of_sec_0() { return &___sec_0; }
	inline void set_sec_0(uint32_t value)
	{
		___sec_0 = value;
	}

	inline static int32_t get_offset_of_nanosec_1() { return static_cast<int32_t>(offsetof(TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1, ___nanosec_1)); }
	inline uint32_t get_nanosec_1() const { return ___nanosec_1; }
	inline uint32_t* get_address_of_nanosec_1() { return &___nanosec_1; }
	inline void set_nanosec_1(uint32_t value)
	{
		___nanosec_1 = value;
	}
};


// Unity.Robotics.ROSTCPConnector.TopicMessageSender
struct TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69  : public OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.TopicMessageSender::<RosMessageName>k__BackingField
	String_t* ___U3CRosMessageNameU3Ek__BackingField_0;
	// System.String Unity.Robotics.ROSTCPConnector.TopicMessageSender::<TopicName>k__BackingField
	String_t* ___U3CTopicNameU3Ek__BackingField_1;
	// System.Int32 Unity.Robotics.ROSTCPConnector.TopicMessageSender::<QueueSize>k__BackingField
	int32_t ___U3CQueueSizeU3Ek__BackingField_2;
	// System.Collections.Generic.LinkedList`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.TopicMessageSender::m_OutgoingMessages
	LinkedList_1_t1853CF4A7E3C67A2F04BE705825E6BDCFD72861F * ___m_OutgoingMessages_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.TopicMessageSender::m_QueueOverflowUnsentCounter
	int32_t ___m_QueueOverflowUnsentCounter_4;
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message Unity.Robotics.ROSTCPConnector.TopicMessageSender::m_LastMessageSent
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___m_LastMessageSent_5;
	// Unity.Robotics.ROSTCPConnector.IMessagePool Unity.Robotics.ROSTCPConnector.TopicMessageSender::m_MessagePool
	RuntimeObject* ___m_MessagePool_6;

public:
	inline static int32_t get_offset_of_U3CRosMessageNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___U3CRosMessageNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CRosMessageNameU3Ek__BackingField_0() const { return ___U3CRosMessageNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRosMessageNameU3Ek__BackingField_0() { return &___U3CRosMessageNameU3Ek__BackingField_0; }
	inline void set_U3CRosMessageNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CRosMessageNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRosMessageNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTopicNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___U3CTopicNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CTopicNameU3Ek__BackingField_1() const { return ___U3CTopicNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTopicNameU3Ek__BackingField_1() { return &___U3CTopicNameU3Ek__BackingField_1; }
	inline void set_U3CTopicNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CTopicNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTopicNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQueueSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___U3CQueueSizeU3Ek__BackingField_2)); }
	inline int32_t get_U3CQueueSizeU3Ek__BackingField_2() const { return ___U3CQueueSizeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CQueueSizeU3Ek__BackingField_2() { return &___U3CQueueSizeU3Ek__BackingField_2; }
	inline void set_U3CQueueSizeU3Ek__BackingField_2(int32_t value)
	{
		___U3CQueueSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_OutgoingMessages_3() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___m_OutgoingMessages_3)); }
	inline LinkedList_1_t1853CF4A7E3C67A2F04BE705825E6BDCFD72861F * get_m_OutgoingMessages_3() const { return ___m_OutgoingMessages_3; }
	inline LinkedList_1_t1853CF4A7E3C67A2F04BE705825E6BDCFD72861F ** get_address_of_m_OutgoingMessages_3() { return &___m_OutgoingMessages_3; }
	inline void set_m_OutgoingMessages_3(LinkedList_1_t1853CF4A7E3C67A2F04BE705825E6BDCFD72861F * value)
	{
		___m_OutgoingMessages_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutgoingMessages_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueueOverflowUnsentCounter_4() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___m_QueueOverflowUnsentCounter_4)); }
	inline int32_t get_m_QueueOverflowUnsentCounter_4() const { return ___m_QueueOverflowUnsentCounter_4; }
	inline int32_t* get_address_of_m_QueueOverflowUnsentCounter_4() { return &___m_QueueOverflowUnsentCounter_4; }
	inline void set_m_QueueOverflowUnsentCounter_4(int32_t value)
	{
		___m_QueueOverflowUnsentCounter_4 = value;
	}

	inline static int32_t get_offset_of_m_LastMessageSent_5() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___m_LastMessageSent_5)); }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * get_m_LastMessageSent_5() const { return ___m_LastMessageSent_5; }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F ** get_address_of_m_LastMessageSent_5() { return &___m_LastMessageSent_5; }
	inline void set_m_LastMessageSent_5(Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * value)
	{
		___m_LastMessageSent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastMessageSent_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessagePool_6() { return static_cast<int32_t>(offsetof(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69, ___m_MessagePool_6)); }
	inline RuntimeObject* get_m_MessagePool_6() const { return ___m_MessagePool_6; }
	inline RuntimeObject** get_address_of_m_MessagePool_6() { return &___m_MessagePool_6; }
	inline void set_m_MessagePool_6(RuntimeObject* value)
	{
		___m_MessagePool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessagePool_6), (void*)value);
	}
};


// RosMessageTypes.Geometry.TransformMsg
struct TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// RosMessageTypes.Geometry.Vector3Msg RosMessageTypes.Geometry.TransformMsg::translation
	Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * ___translation_0;
	// RosMessageTypes.Geometry.QuaternionMsg RosMessageTypes.Geometry.TransformMsg::rotation
	QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * ___rotation_1;

public:
	inline static int32_t get_offset_of_translation_0() { return static_cast<int32_t>(offsetof(TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42, ___translation_0)); }
	inline Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * get_translation_0() const { return ___translation_0; }
	inline Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 ** get_address_of_translation_0() { return &___translation_0; }
	inline void set_translation_0(Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * value)
	{
		___translation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translation_0), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42, ___rotation_1)); }
	inline QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * get_rotation_1() const { return ___rotation_1; }
	inline QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF ** get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * value)
	{
		___rotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotation_1), (void*)value);
	}
};


// RosMessageTypes.Geometry.TransformStampedMsg
struct TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// RosMessageTypes.Std.HeaderMsg RosMessageTypes.Geometry.TransformStampedMsg::header
	HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC * ___header_0;
	// System.String RosMessageTypes.Geometry.TransformStampedMsg::child_frame_id
	String_t* ___child_frame_id_1;
	// RosMessageTypes.Geometry.TransformMsg RosMessageTypes.Geometry.TransformStampedMsg::transform
	TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 * ___transform_2;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111, ___header_0)); }
	inline HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC * get_header_0() const { return ___header_0; }
	inline HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC ** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC * value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}

	inline static int32_t get_offset_of_child_frame_id_1() { return static_cast<int32_t>(offsetof(TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111, ___child_frame_id_1)); }
	inline String_t* get_child_frame_id_1() const { return ___child_frame_id_1; }
	inline String_t** get_address_of_child_frame_id_1() { return &___child_frame_id_1; }
	inline void set_child_frame_id_1(String_t* value)
	{
		___child_frame_id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_frame_id_1), (void*)value);
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111, ___transform_2)); }
	inline TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 * get_transform_2() const { return ___transform_2; }
	inline TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 ** get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 * value)
	{
		___transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_2), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// RosMessageTypes.Geometry.Vector3Msg
struct Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3  : public Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F
{
public:
	// System.Double RosMessageTypes.Geometry.Vector3Msg::x
	double ___x_0;
	// System.Double RosMessageTypes.Geometry.Vector3Msg::y
	double ___y_1;
	// System.Double RosMessageTypes.Geometry.Vector3Msg::z
	double ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3, ___z_2)); }
	inline double get_z_2() const { return ___z_2; }
	inline double* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(double value)
	{
		___z_2 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
struct InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 
{
public:
	// Unity.Robotics.ROSTCPConnector.ROSConnection Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::m_Self
	ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___m_Self_0;

public:
	inline static int32_t get_offset_of_m_Self_0() { return static_cast<int32_t>(offsetof(InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4, ___m_Self_0)); }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * get_m_Self_0() const { return ___m_Self_0; }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 ** get_address_of_m_Self_0() { return &___m_Self_0; }
	inline void set_m_Self_0(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * value)
	{
		___m_Self_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Self_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
struct InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_pinvoke
{
	ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___m_Self_0;
};
// Native definition for COM marshalling of Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
struct InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_com
{
	ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___m_Self_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic
struct MessageSubtopic_t743144C2BF5C58BF232CF61EA393958A4C5A9C23 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageSubtopic_t743144C2BF5C58BF232CF61EA393958A4C5A9C23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>
struct Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A, ___m_result_40)); }
	inline Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * get_m_result_40() const { return ___m_result_40; }
	inline Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Task_1_t2BA5344BFCD9088736C17267111669B81556F686  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2BA5344BFCD9088736C17267111669B81556F686, ___m_result_40)); }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * get_m_result_40() const { return ___m_result_40; }
	inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.Robotics.ROSTCPConnector.RosTopicState
struct RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E  : public RuntimeObject
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.RosTopicState::m_Topic
	String_t* ___m_Topic_0;
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic Unity.Robotics.ROSTCPConnector.RosTopicState::m_Subtopic
	int32_t ___m_Subtopic_1;
	// System.String Unity.Robotics.ROSTCPConnector.RosTopicState::m_RosMessageName
	String_t* ___m_RosMessageName_2;
	// Unity.Robotics.ROSTCPConnector.TopicMessageSender Unity.Robotics.ROSTCPConnector.RosTopicState::m_MessageSender
	TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * ___m_MessageSender_3;
	// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::<IsPublisher>k__BackingField
	bool ___U3CIsPublisherU3Ek__BackingField_4;
	// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::<IsPublisherLatched>k__BackingField
	bool ___U3CIsPublisherLatchedU3Ek__BackingField_5;
	// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::<SentPublisherRegistration>k__BackingField
	bool ___U3CSentPublisherRegistrationU3Ek__BackingField_6;
	// Unity.Robotics.ROSTCPConnector.ROSConnection Unity.Robotics.ROSTCPConnector.RosTopicState::m_Connection
	ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___m_Connection_7;
	// Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI Unity.Robotics.ROSTCPConnector.RosTopicState::m_ConnectionInternal
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4  ___m_ConnectionInternal_8;
	// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.RosTopicState::m_Deserializer
	Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * ___m_Deserializer_9;
	// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.RosTopicState::m_ServiceImplementation
	Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 * ___m_ServiceImplementation_10;
	// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>> Unity.Robotics.ROSTCPConnector.RosTopicState::m_ServiceImplementationAsync
	Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * ___m_ServiceImplementationAsync_11;
	// Unity.Robotics.ROSTCPConnector.RosTopicState Unity.Robotics.ROSTCPConnector.RosTopicState::m_ServiceResponseTopic
	RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * ___m_ServiceResponseTopic_12;
	// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::m_IsRosService
	bool ___m_IsRosService_13;
	// System.Collections.Generic.List`1<System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>> Unity.Robotics.ROSTCPConnector.RosTopicState::m_SubscriberCallbacks
	List_1_t5CD3176686DC2F5D07455FF5C2B951A00D35B441 * ___m_SubscriberCallbacks_14;
	// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::<SentSubscriberRegistration>k__BackingField
	bool ___U3CSentSubscriberRegistrationU3Ek__BackingField_15;
	// System.Single Unity.Robotics.ROSTCPConnector.RosTopicState::m_LastMessageReceivedRealtime
	float ___m_LastMessageReceivedRealtime_16;
	// System.Single Unity.Robotics.ROSTCPConnector.RosTopicState::m_LastMessageSentRealtime
	float ___m_LastMessageSentRealtime_17;

public:
	inline static int32_t get_offset_of_m_Topic_0() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_Topic_0)); }
	inline String_t* get_m_Topic_0() const { return ___m_Topic_0; }
	inline String_t** get_address_of_m_Topic_0() { return &___m_Topic_0; }
	inline void set_m_Topic_0(String_t* value)
	{
		___m_Topic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Topic_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Subtopic_1() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_Subtopic_1)); }
	inline int32_t get_m_Subtopic_1() const { return ___m_Subtopic_1; }
	inline int32_t* get_address_of_m_Subtopic_1() { return &___m_Subtopic_1; }
	inline void set_m_Subtopic_1(int32_t value)
	{
		___m_Subtopic_1 = value;
	}

	inline static int32_t get_offset_of_m_RosMessageName_2() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_RosMessageName_2)); }
	inline String_t* get_m_RosMessageName_2() const { return ___m_RosMessageName_2; }
	inline String_t** get_address_of_m_RosMessageName_2() { return &___m_RosMessageName_2; }
	inline void set_m_RosMessageName_2(String_t* value)
	{
		___m_RosMessageName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RosMessageName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageSender_3() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_MessageSender_3)); }
	inline TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * get_m_MessageSender_3() const { return ___m_MessageSender_3; }
	inline TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 ** get_address_of_m_MessageSender_3() { return &___m_MessageSender_3; }
	inline void set_m_MessageSender_3(TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * value)
	{
		___m_MessageSender_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageSender_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPublisherU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___U3CIsPublisherU3Ek__BackingField_4)); }
	inline bool get_U3CIsPublisherU3Ek__BackingField_4() const { return ___U3CIsPublisherU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPublisherU3Ek__BackingField_4() { return &___U3CIsPublisherU3Ek__BackingField_4; }
	inline void set_U3CIsPublisherU3Ek__BackingField_4(bool value)
	{
		___U3CIsPublisherU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPublisherLatchedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___U3CIsPublisherLatchedU3Ek__BackingField_5)); }
	inline bool get_U3CIsPublisherLatchedU3Ek__BackingField_5() const { return ___U3CIsPublisherLatchedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPublisherLatchedU3Ek__BackingField_5() { return &___U3CIsPublisherLatchedU3Ek__BackingField_5; }
	inline void set_U3CIsPublisherLatchedU3Ek__BackingField_5(bool value)
	{
		___U3CIsPublisherLatchedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSentPublisherRegistrationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___U3CSentPublisherRegistrationU3Ek__BackingField_6)); }
	inline bool get_U3CSentPublisherRegistrationU3Ek__BackingField_6() const { return ___U3CSentPublisherRegistrationU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSentPublisherRegistrationU3Ek__BackingField_6() { return &___U3CSentPublisherRegistrationU3Ek__BackingField_6; }
	inline void set_U3CSentPublisherRegistrationU3Ek__BackingField_6(bool value)
	{
		___U3CSentPublisherRegistrationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_Connection_7() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_Connection_7)); }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * get_m_Connection_7() const { return ___m_Connection_7; }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 ** get_address_of_m_Connection_7() { return &___m_Connection_7; }
	inline void set_m_Connection_7(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * value)
	{
		___m_Connection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Connection_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionInternal_8() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_ConnectionInternal_8)); }
	inline InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4  get_m_ConnectionInternal_8() const { return ___m_ConnectionInternal_8; }
	inline InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * get_address_of_m_ConnectionInternal_8() { return &___m_ConnectionInternal_8; }
	inline void set_m_ConnectionInternal_8(InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4  value)
	{
		___m_ConnectionInternal_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ConnectionInternal_8))->___m_Self_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_Deserializer_9() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_Deserializer_9)); }
	inline Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * get_m_Deserializer_9() const { return ___m_Deserializer_9; }
	inline Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F ** get_address_of_m_Deserializer_9() { return &___m_Deserializer_9; }
	inline void set_m_Deserializer_9(Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * value)
	{
		___m_Deserializer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Deserializer_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServiceImplementation_10() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_ServiceImplementation_10)); }
	inline Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 * get_m_ServiceImplementation_10() const { return ___m_ServiceImplementation_10; }
	inline Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 ** get_address_of_m_ServiceImplementation_10() { return &___m_ServiceImplementation_10; }
	inline void set_m_ServiceImplementation_10(Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 * value)
	{
		___m_ServiceImplementation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServiceImplementation_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServiceImplementationAsync_11() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_ServiceImplementationAsync_11)); }
	inline Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * get_m_ServiceImplementationAsync_11() const { return ___m_ServiceImplementationAsync_11; }
	inline Func_2_tDF15217118E975816709A90F855C00DF6CBE404C ** get_address_of_m_ServiceImplementationAsync_11() { return &___m_ServiceImplementationAsync_11; }
	inline void set_m_ServiceImplementationAsync_11(Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * value)
	{
		___m_ServiceImplementationAsync_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServiceImplementationAsync_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServiceResponseTopic_12() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_ServiceResponseTopic_12)); }
	inline RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * get_m_ServiceResponseTopic_12() const { return ___m_ServiceResponseTopic_12; }
	inline RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E ** get_address_of_m_ServiceResponseTopic_12() { return &___m_ServiceResponseTopic_12; }
	inline void set_m_ServiceResponseTopic_12(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * value)
	{
		___m_ServiceResponseTopic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServiceResponseTopic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsRosService_13() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_IsRosService_13)); }
	inline bool get_m_IsRosService_13() const { return ___m_IsRosService_13; }
	inline bool* get_address_of_m_IsRosService_13() { return &___m_IsRosService_13; }
	inline void set_m_IsRosService_13(bool value)
	{
		___m_IsRosService_13 = value;
	}

	inline static int32_t get_offset_of_m_SubscriberCallbacks_14() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_SubscriberCallbacks_14)); }
	inline List_1_t5CD3176686DC2F5D07455FF5C2B951A00D35B441 * get_m_SubscriberCallbacks_14() const { return ___m_SubscriberCallbacks_14; }
	inline List_1_t5CD3176686DC2F5D07455FF5C2B951A00D35B441 ** get_address_of_m_SubscriberCallbacks_14() { return &___m_SubscriberCallbacks_14; }
	inline void set_m_SubscriberCallbacks_14(List_1_t5CD3176686DC2F5D07455FF5C2B951A00D35B441 * value)
	{
		___m_SubscriberCallbacks_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubscriberCallbacks_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSentSubscriberRegistrationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___U3CSentSubscriberRegistrationU3Ek__BackingField_15)); }
	inline bool get_U3CSentSubscriberRegistrationU3Ek__BackingField_15() const { return ___U3CSentSubscriberRegistrationU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CSentSubscriberRegistrationU3Ek__BackingField_15() { return &___U3CSentSubscriberRegistrationU3Ek__BackingField_15; }
	inline void set_U3CSentSubscriberRegistrationU3Ek__BackingField_15(bool value)
	{
		___U3CSentSubscriberRegistrationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_LastMessageReceivedRealtime_16() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_LastMessageReceivedRealtime_16)); }
	inline float get_m_LastMessageReceivedRealtime_16() const { return ___m_LastMessageReceivedRealtime_16; }
	inline float* get_address_of_m_LastMessageReceivedRealtime_16() { return &___m_LastMessageReceivedRealtime_16; }
	inline void set_m_LastMessageReceivedRealtime_16(float value)
	{
		___m_LastMessageReceivedRealtime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMessageSentRealtime_17() { return static_cast<int32_t>(offsetof(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E, ___m_LastMessageSentRealtime_17)); }
	inline float get_m_LastMessageSentRealtime_17() const { return ___m_LastMessageSentRealtime_17; }
	inline float* get_address_of_m_LastMessageSentRealtime_17() { return &___m_LastMessageSentRealtime_17; }
	inline void set_m_LastMessageSentRealtime_17(float value)
	{
		___m_LastMessageSentRealtime_17 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58
struct U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Unity.Robotics.ROSTCPConnector.RosTopicState Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::<>4__this
	RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * ___U3CU3E4__this_2;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::serviceId
	int32_t ___serviceId_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::<>u__1
	TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___U3CU3E4__this_2)); }
	inline RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}

	inline static int32_t get_offset_of_serviceId_4() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___serviceId_4)); }
	inline int32_t get_serviceId_4() const { return ___serviceId_4; }
	inline int32_t* get_address_of_serviceId_4() { return &___serviceId_4; }
	inline void set_serviceId_4(int32_t value)
	{
		___serviceId_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5
struct U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object> Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  ___U3CU3Et__builder_1;
	// Unity.Robotics.ROSTCPConnector.TaskPauser Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::<>4__this
	TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE, ___U3CU3E4__this_2)); }
	inline TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<RosMessageTypes.Tf2.TFMessageMsg>
struct Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<TFStream>
struct Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Func_2_tDF15217118E975816709A90F855C00DF6CBE404C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117
struct U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::sleepMilliseconds
	int32_t ___sleepMilliseconds_2;
	// System.Threading.CancellationToken Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::token
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token_3;
	// System.Net.Sockets.NetworkStream Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::networkStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___networkStream_4;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array_5;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::length
	int32_t ___length_6;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<read>5__2
	int32_t ___U3CreadU3E5__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::<>u__2
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sleepMilliseconds_2() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___sleepMilliseconds_2)); }
	inline int32_t get_sleepMilliseconds_2() const { return ___sleepMilliseconds_2; }
	inline int32_t* get_address_of_sleepMilliseconds_2() { return &___sleepMilliseconds_2; }
	inline void set_sleepMilliseconds_2(int32_t value)
	{
		___sleepMilliseconds_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___token_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_token_3() const { return ___token_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___token_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_networkStream_4() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___networkStream_4)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_networkStream_4() const { return ___networkStream_4; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_networkStream_4() { return &___networkStream_4; }
	inline void set_networkStream_4(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___networkStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_4), (void*)value);
	}

	inline static int32_t get_offset_of_array_5() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___array_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_array_5() const { return ___array_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_array_5() { return &___array_5; }
	inline void set_array_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___array_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_5), (void*)value);
	}

	inline static int32_t get_offset_of_length_6() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___length_6)); }
	inline int32_t get_length_6() const { return ___length_6; }
	inline int32_t* get_address_of_length_6() { return &___length_6; }
	inline void set_length_6(int32_t value)
	{
		___length_6 = value;
	}

	inline static int32_t get_offset_of_U3CreadU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CreadU3E5__2_7)); }
	inline int32_t get_U3CreadU3E5__2_7() const { return ___U3CreadU3E5__2_7; }
	inline int32_t* get_address_of_U3CreadU3E5__2_7() { return &___U3CreadU3E5__2_7; }
	inline void set_U3CreadU3E5__2_7(int32_t value)
	{
		___U3CreadU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CU3E7__wrap2_9)); }
	inline int32_t get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(int32_t value)
	{
		___U3CU3E7__wrap2_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877, ___U3CU3Eu__2_10)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
	}
};


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116
struct U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB 
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Net.Sockets.NetworkStream Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::networkStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___networkStream_2;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::sleepMilliseconds
	int32_t ___sleepMilliseconds_3;
	// System.Threading.CancellationToken Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::token
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token_4;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>> Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::queue
	ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * ___queue_5;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::readerIdx
	int32_t ___readerIdx_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>> Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::<>u__1
	TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_networkStream_2() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___networkStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_networkStream_2() const { return ___networkStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_networkStream_2() { return &___networkStream_2; }
	inline void set_networkStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___networkStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_sleepMilliseconds_3() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___sleepMilliseconds_3)); }
	inline int32_t get_sleepMilliseconds_3() const { return ___sleepMilliseconds_3; }
	inline int32_t* get_address_of_sleepMilliseconds_3() { return &___sleepMilliseconds_3; }
	inline void set_sleepMilliseconds_3(int32_t value)
	{
		___sleepMilliseconds_3 = value;
	}

	inline static int32_t get_offset_of_token_4() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___token_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_token_4() const { return ___token_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_token_4() { return &___token_4; }
	inline void set_token_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___token_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___token_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___queue_5)); }
	inline ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * get_queue_5() const { return ___queue_5; }
	inline ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}

	inline static int32_t get_offset_of_readerIdx_6() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___readerIdx_6)); }
	inline int32_t get_readerIdx_6() const { return ___readerIdx_6; }
	inline int32_t* get_address_of_readerIdx_6() { return &___readerIdx_6; }
	inline void set_readerIdx_6(int32_t value)
	{
		___readerIdx_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB, ___U3CU3Eu__1_7)); }
	inline TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.Threading.Tasks.TaskCanceledException
struct TaskCanceledException_t8C4641920752790DEE40C9F907D7E10F90DE072B  : public OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskCanceledException::m_canceledTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_canceledTask_18;

public:
	inline static int32_t get_offset_of_m_canceledTask_18() { return static_cast<int32_t>(offsetof(TaskCanceledException_t8C4641920752790DEE40C9F907D7E10F90DE072B, ___m_canceledTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_canceledTask_18() const { return ___m_canceledTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_canceledTask_18() { return &___m_canceledTask_18; }
	inline void set_m_canceledTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_canceledTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canceledTask_18), (void*)value);
	}
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};


// Unity.Robotics.ROSTCPConnector.ROSConnection
struct ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Unity.Robotics.ROSTCPConnector.ROSConnection::m_RosIPAddress
	String_t* ___m_RosIPAddress_6;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection::m_RosPort
	int32_t ___m_RosPort_7;
	// System.Boolean Unity.Robotics.ROSTCPConnector.ROSConnection::m_ConnectOnStart
	bool ___m_ConnectOnStart_8;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_KeepaliveTime
	float ___m_KeepaliveTime_9;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_NetworkTimeoutSeconds
	float ___m_NetworkTimeoutSeconds_10;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_SleepTimeSeconds
	float ___m_SleepTimeSeconds_11;
	// System.Boolean Unity.Robotics.ROSTCPConnector.ROSConnection::m_ShowHUD
	bool ___m_ShowHUD_12;
	// System.String[] Unity.Robotics.ROSTCPConnector.ROSConnection::m_TFTopics
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_TFTopics_13;
	// Unity.Robotics.ROSTCPConnector.HudPanel Unity.Robotics.ROSTCPConnector.ROSConnection::m_HudPanel
	HudPanel_t212247373E11954797313F78667AB6AAEB33BD24 * ___m_HudPanel_16;
	// Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue Unity.Robotics.ROSTCPConnector.ROSConnection::m_OutgoingMessageQueue
	OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * ___m_OutgoingMessageQueue_17;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>> Unity.Robotics.ROSTCPConnector.ROSConnection::m_IncomingMessages
	ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * ___m_IncomingMessages_18;
	// System.Threading.CancellationTokenSource Unity.Robotics.ROSTCPConnector.ROSConnection::m_ConnectionThreadCancellation
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_ConnectionThreadCancellation_19;
	// System.Object Unity.Robotics.ROSTCPConnector.ROSConnection::m_ServiceRequestLock
	RuntimeObject * ___m_ServiceRequestLock_22;
	// System.Int32 Unity.Robotics.ROSTCPConnector.ROSConnection::m_NextSrvID
	int32_t ___m_NextSrvID_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Robotics.ROSTCPConnector.TaskPauser> Unity.Robotics.ROSTCPConnector.ROSConnection::m_ServicesWaiting
	Dictionary_2_tBAADB31E63FC1CC696806D76DC56325264C1A444 * ___m_ServicesWaiting_24;
	// System.Boolean Unity.Robotics.ROSTCPConnector.ROSConnection::listenForTFMessages
	bool ___listenForTFMessages_25;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_LastMessageReceivedRealtime
	float ___m_LastMessageReceivedRealtime_26;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_LastMessageSentRealtime
	float ___m_LastMessageSentRealtime_27;
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer Unity.Robotics.ROSTCPConnector.ROSConnection::m_MessageSerializer
	MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * ___m_MessageSerializer_30;
	// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer Unity.Robotics.ROSTCPConnector.ROSConnection::m_MessageDeserializer
	MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * ___m_MessageDeserializer_31;
	// System.Collections.Generic.List`1<System.Action`1<System.String[]>> Unity.Robotics.ROSTCPConnector.ROSConnection::m_TopicsListCallbacks
	List_1_t5F00E3DDE8A15B7F96E441618D2520267C14049B * ___m_TopicsListCallbacks_32;
	// System.Collections.Generic.List`1<System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>> Unity.Robotics.ROSTCPConnector.ROSConnection::m_TopicsAndTypesListCallbacks
	List_1_t0E1A8C4C1766DF62189A7A5C9C68933DD2FA5A6E * ___m_TopicsAndTypesListCallbacks_33;
	// System.Collections.Generic.List`1<System.Action`1<Unity.Robotics.ROSTCPConnector.RosTopicState>> Unity.Robotics.ROSTCPConnector.ROSConnection::m_NewTopicCallbacks
	List_1_t1811431EA0EDAB5C5E37509DFDDB8EA847F91C09 * ___m_NewTopicCallbacks_34;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Robotics.ROSTCPConnector.RosTopicState> Unity.Robotics.ROSTCPConnector.ROSConnection::m_Topics
	Dictionary_2_tD7FC88FBF9A3F025BF2131B05F7931D8EC56D004 * ___m_Topics_35;
	// System.Action`2<System.String,System.Byte[]> Unity.Robotics.ROSTCPConnector.ROSConnection::m_SpecialIncomingMessageHandler
	Action_2_tD98ADCC1BFF5DC825B8A00C49AC0BC72ED7A50CC * ___m_SpecialIncomingMessageHandler_37;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::m_LastTopicsRequestRealtime
	float ___m_LastTopicsRequestRealtime_38;

public:
	inline static int32_t get_offset_of_m_RosIPAddress_6() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_RosIPAddress_6)); }
	inline String_t* get_m_RosIPAddress_6() const { return ___m_RosIPAddress_6; }
	inline String_t** get_address_of_m_RosIPAddress_6() { return &___m_RosIPAddress_6; }
	inline void set_m_RosIPAddress_6(String_t* value)
	{
		___m_RosIPAddress_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RosIPAddress_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RosPort_7() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_RosPort_7)); }
	inline int32_t get_m_RosPort_7() const { return ___m_RosPort_7; }
	inline int32_t* get_address_of_m_RosPort_7() { return &___m_RosPort_7; }
	inline void set_m_RosPort_7(int32_t value)
	{
		___m_RosPort_7 = value;
	}

	inline static int32_t get_offset_of_m_ConnectOnStart_8() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_ConnectOnStart_8)); }
	inline bool get_m_ConnectOnStart_8() const { return ___m_ConnectOnStart_8; }
	inline bool* get_address_of_m_ConnectOnStart_8() { return &___m_ConnectOnStart_8; }
	inline void set_m_ConnectOnStart_8(bool value)
	{
		___m_ConnectOnStart_8 = value;
	}

	inline static int32_t get_offset_of_m_KeepaliveTime_9() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_KeepaliveTime_9)); }
	inline float get_m_KeepaliveTime_9() const { return ___m_KeepaliveTime_9; }
	inline float* get_address_of_m_KeepaliveTime_9() { return &___m_KeepaliveTime_9; }
	inline void set_m_KeepaliveTime_9(float value)
	{
		___m_KeepaliveTime_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkTimeoutSeconds_10() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_NetworkTimeoutSeconds_10)); }
	inline float get_m_NetworkTimeoutSeconds_10() const { return ___m_NetworkTimeoutSeconds_10; }
	inline float* get_address_of_m_NetworkTimeoutSeconds_10() { return &___m_NetworkTimeoutSeconds_10; }
	inline void set_m_NetworkTimeoutSeconds_10(float value)
	{
		___m_NetworkTimeoutSeconds_10 = value;
	}

	inline static int32_t get_offset_of_m_SleepTimeSeconds_11() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_SleepTimeSeconds_11)); }
	inline float get_m_SleepTimeSeconds_11() const { return ___m_SleepTimeSeconds_11; }
	inline float* get_address_of_m_SleepTimeSeconds_11() { return &___m_SleepTimeSeconds_11; }
	inline void set_m_SleepTimeSeconds_11(float value)
	{
		___m_SleepTimeSeconds_11 = value;
	}

	inline static int32_t get_offset_of_m_ShowHUD_12() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_ShowHUD_12)); }
	inline bool get_m_ShowHUD_12() const { return ___m_ShowHUD_12; }
	inline bool* get_address_of_m_ShowHUD_12() { return &___m_ShowHUD_12; }
	inline void set_m_ShowHUD_12(bool value)
	{
		___m_ShowHUD_12 = value;
	}

	inline static int32_t get_offset_of_m_TFTopics_13() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_TFTopics_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_TFTopics_13() const { return ___m_TFTopics_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_TFTopics_13() { return &___m_TFTopics_13; }
	inline void set_m_TFTopics_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_TFTopics_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TFTopics_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_HudPanel_16() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_HudPanel_16)); }
	inline HudPanel_t212247373E11954797313F78667AB6AAEB33BD24 * get_m_HudPanel_16() const { return ___m_HudPanel_16; }
	inline HudPanel_t212247373E11954797313F78667AB6AAEB33BD24 ** get_address_of_m_HudPanel_16() { return &___m_HudPanel_16; }
	inline void set_m_HudPanel_16(HudPanel_t212247373E11954797313F78667AB6AAEB33BD24 * value)
	{
		___m_HudPanel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HudPanel_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutgoingMessageQueue_17() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_OutgoingMessageQueue_17)); }
	inline OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * get_m_OutgoingMessageQueue_17() const { return ___m_OutgoingMessageQueue_17; }
	inline OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 ** get_address_of_m_OutgoingMessageQueue_17() { return &___m_OutgoingMessageQueue_17; }
	inline void set_m_OutgoingMessageQueue_17(OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * value)
	{
		___m_OutgoingMessageQueue_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutgoingMessageQueue_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_IncomingMessages_18() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_IncomingMessages_18)); }
	inline ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * get_m_IncomingMessages_18() const { return ___m_IncomingMessages_18; }
	inline ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE ** get_address_of_m_IncomingMessages_18() { return &___m_IncomingMessages_18; }
	inline void set_m_IncomingMessages_18(ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * value)
	{
		___m_IncomingMessages_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncomingMessages_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionThreadCancellation_19() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_ConnectionThreadCancellation_19)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_ConnectionThreadCancellation_19() const { return ___m_ConnectionThreadCancellation_19; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_ConnectionThreadCancellation_19() { return &___m_ConnectionThreadCancellation_19; }
	inline void set_m_ConnectionThreadCancellation_19(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_ConnectionThreadCancellation_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionThreadCancellation_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServiceRequestLock_22() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_ServiceRequestLock_22)); }
	inline RuntimeObject * get_m_ServiceRequestLock_22() const { return ___m_ServiceRequestLock_22; }
	inline RuntimeObject ** get_address_of_m_ServiceRequestLock_22() { return &___m_ServiceRequestLock_22; }
	inline void set_m_ServiceRequestLock_22(RuntimeObject * value)
	{
		___m_ServiceRequestLock_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServiceRequestLock_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_NextSrvID_23() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_NextSrvID_23)); }
	inline int32_t get_m_NextSrvID_23() const { return ___m_NextSrvID_23; }
	inline int32_t* get_address_of_m_NextSrvID_23() { return &___m_NextSrvID_23; }
	inline void set_m_NextSrvID_23(int32_t value)
	{
		___m_NextSrvID_23 = value;
	}

	inline static int32_t get_offset_of_m_ServicesWaiting_24() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_ServicesWaiting_24)); }
	inline Dictionary_2_tBAADB31E63FC1CC696806D76DC56325264C1A444 * get_m_ServicesWaiting_24() const { return ___m_ServicesWaiting_24; }
	inline Dictionary_2_tBAADB31E63FC1CC696806D76DC56325264C1A444 ** get_address_of_m_ServicesWaiting_24() { return &___m_ServicesWaiting_24; }
	inline void set_m_ServicesWaiting_24(Dictionary_2_tBAADB31E63FC1CC696806D76DC56325264C1A444 * value)
	{
		___m_ServicesWaiting_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServicesWaiting_24), (void*)value);
	}

	inline static int32_t get_offset_of_listenForTFMessages_25() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___listenForTFMessages_25)); }
	inline bool get_listenForTFMessages_25() const { return ___listenForTFMessages_25; }
	inline bool* get_address_of_listenForTFMessages_25() { return &___listenForTFMessages_25; }
	inline void set_listenForTFMessages_25(bool value)
	{
		___listenForTFMessages_25 = value;
	}

	inline static int32_t get_offset_of_m_LastMessageReceivedRealtime_26() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_LastMessageReceivedRealtime_26)); }
	inline float get_m_LastMessageReceivedRealtime_26() const { return ___m_LastMessageReceivedRealtime_26; }
	inline float* get_address_of_m_LastMessageReceivedRealtime_26() { return &___m_LastMessageReceivedRealtime_26; }
	inline void set_m_LastMessageReceivedRealtime_26(float value)
	{
		___m_LastMessageReceivedRealtime_26 = value;
	}

	inline static int32_t get_offset_of_m_LastMessageSentRealtime_27() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_LastMessageSentRealtime_27)); }
	inline float get_m_LastMessageSentRealtime_27() const { return ___m_LastMessageSentRealtime_27; }
	inline float* get_address_of_m_LastMessageSentRealtime_27() { return &___m_LastMessageSentRealtime_27; }
	inline void set_m_LastMessageSentRealtime_27(float value)
	{
		___m_LastMessageSentRealtime_27 = value;
	}

	inline static int32_t get_offset_of_m_MessageSerializer_30() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_MessageSerializer_30)); }
	inline MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * get_m_MessageSerializer_30() const { return ___m_MessageSerializer_30; }
	inline MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A ** get_address_of_m_MessageSerializer_30() { return &___m_MessageSerializer_30; }
	inline void set_m_MessageSerializer_30(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * value)
	{
		___m_MessageSerializer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageSerializer_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageDeserializer_31() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_MessageDeserializer_31)); }
	inline MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * get_m_MessageDeserializer_31() const { return ___m_MessageDeserializer_31; }
	inline MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 ** get_address_of_m_MessageDeserializer_31() { return &___m_MessageDeserializer_31; }
	inline void set_m_MessageDeserializer_31(MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * value)
	{
		___m_MessageDeserializer_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageDeserializer_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_TopicsListCallbacks_32() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_TopicsListCallbacks_32)); }
	inline List_1_t5F00E3DDE8A15B7F96E441618D2520267C14049B * get_m_TopicsListCallbacks_32() const { return ___m_TopicsListCallbacks_32; }
	inline List_1_t5F00E3DDE8A15B7F96E441618D2520267C14049B ** get_address_of_m_TopicsListCallbacks_32() { return &___m_TopicsListCallbacks_32; }
	inline void set_m_TopicsListCallbacks_32(List_1_t5F00E3DDE8A15B7F96E441618D2520267C14049B * value)
	{
		___m_TopicsListCallbacks_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopicsListCallbacks_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_TopicsAndTypesListCallbacks_33() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_TopicsAndTypesListCallbacks_33)); }
	inline List_1_t0E1A8C4C1766DF62189A7A5C9C68933DD2FA5A6E * get_m_TopicsAndTypesListCallbacks_33() const { return ___m_TopicsAndTypesListCallbacks_33; }
	inline List_1_t0E1A8C4C1766DF62189A7A5C9C68933DD2FA5A6E ** get_address_of_m_TopicsAndTypesListCallbacks_33() { return &___m_TopicsAndTypesListCallbacks_33; }
	inline void set_m_TopicsAndTypesListCallbacks_33(List_1_t0E1A8C4C1766DF62189A7A5C9C68933DD2FA5A6E * value)
	{
		___m_TopicsAndTypesListCallbacks_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopicsAndTypesListCallbacks_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_NewTopicCallbacks_34() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_NewTopicCallbacks_34)); }
	inline List_1_t1811431EA0EDAB5C5E37509DFDDB8EA847F91C09 * get_m_NewTopicCallbacks_34() const { return ___m_NewTopicCallbacks_34; }
	inline List_1_t1811431EA0EDAB5C5E37509DFDDB8EA847F91C09 ** get_address_of_m_NewTopicCallbacks_34() { return &___m_NewTopicCallbacks_34; }
	inline void set_m_NewTopicCallbacks_34(List_1_t1811431EA0EDAB5C5E37509DFDDB8EA847F91C09 * value)
	{
		___m_NewTopicCallbacks_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NewTopicCallbacks_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Topics_35() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_Topics_35)); }
	inline Dictionary_2_tD7FC88FBF9A3F025BF2131B05F7931D8EC56D004 * get_m_Topics_35() const { return ___m_Topics_35; }
	inline Dictionary_2_tD7FC88FBF9A3F025BF2131B05F7931D8EC56D004 ** get_address_of_m_Topics_35() { return &___m_Topics_35; }
	inline void set_m_Topics_35(Dictionary_2_tD7FC88FBF9A3F025BF2131B05F7931D8EC56D004 * value)
	{
		___m_Topics_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Topics_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_SpecialIncomingMessageHandler_37() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_SpecialIncomingMessageHandler_37)); }
	inline Action_2_tD98ADCC1BFF5DC825B8A00C49AC0BC72ED7A50CC * get_m_SpecialIncomingMessageHandler_37() const { return ___m_SpecialIncomingMessageHandler_37; }
	inline Action_2_tD98ADCC1BFF5DC825B8A00C49AC0BC72ED7A50CC ** get_address_of_m_SpecialIncomingMessageHandler_37() { return &___m_SpecialIncomingMessageHandler_37; }
	inline void set_m_SpecialIncomingMessageHandler_37(Action_2_tD98ADCC1BFF5DC825B8A00C49AC0BC72ED7A50CC * value)
	{
		___m_SpecialIncomingMessageHandler_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpecialIncomingMessageHandler_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastTopicsRequestRealtime_38() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646, ___m_LastTopicsRequestRealtime_38)); }
	inline float get_m_LastTopicsRequestRealtime_38() const { return ___m_LastTopicsRequestRealtime_38; }
	inline float* get_address_of_m_LastTopicsRequestRealtime_38() { return &___m_LastTopicsRequestRealtime_38; }
	inline void set_m_LastTopicsRequestRealtime_38(float value)
	{
		___m_LastTopicsRequestRealtime_38 = value;
	}
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};


// System.Object


// System.Object


// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>>


// System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>>


// System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>


// System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>


// System.Collections.Generic.Dictionary`2<System.String,TFStream>


// System.Collections.Generic.Dictionary`2<System.String,TFStream>


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TFStream>


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TFStream>


// System.Collections.Generic.List`1<System.Action`1<TFStream>>

struct List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B_StaticFields, ____emptyArray_5)); }
	inline Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_1U5BU5D_tE872BF7E86D38ABA915B9F636E62F1AB70A482D7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<TFStream>>


// System.Tuple`2<System.Object,System.Object>


// System.Tuple`2<System.Object,System.Object>


// System.Tuple`2<System.String,System.Byte[]>


// System.Tuple`2<System.String,System.Byte[]>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TFStream>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TFStream>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject


// System.MarshalByRefObject


// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message


// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer


// Unity.Robotics.ROSTCPConnector.OutgoingMessageSender


// Unity.Robotics.ROSTCPConnector.OutgoingMessageSender


// System.String

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// TFStream


// TFStream


// Unity.Robotics.ROSTCPConnector.TaskPauser


// Unity.Robotics.ROSTCPConnector.TaskPauser


// System.ValueType


// System.ValueType


// Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue


// Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0


// Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0


// TFSystem/TFTopicState


// TFSystem/TFTopicState


// System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>


// System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>


// System.Runtime.CompilerServices.AsyncMethodBuilderCore


// System.Runtime.CompilerServices.AsyncMethodBuilderCore


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// System.Byte


// System.Byte


// System.Threading.CancellationToken

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};


// System.Threading.CancellationToken


// System.Char

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Char


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// RosMessageTypes.Std.HeaderMsg


// RosMessageTypes.Std.HeaderMsg


// System.Int32


// System.Int32


// System.Int64


// System.Int64


// System.IntPtr

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IntPtr


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// RosMessageTypes.Geometry.QuaternionMsg


// RosMessageTypes.Geometry.QuaternionMsg


// System.IO.Stream

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.Stream


// Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration


// Unity.Robotics.ROSTCPConnector.SysCommand_PublisherRegistration


// Unity.Robotics.ROSTCPConnector.SysCommand_Service


// Unity.Robotics.ROSTCPConnector.SysCommand_Service


// Unity.Robotics.ROSTCPConnector.SysCommand_Topic


// Unity.Robotics.ROSTCPConnector.SysCommand_Topic


// Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType


// Unity.Robotics.ROSTCPConnector.SysCommand_TopicAndType


// RosMessageTypes.Tf2.TFMessageMsg


// RosMessageTypes.Tf2.TFMessageMsg


// System.Runtime.CompilerServices.TaskAwaiter


// System.Runtime.CompilerServices.TaskAwaiter


// RosMessageTypes.BuiltinInterfaces.TimeMsg


// RosMessageTypes.BuiltinInterfaces.TimeMsg


// Unity.Robotics.ROSTCPConnector.TopicMessageSender


// Unity.Robotics.ROSTCPConnector.TopicMessageSender


// RosMessageTypes.Geometry.TransformMsg


// RosMessageTypes.Geometry.TransformMsg


// RosMessageTypes.Geometry.TransformStampedMsg


// RosMessageTypes.Geometry.TransformStampedMsg


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// RosMessageTypes.Geometry.Vector3Msg


// RosMessageTypes.Geometry.Vector3Msg


// System.Void


// System.Void


// Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI


// Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder


// System.Threading.CancellationTokenSource

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Threading.CancellationTokenSource


// System.Delegate


// System.Delegate


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic


// System.Net.Sockets.NetworkStream


// System.Net.Sockets.NetworkStream


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// System.Threading.Tasks.Task

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};


// System.Threading.Tasks.Task

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.WaitHandle

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};


// System.Threading.WaitHandle


// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>

struct Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBD817F031B8DFBD48571E987091FC0D1EDC839AB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53C30E50CA34E7D8CD95CC8DF0C8F2C04C8CB641 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tBD817F031B8DFBD48571E987091FC0D1EDC839AB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tBD817F031B8DFBD48571E987091FC0D1EDC839AB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tBD817F031B8DFBD48571E987091FC0D1EDC839AB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53C30E50CA34E7D8CD95CC8DF0C8F2C04C8CB641 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53C30E50CA34E7D8CD95CC8DF0C8F2C04C8CB641 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53C30E50CA34E7D8CD95CC8DF0C8F2C04C8CB641 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>


// System.Threading.Tasks.Task`1<System.Int32>

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>


// System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>

struct Task_1_t2BA5344BFCD9088736C17267111669B81556F686_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCC16C715B246274D030919EF751E32597BF44F28 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC057D8A1F14A047321A4281EB887CAB734969010 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2BA5344BFCD9088736C17267111669B81556F686_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCC16C715B246274D030919EF751E32597BF44F28 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCC16C715B246274D030919EF751E32597BF44F28 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCC16C715B246274D030919EF751E32597BF44F28 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2BA5344BFCD9088736C17267111669B81556F686_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC057D8A1F14A047321A4281EB887CAB734969010 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC057D8A1F14A047321A4281EB887CAB734969010 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC057D8A1F14A047321A4281EB887CAB734969010 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder


// UnityEngine.Component


// UnityEngine.Component


// System.Threading.EventWaitHandle


// System.Threading.EventWaitHandle


// System.MulticastDelegate


// System.MulticastDelegate


// Unity.Robotics.ROSTCPConnector.RosTopicState


// Unity.Robotics.ROSTCPConnector.RosTopicState


// System.SystemException


// System.SystemException


// Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58


// Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58


// Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5


// Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5


// System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Action`1<RosMessageTypes.Tf2.TFMessageMsg>


// System.Action`1<RosMessageTypes.Tf2.TFMessageMsg>


// System.Action`1<TFStream>


// System.Action`1<TFStream>


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// System.Runtime.InteropServices.ExternalException


// System.Runtime.InteropServices.ExternalException


// System.Threading.ManualResetEvent


// System.Threading.ManualResetEvent


// System.OperationCanceledException


// System.OperationCanceledException


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116


// Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// System.Threading.Tasks.TaskCanceledException


// System.Threading.Tasks.TaskCanceledException


// System.ComponentModel.Win32Exception

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.ComponentModel.Win32Exception


// Unity.Robotics.ROSTCPConnector.ROSConnection

struct ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields
{
public:
	// System.Boolean Unity.Robotics.ROSTCPConnector.ROSConnection::m_HasConnectionError
	bool ___m_HasConnectionError_20;
	// System.Single Unity.Robotics.ROSTCPConnector.ROSConnection::s_RealTimeSinceStartup
	float ___s_RealTimeSinceStartup_21;
	// Unity.Robotics.ROSTCPConnector.ROSConnection Unity.Robotics.ROSTCPConnector.ROSConnection::_instance
	ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ____instance_36;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.ROSConnection::s_FourBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_FourBytes_40;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.ROSConnection::s_TopicScratchSpace
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_TopicScratchSpace_41;
	// UnityEngine.GUIStyle Unity.Robotics.ROSTCPConnector.ROSConnection::s_ConnectionArrowStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_ConnectionArrowStyle_42;

public:
	inline static int32_t get_offset_of_m_HasConnectionError_20() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ___m_HasConnectionError_20)); }
	inline bool get_m_HasConnectionError_20() const { return ___m_HasConnectionError_20; }
	inline bool* get_address_of_m_HasConnectionError_20() { return &___m_HasConnectionError_20; }
	inline void set_m_HasConnectionError_20(bool value)
	{
		___m_HasConnectionError_20 = value;
	}

	inline static int32_t get_offset_of_s_RealTimeSinceStartup_21() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ___s_RealTimeSinceStartup_21)); }
	inline float get_s_RealTimeSinceStartup_21() const { return ___s_RealTimeSinceStartup_21; }
	inline float* get_address_of_s_RealTimeSinceStartup_21() { return &___s_RealTimeSinceStartup_21; }
	inline void set_s_RealTimeSinceStartup_21(float value)
	{
		___s_RealTimeSinceStartup_21 = value;
	}

	inline static int32_t get_offset_of__instance_36() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ____instance_36)); }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * get__instance_36() const { return ____instance_36; }
	inline ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 ** get_address_of__instance_36() { return &____instance_36; }
	inline void set__instance_36(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * value)
	{
		____instance_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_FourBytes_40() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ___s_FourBytes_40)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_FourBytes_40() const { return ___s_FourBytes_40; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_FourBytes_40() { return &___s_FourBytes_40; }
	inline void set_s_FourBytes_40(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_FourBytes_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FourBytes_40), (void*)value);
	}

	inline static int32_t get_offset_of_s_TopicScratchSpace_41() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ___s_TopicScratchSpace_41)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_TopicScratchSpace_41() const { return ___s_TopicScratchSpace_41; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_TopicScratchSpace_41() { return &___s_TopicScratchSpace_41; }
	inline void set_s_TopicScratchSpace_41(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_TopicScratchSpace_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TopicScratchSpace_41), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConnectionArrowStyle_42() { return static_cast<int32_t>(offsetof(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields, ___s_ConnectionArrowStyle_42)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_ConnectionArrowStyle_42() const { return ___s_ConnectionArrowStyle_42; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_ConnectionArrowStyle_42() { return &___s_ConnectionArrowStyle_42; }
	inline void set_s_ConnectionArrowStyle_42(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_ConnectionArrowStyle_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ConnectionArrowStyle_42), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.ROSConnection


// System.Net.Sockets.SocketException


// System.Net.Sockets.SocketException

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// RosMessageTypes.Geometry.TransformStampedMsg[]
struct TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * m_Items[1];

public:
	inline TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_m65EAC66D7787A107ADE9BE4725471CF8148449B3_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_mEE4E21D28243220D33AC32B058D0410020F6C4E3_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m6C847EC789F8A8C9A5F3DD390BCDB42F494CD8B9_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared (ConcurrentQueue_1_t4DCFFCFAC90E25A1B31ECA30C0B8B99DB8A18421 * __this, RuntimeObject ** ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_mF9807EA88174E4B0ABC83D3F687914861440B041_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection::Subscribe<System.Object>(System.String,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ROSConnection_Subscribe_TisRuntimeObject_m5AFE932DAD80B1924286554D0D011789801CEFE2_gshared (ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * __this, String_t* ___topic0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.CoordinateSpaceExtensions::From<System.Object>(RosMessageTypes.Geometry.Vector3Msg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CoordinateSpaceExtensions_From_TisRuntimeObject_mD4A289CAFF5B02B61A82172252713D875774618C_gshared (Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * ___self0, const RuntimeMethod* method);
// UnityEngine.Quaternion Unity.Robotics.ROSTCPConnector.ROSGeometry.CoordinateSpaceExtensions::From<System.Object>(RosMessageTypes.Geometry.QuaternionMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CoordinateSpaceExtensions_From_TisRuntimeObject_m377441F0D6EE69AA76399B708CD1BF072365AAD5_gshared (QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * ___self0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_m880CF6082AF5731C0E7DC9CA3F175878F120CCAA (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// System.Void System.Net.Sockets.SocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9 (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360 (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToByteArrayU3Ed__117_SetStateMachine_m82448C3066FBAA964C93E463CE49D5F2BD6A4B83 (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>> Unity.Robotics.ROSTCPConnector.ROSConnection::ReadMessageContents(System.Net.Sockets.NetworkStream,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * ROSConnection_ReadMessageContents_m79C3966152E88F1EE9D387CBCEA2202DD24EB1FB (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___networkStream0, int32_t ___sleepMilliseconds1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Tuple`2<System.String,System.Byte[]>>::GetAwaiter()
inline TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43 (Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  (*) (Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46 (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>,Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * ___awaiter0, U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *, U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_m65EAC66D7787A107ADE9BE4725471CF8148449B3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Tuple`2<System.String,System.Byte[]>>::GetResult()
inline Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4 (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * (*) (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// !0 System.Tuple`2<System.String,System.Byte[]>::get_Item1()
inline String_t* Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_inline (Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 *, const RuntimeMethod*))Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Tuple`2<System.String,System.Byte[]>>::Enqueue(!0)
inline void ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199 (ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * __this, Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE *, Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 *, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_mEE4E21D28243220D33AC32B058D0410020F6C4E3_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReaderThreadU3Ed__116_MoveNext_mD4277F42F2237190D7D2681E18EC49EA049CFF34 (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReaderThreadU3Ed__116_SetStateMachine_m75618075639AF1F416958A82FF1D7E64FB9A9B0B (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::.ctor(Unity.Robotics.ROSTCPConnector.ROSConnection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InternalAPI__ctor_m805CEF69F0446B37A275DFF7353A9F1FA5C92AE9_inline (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___self0, const RuntimeMethod* method);
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::get_Deserializer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * InternalAPI_get_Deserializer_mDC1A2B6E8503115359EFE8B8E1E0C351055F9D3A (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection::SendSysCommand(System.String,System.Object,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3 (ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * __this, String_t* ___command0, RuntimeObject * ___param1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendSubscriberRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendSubscriberRegistration_m9FD6C4D2313B9AFD1CC086BDFC4D07ADA47934D8 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendRosServiceRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendRosServiceRegistration_m94EEC17564761FC538621B7C2E8B5D8101A16F28 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceRegistration_mD83A9F3B46EB4FFC598EBBDFD303B342D068DF03 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendSubscriberUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendSubscriberUnregistration_m0C75FEA10C38D846407A75AE3AF419DA4DAF7148 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendPublisherUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendPublisherUnregistration_m7B820A371A200D1BA8D699859765879196613616 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendRosServiceUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendRosServiceUnregistration_mCBAF7D15C503F77598F9E48F15B298E403C18570 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceUnregistration_mB3D2C10D99923189062E9F9DBB4E0DE15FACFB99 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceResponse(System.Int32,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceResponse_m9E32CA30E7CB1DC1273EF5E12A75CCB27162E24E (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, int32_t ___serviceId0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendPublisherRegistration(System.String,System.String,System.Int32,System.Boolean,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendPublisherRegistration_m0452CE2E46D48BD816E0DD9DBD136CEF2D5F9116 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___message_name1, int32_t ___queueSize2, bool ___latch3, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream4, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendServiceRequest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendServiceRequest_mF2094C044EA29D7F494EBAC7DC7C55206BD063EF (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, int32_t ___serviceId0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::Enqueue(Unity.Robotics.ROSTCPConnector.OutgoingMessageSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessageQueue_Enqueue_m681AC891E7E285833E6B20584E4170203D3686D2 (OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___outgoingMessageSender0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::AddSenderToQueue(Unity.Robotics.ROSTCPConnector.OutgoingMessageSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_AddSenderToQueue_m04583CC131F0EAF58255AD265E1A32142602A10D (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___sender0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>::.ctor()
inline void ConcurrentQueue_1__ctor_m1E8C18BE24AA12BFA3E507CD480ECCC1BA911B75 (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_m6C847EC789F8A8C9A5F3DD390BCDB42F494CD8B9_gshared)(__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>::Enqueue(!0)
inline void ConcurrentQueue_1_Enqueue_m95D741946E89C8ED50E36E3643AD841C6288286D (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 *, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F *, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_mEE4E21D28243220D33AC32B058D0410020F6C4E3_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Unity.Robotics.ROSTCPConnector.OutgoingMessageSender>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mEE8AEB153DD822295E96CC476FFAA994AC94CEE7 (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F ** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 *, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F **, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m9AF46B78A1EDFB4C942D385A5990EB906942326D_gshared)(__this, ___result0, method);
}
// System.Void System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::Invoke(!0)
inline void Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872 (Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A *, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean Unity.Robotics.ROSTCPConnector.RosTopicState::get_IsUnityService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RosTopicState_get_IsUnityService_mFA2EF973C331C04171E22ADB735412FFA8C71004 (RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState::OnMessageReceived(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosTopicState_OnMessageReceived_mA66F56A48C248B65FD4E1B62A0EF640168443159 (RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message Unity.Robotics.ROSTCPConnector.RosTopicState::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * RosTopicState_Deserialize_m9FC2B28C38E0F09680EBABFD63906E0D79D5A719 (RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// !1 System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::Invoke(!0)
inline Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * Func_2_Invoke_m11665158226FC6CAE04CCA779FFF99A552C3EC00 (Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___arg0, const RuntimeMethod* method)
{
	return ((  Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * (*) (Func_2_tDF15217118E975816709A90F855C00DF6CBE404C *, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::GetAwaiter()
inline TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  Task_1_GetAwaiter_m785DAB38536FEF95D0FA0F82FCAAC22ABA7A14AC (Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  (*) (Task_1_t2BA5344BFCD9088736C17267111669B81556F686 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mFD404E76E39E43579026FD03F2565BB0205D6304 (TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>,Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_m9D9D07E9D91FC884703ED3C79388887F8DCF220C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 * ___awaiter0, U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *, U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_mF9807EA88174E4B0ABC83D3F687914861440B041_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::GetResult()
inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * TaskAwaiter_1_GetResult_mF7BB352C5320A92F62331B8038E155D0FA78E5EC (TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 * __this, const RuntimeMethod* method)
{
	return ((  Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * (*) (TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// !1 System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>::Invoke(!0)
inline Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * Func_2_Invoke_m2577E3D9E3E3399B1A3A4E613C56EF1A35840B16 (Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___arg0, const RuntimeMethod* method)
{
	return ((  Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * (*) (Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 *, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState::OnMessageSent(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RosTopicState_OnMessageSent_mF35FE6A98BBF5B2E70EB446A77164BEC2C32542A (RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.TopicMessageSender::Queue(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopicMessageSender_Queue_m4D349D0A8BB43B93C6A16AD3881019FBAAB535DC (TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleUnityServiceRequestU3Ed__58_MoveNext_m3AE1580ED1B436973716A3C288349A7D77A06835 (U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleUnityServiceRequestU3Ed__58_SetStateMachine_m06DE4DDF98274E7ECD9F46E985461B03BC52A779 (U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,TFStream>::.ctor()
inline void Dictionary_2__ctor_m5DF6D85F2EBFDA31E81DACB9837BC1C7E8A7E292 (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<TFStream>>::.ctor()
inline void List_1__ctor_m28A06310BD6E012C1B3A58F69656EF53454820CD (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Unity.Robotics.ROSTCPConnector.ROSConnection Unity.Robotics.ROSTCPConnector.ROSConnection::GetOrCreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ROSConnection_GetOrCreateInstance_m581DB1E8EB5BE4383D0BF1E4FE9C3D2DBB78B3A0 (const RuntimeMethod* method);
// System.Void System.Action`1<RosMessageTypes.Tf2.TFMessageMsg>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD199854B63E0FE83DEC3B459444D5A8F1BF09150 (Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection::Subscribe<RosMessageTypes.Tf2.TFMessageMsg>(System.String,System.Action`1<T>)
inline void ROSConnection_Subscribe_TisTFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_mC1DB458F3D267FC86C0BCE5A179AB85C0D1C8FBE (ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * __this, String_t* ___topic0, Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 *, String_t*, Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 *, const RuntimeMethod*))ROSConnection_Subscribe_TisRuntimeObject_m5AFE932DAD80B1924286554D0D011789801CEFE2_gshared)(__this, ___topic0, ___callback1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TFStream>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427 (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * __this, String_t* ___key0, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *, String_t*, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TFStream::.ctor(TFStream,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFStream__ctor_m2CF182A0EE2817BA356312D0C6D365026FA88DD4 (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * __this, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___parent0, String_t* ___name1, String_t* ___tfTopic2, const RuntimeMethod* method);
// TFStream TFSystem/TFTopicState::GetOrCreateFrame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * TFTopicState_GetOrCreateFrame_mA7258E646813C102A67F3E477606C32F7C309833 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, String_t* ___frame_id0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,TFStream>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m17740A5E65B682D818A2F50E33CB6C1569974E2B (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * __this, String_t* ___key0, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *, String_t*, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TFSystem/TFTopicState::NotifyChanged(TFStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState_NotifyChanged_m5DEDA29DF1CF76E3816FDA48F43700988680C545 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___stream0, const RuntimeMethod* method);
// TFStream TFStream::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * TFStream_get_Parent_m80692B0358674CF8E822FE71AF50AAD08EA1E593_inline (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * __this, const RuntimeMethod* method);
// System.Void TFStream::SetParent(TFStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFStream_SetParent_m0927F4093C6DE883A05447B5F5AE59A6ADC41C9F (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * __this, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___newParent0, const RuntimeMethod* method);
// System.Int64 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageExtensions::ToLongTime(RosMessageTypes.BuiltinInterfaces.TimeMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MessageExtensions_ToLongTime_m68F3AE04C88520169D5E2003F8524ADF96B8D33B (TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.Robotics.ROSTCPConnector.ROSGeometry.CoordinateSpaceExtensions::From<Unity.Robotics.ROSTCPConnector.ROSGeometry.FLU>(RosMessageTypes.Geometry.Vector3Msg)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m32693680AC5CFFB5F206E12C51EE5DF3600258E1 (Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * ___self0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 *, const RuntimeMethod*))CoordinateSpaceExtensions_From_TisRuntimeObject_mD4A289CAFF5B02B61A82172252713D875774618C_gshared)(___self0, method);
}
// UnityEngine.Quaternion Unity.Robotics.ROSTCPConnector.ROSGeometry.CoordinateSpaceExtensions::From<Unity.Robotics.ROSTCPConnector.ROSGeometry.FLU>(RosMessageTypes.Geometry.QuaternionMsg)
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m586731BA73DEE5BF1A0806E23E330F83A695B7A5 (QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * ___self0, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF *, const RuntimeMethod*))CoordinateSpaceExtensions_From_TisRuntimeObject_m377441F0D6EE69AA76399B708CD1BF072365AAD5_gshared)(___self0, method);
}
// System.Void TFStream::Add(System.Int64,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFStream_Add_m1E4D6A549429C7CEE12764EF1DCA668320891F6F (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * __this, int64_t ___timestamp0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,TFStream>::get_Keys()
inline KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * Dictionary_2_get_Keys_mCA87B106B48617FBC592C93DC8CD73CD04605F97 (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * (*) (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,TFStream>::get_Values()
inline ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37 (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * (*) (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<TFStream>>::Add(!0)
inline void List_1_Add_m2E3DA3CD26FDDD3626A707D9758D9A5C29DB07BB (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * __this, Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B *, Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action`1<TFStream>>::GetEnumerator()
inline Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF  List_1_GetEnumerator_mED486CF01AA0DB7E14761D7313750EFBECB63C29 (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF  (*) (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>::get_Current()
inline Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * Enumerator_get_Current_mB663A5EC4A18D286D12C1A57DBD0C436FA680A2B_inline (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF * __this, const RuntimeMethod* method)
{
	return ((  Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * (*) (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Action`1<TFStream>::Invoke(!0)
inline void Action_1_Invoke_mE55D1AC08095D5709632811BFDB625841BDFD8BD (Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * __this, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD *, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>::MoveNext()
inline bool Enumerator_MoveNext_m905FDD4CDFECFABB0E50422A7DF27732D724D71C (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<TFStream>>::Dispose()
inline void Enumerator_Dispose_mB0C5660BE80F63299FE222D43E7B2FEAF97E87A2 (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TFStream>::GetEnumerator()
inline Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782  ValueCollection_GetEnumerator_m2FD6F08A9CDE50D2FA1C8D1F26E8075CCC753BC5 (ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782  (*) (ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE *, const RuntimeMethod*))ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>::get_Current()
inline TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * Enumerator_get_Current_mD62F60FA07DFE72F895DC78B3310E250FC15FCF5_inline (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 * __this, const RuntimeMethod* method)
{
	return ((  TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * (*) (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *, const RuntimeMethod*))Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>::MoveNext()
inline bool Enumerator_MoveNext_m9702080EE23B0F046C5B10E3DB09BA7F83BC33D8 (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *, const RuntimeMethod*))Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,TFStream>::Dispose()
inline void Enumerator_Dispose_mAF04F7D58F9688C7F7FF0BF40D2CA799BA96C701 (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *, const RuntimeMethod*))Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared)(__this, method);
}
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_m01422B426A3552A849600713628D01F3AF36E1C0 (int32_t ___millisecondsDelay0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Object Unity.Robotics.ROSTCPConnector.TaskPauser::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * TaskPauser_get_Result_m208A33E7B79C9AD122AA39B76B1ED9848882668C_inline (TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3 (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUntilResumedU3Ed__5_MoveNext_m93D5DE605E9F70F028473395BC965B14A3C0839C (U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUntilResumedU3Ed__5_SetStateMachine_m33E96555038CD95068EFAE7A75351E80E57CC5CC (U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360 (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_010a;
			}
		}

IL_0011:
		{
			// int read = 0;
			__this->set_U3CreadU3E5__2_7(0);
			goto IL_013c;
		}

IL_001d:
		{
			// await Task.Delay(sleepMilliseconds);
			int32_t L_3 = __this->get_sleepMilliseconds_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = Task_Delay_m880CF6082AF5731C0E7DC9CA3F175878F120CCAA(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
			L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = V_1;
			__this->set_U3CU3Eu__1_8(L_8);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m61AF6A36A609B64C52D7FEBA2341789312F52063_RuntimeMethod_var);
			goto IL_019c;
		}

IL_005a:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = __this->get_U3CU3Eu__1_8();
			V_1 = L_10;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_11 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0076:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
		}

IL_007d:
		{
			// while (!token.IsCancellationRequested && !networkStream.DataAvailable)
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_13 = __this->get_address_of_token_3();
			bool L_14;
			L_14 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_0097;
			}
		}

IL_008a:
		{
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_15 = __this->get_networkStream_4();
			NullCheck(L_15);
			bool L_16;
			L_16 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Net.Sockets.NetworkStream::get_DataAvailable() */, L_15);
			if (!L_16)
			{
				goto IL_001d;
			}
		}

IL_0097:
		{
			// token.ThrowIfCancellationRequested();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_17 = __this->get_address_of_token_3();
			CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_17, /*hidden argument*/NULL);
			// read += await networkStream.ReadAsync(array, read, length - read, token);
			int32_t L_18 = __this->get_U3CreadU3E5__2_7();
			__this->set_U3CU3E7__wrap2_9(L_18);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_19 = __this->get_networkStream_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = __this->get_array_5();
			int32_t L_21 = __this->get_U3CreadU3E5__2_7();
			int32_t L_22 = __this->get_length_6();
			int32_t L_23 = __this->get_U3CreadU3E5__2_7();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = __this->get_token_3();
			NullCheck(L_19);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_25;
			L_25 = VirtFuncInvoker4< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(21 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_19, L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), L_24);
			NullCheck(L_25);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_26;
			L_26 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_25, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
			V_3 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0126;
			}
		}

IL_00e7:
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_29 = V_3;
			__this->set_U3CU3Eu__2_10(L_29);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_3), (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877_m10AC899B2BBE627DF2762126E8FAEB1DE40DE3CF_RuntimeMethod_var);
			goto IL_019c;
		}

IL_010a:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_31 = __this->get_U3CU3Eu__2_10();
			V_3 = L_31;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_32 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
		}

IL_0126:
		{
			int32_t L_34;
			L_34 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			V_2 = L_34;
			int32_t L_35 = __this->get_U3CU3E7__wrap2_9();
			int32_t L_36 = V_2;
			__this->set_U3CreadU3E5__2_7(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)));
		}

IL_013c:
		{
			// while (read < length && networkStream.CanRead)
			int32_t L_37 = __this->get_U3CreadU3E5__2_7();
			int32_t L_38 = __this->get_length_6();
			if ((((int32_t)L_37) >= ((int32_t)L_38)))
			{
				goto IL_015a;
			}
		}

IL_014a:
		{
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_39 = __this->get_networkStream_4();
			NullCheck(L_39);
			bool L_40;
			L_40 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_39);
			if (L_40)
			{
				goto IL_007d;
			}
		}

IL_015a:
		{
			// if (read < length)
			int32_t L_41 = __this->get_U3CreadU3E5__2_7();
			int32_t L_42 = __this->get_length_6();
			if ((((int32_t)L_41) >= ((int32_t)L_42)))
			{
				goto IL_016e;
			}
		}

IL_0168:
		{
			// throw new SocketException(); // the connection has closed
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_43 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)));
			SocketException__ctor_mA4FA4C30962B1DD852904297C47EB05A9C97B7F9(L_43, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360_RuntimeMethod_var)));
		}

IL_016e:
		{
			goto IL_0189;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0170;
		}
		throw e;
	}

CATCH_0170:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_45 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_44, L_45, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019c;
	} // end catch (depth: 1)

IL_0189:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_46, /*hidden argument*/NULL);
	}

IL_019c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * _thisAdjusted = reinterpret_cast<U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *>(__this + _offset);
	U3CReadToByteArrayU3Ed__117_MoveNext_mA0D1EACCD7C0D3734BB54B899BE41BCB1A9BB360(_thisAdjusted, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReadToByteArray>d__117::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToByteArrayU3Ed__117_SetStateMachine_m82448C3066FBAA964C93E463CE49D5F2BD6A4B83 (U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToByteArrayU3Ed__117_SetStateMachine_m82448C3066FBAA964C93E463CE49D5F2BD6A4B83_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 * _thisAdjusted = reinterpret_cast<U3CReadToByteArrayU3Ed__117_tE85861CDA2CD305AA601398B2CB9C170C6DDB877 *>(__this + _offset);
	U3CReadToByteArrayU3Ed__117_SetStateMachine_m82448C3066FBAA964C93E463CE49D5F2BD6A4B83(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReaderThreadU3Ed__116_MoveNext_mD4277F42F2237190D7D2681E18EC49EA049CFF34 (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9984D961F05D7CF0CCE53E6817AC721170DAE5C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7639D5A6B0DD8423C13B4343D7D0E527E1003AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * V_1 = NULL;
	TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	Exception_t * G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B20_2 = NULL;
	String_t* G_B20_3 = NULL;
	Exception_t * G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	String_t* G_B19_3 = NULL;
	String_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	String_t* G_B21_2 = NULL;
	String_t* G_B21_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00b6;
			}
		}

IL_0011:
		{
			// Tuple<string, byte[]> handshakeContent = await ReadMessageContents(networkStream, sleepMilliseconds, token);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_3 = __this->get_networkStream_2();
			int32_t L_4 = __this->get_sleepMilliseconds_3();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5 = __this->get_token_4();
			IL2CPP_RUNTIME_CLASS_INIT(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
			Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * L_6;
			L_6 = ROSConnection_ReadMessageContents_m79C3966152E88F1EE9D387CBCEA2202DD24EB1FB(L_3, L_4, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_7;
			L_7 = Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43(L_6, /*hidden argument*/Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43_RuntimeMethod_var);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46((TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_10 = V_2;
			__this->set_U3CU3Eu__1_7(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718_RuntimeMethod_var);
			goto IL_01c6;
		}

IL_005a:
		{
			TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_12 = __this->get_U3CU3Eu__1_7();
			V_2 = L_12;
			TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * L_13 = __this->get_address_of_U3CU3Eu__1_7();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0076:
		{
			Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_15;
			L_15 = TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4((TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4_RuntimeMethod_var);
			V_1 = L_15;
			// if (handshakeContent.Item1 == SysCommand.k_SysCommand_Handshake)
			Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_inline(L_16, /*hidden argument*/Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_RuntimeMethod_var);
			bool L_18;
			L_18 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_17, _stringLiteral9984D961F05D7CF0CCE53E6817AC721170DAE5C8, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_00a7;
			}
		}

IL_0090:
		{
			// ROSConnection.m_HasConnectionError = false;
			IL2CPP_RUNTIME_CLASS_INIT(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
			((ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields*)il2cpp_codegen_static_fields_for(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var))->set_m_HasConnectionError_20((bool)0);
			// queue.Enqueue(handshakeContent);
			ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * L_19 = __this->get_queue_5();
			Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_20 = V_1;
			NullCheck(L_19);
			ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199(L_19, L_20, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199_RuntimeMethod_var);
			// }
			goto IL_0188;
		}

IL_00a7:
		{
			// Debug.LogError($"Invalid ROS-TCP-Endpoint version detected: 0.6.0 or older. Expected: {k_Version}.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(_stringLiteralD7639D5A6B0DD8423C13B4343D7D0E527E1003AD, /*hidden argument*/NULL);
			goto IL_0188;
		}

IL_00b6:
		{
		}

IL_00b7:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_21 = V_0;
				if ((((int32_t)L_21) == ((int32_t)1)))
				{
					goto IL_0104;
				}
			}

IL_00bb:
			{
				// Tuple<string, byte[]> content = await ReadMessageContents(networkStream, sleepMilliseconds, token);
				NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_22 = __this->get_networkStream_2();
				int32_t L_23 = __this->get_sleepMilliseconds_3();
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = __this->get_token_4();
				IL2CPP_RUNTIME_CLASS_INIT(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
				Task_1_t742B4BB3C70331F601D563475A49A0F040F7083A * L_25;
				L_25 = ROSConnection_ReadMessageContents_m79C3966152E88F1EE9D387CBCEA2202DD24EB1FB(L_22, L_23, L_24, /*hidden argument*/NULL);
				NullCheck(L_25);
				TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_26;
				L_26 = Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43(L_25, /*hidden argument*/Task_1_GetAwaiter_mD1DD08372E4BF1AD3DBAEAB1C2018A8EEE947A43_RuntimeMethod_var);
				V_2 = L_26;
				bool L_27;
				L_27 = TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46((TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m275101F7C0534BFD8D0757677897F7B269746C46_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0120;
				}
			}

IL_00e1:
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->set_U3CU3E1__state_0(L_28);
				TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_29 = V_2;
				__this->set_U3CU3Eu__1_7(L_29);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_30 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_30, (TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6_TisU3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB_mDDEF3AD29B511F9A602E3F682F1541D2702E7718_RuntimeMethod_var);
				goto IL_01c6;
			}

IL_0104:
			{
				TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6  L_31 = __this->get_U3CU3Eu__1_7();
				V_2 = L_31;
				TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 * L_32 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 ));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->set_U3CU3E1__state_0(L_33);
			}

IL_0120:
			{
				Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_34;
				L_34 = TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4((TaskAwaiter_1_t5DD952924B6BF33DC0A67E14203406CB2E7EE8C6 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m09448F9EEFE45EEA441C5A6DB82898380322C6C4_RuntimeMethod_var);
				V_3 = L_34;
				// ROSConnection.m_HasConnectionError = false;
				IL2CPP_RUNTIME_CLASS_INIT(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
				((ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields*)il2cpp_codegen_static_fields_for(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var))->set_m_HasConnectionError_20((bool)0);
				// if (content.Item1 != "") // ignore keepalive messages
				Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_35 = V_3;
				NullCheck(L_35);
				String_t* L_36;
				L_36 = Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_inline(L_35, /*hidden argument*/Tuple_2_get_Item1_m4CAD471722E6A0DFF42BCAE57FB6DDB434ABE577_RuntimeMethod_var);
				bool L_37;
				L_37 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
				if (!L_37)
				{
					goto IL_014c;
				}
			}

IL_0140:
			{
				// queue.Enqueue(content);
				ConcurrentQueue_1_t5F48DB7E37C2DDEABBE79B6CD1A2C3C6150229DE * L_38 = __this->get_queue_5();
				Tuple_2_t76ABF1541BEA14FB77A1E12904EBB73F04D93C26 * L_39 = V_3;
				NullCheck(L_38);
				ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199(L_38, L_39, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4CDDF318869E1701033A969B2211C89F78BCA199_RuntimeMethod_var);
			}

IL_014c:
			{
				// }
				goto IL_0188;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014e;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0151;
			}
			throw e;
		}

CATCH_014e:
		{ // begin catch(System.OperationCanceledException)
			// catch (OperationCanceledException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0188;
		} // end catch (depth: 2)

CATCH_0151:
		{ // begin catch(System.Exception)
			{
				// catch (Exception e)
				V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// ROSConnection.m_HasConnectionError = true;
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var)));
				((ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var))))->set_m_HasConnectionError_20((bool)1);
				// Debug.Log("Reader " + readerIdx + " exception! " + e);
				int32_t* L_40 = __this->get_address_of_readerIdx_6();
				String_t* L_41;
				L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_40, /*hidden argument*/NULL);
				Exception_t * L_42 = V_4;
				Exception_t * L_43 = L_42;
				G_B19_0 = L_43;
				G_B19_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AD016E36596E4DC28E9F50E220A7F794409A3E));
				G_B19_2 = L_41;
				G_B19_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84B89B8119816C5541CBC4AC2F62BAAB477EDDE0));
				if (L_43)
				{
					G_B20_0 = L_43;
					G_B20_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AD016E36596E4DC28E9F50E220A7F794409A3E));
					G_B20_2 = L_41;
					G_B20_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84B89B8119816C5541CBC4AC2F62BAAB477EDDE0));
					goto IL_0177;
				}
			}

IL_0173:
			{
				G_B21_0 = ((String_t*)(NULL));
				G_B21_1 = G_B19_1;
				G_B21_2 = G_B19_2;
				G_B21_3 = G_B19_3;
				goto IL_017c;
			}

IL_0177:
			{
				NullCheck(G_B20_0);
				String_t* L_44;
				L_44 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B20_0);
				G_B21_0 = L_44;
				G_B21_1 = G_B20_1;
				G_B21_2 = G_B20_2;
				G_B21_3 = G_B20_3;
			}

IL_017c:
			{
				String_t* L_45;
				L_45 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(G_B21_3, G_B21_2, G_B21_1, G_B21_0, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_45, /*hidden argument*/NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0188;
			}
		} // end catch (depth: 2)

IL_0188:
		{
			// while (!token.IsCancellationRequested)
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_46 = __this->get_address_of_token_4();
			bool L_47;
			L_47 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_00b6;
			}
		}

IL_0198:
		{
			goto IL_01b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_48 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_49 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_48, L_49, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	} // end catch (depth: 1)

IL_01b3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_50 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_50, /*hidden argument*/NULL);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReaderThreadU3Ed__116_MoveNext_mD4277F42F2237190D7D2681E18EC49EA049CFF34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * _thisAdjusted = reinterpret_cast<U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB *>(__this + _offset);
	U3CReaderThreadU3Ed__116_MoveNext_mD4277F42F2237190D7D2681E18EC49EA049CFF34(_thisAdjusted, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/<ReaderThread>d__116::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReaderThreadU3Ed__116_SetStateMachine_m75618075639AF1F416958A82FF1D7E64FB9A9B0B (U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReaderThreadU3Ed__116_SetStateMachine_m75618075639AF1F416958A82FF1D7E64FB9A9B0B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB * _thisAdjusted = reinterpret_cast<U3CReaderThreadU3Ed__116_t53598B7C24D1570CFAAFB0701957229E382C14AB *>(__this + _offset);
	U3CReaderThreadU3Ed__116_SetStateMachine_m75618075639AF1F416958A82FF1D7E64FB9A9B0B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_pinvoke(const InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4& unmarshaled, InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Self_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Self' of type 'InternalAPI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Self_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_pinvoke_back(const InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_pinvoke& marshaled, InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4& unmarshaled)
{
	Exception_t* ___m_Self_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Self' of type 'InternalAPI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Self_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_pinvoke_cleanup(InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_com(const InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4& unmarshaled, InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_com& marshaled)
{
	Exception_t* ___m_Self_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Self' of type 'InternalAPI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Self_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_com_back(const InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_com& marshaled, InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4& unmarshaled)
{
	Exception_t* ___m_Self_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Self' of type 'InternalAPI': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Self_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI
IL2CPP_EXTERN_C void InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshal_com_cleanup(InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4_marshaled_com& marshaled)
{
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::.ctor(Unity.Robotics.ROSTCPConnector.ROSConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI__ctor_m805CEF69F0446B37A275DFF7353A9F1FA5C92AE9 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___self0, const RuntimeMethod* method)
{
	{
		// public InternalAPI(ROSConnection self) { m_Self = self; }
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = ___self0;
		__this->set_m_Self_0(L_0);
		// public InternalAPI(ROSConnection self) { m_Self = self; }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI__ctor_m805CEF69F0446B37A275DFF7353A9F1FA5C92AE9_AdjustorThunk (RuntimeObject * __this, ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___self0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI__ctor_m805CEF69F0446B37A275DFF7353A9F1FA5C92AE9_inline(_thisAdjusted, ___self0, method);
}
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::get_Deserializer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * InternalAPI_get_Deserializer_mDC1A2B6E8503115359EFE8B8E1E0C351055F9D3A (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, const RuntimeMethod* method)
{
	{
		// public MessageDeserializer Deserializer => m_Self.m_MessageDeserializer;
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		NullCheck(L_0);
		MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * L_1 = L_0->get_m_MessageDeserializer_31();
		return L_1;
	}
}
IL2CPP_EXTERN_C  MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * InternalAPI_get_Deserializer_mDC1A2B6E8503115359EFE8B8E1E0C351055F9D3A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * _returnValue;
	_returnValue = InternalAPI_get_Deserializer_mDC1A2B6E8503115359EFE8B8E1E0C351055F9D3A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendSubscriberRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendSubscriberRegistration_m9FD6C4D2313B9AFD1CC086BDFC4D07ADA47934D8 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187B6F45E6C72965325D1D0E41F952304ABBDB0B);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_Subscribe, new SysCommand_TopicAndType { topic = topic, message_name = rosMessageName }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		String_t* L_2 = ___rosMessageName1;
		(&V_0)->set_message_name_1(L_2);
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_3 = V_0;
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_4 = L_3;
		RuntimeObject * L_5 = Box(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var, &L_4);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = ___stream2;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral187B6F45E6C72965325D1D0E41F952304ABBDB0B, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendSubscriberRegistration_m9FD6C4D2313B9AFD1CC086BDFC4D07ADA47934D8_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendSubscriberRegistration_m9FD6C4D2313B9AFD1CC086BDFC4D07ADA47934D8(_thisAdjusted, ___topic0, ___rosMessageName1, ___stream2, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendRosServiceRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendRosServiceRegistration_m94EEC17564761FC538621B7C2E8B5D8101A16F28 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C384C883E5BF8402615DAD3461FDC3262E46D74);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_RosService, new SysCommand_TopicAndType { topic = topic, message_name = rosMessageName }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		String_t* L_2 = ___rosMessageName1;
		(&V_0)->set_message_name_1(L_2);
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_3 = V_0;
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_4 = L_3;
		RuntimeObject * L_5 = Box(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var, &L_4);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = ___stream2;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral2C384C883E5BF8402615DAD3461FDC3262E46D74, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendRosServiceRegistration_m94EEC17564761FC538621B7C2E8B5D8101A16F28_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendRosServiceRegistration_m94EEC17564761FC538621B7C2E8B5D8101A16F28(_thisAdjusted, ___topic0, ___rosMessageName1, ___stream2, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceRegistration(System.String,System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceRegistration_mD83A9F3B46EB4FFC598EBBDFD303B342D068DF03 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353D32E8D7BC623E2BBEA46AAD31F73F9B002E0D);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_UnityService, new SysCommand_TopicAndType { topic = topic, message_name = rosMessageName }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		String_t* L_2 = ___rosMessageName1;
		(&V_0)->set_message_name_1(L_2);
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_3 = V_0;
		SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324  L_4 = L_3;
		RuntimeObject * L_5 = Box(SysCommand_TopicAndType_t3FAF54A06587DE46D5FDB9AB3FCD07358E28B324_il2cpp_TypeInfo_var, &L_4);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = ___stream2;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral353D32E8D7BC623E2BBEA46AAD31F73F9B002E0D, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendUnityServiceRegistration_mD83A9F3B46EB4FFC598EBBDFD303B342D068DF03_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, String_t* ___rosMessageName1, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendUnityServiceRegistration_mD83A9F3B46EB4FFC598EBBDFD303B342D068DF03(_thisAdjusted, ___topic0, ___rosMessageName1, ___stream2, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendSubscriberUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendSubscriberUnregistration_m0C75FEA10C38D846407A75AE3AF419DA4DAF7148 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D604AD3C7E778C6667C37428CB5FF31188AAF3);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_RemoveSubscriber, new SysCommand_Topic { topic = topic }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_2 = V_0;
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var, &L_3);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = ___stream1;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteralE4D604AD3C7E778C6667C37428CB5FF31188AAF3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendSubscriberUnregistration_m0C75FEA10C38D846407A75AE3AF419DA4DAF7148_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendSubscriberUnregistration_m0C75FEA10C38D846407A75AE3AF419DA4DAF7148(_thisAdjusted, ___topic0, ___stream1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendPublisherUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendPublisherUnregistration_m7B820A371A200D1BA8D699859765879196613616 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8F69868A72D4D9F51FE5B80A8E34E65A45AB54);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_RemovePublisher, new SysCommand_Topic { topic = topic }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_2 = V_0;
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var, &L_3);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = ___stream1;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral6A8F69868A72D4D9F51FE5B80A8E34E65A45AB54, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendPublisherUnregistration_m7B820A371A200D1BA8D699859765879196613616_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendPublisherUnregistration_m7B820A371A200D1BA8D699859765879196613616(_thisAdjusted, ___topic0, ___stream1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendRosServiceUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendRosServiceUnregistration_mCBAF7D15C503F77598F9E48F15B298E403C18570 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65F09C00AD6049CB190922F30455082DB3301FC9);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_RemoveRosService, new SysCommand_Topic { topic = topic }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_2 = V_0;
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var, &L_3);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = ___stream1;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral65F09C00AD6049CB190922F30455082DB3301FC9, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendRosServiceUnregistration_mCBAF7D15C503F77598F9E48F15B298E403C18570_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendRosServiceUnregistration_mCBAF7D15C503F77598F9E48F15B298E403C18570(_thisAdjusted, ___topic0, ___stream1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceUnregistration(System.String,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceUnregistration_mB3D2C10D99923189062E9F9DBB4E0DE15FACFB99 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral642F1BBAF2FE4EA77DE8C2885B423E1A9B200BDA);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_RemoveUnityService, new SysCommand_Topic { topic = topic }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_2 = V_0;
		SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Topic_tD3AD1E3D466FDFCADD4FE771FFDF6FCC0C4BDAC5_il2cpp_TypeInfo_var, &L_3);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = ___stream1;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral642F1BBAF2FE4EA77DE8C2885B423E1A9B200BDA, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendUnityServiceUnregistration_mB3D2C10D99923189062E9F9DBB4E0DE15FACFB99_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendUnityServiceUnregistration_mB3D2C10D99923189062E9F9DBB4E0DE15FACFB99(_thisAdjusted, ___topic0, ___stream1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendUnityServiceResponse(System.Int32,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendUnityServiceResponse_m9E32CA30E7CB1DC1273EF5E12A75CCB27162E24E (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, int32_t ___serviceId0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA228C63628C64DC8F7CBC1CE11F46D2D0AB48611);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_ServiceResponse, new SysCommand_Service { srv_id = serviceId }, stream);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F ));
		int32_t L_1 = ___serviceId0;
		(&V_0)->set_srv_id_0(L_1);
		SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  L_2 = V_0;
		SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F_il2cpp_TypeInfo_var, &L_3);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = ___stream1;
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteralA228C63628C64DC8F7CBC1CE11F46D2D0AB48611, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendUnityServiceResponse_m9E32CA30E7CB1DC1273EF5E12A75CCB27162E24E_AdjustorThunk (RuntimeObject * __this, int32_t ___serviceId0, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendUnityServiceResponse_m9E32CA30E7CB1DC1273EF5E12A75CCB27162E24E(_thisAdjusted, ___serviceId0, ___stream1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendPublisherRegistration(System.String,System.String,System.Int32,System.Boolean,System.Net.Sockets.NetworkStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendPublisherRegistration_m0452CE2E46D48BD816E0DD9DBD136CEF2D5F9116 (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, String_t* ___topic0, String_t* ___message_name1, int32_t ___queueSize2, bool ___latch3, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0551A6B5882D29E66A190E28F0957D424A8B88CA);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_Publish,
		//     new SysCommand_PublisherRegistration { topic = topic, message_name = message_name, queue_size = queueSize, latch = latch }
		// );
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760 ));
		String_t* L_1 = ___topic0;
		(&V_0)->set_topic_0(L_1);
		String_t* L_2 = ___message_name1;
		(&V_0)->set_message_name_1(L_2);
		int32_t L_3 = ___queueSize2;
		(&V_0)->set_queue_size_2(L_3);
		bool L_4 = ___latch3;
		(&V_0)->set_latch_3(L_4);
		SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760  L_5 = V_0;
		SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760  L_6 = L_5;
		RuntimeObject * L_7 = Box(SysCommand_PublisherRegistration_t4AF34D9EC318FDFE6AB7D2CC747460CE228DA760_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral0551A6B5882D29E66A190E28F0957D424A8B88CA, L_7, (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendPublisherRegistration_m0452CE2E46D48BD816E0DD9DBD136CEF2D5F9116_AdjustorThunk (RuntimeObject * __this, String_t* ___topic0, String_t* ___message_name1, int32_t ___queueSize2, bool ___latch3, NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendPublisherRegistration_m0452CE2E46D48BD816E0DD9DBD136CEF2D5F9116(_thisAdjusted, ___topic0, ___message_name1, ___queueSize2, ___latch3, ___stream4, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::SendServiceRequest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_SendServiceRequest_mF2094C044EA29D7F494EBAC7DC7C55206BD063EF (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, int32_t ___serviceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E9424F20C383B160F708CA2E5DDEA543A1AC38);
		s_Il2CppMethodInitialized = true;
	}
	SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Self.SendSysCommand(SysCommand.k_SysCommand_ServiceRequest, new SysCommand_Service { srv_id = serviceId });
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		il2cpp_codegen_initobj((&V_0), sizeof(SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F ));
		int32_t L_1 = ___serviceId0;
		(&V_0)->set_srv_id_0(L_1);
		SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  L_2 = V_0;
		SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F  L_3 = L_2;
		RuntimeObject * L_4 = Box(SysCommand_Service_t673763F32284EB392AAF2D4073A2BF251D74775F_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_0);
		ROSConnection_SendSysCommand_m76635FF370380C68EBE12A559D56F5D0504861F3(L_0, _stringLiteral63E9424F20C383B160F708CA2E5DDEA543A1AC38, L_4, (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_SendServiceRequest_mF2094C044EA29D7F494EBAC7DC7C55206BD063EF_AdjustorThunk (RuntimeObject * __this, int32_t ___serviceId0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_SendServiceRequest_mF2094C044EA29D7F494EBAC7DC7C55206BD063EF(_thisAdjusted, ___serviceId0, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/InternalAPI::AddSenderToQueue(Unity.Robotics.ROSTCPConnector.OutgoingMessageSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAPI_AddSenderToQueue_m04583CC131F0EAF58255AD265E1A32142602A10D (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___sender0, const RuntimeMethod* method)
{
	{
		// m_Self.m_OutgoingMessageQueue.Enqueue(sender);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = __this->get_m_Self_0();
		NullCheck(L_0);
		OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * L_1 = L_0->get_m_OutgoingMessageQueue_17();
		OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * L_2 = ___sender0;
		NullCheck(L_1);
		OutgoingMessageQueue_Enqueue_m681AC891E7E285833E6B20584E4170203D3686D2(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void InternalAPI_AddSenderToQueue_m04583CC131F0EAF58255AD265E1A32142602A10D_AdjustorThunk (RuntimeObject * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___sender0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * _thisAdjusted = reinterpret_cast<InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *>(__this + _offset);
	InternalAPI_AddSenderToQueue_m04583CC131F0EAF58255AD265E1A32142602A10D(_thisAdjusted, ___sender0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessageQueue__ctor_m0E75C40F44143767B58E7F4943739C8C55D28C4A (OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_m1E8C18BE24AA12BFA3E507CD480ECCC1BA911B75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OutgoingMessageQueue()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_OutgoingMessageQueue = new ConcurrentQueue<OutgoingMessageSender>();
		ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * L_0 = (ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 *)il2cpp_codegen_object_new(ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_m1E8C18BE24AA12BFA3E507CD480ECCC1BA911B75(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_m1E8C18BE24AA12BFA3E507CD480ECCC1BA911B75_RuntimeMethod_var);
		__this->set_m_OutgoingMessageQueue_0(L_0);
		// NewMessageReadyToSendEvent = new ManualResetEvent(false);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_1 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_NewMessageReadyToSendEvent_1(L_1);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::Enqueue(Unity.Robotics.ROSTCPConnector.OutgoingMessageSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutgoingMessageQueue_Enqueue_m681AC891E7E285833E6B20584E4170203D3686D2 (OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * ___outgoingMessageSender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m95D741946E89C8ED50E36E3643AD841C6288286D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_OutgoingMessageQueue.Enqueue(outgoingMessageSender);
		ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * L_0 = __this->get_m_OutgoingMessageQueue_0();
		OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F * L_1 = ___outgoingMessageSender0;
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m95D741946E89C8ED50E36E3643AD841C6288286D(L_0, L_1, /*hidden argument*/ConcurrentQueue_1_Enqueue_m95D741946E89C8ED50E36E3643AD841C6288286D_RuntimeMethod_var);
		// NewMessageReadyToSendEvent.Set();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = __this->get_NewMessageReadyToSendEvent_1();
		NullCheck(L_2);
		bool L_3;
		L_3 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Robotics.ROSTCPConnector.ROSConnection/OutgoingMessageQueue::TryDequeue(Unity.Robotics.ROSTCPConnector.OutgoingMessageSender&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OutgoingMessageQueue_TryDequeue_m62FA5DEB586799AD27D33058655B697BB207DCCD (OutgoingMessageQueue_t59902D2585E7C2607501FE1BC8D2CD03AA5EFD35 * __this, OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F ** ___outgoingMessageSender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mEE8AEB153DD822295E96CC476FFAA994AC94CEE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_OutgoingMessageQueue.TryDequeue(out outgoingMessageSender);
		ConcurrentQueue_1_tC53800261DC154ED468ED856AC514A7CDDEA0F80 * L_0 = __this->get_m_OutgoingMessageQueue_0();
		OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F ** L_1 = ___outgoingMessageSender0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ConcurrentQueue_1_TryDequeue_mEE8AEB153DD822295E96CC476FFAA994AC94CEE7(L_0, (OutgoingMessageSender_tA2521FCF60A4D9E1F21EED733A812FC78B100D9F **)L_1, /*hidden argument*/ConcurrentQueue_1_TryDequeue_mEE8AEB153DD822295E96CC476FFAA994AC94CEE7_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m58053AFE947E02709E8BAFB1AA31DF000E489500 (U3CU3Ec__DisplayClass56_0_tF38E6C7464135D531375BFBAE8403F646657AF2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass56_0::<OnMessageReceived>b__0(System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0_U3COnMessageReceivedU3Eb__0_mFF744DAF42B0BCAD2127F0280AA8E2F429C38275 (U3CU3Ec__DisplayClass56_0_tF38E6C7464135D531375BFBAE8403F646657AF2E * __this, Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SubscriberCallbacks.ForEach(item => item(message));
		Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A * L_0 = ___item0;
		Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_1 = __this->get_message_0();
		NullCheck(L_0);
		Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872(L_0, L_1, /*hidden argument*/Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_m61E088AE3277A4B545696820BD9AC082692CC0F8 (U3CU3Ec__DisplayClass57_0_t3761CE8E697D4ED59154D7C60D9644DF18F0695C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<>c__DisplayClass57_0::<OnMessageSent>b__0(System.Action`1<Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3COnMessageSentU3Eb__0_m5D1455319C8567403322108F4FCD9963F2C42046 (U3CU3Ec__DisplayClass57_0_t3761CE8E697D4ED59154D7C60D9644DF18F0695C * __this, Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SubscriberCallbacks.ForEach(item => item(message));
		Action_1_tC222A6344B4B66603BC4A526A48D60E956978E4A * L_0 = ___item0;
		Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_1 = __this->get_message_0();
		NullCheck(L_0);
		Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872(L_0, L_1, /*hidden argument*/Action_1_Invoke_mFFB54BCF80D8DD98D0A7D60CB701EEC8FD176872_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleUnityServiceRequestU3Ed__58_MoveNext_m3AE1580ED1B436973716A3C288349A7D77A06835 (U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_m9D9D07E9D91FC884703ED3C79388887F8DCF220C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m11665158226FC6CAE04CCA779FFF99A552C3EC00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m2577E3D9E3E3399B1A3A4E613C56EF1A35840B16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF7BB352C5320A92F62331B8038E155D0FA78E5EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mFD404E76E39E43579026FD03F2565BB0205D6304_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m785DAB38536FEF95D0FA0F82FCAAC22ABA7A14AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C7E2CA5155E4B3133FA1206AF977E5ED3EE64D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746DAEAF0AAE08B8FF08855FFD24153883A06021);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * V_1 = NULL;
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * V_2 = NULL;
	Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * V_3 = NULL;
	TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009c;
			}
		}

IL_0014:
		{
			// if (!IsUnityService)
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = RosTopicState_get_IsUnityService_mFA2EF973C331C04171E22ADB735412FFA8C71004(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_003b;
			}
		}

IL_001c:
		{
			// Debug.LogError($"Unity service '{m_Topic}' has not been implemented!");
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_m_Topic_0();
			String_t* L_7;
			L_7 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral6C7E2CA5155E4B3133FA1206AF977E5ED3EE64D7, L_6, _stringLiteral746DAEAF0AAE08B8FF08855FFD24153883A06021, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_7, /*hidden argument*/NULL);
			// return;
			goto IL_0126;
		}

IL_003b:
		{
			// OnMessageReceived(data);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_8 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get_data_3();
			NullCheck(L_8);
			RosTopicState_OnMessageReceived_mA66F56A48C248B65FD4E1B62A0EF640168443159(L_8, L_9, /*hidden argument*/NULL);
			// Message requestMessage = Deserialize(data);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_10 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_data_3();
			NullCheck(L_10);
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_12;
			L_12 = RosTopicState_Deserialize_m9FC2B28C38E0F09680EBABFD63906E0D79D5A719(L_10, L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			// if (m_ServiceImplementationAsync != null)
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_13 = V_1;
			NullCheck(L_13);
			Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * L_14 = L_13->get_m_ServiceImplementationAsync_11();
			if (!L_14)
			{
				goto IL_00c3;
			}
		}

IL_005c:
		{
			// response = await m_ServiceImplementationAsync(requestMessage);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_15 = V_1;
			NullCheck(L_15);
			Func_2_tDF15217118E975816709A90F855C00DF6CBE404C * L_16 = L_15->get_m_ServiceImplementationAsync_11();
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_17 = V_2;
			NullCheck(L_16);
			Task_1_t2BA5344BFCD9088736C17267111669B81556F686 * L_18;
			L_18 = Func_2_Invoke_m11665158226FC6CAE04CCA779FFF99A552C3EC00(L_16, L_17, /*hidden argument*/Func_2_Invoke_m11665158226FC6CAE04CCA779FFF99A552C3EC00_RuntimeMethod_var);
			NullCheck(L_18);
			TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  L_19;
			L_19 = Task_1_GetAwaiter_m785DAB38536FEF95D0FA0F82FCAAC22ABA7A14AC(L_18, /*hidden argument*/Task_1_GetAwaiter_m785DAB38536FEF95D0FA0F82FCAAC22ABA7A14AC_RuntimeMethod_var);
			V_4 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_mFD404E76E39E43579026FD03F2565BB0205D6304((TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mFD404E76E39E43579026FD03F2565BB0205D6304_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00b9;
			}
		}

IL_0078:
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
			TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  L_22 = V_4;
			__this->set_U3CU3Eu__1_5(L_22);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_m9D9D07E9D91FC884703ED3C79388887F8DCF220C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, (TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *)(&V_4), (U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93_TisU3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16_m9D9D07E9D91FC884703ED3C79388887F8DCF220C_RuntimeMethod_var);
			goto IL_0139;
		}

IL_009c:
		{
			TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93  L_24 = __this->get_U3CU3Eu__1_5();
			V_4 = L_24;
			TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 * L_25 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 ));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
		}

IL_00b9:
		{
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_27;
			L_27 = TaskAwaiter_1_GetResult_mF7BB352C5320A92F62331B8038E155D0FA78E5EC((TaskAwaiter_1_t0AC3674DF3260E0636B1183ECDD2D277A5527C93 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_mF7BB352C5320A92F62331B8038E155D0FA78E5EC_RuntimeMethod_var);
			V_3 = L_27;
			// }
			goto IL_00d0;
		}

IL_00c3:
		{
			// response = m_ServiceImplementation(requestMessage);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_28 = V_1;
			NullCheck(L_28);
			Func_2_t1800BF6223250C8B2D8F663D22B88DC06DF37ED4 * L_29 = L_28->get_m_ServiceImplementation_10();
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_30 = V_2;
			NullCheck(L_29);
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_31;
			L_31 = Func_2_Invoke_m2577E3D9E3E3399B1A3A4E613C56EF1A35840B16(L_29, L_30, /*hidden argument*/Func_2_Invoke_m2577E3D9E3E3399B1A3A4E613C56EF1A35840B16_RuntimeMethod_var);
			V_3 = L_31;
		}

IL_00d0:
		{
			// m_ServiceResponseTopic.OnMessageSent(response);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_32 = V_1;
			NullCheck(L_32);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_33 = L_32->get_m_ServiceResponseTopic_12();
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_34 = V_3;
			NullCheck(L_33);
			RosTopicState_OnMessageSent_mF35FE6A98BBF5B2E70EB446A77164BEC2C32542A(L_33, L_34, /*hidden argument*/NULL);
			// m_ConnectionInternal.SendUnityServiceResponse(serviceId);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_35 = V_1;
			NullCheck(L_35);
			InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * L_36 = L_35->get_address_of_m_ConnectionInternal_8();
			int32_t L_37 = __this->get_serviceId_4();
			InternalAPI_SendUnityServiceResponse_m9E32CA30E7CB1DC1273EF5E12A75CCB27162E24E((InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *)L_36, L_37, (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 *)NULL, /*hidden argument*/NULL);
			// m_MessageSender.Queue(response);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_38 = V_1;
			NullCheck(L_38);
			TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * L_39 = L_38->get_m_MessageSender_3();
			Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_40 = V_3;
			NullCheck(L_39);
			TopicMessageSender_Queue_m4D349D0A8BB43B93C6A16AD3881019FBAAB535DC(L_39, L_40, /*hidden argument*/NULL);
			// m_ConnectionInternal.AddSenderToQueue(m_MessageSender);
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_41 = V_1;
			NullCheck(L_41);
			InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * L_42 = L_41->get_address_of_m_ConnectionInternal_8();
			RosTopicState_t5C74480AF4242647A27720CE333D048597EE2B5E * L_43 = V_1;
			NullCheck(L_43);
			TopicMessageSender_t793D8217A9C28CC8F8A035D1335DF2B31F080D69 * L_44 = L_43->get_m_MessageSender_3();
			InternalAPI_AddSenderToQueue_m04583CC131F0EAF58255AD265E1A32142602A10D((InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 *)L_42, L_44, /*hidden argument*/NULL);
			goto IL_0126;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010d;
		}
		throw e;
	}

CATCH_010d:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_46 = V_5;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0139;
	} // end catch (depth: 1)

IL_0126:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_47 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_47, /*hidden argument*/NULL);
	}

IL_0139:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleUnityServiceRequestU3Ed__58_MoveNext_m3AE1580ED1B436973716A3C288349A7D77A06835_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * _thisAdjusted = reinterpret_cast<U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 *>(__this + _offset);
	U3CHandleUnityServiceRequestU3Ed__58_MoveNext_m3AE1580ED1B436973716A3C288349A7D77A06835(_thisAdjusted, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.RosTopicState/<HandleUnityServiceRequest>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleUnityServiceRequestU3Ed__58_SetStateMachine_m06DE4DDF98274E7ECD9F46E985461B03BC52A779 (U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleUnityServiceRequestU3Ed__58_SetStateMachine_m06DE4DDF98274E7ECD9F46E985461B03BC52A779_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 * _thisAdjusted = reinterpret_cast<U3CHandleUnityServiceRequestU3Ed__58_t27BFDECB2A31320B97F66D038F95DFF4FB445E16 *>(__this + _offset);
	U3CHandleUnityServiceRequestU3Ed__58_SetStateMachine_m06DE4DDF98274E7ECD9F46E985461B03BC52A779(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TFSystem/TFTopicState::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState__ctor_m9CCEAB557D4CFA549EDD2D4DD7647564DA653C93 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, String_t* ___tfTopic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD199854B63E0FE83DEC3B459444D5A8F1BF09150_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5DF6D85F2EBFDA31E81DACB9837BC1C7E8A7E292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m28A06310BD6E012C1B3A58F69656EF53454820CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ROSConnection_Subscribe_TisTFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_mC1DB458F3D267FC86C0BCE5A179AB85C0D1C8FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TFTopicState_ReceiveTF_m4F69722AF3BFE23EDEDD7E20BACAC164C2D5373C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<string, TFStream> m_TransformTable = new Dictionary<string, TFStream>();
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_0 = (Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED *)il2cpp_codegen_object_new(Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5DF6D85F2EBFDA31E81DACB9837BC1C7E8A7E292(L_0, /*hidden argument*/Dictionary_2__ctor_m5DF6D85F2EBFDA31E81DACB9837BC1C7E8A7E292_RuntimeMethod_var);
		__this->set_m_TransformTable_1(L_0);
		// List<Action<TFStream>> m_Listeners = new List<Action<TFStream>>();
		List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * L_1 = (List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B *)il2cpp_codegen_object_new(List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B_il2cpp_TypeInfo_var);
		List_1__ctor_m28A06310BD6E012C1B3A58F69656EF53454820CD(L_1, /*hidden argument*/List_1__ctor_m28A06310BD6E012C1B3A58F69656EF53454820CD_RuntimeMethod_var);
		__this->set_m_Listeners_2(L_1);
		// public TFTopicState(string tfTopic = "/tf")
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_TFTopic = tfTopic;
		String_t* L_2 = ___tfTopic0;
		__this->set_m_TFTopic_0(L_2);
		// ROSConnection.GetOrCreateInstance().Subscribe<TFMessageMsg>(tfTopic, ReceiveTF);
		IL2CPP_RUNTIME_CLASS_INIT(ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646_il2cpp_TypeInfo_var);
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_3;
		L_3 = ROSConnection_GetOrCreateInstance_m581DB1E8EB5BE4383D0BF1E4FE9C3D2DBB78B3A0(/*hidden argument*/NULL);
		String_t* L_4 = ___tfTopic0;
		Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 * L_5 = (Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26 *)il2cpp_codegen_object_new(Action_1_tFE240003C28441B623FB2C3DF2A9E95A5C345C26_il2cpp_TypeInfo_var);
		Action_1__ctor_mD199854B63E0FE83DEC3B459444D5A8F1BF09150(L_5, __this, (intptr_t)((intptr_t)TFTopicState_ReceiveTF_m4F69722AF3BFE23EDEDD7E20BACAC164C2D5373C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD199854B63E0FE83DEC3B459444D5A8F1BF09150_RuntimeMethod_var);
		NullCheck(L_3);
		ROSConnection_Subscribe_TisTFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_mC1DB458F3D267FC86C0BCE5A179AB85C0D1C8FBE(L_3, L_4, L_5, /*hidden argument*/ROSConnection_Subscribe_TisTFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_mC1DB458F3D267FC86C0BCE5A179AB85C0D1C8FBE_RuntimeMethod_var);
		// }
		return;
	}
}
// TFStream TFSystem/TFTopicState::GetOrCreateFrame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * TFTopicState_GetOrCreateFrame_mA7258E646813C102A67F3E477606C32F7C309833 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, String_t* ___frame_id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m17740A5E65B682D818A2F50E33CB6C1569974E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* G_B6_0 = NULL;
	{
		goto IL_0013;
	}

IL_0002:
	{
		// frame_id = frame_id.Substring(0, frame_id.Length - 1);
		String_t* L_0 = ___frame_id0;
		String_t* L_1 = ___frame_id0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_0, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		___frame_id0 = L_3;
	}

IL_0013:
	{
		// while (frame_id.EndsWith("/"))
		String_t* L_4 = ___frame_id0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0002;
		}
	}
	{
		// var slash = frame_id.LastIndexOf('/');
		String_t* L_6 = ___frame_id0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_6, ((int32_t)47), /*hidden argument*/NULL);
		V_1 = L_7;
		// var singleName = slash == -1 ? frame_id : frame_id.Substring(slash + 1);
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_9 = ___frame_id0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		G_B6_0 = L_11;
		goto IL_0039;
	}

IL_0038:
	{
		String_t* L_12 = ___frame_id0;
		G_B6_0 = L_12;
	}

IL_0039:
	{
		V_2 = G_B6_0;
		// if (!m_TransformTable.TryGetValue(singleName, out tf) || tf == null)
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_13 = __this->get_m_TransformTable_1();
		String_t* L_14 = V_2;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427(L_13, L_14, (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_004d;
		}
	}
	{
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_16 = V_0;
		if (L_16)
		{
			goto IL_0092;
		}
	}

IL_004d:
	{
		// if (slash <= 0)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// tf = new TFStream(null, singleName, m_TFTopic);
		String_t* L_18 = V_2;
		String_t* L_19 = __this->get_m_TFTopic_0();
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_20 = (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *)il2cpp_codegen_object_new(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE_il2cpp_TypeInfo_var);
		TFStream__ctor_m2CF182A0EE2817BA356312D0C6D365026FA88DD4(L_20, (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *)NULL, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		// }
		goto IL_007c;
	}

IL_0061:
	{
		// var parent = GetOrCreateFrame(frame_id.Substring(0, slash));
		String_t* L_21 = ___frame_id0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, 0, L_22, /*hidden argument*/NULL);
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_24;
		L_24 = TFTopicState_GetOrCreateFrame_mA7258E646813C102A67F3E477606C32F7C309833(__this, L_23, /*hidden argument*/NULL);
		// tf = new TFStream(parent, singleName, m_TFTopic);
		String_t* L_25 = V_2;
		String_t* L_26 = __this->get_m_TFTopic_0();
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_27 = (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *)il2cpp_codegen_object_new(TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE_il2cpp_TypeInfo_var);
		TFStream__ctor_m2CF182A0EE2817BA356312D0C6D365026FA88DD4(L_27, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
	}

IL_007c:
	{
		// m_TransformTable[singleName] = tf;
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_28 = __this->get_m_TransformTable_1();
		String_t* L_29 = V_2;
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_30 = V_0;
		NullCheck(L_28);
		Dictionary_2_set_Item_m17740A5E65B682D818A2F50E33CB6C1569974E2B(L_28, L_29, L_30, /*hidden argument*/Dictionary_2_set_Item_m17740A5E65B682D818A2F50E33CB6C1569974E2B_RuntimeMethod_var);
		// NotifyChanged(tf);
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_31 = V_0;
		TFTopicState_NotifyChanged_m5DEDA29DF1CF76E3816FDA48F43700988680C545(__this, L_31, /*hidden argument*/NULL);
		// }
		goto IL_00b2;
	}

IL_0092:
	{
		// else if (slash > 0 && tf.Parent == null)
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_33 = V_0;
		NullCheck(L_33);
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_34;
		L_34 = TFStream_get_Parent_m80692B0358674CF8E822FE71AF50AAD08EA1E593_inline(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00b2;
		}
	}
	{
		// tf.SetParent(GetOrCreateFrame(frame_id.Substring(0, slash)));
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_35 = V_0;
		String_t* L_36 = ___frame_id0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_36, 0, L_37, /*hidden argument*/NULL);
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_39;
		L_39 = TFTopicState_GetOrCreateFrame_mA7258E646813C102A67F3E477606C32F7C309833(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		TFStream_SetParent_m0927F4093C6DE883A05447B5F5AE59A6ADC41C9F(L_35, L_39, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		// return tf;
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_40 = V_0;
		return L_40;
	}
}
// System.Void TFSystem/TFTopicState::ReceiveTF(RosMessageTypes.Tf2.TFMessageMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState_ReceiveTF_m4F69722AF3BFE23EDEDD7E20BACAC164C2D5373C (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m32693680AC5CFFB5F206E12C51EE5DF3600258E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m586731BA73DEE5BF1A0806E23E330F83A695B7A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* V_0 = NULL;
	int32_t V_1 = 0;
	TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * V_2 = NULL;
	String_t* V_3 = NULL;
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * V_4 = NULL;
	{
		// foreach (var tf_message in message.transforms)
		TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7 * L_0 = ___message0;
		NullCheck(L_0);
		TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* L_1 = L_0->get_transforms_0();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0077;
	}

IL_000b:
	{
		// foreach (var tf_message in message.transforms)
		TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var frame_id = tf_message.header.frame_id + "/" + tf_message.child_frame_id;
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_6 = V_2;
		NullCheck(L_6);
		HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC * L_7 = L_6->get_header_0();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_frame_id_2();
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_9 = V_2;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_child_frame_id_1();
		String_t* L_11;
		L_11 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_8, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// var tf = GetOrCreateFrame(frame_id);
		String_t* L_12 = V_3;
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_13;
		L_13 = TFTopicState_GetOrCreateFrame_mA7258E646813C102A67F3E477606C32F7C309833(__this, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// tf.Add(
		//     tf_message.header.stamp.ToLongTime(),
		//     tf_message.transform.translation.From<FLU>(),
		//     tf_message.transform.rotation.From<FLU>()
		// );
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_14 = V_4;
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_15 = V_2;
		NullCheck(L_15);
		HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC * L_16 = L_15->get_header_0();
		NullCheck(L_16);
		TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1 * L_17 = L_16->get_stamp_1();
		int64_t L_18;
		L_18 = MessageExtensions_ToLongTime_m68F3AE04C88520169D5E2003F8524ADF96B8D33B(L_17, /*hidden argument*/NULL);
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_19 = V_2;
		NullCheck(L_19);
		TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 * L_20 = L_19->get_transform_2();
		NullCheck(L_20);
		Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3 * L_21 = L_20->get_translation_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m32693680AC5CFFB5F206E12C51EE5DF3600258E1(L_21, /*hidden argument*/CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m32693680AC5CFFB5F206E12C51EE5DF3600258E1_RuntimeMethod_var);
		TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111 * L_23 = V_2;
		NullCheck(L_23);
		TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42 * L_24 = L_23->get_transform_2();
		NullCheck(L_24);
		QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF * L_25 = L_24->get_rotation_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m586731BA73DEE5BF1A0806E23E330F83A695B7A5(L_25, /*hidden argument*/CoordinateSpaceExtensions_From_TisFLU_t67D1925D8F51C316F8D5B225A503948ADF34B323_m586731BA73DEE5BF1A0806E23E330F83A695B7A5_RuntimeMethod_var);
		NullCheck(L_14);
		TFStream_Add_m1E4D6A549429C7CEE12764EF1DCA668320891F6F(L_14, L_18, L_22, L_26, /*hidden argument*/NULL);
		// NotifyChanged(tf);
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_27 = V_4;
		TFTopicState_NotifyChanged_m5DEDA29DF1CF76E3816FDA48F43700988680C545(__this, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0077:
	{
		// foreach (var tf_message in message.transforms)
		int32_t L_29 = V_1;
		TransformStampedMsgU5BU5D_tF93E946E756468368FA3272BB9C6B48C4FC88503* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> TFSystem/TFTopicState::GetTransformNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TFTopicState_GetTransformNames_m76764F105A0E3F0C7466E3D794F5CB6075F32B1D (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mCA87B106B48617FBC592C93DC8CD73CD04605F97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_TransformTable.Keys;
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_0 = __this->get_m_TransformTable_1();
		NullCheck(L_0);
		KeyCollection_t512C66DE57183CBEE0367DA1739BB47E5D8CEED2 * L_1;
		L_1 = Dictionary_2_get_Keys_mCA87B106B48617FBC592C93DC8CD73CD04605F97(L_0, /*hidden argument*/Dictionary_2_get_Keys_mCA87B106B48617FBC592C93DC8CD73CD04605F97_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<TFStream> TFSystem/TFTopicState::GetTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TFTopicState_GetTransforms_m40F48892C7B25DA46D5F6713C45CCE93DE4FFDDA (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_TransformTable.Values;
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_0 = __this->get_m_TransformTable_1();
		NullCheck(L_0);
		ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * L_1;
		L_1 = Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37(L_0, /*hidden argument*/Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37_RuntimeMethod_var);
		return L_1;
	}
}
// TFStream TFSystem/TFTopicState::GetTransformStream(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * TFTopicState_GetTransformStream_mE7F2BA9C73DC83CA59CFE84E61B382158352B800 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, String_t* ___frame_id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * V_0 = NULL;
	{
		// TFStream result = null;
		V_0 = (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE *)NULL;
		// m_TransformTable.TryGetValue(frame_id, out result);
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_0 = __this->get_m_TransformTable_1();
		String_t* L_1 = ___frame_id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427(L_0, L_1, (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m22BE6E2D7DAF567CC52649E09B288E895C47F427_RuntimeMethod_var);
		// return result;
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_3 = V_0;
		return L_3;
	}
}
// System.Void TFSystem/TFTopicState::AddListener(System.Action`1<TFStream>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState_AddListener_m65265CEFD05E632DBC354281C8A4CB998BC4CCFA (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3DA3CD26FDDD3626A707D9758D9A5C29DB07BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Listeners.Add(callback);
		List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * L_0 = __this->get_m_Listeners_2();
		Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * L_1 = ___callback0;
		NullCheck(L_0);
		List_1_Add_m2E3DA3CD26FDDD3626A707D9758D9A5C29DB07BB(L_0, L_1, /*hidden argument*/List_1_Add_m2E3DA3CD26FDDD3626A707D9758D9A5C29DB07BB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TFSystem/TFTopicState::NotifyChanged(TFStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState_NotifyChanged_m5DEDA29DF1CF76E3816FDA48F43700988680C545 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mE55D1AC08095D5709632811BFDB625841BDFD8BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB0C5660BE80F63299FE222D43E7B2FEAF97E87A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m905FDD4CDFECFABB0E50422A7DF27732D724D71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB663A5EC4A18D286D12C1A57DBD0C436FA680A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mED486CF01AA0DB7E14761D7313750EFBECB63C29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Action<TFStream> callback in m_Listeners)
		List_1_tC00F4F0A2643E99BA0D77C631E72D1011588D57B * L_0 = __this->get_m_Listeners_2();
		NullCheck(L_0);
		Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF  L_1;
		L_1 = List_1_GetEnumerator_mED486CF01AA0DB7E14761D7313750EFBECB63C29(L_0, /*hidden argument*/List_1_GetEnumerator_mED486CF01AA0DB7E14761D7313750EFBECB63C29_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach (Action<TFStream> callback in m_Listeners)
			Action_1_t9AAE3C8082241B26E41D243630161A26F7EE9CCD * L_2;
			L_2 = Enumerator_get_Current_mB663A5EC4A18D286D12C1A57DBD0C436FA680A2B_inline((Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB663A5EC4A18D286D12C1A57DBD0C436FA680A2B_RuntimeMethod_var);
			// callback(stream);
			TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_3 = ___stream0;
			NullCheck(L_2);
			Action_1_Invoke_mE55D1AC08095D5709632811BFDB625841BDFD8BD(L_2, L_3, /*hidden argument*/Action_1_Invoke_mE55D1AC08095D5709632811BFDB625841BDFD8BD_RuntimeMethod_var);
		}

IL_001b:
		{
			// foreach (Action<TFStream> callback in m_Listeners)
			bool L_4;
			L_4 = Enumerator_MoveNext_m905FDD4CDFECFABB0E50422A7DF27732D724D71C((Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m905FDD4CDFECFABB0E50422A7DF27732D724D71C_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB0C5660BE80F63299FE222D43E7B2FEAF97E87A2((Enumerator_t51BB392157323FBB4BBB521896D3217416F0DAEF *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB0C5660BE80F63299FE222D43E7B2FEAF97E87A2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void TFSystem/TFTopicState::NotifyAllChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TFTopicState_NotifyAllChanged_m6FDD713F90808263D56F8039964A1E84DF718631 (TFTopicState_tF942F447B4808DC06EFCC0683060D35B0BEA3B02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAF04F7D58F9688C7F7FF0BF40D2CA799BA96C701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9702080EE23B0F046C5B10E3DB09BA7F83BC33D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD62F60FA07DFE72F895DC78B3310E250FC15FCF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m2FD6F08A9CDE50D2FA1C8D1F26E8075CCC753BC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var stream in m_TransformTable.Values)
		Dictionary_2_tF3203E7799F3CD74C46F0EE56EEA92C7D6715EED * L_0 = __this->get_m_TransformTable_1();
		NullCheck(L_0);
		ValueCollection_t01666D5B45437960B1B97A6506209364444A88BE * L_1;
		L_1 = Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37(L_0, /*hidden argument*/Dictionary_2_get_Values_m397BCE648063632A14114F57C90EDA809DA79C37_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782  L_2;
		L_2 = ValueCollection_GetEnumerator_m2FD6F08A9CDE50D2FA1C8D1F26E8075CCC753BC5(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m2FD6F08A9CDE50D2FA1C8D1F26E8075CCC753BC5_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0013:
		{
			// foreach (var stream in m_TransformTable.Values)
			TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_3;
			L_3 = Enumerator_get_Current_mD62F60FA07DFE72F895DC78B3310E250FC15FCF5_inline((Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD62F60FA07DFE72F895DC78B3310E250FC15FCF5_RuntimeMethod_var);
			V_1 = L_3;
			// NotifyChanged(stream);
			TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_4 = V_1;
			TFTopicState_NotifyChanged_m5DEDA29DF1CF76E3816FDA48F43700988680C545(__this, L_4, /*hidden argument*/NULL);
		}

IL_0022:
		{
			// foreach (var stream in m_TransformTable.Values)
			bool L_5;
			L_5 = Enumerator_MoveNext_m9702080EE23B0F046C5B10E3DB09BA7F83BC33D8((Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9702080EE23B0F046C5B10E3DB09BA7F83BC33D8_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0013;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mAF04F7D58F9688C7F7FF0BF40D2CA799BA96C701((Enumerator_t45ABDB336C22D8F5104855C1A53F2E76600AA782 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mAF04F7D58F9688C7F7FF0BF40D2CA799BA96C701_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUntilResumedU3Ed__5_MoveNext_m93D5DE605E9F70F028473395BC965B14A3C0839C (U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_005a;
				}
			}

IL_0014:
			{
				goto IL_007d;
			}

IL_0016:
			{
				// await Task.Delay(10000, m_Source.Token);
				TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * L_4 = V_1;
				NullCheck(L_4);
				CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = L_4->get_m_Source_0();
				NullCheck(L_5);
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6;
				L_6 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_5, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
				L_7 = Task_Delay_m01422B426A3552A849600713628D01F3AF36E1C0(((int32_t)10000), L_6, /*hidden argument*/NULL);
				NullCheck(L_7);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
				L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_9)
				{
					goto IL_0076;
				}
			}

IL_003a:
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->set_U3CU3E1__state_0(L_10);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_3;
				__this->set_U3CU3Eu__1_3(L_11);
				AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE_m04C79CD8AF6C3A0069A16185B03C3EDE1DBFC10F_RuntimeMethod_var);
				goto IL_00ce;
			}

IL_005a:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_3();
				V_3 = L_13;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
			}

IL_0076:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_007d:
			{
				// while (!m_Source.Token.IsCancellationRequested)
				TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * L_16 = V_1;
				NullCheck(L_16);
				CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_17 = L_16->get_m_Source_0();
				NullCheck(L_17);
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_18;
				L_18 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_17, /*hidden argument*/NULL);
				V_4 = L_18;
				bool L_19;
				L_19 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_4), /*hidden argument*/NULL);
				if (!L_19)
				{
					goto IL_0016;
				}
			}

IL_0093:
			{
				// }
				goto IL_0098;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCanceledException_t8C4641920752790DEE40C9F907D7E10F90DE072B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0095;
			}
			throw e;
		}

CATCH_0095:
		{ // begin catch(System.Threading.Tasks.TaskCanceledException)
			// catch (TaskCanceledException)
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0098;
		} // end catch (depth: 2)

IL_0098:
		{
			// return Result;
			TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * L_20 = V_1;
			NullCheck(L_20);
			RuntimeObject * L_21;
			L_21 = TaskPauser_get_Result_m208A33E7B79C9AD122AA39B76B1ED9848882668C_inline(L_20, /*hidden argument*/NULL);
			V_2 = L_21;
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a1;
		}
		throw e;
	}

CATCH_00a1:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_22, L_23, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ce;
	} // end catch (depth: 1)

IL_00ba:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject * L_25 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_24, L_25, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_RuntimeMethod_var);
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPauseUntilResumedU3Ed__5_MoveNext_m93D5DE605E9F70F028473395BC965B14A3C0839C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * _thisAdjusted = reinterpret_cast<U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE *>(__this + _offset);
	U3CPauseUntilResumedU3Ed__5_MoveNext_m93D5DE605E9F70F028473395BC965B14A3C0839C(_thisAdjusted, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.TaskPauser/<PauseUntilResumed>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseUntilResumedU3Ed__5_SetStateMachine_m33E96555038CD95068EFAE7A75351E80E57CC5CC (U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D((AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPauseUntilResumedU3Ed__5_SetStateMachine_m33E96555038CD95068EFAE7A75351E80E57CC5CC_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE * _thisAdjusted = reinterpret_cast<U3CPauseUntilResumedU3Ed__5_t9CC27FB93EBDFB784E698E9594520B75A09393CE *>(__this + _offset);
	U3CPauseUntilResumedU3Ed__5_SetStateMachine_m33E96555038CD95068EFAE7A75351E80E57CC5CC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InternalAPI__ctor_m805CEF69F0446B37A275DFF7353A9F1FA5C92AE9_inline (InternalAPI_t0A9CA189D5F62B75E8C777D1FA17B0F9D91138A4 * __this, ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * ___self0, const RuntimeMethod* method)
{
	{
		// public InternalAPI(ROSConnection self) { m_Self = self; }
		ROSConnection_t0F6C8DD0F4C01906238108C3232E41895F48E646 * L_0 = ___self0;
		__this->set_m_Self_0(L_0);
		// public InternalAPI(ROSConnection self) { m_Self = self; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * TFStream_get_Parent_m80692B0358674CF8E822FE71AF50AAD08EA1E593_inline (TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * __this, const RuntimeMethod* method)
{
	{
		// public TFStream Parent { get; private set; }
		TFStream_t2F1281809B6818A4659553E28D01F6D01B00F4DE * L_0 = __this->get_U3CParentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * TaskPauser_get_Result_m208A33E7B79C9AD122AA39B76B1ED9848882668C_inline (TaskPauser_tD06B0D76366B639CDFE4E575DCBE2FE5A71C8A15 * __this, const RuntimeMethod* method)
{
	{
		// public object Result { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
