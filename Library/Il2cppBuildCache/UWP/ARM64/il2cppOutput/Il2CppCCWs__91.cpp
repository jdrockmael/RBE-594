﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct Dictionary_2_tC52CF8E0B6B02C46BE4D964655C8CBA6D912261D;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_tAE310F3B56E5D9DE3F7087A58ABE9DDF2313760D;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct Dictionary_2_t3B50E1A2BF138242FA769CB75227E103D2228E53;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct Dictionary_2_t5314BF1AA5AE5CE3F12D361ADBB786604ACE461A;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct Dictionary_2_t84F10A8BBA436514F6F5006CD9164F0BBD331476;
// System.Collections.Generic.Dictionary`2<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct Dictionary_2_t4E870B686DD849612FE4EC9C8170EA18B500D353;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct Dictionary_2_t598FF2E7E1A321131E33912C6B459925991D34C6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>>
struct Func_2_t406BEB06738029AF9AE3A2F78C457FED103EEAC4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>>
struct Func_2_t26FEE485140D41D4DB0DA77509A5F6387AB31E72;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>>
struct Func_2_tAE24E05662032BC3A5E88592A5A816C9C119EC8C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>>
struct Func_2_t1555CA8B87211BDCB61F1575A5CEBA55A6360B2A;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>>
struct Func_2_t8FB1107E3BC93D9E321215CC2310E5D66EB4FC67;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>>
struct Func_2_tA7772F6903AD5391F921CA28611D783B195C30B9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_tA8B7C187BE1C5FB6EF13EDA3EC2A53130D0B2A39;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>>
struct Func_2_tF286D774267F59E62567860634B8A77BC8874620;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>>
struct Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>>
struct Func_2_t469438496B7B2A3E1E7311FC954173232B8B6808;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>>
struct Func_2_t76422D77103E60DD38F6FA05283DC2F40A939A1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>>
struct Func_2_tD0CAAF856D9324B733B7180914BC67C57FBC6A7A;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>>
struct Func_2_t438C0563910EB84857E9F0F552F8C6ED47D146DA;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>>
struct Func_2_tBDDEA5EF987EDCF60D37C17024379B34C52AD694;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>>
struct Func_2_t1A00A9978730BDBD01B3F06E6EFEF877F9332016;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>>
struct Func_2_t5AF058E2DF49D40C6E8B346EAFE293567E416642;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ICollection_1_t019371CD529B39E040398DDC28E7A0DE65C845E2;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ICollection_1_tAC39637F69FC47261177A4D5C506F993843940E4;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ICollection_1_t20F520EB73D803D38E997AEAB23CCB22C6DC0635;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ICollection_1_t3AB620495F6A9AA52C26D8D9DC2C32A7953ADB49;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ICollection_1_tE60A4CCE8CA24DF80A1BCAEC9ECBEDC736D22014;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ICollection_1_tDE7CEDB04CDA493645027640B1382297DA63A35F;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct TaskFactory_1_t643BDDB7CBA675F5307FA155D5C0B88D9B4FD50E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct TaskFactory_1_t22B01319D985C6BA11208A3A84A8B514D3F16FD8;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct TaskFactory_1_t68928A8978AF74FEE8B0EC9D7C954ADF5F26F60A;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct TaskFactory_1_tD82D99A9D8431A2C3EC4478A738AB30DBF0F77A4;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct TaskFactory_1_t040ED5904196987E9EB81A1D6A40C089545AC4C0;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct TaskFactory_1_tB6A221F3A1CCFA1AC3267793C0F05FA70FF410DA;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_t7106B42B68669D429285E8C08E8D2CE39CB0E137;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct TaskFactory_1_t045E116014B4E4818AC67499DD2AEDAFEEC56893;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>
struct TaskFactory_1_t74AA6FCB270A55CF666A01F94286B8192D2B0DD8;
// System.Threading.Tasks.TaskFactory`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct TaskFactory_1_tCEB40A7561F0FCEC9A4647FE0C4C2869A74BF0E4;
// System.Threading.Tasks.TaskFactory`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct TaskFactory_1_t3DB7980970F8FD3F8DF7FFCF157BA3DC81D4142C;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.StorageFile>
struct TaskFactory_1_tA90534755C8CDA3A7195C0710D985E533F5F303E;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct TaskFactory_1_tFBFF61B41D0FA9CF1D35153161AF606A0647E187;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct TaskFactory_1_t8448C848B84740D7B42CDDCCC3F04A63401DB53B;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct TaskFactory_1_t539731E6CBAEFFD4FCEE12EC0229A3728E9A39B2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
// Windows.UI.ViewManagement.IInputPaneStatics
struct IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
// Windows.UI.ViewManagement.IInputPaneStatics2
struct IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
// Windows.UI.ViewManagement.InputPane
struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393;
// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces
struct NetworkInterfaces_tF4D3FB5B406CD3E2EE78C979F506AD57F9551E49;
// Microsoft.Azure.ObjectAnchors.ObjectModel
struct ObjectModel_tACB9099A860E1CAFD69DFE2068BE3CB5EC41AB41;
// Microsoft.MixedReality.OpenXR.OpenXRAnchorStore
struct OpenXRAnchorStore_t3676E1002BC511CB31C6B848F35A6AA6575DBFA5;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo
struct PowerStateInfo_tA7006CA5155E68EEBFD6713E042D914D281CAB81;
// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF;
// Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement
struct SpatialGraphPlacement_t161B4A290BAD4A5363CBB62CEE50B56C676E488F;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5;
// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.OpenXR.XRAnchorStore
struct XRAnchorStore_t14CD658C47775CDCC15670A1FD6D893142E548B1;
// Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch
struct XRAnchorTransferBatch_t886301B9EF92CE8E3704C1B96C60E3B9432AE2B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m426C8315649988663BD80D29278BC8164654F421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB;
struct IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;
struct IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3;
struct ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38;
struct ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C;
struct ISpatialInteractionSourceState_t4A049FFC25A0197F3EF96AD7E1DC41AAECEC7F4B;
struct ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper;
struct ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper;
struct ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper;
struct IVectorView_1_tA97462F62CBEA00B0F24DE0A0D0BA84CE055757E;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_mF44A888E1693B303FFDA2F2DC2704F3E7D69AD3E(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_m723C515568AA6438001613A9565BAE1DFD015B29() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics
struct NOVTABLE IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics_GetForCurrentView_m5500BD1234D43F7C72BC241C2127E8BBCA13804F(IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D** comReturnValue) = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics2
struct NOVTABLE IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics2_U24__Stripped0_GetForUIContext_m1B5571474793F35902100BFEE93598E6DF083C11() = 0;
};
// Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs
struct NOVTABLE IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped0_get_OccludedRect_m7CD774E35B5DD3D2FB32911ADAB698960AA83781() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped1_put_EnsuredFocusedElementInView_mFD8718E6C8353305D6998F141FB0AA712FE2861C() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped2_get_EnsuredFocusedElementInView_m2754533A9587DBD3AF66C4B71432CC71C1B3F207() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3412258991A14AC020F84B6E14E93B0957E94B5B(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
struct NOVTABLE ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceEventArgs_get_State_m5ED0FA656FE0F73A8AB2B8139412A86D03AA6105(ISpatialInteractionSourceState_t4A049FFC25A0197F3EF96AD7E1DC41AAECEC7F4B** comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tC52CF8E0B6B02C46BE4D964655C8CBA6D912261D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A, ___dictionary_0)); }
	inline Dictionary_2_tC52CF8E0B6B02C46BE4D964655C8CBA6D912261D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC52CF8E0B6B02C46BE4D964655C8CBA6D912261D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC52CF8E0B6B02C46BE4D964655C8CBA6D912261D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tAE310F3B56E5D9DE3F7087A58ABE9DDF2313760D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D, ___dictionary_0)); }
	inline Dictionary_2_tAE310F3B56E5D9DE3F7087A58ABE9DDF2313760D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAE310F3B56E5D9DE3F7087A58ABE9DDF2313760D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAE310F3B56E5D9DE3F7087A58ABE9DDF2313760D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t3B50E1A2BF138242FA769CB75227E103D2228E53 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996, ___dictionary_0)); }
	inline Dictionary_2_t3B50E1A2BF138242FA769CB75227E103D2228E53 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3B50E1A2BF138242FA769CB75227E103D2228E53 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3B50E1A2BF138242FA769CB75227E103D2228E53 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t5314BF1AA5AE5CE3F12D361ADBB786604ACE461A * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024, ___dictionary_0)); }
	inline Dictionary_2_t5314BF1AA5AE5CE3F12D361ADBB786604ACE461A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5314BF1AA5AE5CE3F12D361ADBB786604ACE461A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5314BF1AA5AE5CE3F12D361ADBB786604ACE461A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t84F10A8BBA436514F6F5006CD9164F0BBD331476 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F, ___dictionary_0)); }
	inline Dictionary_2_t84F10A8BBA436514F6F5006CD9164F0BBD331476 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t84F10A8BBA436514F6F5006CD9164F0BBD331476 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t84F10A8BBA436514F6F5006CD9164F0BBD331476 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t4E870B686DD849612FE4EC9C8170EA18B500D353 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91, ___dictionary_0)); }
	inline Dictionary_2_t4E870B686DD849612FE4EC9C8170EA18B500D353 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4E870B686DD849612FE4EC9C8170EA18B500D353 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4E870B686DD849612FE4EC9C8170EA18B500D353 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t598FF2E7E1A321131E33912C6B459925991D34C6 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8, ___dictionary_0)); }
	inline Dictionary_2_t598FF2E7E1A321131E33912C6B459925991D34C6 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t598FF2E7E1A321131E33912C6B459925991D34C6 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t598FF2E7E1A321131E33912C6B459925991D34C6 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
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

// System.__Il2CppComObject


// Windows.Media.Capture.AppCapture
struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE  : public Il2CppComObject
{
public:

public:
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Windows.UI.ViewManagement.InputPane
struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6  : public Il2CppComObject
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Func`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyAction
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___responseBodyAction_2;
	// System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData_4;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction_5;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyAction_2() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___responseBodyAction_2)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_responseBodyAction_2() const { return ___responseBodyAction_2; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_responseBodyAction_2() { return &___responseBodyAction_2; }
	inline void set_responseBodyAction_2(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___responseBodyAction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyAction_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyTask_3() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___responseBodyTask_3)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_responseBodyTask_3() const { return ___responseBodyTask_3; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_responseBodyTask_3() { return &___responseBodyTask_3; }
	inline void set_responseBodyTask_3(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___responseBodyTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyTask_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_4() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___responseData_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_responseData_4() const { return ___responseData_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_responseData_4() { return &___responseData_4; }
	inline void set_responseData_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___responseData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_4), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_5() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___responseDataAction_5)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_responseDataAction_5() const { return ___responseDataAction_5; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_responseDataAction_5() { return &___responseDataAction_5; }
	inline void set_responseDataAction_5(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___responseDataAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6, ___U3CResponseCodeU3Ek__BackingField_6)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_6() const { return ___U3CResponseCodeU3Ek__BackingField_6; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_6() { return &___U3CResponseCodeU3Ek__BackingField_6; }
	inline void set_U3CResponseCodeU3Ek__BackingField_6(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	Il2CppSafeArray/*NONE*/* ___responseData_4;
	Il2CppMethodPointer ___responseDataAction_5;
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	Il2CppSafeArray/*NONE*/* ___responseData_4;
	Il2CppMethodPointer ___responseDataAction_5;
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;
};

// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF  : public Il2CppComObject
{
public:

public:
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


// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
// Windows.Media.Capture.IAppCapture
struct NOVTABLE IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCapture_U24__Stripped0_get_IsCapturingAudio_m6952A4034B33D8F86B8D9EFC610D140F533A1034() = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_get_IsCapturingVideo_m8A2DEB0271B2A0F981935A2DE01AD743904C8939(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_add_CapturingChanged_m8BEFBF91719D9AF7DF0605B870F79F93CE505236(ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_remove_CapturingChanged_m0D77136224ED8830A0DAA0A40801BED47958A0BB(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
};
// Windows.UI.ViewManagement.IInputPane
struct NOVTABLE IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Showing_m63318852D9001BFBD8FAC4CD878943CE3805C450(ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Showing_m67C107FA7BA12DF2E688FF1B8E415FCE44F51244(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Hiding_m3F603DC6080B345004D54A8033533BDF7B09A877(ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Hiding_m0FEDF393B18A2A62C007D0DD9CCFD4FBFD10C05C(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_U24__Stripped0_get_OccludedRect_m663B49801594DC7F25DFECB2B5B8075B5212A27C() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_m1DC2560BF604D75E303C0EDAE492B4C61DAB4BC3() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_mCEC867DECC89F6E55B4052DF38B073E4771488D8() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_mB6810ECC8C70AB94C53F86A19A6F9B198BC3B141() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_mAB4D7D174203FF67A2E33DCC3C7D343D06A87808() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_m66E1FE3FCDFF49CDFD7BE8981631AA139CE7C322() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m8F2821269BFCC927E3C8B74C7B0A17300EEF03BE() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_add_SourcePressed_mDB5812DDF6D01F061ECFBBD376BBC2AC7FAFB4CD(ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_remove_SourcePressed_mC16C022DC0ED0E9AA6BCF2147EB96E3552C99235(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourceReleased_m3F9004353C223D2B726C9D04AFA3D2EEF56A8F74() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourceReleased_m8C85CDBF66E3DE9BCC80CEFA0CD73E6328219AE0() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_InteractionDetected_m03BB3D6AB8255A5BD4E4D8A3271D0E54594E83CB() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_InteractionDetected_mF0DB304A2446EE99C75DD8A49CAC739B58B56B49() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m348D1FA8B729320BA8608DB8F757799AB3D02598(IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3* ___timeStamp0, IVectorView_1_tA97462F62CBEA00B0F24DE0A0D0BA84CE055757E** comReturnValue) = 0;
};

// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus
struct ObjectDiagnosticsUploadStatus_t869DA232E18494E3ECFFD7487AFF88C7F0EC0E75 
{
public:
	// System.Int32 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectDiagnosticsUploadStatus_t869DA232E18494E3ECFFD7487AFF88C7F0EC0E75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus
struct ObjectObserverAccessStatus_t4C67320E00F1DB6B8BD0C5BC24D8FFDE45275945 
{
public:
	// System.Int32 Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectObserverAccessStatus_t4C67320E00F1DB6B8BD0C5BC24D8FFDE45275945, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.SerializationCompletionReason
struct SerializationCompletionReason_t7A84376AF424F08899E3A920660C8E4741ED7FDC 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t7A84376AF424F08899E3A920660C8E4741ED7FDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.Spatial.SpatialPerceptionAccessStatus
struct SpatialPerceptionAccessStatus_tFD8F2DF221CDFFFC6976ECC07D68A49DCFCC1224 
{
public:
	// System.Int32 Windows.Perception.Spatial.SpatialPerceptionAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialPerceptionAccessStatus_tFD8F2DF221CDFFFC6976ECC07D68A49DCFCC1224, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus
struct AppInstallStatus_tCB4D1DB5F651B19E8AFDC85E7066A62696ACE3AB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppInstallStatus_tCB4D1DB5F651B19E8AFDC85E7066A62696ACE3AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct NativeArray_1_t901047647D1B0577009EA387273335B841552234 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t901047647D1B0577009EA387273335B841552234, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	NetworkInterfaces_tF4D3FB5B406CD3E2EE78C979F506AD57F9551E49 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1, ___m_result_40)); }
	inline NetworkInterfaces_tF4D3FB5B406CD3E2EE78C979F506AD57F9551E49 * get_m_result_40() const { return ___m_result_40; }
	inline NetworkInterfaces_tF4D3FB5B406CD3E2EE78C979F506AD57F9551E49 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(NetworkInterfaces_tF4D3FB5B406CD3E2EE78C979F506AD57F9551E49 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ObjectModel_tACB9099A860E1CAFD69DFE2068BE3CB5EC41AB41 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5, ___m_result_40)); }
	inline ObjectModel_tACB9099A860E1CAFD69DFE2068BE3CB5EC41AB41 * get_m_result_40() const { return ___m_result_40; }
	inline ObjectModel_tACB9099A860E1CAFD69DFE2068BE3CB5EC41AB41 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ObjectModel_tACB9099A860E1CAFD69DFE2068BE3CB5EC41AB41 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_t04127B84542029B39A877264880A172282EC2A82  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	OpenXRAnchorStore_t3676E1002BC511CB31C6B848F35A6AA6575DBFA5 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t04127B84542029B39A877264880A172282EC2A82, ___m_result_40)); }
	inline OpenXRAnchorStore_t3676E1002BC511CB31C6B848F35A6AA6575DBFA5 * get_m_result_40() const { return ___m_result_40; }
	inline OpenXRAnchorStore_t3676E1002BC511CB31C6B848F35A6AA6575DBFA5 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(OpenXRAnchorStore_t3676E1002BC511CB31C6B848F35A6AA6575DBFA5 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	PowerStateInfo_tA7006CA5155E68EEBFD6713E042D914D281CAB81 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD, ___m_result_40)); }
	inline PowerStateInfo_tA7006CA5155E68EEBFD6713E042D914D281CAB81 * get_m_result_40() const { return ___m_result_40; }
	inline PowerStateInfo_tA7006CA5155E68EEBFD6713E042D914D281CAB81 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(PowerStateInfo_tA7006CA5155E68EEBFD6713E042D914D281CAB81 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861, ___m_result_40)); }
	inline Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6  get_m_result_40() const { return ___m_result_40; }
	inline Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t690A3E7E99978DFA57C4BC1EA7970FECF2D620B6  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyTask_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseData_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseDataAction_5), (void*)NULL);
		#endif
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA, ___m_result_40)); }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * get_m_result_40() const { return ___m_result_40; }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>
struct Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SpatialGraphPlacement_t161B4A290BAD4A5363CBB62CEE50B56C676E488F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07, ___m_result_40)); }
	inline SpatialGraphPlacement_t161B4A290BAD4A5363CBB62CEE50B56C676E488F * get_m_result_40() const { return ___m_result_40; }
	inline SpatialGraphPlacement_t161B4A290BAD4A5363CBB62CEE50B56C676E488F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SpatialGraphPlacement_t161B4A290BAD4A5363CBB62CEE50B56C676E488F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B, ___m_result_40)); }
	inline SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * get_m_result_40() const { return ___m_result_40; }
	inline SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46, ___m_result_40)); }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * get_m_result_40() const { return ___m_result_40; }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602, ___m_result_40)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_result_40() const { return ___m_result_40; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_40)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_40() const { return ___m_result_40; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000, ___m_result_40)); }
	inline uint32_t get_m_result_40() const { return ___m_result_40; }
	inline uint32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(uint32_t value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_40)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_40() const { return ___m_result_40; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_40 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_tC2683759D92B359113DB7631095400D5285C4998  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorStore_t14CD658C47775CDCC15670A1FD6D893142E548B1 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC2683759D92B359113DB7631095400D5285C4998, ___m_result_40)); }
	inline XRAnchorStore_t14CD658C47775CDCC15670A1FD6D893142E548B1 * get_m_result_40() const { return ___m_result_40; }
	inline XRAnchorStore_t14CD658C47775CDCC15670A1FD6D893142E548B1 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(XRAnchorStore_t14CD658C47775CDCC15670A1FD6D893142E548B1 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorTransferBatch_t886301B9EF92CE8E3704C1B96C60E3B9432AE2B8 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18, ___m_result_40)); }
	inline XRAnchorTransferBatch_t886301B9EF92CE8E3704C1B96C60E3B9432AE2B8 * get_m_result_40() const { return ___m_result_40; }
	inline XRAnchorTransferBatch_t886301B9EF92CE8E3704C1B96C60E3B9432AE2B8 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(XRAnchorTransferBatch_t886301B9EF92CE8E3704C1B96C60E3B9432AE2B8 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct NOVTABLE ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics2_IsSourceKindSupported_mB329D0CA72CC404B2BCBAE8624A9CF69581DA243(int32_t ___kind0, bool* comReturnValue) = 0;
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

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Added_1)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Updated_2)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t901047647D1B0577009EA387273335B841552234  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Added_1)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Updated_2)); }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t901047647D1B0577009EA387273335B841552234 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t901047647D1B0577009EA387273335B841552234  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Added_1)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Updated_2)); }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t176B5BDE49F181D4851D8B2230677A558EFC5E55  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Added_1)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Updated_2)); }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t6C80982A5077ED9524455B5005D72276BA2ECB62  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Added_1)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Updated_2)); }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t20D7C7F2BCDC04B6238E113A2CA21BBDD326A535  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Added_1)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Updated_2)); }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t535D1A4490F010FAA0D1D1732065C9F9078ED3CA  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Added_1)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Updated_2)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Added_1)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Updated_2)); }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t0D3C1B52116423B690835F4DDBD9DEC97545DB43  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Added_1)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Updated_2)); }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tFB9CDB932CB697229DBAB814E66E25DEF44F827F  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Added_1)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Updated_2)); }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t91984250D9080A7D07E6D31D2FFD73DBBAA4B9C3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D* ___sender0, IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38* ___sender0, ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C* ___args1) = 0;
};


// System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_43;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_44;

public:
	inline static int32_t get_offset_of__state_43() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962, ____state_43)); }
	inline uint8_t get__state_43() const { return ____state_43; }
	inline uint8_t* get_address_of__state_43() { return &____state_43; }
	inline void set__state_43(uint8_t value)
	{
		____state_43 = value;
	}

	inline static int32_t get_offset_of__lookForOce_44() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962, ____lookForOce_44)); }
	inline bool get__lookForOce_44() const { return ____lookForOce_44; }
	inline bool* get_address_of__lookForOce_44() { return &____lookForOce_44; }
	inline void set__lookForOce_44(bool value)
	{
		____lookForOce_44 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5  : public Il2CppComObject
{
public:

public:
};


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>


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


// System.ValueType


// System.ValueType


// System.__Il2CppComObject


// System.__Il2CppComObject


// Windows.Media.Capture.AppCapture

struct AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* get_____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE()
	{
		IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE* returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t964E312FD83075882E7CE222F44D05274CDCFCAE;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* get_____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B()
	{
		IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B* returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_tAEDB83108527739B2DAB1397724238455940EE2B;
			}
		}
		return returnValue;
	}
};


// Windows.Media.Capture.AppCapture


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


// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken


// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken


// Windows.UI.ViewManagement.InputPane

struct InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics
	IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics2
	IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.InputPane"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* get_____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658()
	{
		IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658* returnValue = ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics_tF07CAB02A42CD9CA892BFE42F9AE9FB9D0A54658;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* get_____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558()
	{
		IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558* returnValue = ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics2_t2C7EC62CFDA4BAC43A693D65F396A1BFE7A60558;
			}
		}
		return returnValue;
	}
};


// Windows.UI.ViewManagement.InputPane


// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs


// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs


// System.Int32


// System.Int32


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


// Microsoft.MixedReality.Toolkit.Utilities.Response


// Microsoft.MixedReality.Toolkit.Utilities.Response


// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs


// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs


// System.Void


// System.Void


// System.Threading.Tasks.VoidTaskResult


// System.Threading.Tasks.VoidTaskResult


// Unity.Collections.Allocator


// Unity.Collections.Allocator


// System.Delegate


// System.Delegate


// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus


// Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus


// Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus


// Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus


// Microsoft.MixedReality.OpenXR.SerializationCompletionReason


// Microsoft.MixedReality.OpenXR.SerializationCompletionReason


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind


// Windows.Perception.Spatial.SpatialPerceptionAccessStatus


// Windows.Perception.Spatial.SpatialPerceptionAccessStatus


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


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>

struct Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t643BDDB7CBA675F5307FA155D5C0B88D9B4FD50E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t406BEB06738029AF9AE3A2F78C457FED103EEAC4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t643BDDB7CBA675F5307FA155D5C0B88D9B4FD50E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t643BDDB7CBA675F5307FA155D5C0B88D9B4FD50E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t643BDDB7CBA675F5307FA155D5C0B88D9B4FD50E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t406BEB06738029AF9AE3A2F78C457FED103EEAC4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t406BEB06738029AF9AE3A2F78C457FED103EEAC4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t406BEB06738029AF9AE3A2F78C457FED103EEAC4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>


// System.Threading.Tasks.Task`1<System.Object>

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>

struct Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t22B01319D985C6BA11208A3A84A8B514D3F16FD8 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t26FEE485140D41D4DB0DA77509A5F6387AB31E72 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t22B01319D985C6BA11208A3A84A8B514D3F16FD8 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t22B01319D985C6BA11208A3A84A8B514D3F16FD8 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t22B01319D985C6BA11208A3A84A8B514D3F16FD8 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t26FEE485140D41D4DB0DA77509A5F6387AB31E72 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t26FEE485140D41D4DB0DA77509A5F6387AB31E72 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t26FEE485140D41D4DB0DA77509A5F6387AB31E72 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>

struct Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t68928A8978AF74FEE8B0EC9D7C954ADF5F26F60A * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tAE24E05662032BC3A5E88592A5A816C9C119EC8C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t68928A8978AF74FEE8B0EC9D7C954ADF5F26F60A * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t68928A8978AF74FEE8B0EC9D7C954ADF5F26F60A ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t68928A8978AF74FEE8B0EC9D7C954ADF5F26F60A * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tAE24E05662032BC3A5E88592A5A816C9C119EC8C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tAE24E05662032BC3A5E88592A5A816C9C119EC8C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tAE24E05662032BC3A5E88592A5A816C9C119EC8C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>

struct Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD82D99A9D8431A2C3EC4478A738AB30DBF0F77A4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1555CA8B87211BDCB61F1575A5CEBA55A6360B2A * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tD82D99A9D8431A2C3EC4478A738AB30DBF0F77A4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tD82D99A9D8431A2C3EC4478A738AB30DBF0F77A4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tD82D99A9D8431A2C3EC4478A738AB30DBF0F77A4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1555CA8B87211BDCB61F1575A5CEBA55A6360B2A * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1555CA8B87211BDCB61F1575A5CEBA55A6360B2A ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1555CA8B87211BDCB61F1575A5CEBA55A6360B2A * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>

struct Task_1_t04127B84542029B39A877264880A172282EC2A82_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t040ED5904196987E9EB81A1D6A40C089545AC4C0 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8FB1107E3BC93D9E321215CC2310E5D66EB4FC67 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t04127B84542029B39A877264880A172282EC2A82_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t040ED5904196987E9EB81A1D6A40C089545AC4C0 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t040ED5904196987E9EB81A1D6A40C089545AC4C0 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t040ED5904196987E9EB81A1D6A40C089545AC4C0 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t04127B84542029B39A877264880A172282EC2A82_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8FB1107E3BC93D9E321215CC2310E5D66EB4FC67 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8FB1107E3BC93D9E321215CC2310E5D66EB4FC67 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8FB1107E3BC93D9E321215CC2310E5D66EB4FC67 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>

struct Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB6A221F3A1CCFA1AC3267793C0F05FA70FF410DA * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA7772F6903AD5391F921CA28611D783B195C30B9 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB6A221F3A1CCFA1AC3267793C0F05FA70FF410DA * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB6A221F3A1CCFA1AC3267793C0F05FA70FF410DA ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB6A221F3A1CCFA1AC3267793C0F05FA70FF410DA * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tA7772F6903AD5391F921CA28611D783B195C30B9 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tA7772F6903AD5391F921CA28611D783B195C30B9 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tA7772F6903AD5391F921CA28611D783B195C30B9 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>

struct Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7106B42B68669D429285E8C08E8D2CE39CB0E137 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA8B7C187BE1C5FB6EF13EDA3EC2A53130D0B2A39 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t7106B42B68669D429285E8C08E8D2CE39CB0E137 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t7106B42B68669D429285E8C08E8D2CE39CB0E137 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t7106B42B68669D429285E8C08E8D2CE39CB0E137 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tA8B7C187BE1C5FB6EF13EDA3EC2A53130D0B2A39 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tA8B7C187BE1C5FB6EF13EDA3EC2A53130D0B2A39 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tA8B7C187BE1C5FB6EF13EDA3EC2A53130D0B2A39 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>

struct Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t045E116014B4E4818AC67499DD2AEDAFEEC56893 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF286D774267F59E62567860634B8A77BC8874620 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t045E116014B4E4818AC67499DD2AEDAFEEC56893 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t045E116014B4E4818AC67499DD2AEDAFEEC56893 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t045E116014B4E4818AC67499DD2AEDAFEEC56893 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF286D774267F59E62567860634B8A77BC8874620 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF286D774267F59E62567860634B8A77BC8874620 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF286D774267F59E62567860634B8A77BC8874620 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>

struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>

struct Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t74AA6FCB270A55CF666A01F94286B8192D2B0DD8 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t469438496B7B2A3E1E7311FC954173232B8B6808 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t74AA6FCB270A55CF666A01F94286B8192D2B0DD8 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t74AA6FCB270A55CF666A01F94286B8192D2B0DD8 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t74AA6FCB270A55CF666A01F94286B8192D2B0DD8 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t469438496B7B2A3E1E7311FC954173232B8B6808 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t469438496B7B2A3E1E7311FC954173232B8B6808 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t469438496B7B2A3E1E7311FC954173232B8B6808 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>


// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>

struct Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCEB40A7561F0FCEC9A4647FE0C4C2869A74BF0E4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t76422D77103E60DD38F6FA05283DC2F40A939A1F * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCEB40A7561F0FCEC9A4647FE0C4C2869A74BF0E4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCEB40A7561F0FCEC9A4647FE0C4C2869A74BF0E4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCEB40A7561F0FCEC9A4647FE0C4C2869A74BF0E4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t76422D77103E60DD38F6FA05283DC2F40A939A1F * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t76422D77103E60DD38F6FA05283DC2F40A939A1F ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t76422D77103E60DD38F6FA05283DC2F40A939A1F * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>


// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>

struct Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3DB7980970F8FD3F8DF7FFCF157BA3DC81D4142C * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD0CAAF856D9324B733B7180914BC67C57FBC6A7A * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3DB7980970F8FD3F8DF7FFCF157BA3DC81D4142C * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3DB7980970F8FD3F8DF7FFCF157BA3DC81D4142C ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3DB7980970F8FD3F8DF7FFCF157BA3DC81D4142C * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD0CAAF856D9324B733B7180914BC67C57FBC6A7A * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD0CAAF856D9324B733B7180914BC67C57FBC6A7A ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD0CAAF856D9324B733B7180914BC67C57FBC6A7A * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>


// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>

struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tA90534755C8CDA3A7195C0710D985E533F5F303E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t438C0563910EB84857E9F0F552F8C6ED47D146DA * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tA90534755C8CDA3A7195C0710D985E533F5F303E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tA90534755C8CDA3A7195C0710D985E533F5F303E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tA90534755C8CDA3A7195C0710D985E533F5F303E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t438C0563910EB84857E9F0F552F8C6ED47D146DA * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t438C0563910EB84857E9F0F552F8C6ED47D146DA ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t438C0563910EB84857E9F0F552F8C6ED47D146DA * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>


// System.Threading.Tasks.Task`1<System.IO.Stream>

struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.IO.Stream>


// System.Threading.Tasks.Task`1<System.String>

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>


// System.Threading.Tasks.Task`1<System.UInt32>

struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.UInt32>


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>

struct Task_1_tC2683759D92B359113DB7631095400D5285C4998_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFBFF61B41D0FA9CF1D35153161AF606A0647E187 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tBDDEA5EF987EDCF60D37C17024379B34C52AD694 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC2683759D92B359113DB7631095400D5285C4998_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFBFF61B41D0FA9CF1D35153161AF606A0647E187 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFBFF61B41D0FA9CF1D35153161AF606A0647E187 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFBFF61B41D0FA9CF1D35153161AF606A0647E187 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC2683759D92B359113DB7631095400D5285C4998_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tBDDEA5EF987EDCF60D37C17024379B34C52AD694 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tBDDEA5EF987EDCF60D37C17024379B34C52AD694 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tBDDEA5EF987EDCF60D37C17024379B34C52AD694 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>

struct Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t8448C848B84740D7B42CDDCCC3F04A63401DB53B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1A00A9978730BDBD01B3F06E6EFEF877F9332016 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t8448C848B84740D7B42CDDCCC3F04A63401DB53B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t8448C848B84740D7B42CDDCCC3F04A63401DB53B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t8448C848B84740D7B42CDDCCC3F04A63401DB53B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1A00A9978730BDBD01B3F06E6EFEF877F9332016 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1A00A9978730BDBD01B3F06E6EFEF877F9332016 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1A00A9978730BDBD01B3F06E6EFEF877F9332016 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>

struct Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t539731E6CBAEFFD4FCEE12EC0229A3728E9A39B2 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5AF058E2DF49D40C6E8B346EAFE293567E416642 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t539731E6CBAEFFD4FCEE12EC0229A3728E9A39B2 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t539731E6CBAEFFD4FCEE12EC0229A3728E9A39B2 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t539731E6CBAEFFD4FCEE12EC0229A3728E9A39B2 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5AF058E2DF49D40C6E8B346EAFE293567E416642 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5AF058E2DF49D40C6E8B346EAFE293567E416642 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5AF058E2DF49D40C6E8B346EAFE293567E416642 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>


// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>


// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>


// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>


// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>


// System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>


// System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>


// Windows.UI.Input.Spatial.SpatialInteractionManager

struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
	ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* get_____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E()
	{
		ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* get_____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836()
	{
		ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
			}
		}
		return returnValue;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionManager

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);

// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method);

// System.Void Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * __this, AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *, AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE *, RuntimeObject *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB (TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1 * __this, InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393 * ___sender0, InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6 * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1 *, InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393 *, InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6 *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67 (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m426C8315649988663BD80D29278BC8164654F421 (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * __this, SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___sender0, SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *, SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 *, SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tAB7BDFA9D9AE45325B35EF655509E6CF52B4F4E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus>
struct Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC9C6C5EDEAF667579B77C30E688B0381528D46F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel>
struct Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t30FC1AF60198796E227974BDF5BAC25E02685BB5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus>
struct Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t453118772AA7A82992C7CEB2EDDEF3158A708FDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t04127B84542029B39A877264880A172282EC2A82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t04127B84542029B39A877264880A172282EC2A82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEEDB250EC14D3B3228C50303CF06339ABFD165AD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA9ACB9C9E8233E267574A32B1BFD852D7D676861_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t6D13D1BC0646395E44327F3F4A0CD711CE6652A3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement>
struct Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t02FC10DFE48CF81AE155F9D9CCFC02ECACB37B07_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t90CFF4E54DFAD2F04B28AA36D85B1C26654179A4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC2683759D92B359113DB7631095400D5285C4998(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC2683759D92B359113DB7631095400D5285C4998_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t48F886FF917035D6A4AD5841522CAD72F19CDE18_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA4294E60378DF9F26645D83D016C3C72DCA22E9D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tBC1B6352E3D11F9F7BC4E567480BDF8AE39A547F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t4155663F6D60090D5E988A2EB1E4A782792ADA63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t4BEBDDB9C8CBFF65EC7028CE5BA562A5728C8B82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tCBDEADFC15FC0570F012431A5227C2E6B92BAC3F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t77AFD32F12A88AC162E5B41E66265CAF9D8E6435_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t4F3E80A7CED9B2D7CD7F28650988E9EE62523358_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tDE6975A36D16B9E01B5B7D815A77EDD62A3EA629_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t388C13B0BF202AE5F24D0BB3AE0D672AA355E1B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper>, ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper
{
	inline TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE>(___sender0, AppCapture_tA02953C842088AC1A99DEC62D7616519708C73AE_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IAppCapture_tD8A540FD46F976EBC31555859B3068EDA005B2A2::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 * __thisValue = (TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413 *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m9CBE857E104E5CDEE2B384C9A94337147AF403CE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t458664361397C897433CE2D1C9F7D6E22B3D6413_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper>, ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper
{
	inline TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D* ___sender0, IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393>(___sender0, InputPane_tF3B65D04E39FC6EB8DD27594586A06CF7EE2B393_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IInputPane_t487BCFEFC9CD23557BED549036A74F16EE6F8E4D::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6 * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6>(___args1, InputPaneVisibilityEventArgs_t049567B03D376F2BA4816EF9F1519EF06AAEE0D6_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IInputPaneVisibilityEventArgs_t376CBD7D8F8808CA136546D1F6829C9287C5D3AB::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1 * __thisValue = (TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1 *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m606719294C008B46778D7017B715442332EF1BFB_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_tC915EA305D2AEB512570B5262AEC81263F1818E1_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper>, ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper
{
	inline TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __thisValue = (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper>, ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper
{
	inline TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38* ___sender0, ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m426C8315649988663BD80D29278BC8164654F421_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5>(___sender0, SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF>(___args1, SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * __thisValue = (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m426C8315649988663BD80D29278BC8164654F421(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m426C8315649988663BD80D29278BC8164654F421_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t5B9EF0E5F8B0C8B4BDD40CA26708758E7019812A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t4A758E9D5D62EFE07B884457B2262E35262E94A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA2C0C3AFB63D7CB1685F471B4B3EF8AD4460160D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t968318C5C1B349DE22051308B6B2F727F79DF04F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t8FF42E707BE835C7379EF0BFC2EAE31FC64B5996_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tE347A91AF21F32FC099A6DBA4BD76CED65EE9F28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t1179110C909598FCFB282BB6CF45C89AD69B3024_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t54112B8A8A3D8B128E0120FC8E3AACE6E20D6186_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD34A90D4289D67604EA99D212DAB40CA28CF275F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC03EFCFD5024E805FC647A929FA8D93B146A57A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t00D0A8FFECDE1838D4FABDF11DBACB469C9F9F91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t51CD5520820E14147632F4AD669421EBC372BBBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t14AC5254E16AC998FA5506C133DDF318BBB1E5F8_ComCallableWrapper(obj));
}
