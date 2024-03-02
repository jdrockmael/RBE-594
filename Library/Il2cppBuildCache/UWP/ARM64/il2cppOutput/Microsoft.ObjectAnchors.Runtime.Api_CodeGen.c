#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* ObjectInstance_ChangedStaticHandler_m275A8216515A1EC9719ADED22561D835AB058F1D_RuntimeMethod_var;
extern const RuntimeMethod* ProjectedObjectCache_ProjectedObjectCleanupHandler_mFEED35D3D167257D4E1939F0C801C10A7F4D1507_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnCompleteThunk_mE6248BC04D632D905746AD2611F16D1E7B83AC88_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnErrorThunk_mAEC2B6085FA121933175902FE74B599C099E9F8A_RuntimeMethod_var;
extern const RuntimeMethod* PromiseBase_OnProgressThunk_mB86B0EEEEBFAAF9C562FE46E0F88315829E10990_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m18913DDE619E43B1EF745EC85B8AC53E2DE00944 (void);
// 0x00000002 System.Void Microsoft.Azure.ObjectAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void NativeLibraryHelpers_CheckStatus_m952F56500614B10DF6A07AD211A01C5B2159582C (void);
// 0x00000003 System.UInt64 Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertHandleToCookie(System.IntPtr)
extern void ProjectedObjectHelpers_ConvertHandleToCookie_m23B4956AB0548186BCEAC039E57F28369B50D0A6 (void);
// 0x00000004 System.IntPtr Microsoft.Azure.ObjectAnchors.ProjectedObjectHelpers::ConvertCookieToHandle(System.UInt64)
extern void ProjectedObjectHelpers_ConvertCookieToHandle_mB480AD07DAB6A8EB9583A3EA9356D43DCE7DE30F (void);
// 0x00000005 System.UInt64 Microsoft.Azure.ObjectAnchors.ICachedObject::get_Cookie()
// 0x00000006 System.Void Microsoft.Azure.ObjectAnchors.IReferenceCounted::DecreaseReferenceCount()
// 0x00000007 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::AddEventHandler(System.UInt64,System.String,T)
// 0x00000008 System.Boolean Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::RemoveEventHandler(System.UInt64,System.String,T)
// 0x00000009 T Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetEventHandler(System.UInt64,System.String)
// 0x0000000A System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::Clear(System.UInt64)
extern void ProjectedObjectEventHandlerCache_Clear_mF3BEEACA962F482F0C7D62BB2889673AAAE0F376 (void);
// 0x0000000B System.Collections.Generic.IDictionary`2<System.String,System.Delegate> Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::GetOrInitializeEvents(System.UInt64)
extern void ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mF8B9F6721C57B083A836195A773952DB9AA629A7 (void);
// 0x0000000C System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectEventHandlerCache::.cctor()
extern void ProjectedObjectEventHandlerCache__cctor_m7B7797FA0155F6CF7801E0452C83812578C09102 (void);
// 0x0000000D System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::.cctor()
extern void ProjectedObjectCache__cctor_m1DB360A8A654F47EC9003577DFCF3DF248BC8786 (void);
// 0x0000000E System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Add(Microsoft.Azure.ObjectAnchors.ICachedObject)
extern void ProjectedObjectCache_Add_m1A9EEF0EE17FA6145CBB0AAB906962044FAE9782 (void);
// 0x0000000F T Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::GetOrCreate(System.UInt64,System.Func`2<System.UInt64,T>)
// 0x00000010 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::Remove(System.UInt64)
extern void ProjectedObjectCache_Remove_m116914623ABFF06264B7E92A3EEE0FD541757C7F (void);
// 0x00000011 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCache::ProjectedObjectCleanupHandler(System.IntPtr)
extern void ProjectedObjectCache_ProjectedObjectCleanupHandler_mFEED35D3D167257D4E1939F0C801C10A7F4D1507 (void);
// 0x00000012 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative__ctor_m0F25ED12F7DBE82CAA9AF6D1CBC95CC9D079F9BC (void);
// 0x00000013 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::Invoke(System.UInt64,System.IntPtr)
extern void ObjectInstanceChangedHandlerNative_Invoke_m7323E76E93C6150A54ACB1F9430852001ACF085A (void);
// 0x00000014 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandlerNative_BeginInvoke_m7AAA0ED76D404B50506485D7EB2640CB1396EA17 (void);
// 0x00000015 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandlerNative_EndInvoke_mBBA0EFCCFAB1B7DE6446A874AF3A37C3801C952D (void);
// 0x00000016 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::.ctor(System.Object,System.IntPtr)
extern void ProjectedObjectCleanupNative__ctor_m064D2C1A6C8AC53DDFFEB8D931AA3B22F8D3090F (void);
// 0x00000017 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::Invoke(System.IntPtr)
extern void ProjectedObjectCleanupNative_Invoke_mEA651BD1C7FC47F54AFBC8D794C3E4A8EED04B54 (void);
// 0x00000018 System.IAsyncResult Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ProjectedObjectCleanupNative_BeginInvoke_m1F81EFE5AF26B5BA4236E6E8E305AAE37FCA06EB (void);
// 0x00000019 System.Void Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative::EndInvoke(System.IAsyncResult)
extern void ProjectedObjectCleanupNative_EndInvoke_m0FA6DDD47947902D80E6942992102E26C512CF46 (void);
// 0x0000001A System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCreate(Microsoft.Azure.ObjectAnchors.PromiseCreateOptions&,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle&)
extern void NativeLibrary_PromiseCreate_m301C858FFE7F2ECC99964794771D7697F3F95403 (void);
// 0x0000001B System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseCancel(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_PromiseCancel_m7DD2508E85FA88F824AE16CD33BA11CE77B85B53 (void);
// 0x0000001C System.Int32 Microsoft.Azure.ObjectAnchors.NativeLibrary::PromiseDestroy(System.IntPtr)
extern void NativeLibrary_PromiseDestroy_m77B91B4B62AABB1EA252F1413F73EBC848A003A2 (void);
// 0x0000001D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_create_guid_account_id_string_account_key_string_account_domain(System.Guid,System.String,System.String,System.IntPtr&)
extern void NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m7E8063B7AB185891012894BD2FECDBCDA671563E (void);
// 0x0000001E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_account_information_release(System.IntPtr)
extern void NativeLibrary_aoa_account_information_release_m6CCFEE8CC8DFDA5C71FF53C79931A5E778FD0C98 (void);
// 0x0000001F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
extern void NativeLibrary_aoa_get_error_details_m07FC847119B437C185892F07FA6ABE0AC089B1B1 (void);
// 0x00000020 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_account_information_account_information(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m97487272F1F9AC3B85F7AB522C8F7CCF2E5F9204 (void);
// 0x00000021 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_create_object_observer(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_anchors_session_create_object_observer_m8D9DE212F44DB857B94C1DD2F519B44AB427644A (void);
// 0x00000022 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_anchors_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_anchors_session_release_m701BAA8248649DB5A89BA7793FDFCBC4B2FD520C (void);
// 0x00000023 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_addref_mE20A9C82D1953110F2E473DFEC0970B5B6D4911A (void);
// 0x00000024 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_addref_m7125DE6BB66AB30F717347508E261D322C79C781 (void);
// 0x00000025 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_changed_event_args_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_changed_event_args_release_m9D74352E635D03E1AD50173E127794922C3E4F86 (void);
// 0x00000026 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_dispose_m964E7681FBDB5F25C46AE154968881AA73E7B55C (void);
// 0x00000027 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode&)
extern void NativeLibrary_aoa_object_instance_get_mode_m80D782D6B90E894ADD7B1C4A13A698577912E11F (void);
// 0x00000028 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_get_model_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_instance_get_model_id_m783F5D73C99FFEDCEB680E04D8F78448F9C64F46 (void);
// 0x00000029 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_release_mECBBAF32C3D00F16DB231CD7ABA6DE9F6E4FBDC6 (void);
// 0x0000002A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_changed(System.IntPtr,System.UInt64,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandlerNative)
extern void NativeLibrary_aoa_object_instance_set_changed_m5820DEDF7F23C18EB3335A202697F79AE8AFC34D (void);
// 0x0000002B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_set_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void NativeLibrary_aoa_object_instance_set_mode_m5989FB71A3B24CDAE9A0C2105F62D43398B4ABC8 (void);
// 0x0000002C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_addref_mC36003E897F12919C4942B6B277802C9D3A2D296 (void);
// 0x0000002D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_center(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation&)
extern void NativeLibrary_aoa_object_instance_state_get_center_mF2D2A6AEA090C1A1DE07C933776436A95FC1A01E (void);
// 0x0000002E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_last_updated_time(System.IntPtr,System.Int64&)
extern void NativeLibrary_aoa_object_instance_state_get_last_updated_time_m1AAEA0DB200DE4D1547858906DD970A2A206A653 (void);
// 0x0000002F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_scale_change(System.IntPtr,System.Numerics.Vector3&)
extern void NativeLibrary_aoa_object_instance_state_get_scale_change_m0CFD4984B1E8D780AD9C7372C320FE07B63D43BB (void);
// 0x00000030 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_get_surface_coverage(System.IntPtr,System.Single&)
extern void NativeLibrary_aoa_object_instance_state_get_surface_coverage_m618885BBA26C110ECD0B846180C61F6E6AD6C3DF (void);
// 0x00000031 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_release(System.IntPtr)
extern void NativeLibrary_aoa_object_instance_state_release_m835D26B9BD20A2FD47FA78F08A67014988E9CD23 (void);
// 0x00000032 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_state_try_create_placement(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_state_try_create_placement_m2735FF4B102C8757C5A2B70C44FD2A3B1CF3967C (void);
// 0x00000033 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_instance_try_get_current_state(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_instance_try_get_current_state_m6C910A3CD5D38EB5371D7EE60C1F5DA058E368AB (void);
// 0x00000034 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_model_addref_m70D2A595F17933A50F61A1CE9AA3D6CF198389EA (void);
// 0x00000035 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_model_dispose_mDB3F723C85CECD8A4B484FE86572E17D808D9053 (void);
// 0x00000036 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_bounding_box(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox&)
extern void NativeLibrary_aoa_object_model_get_bounding_box_m42651C3D8111B86E0B6F31B5F0946C54F1EED6C7 (void);
// 0x00000037 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_id(System.IntPtr,System.Guid&)
extern void NativeLibrary_aoa_object_model_get_id_mE741B914DD00DD5557E15E37AB89E7D4A32DB046 (void);
// 0x00000038 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_origin_to_center_transform(System.IntPtr,System.Numerics.Matrix4x4&)
extern void NativeLibrary_aoa_object_model_get_origin_to_center_transform_m404E8DF6CF018C258329449F0105F1A633448BB6 (void);
// 0x00000039 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_index_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_triangle_index_count_mC5ACBB1D927CF64EF0E15AD5A9928285D5216950 (void);
// 0x0000003A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_triangle_indices(System.IntPtr,System.UInt32[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_triangle_indices_m38478F52AA7939E0CFE34DAA2B2EDC68C4469CFD (void);
// 0x0000003B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_count(System.IntPtr,System.UInt32&)
extern void NativeLibrary_aoa_object_model_get_vertex_count_mB12FDB54C06DC6D2B55E70FBB9AD067065899774 (void);
// 0x0000003C Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_normals(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_normals_m11220768282FAB1BBDFDAEB99D2AF59BF2E14EF6 (void);
// 0x0000003D Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_get_vertex_positions(System.IntPtr,System.Numerics.Vector3[],System.Int32)
extern void NativeLibrary_aoa_object_model_get_vertex_positions_m73DFCC0D8DC80B659864EEFE8FA1BD284B6CC647 (void);
// 0x0000003E Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_model_release(System.IntPtr)
extern void NativeLibrary_aoa_object_model_release_m557E77E0B5D333957059D30BE87FA2F5BF7112FF (void);
// 0x0000003F Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_addref(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_addref_m57F65950316A51FD15F299A0A73938D0CB331843 (void);
// 0x00000040 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_detect_async_queries(System.IntPtr,System.IntPtr[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_detect_async_queries_m65DE9610BBB53350A3CD61C569526112025FF2E2 (void);
// 0x00000041 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_dispose_mD28292ACE1B988E6A9C169A91CC59E1D1C242D88 (void);
// 0x00000042 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_get_app_domain_unload_events(System.IntPtr&,System.IntPtr&)
extern void NativeLibrary_aoa_object_observer_get_app_domain_unload_events_mC09CF51AE2DBBA7B132D865708DC31A5F1BF06DA (void);
// 0x00000043 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_is_supported(System.Boolean&)
extern void NativeLibrary_aoa_object_observer_is_supported_m41FDEE3F954DB9F9CB1D8774B907969FF2B86B6A (void);
// 0x00000044 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_load_object_model_async(System.IntPtr,System.Byte[],System.Int32,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_load_object_model_async_mDF78B0B4AE7095AE45A78CBAA464EAA0F79E22B7 (void);
// 0x00000045 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_release(System.IntPtr)
extern void NativeLibrary_aoa_object_observer_release_m2EE1F920C90BDB4BCD9B4F1167E86EDE890EBB49 (void);
// 0x00000046 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_observer_request_access_async(Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_observer_request_access_async_mBFF38EDF06751DF519F816AA83A714BAB22DDA39 (void);
// 0x00000047 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model(System.IntPtr,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_m6FA31EA9C2650A2DF181C195969CC55436C61865 (void);
// 0x00000048 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_create_object_model_model_object_observation_mode_observation_mode(System.IntPtr,Microsoft.Azure.ObjectAnchors.ObjectObservationMode,System.IntPtr&)
extern void NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_mDD8C66B642555ADAB7BAD162C92F4B2F1DAC43AB (void);
// 0x00000049 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_dispose(System.IntPtr)
extern void NativeLibrary_aoa_object_query_dispose_m1BA7D9EE8EC5664D4FD2E9D2468DDEBEAC1F5E5A (void);
// 0x0000004A Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_object_query_release(System.IntPtr)
extern void NativeLibrary_aoa_object_query_release_m0491FAF8D92EA4D6A3A0F9AD6D8041D927777404 (void);
// 0x0000004B Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.NativeLibrary::aoa_set_projected_object_cleanup(Microsoft.Azure.ObjectAnchors.ProjectedObjectCleanupNative)
extern void NativeLibrary_aoa_set_projected_object_cleanup_m2026E716927E77F3B3B030E7DBDD29FF061BAF06 (void);
// 0x0000004C System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::.ctor(System.Object,System.IntPtr)
extern void ObjectInstanceChangedHandler__ctor_mF04EBAF510A32554A5A75B1D8A8FA3929A5D1F86 (void);
// 0x0000004D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::Invoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs)
extern void ObjectInstanceChangedHandler_Invoke_mD57BE96F1B331A1FFD73738C1BA9FFE91FC580EC (void);
// 0x0000004E System.IAsyncResult Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::BeginInvoke(System.Object,Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs,System.AsyncCallback,System.Object)
extern void ObjectInstanceChangedHandler_BeginInvoke_m8DC8139DF36F3AFDB1BCB5DB574F74AF514EADDA (void);
// 0x0000004F System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler::EndInvoke(System.IAsyncResult)
extern void ObjectInstanceChangedHandler_EndInvoke_m0C13AFBAE53336C2A7B05C9CEE2A3AEE802CA83D (void);
// 0x00000050 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m36CC04C097AA66F6B7171B04EEDFE66CB8F323B7 (void);
// 0x00000051 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::.ctor(System.Guid,System.String,System.String)
extern void AccountInformation__ctor_m807F78FDD69046F3BA6457605A598129651C9AE2 (void);
// 0x00000052 System.Void Microsoft.Azure.ObjectAnchors.AccountInformation::Finalize()
extern void AccountInformation_Finalize_mBDBE7E45224EEEF1EB6162636D352613AEE17543 (void);
// 0x00000053 System.UInt64 Microsoft.Azure.ObjectAnchors.AccountInformation::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m849EBA3AB463B774D743E069EB474D183599CC5F (void);
// 0x00000054 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m3C754990EEF169750A515BFE010E41C75D998BD9 (void);
// 0x00000055 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::.ctor(Microsoft.Azure.ObjectAnchors.AccountInformation)
extern void ObjectAnchorsSession__ctor_m7993EC672EC7A6119F121545552909FAE4CDD83B (void);
// 0x00000056 System.Void Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Finalize()
extern void ObjectAnchorsSession_Finalize_m0EB5AC9118712544F7014632998D702598B834B3 (void);
// 0x00000057 Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::CreateObjectObserver()
extern void ObjectAnchorsSession_CreateObjectObserver_mF3E8ADA97D37E4C2F7D488B34E1F608303B59C1C (void);
// 0x00000058 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDC59DD0127920A6AE0F502EEF774194D143AD02F (void);
// 0x00000059 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs__ctor_m4D13F760CB6679F0B247404CD73D593E00E2E846 (void);
// 0x0000005A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mAC20793CF72FD3CBAAAF42C6D48D07D7549E63EB (void);
// 0x0000005B System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Finalize()
extern void ObjectInstanceChangedEventArgs_Finalize_m2871454809B172EB2A0E637F99612737BB0732E9 (void);
// 0x0000005C System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m0C81F7C02D1F34E86F2B924490C6FBF560256A61 (void);
// 0x0000005D Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m5F3A971CB5D6F4ABF5934A92CDE0D34615C4DDBC (void);
// 0x0000005E Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceChangedEventArgs_GetOrCreateInstance_m3EB257A5CB8EC2802342EE1E7C82A3C1E2F1014D (void);
// 0x0000005F System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m9B9DDF4156BE9CFA319D37E157BE7FFF544D9431 (void);
// 0x00000060 Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedEventArgs/<>c__DisplayClass8_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_mCEAFAAA419BF9F608FD171317C04184A64825984 (void);
// 0x00000061 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstance__ctor_m8F7741D48FC43B079F9F996A93C8F180BD8C0447 (void);
// 0x00000062 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m262FBF516B823216A3EBCEC12ACA9205CA57B6B6 (void);
// 0x00000063 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Finalize()
extern void ObjectInstance_Finalize_mA0B626075EE8D829080D676E379E47A487486EB6 (void);
// 0x00000064 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::Dispose()
extern void ObjectInstance_Dispose_m259290CDA8248FB232CF1D4B6E691B4BCC674B22 (void);
// 0x00000065 System.Guid Microsoft.Azure.ObjectAnchors.ObjectInstance::get_ModelId()
extern void ObjectInstance_get_ModelId_m9488EBB24676F0CB8026BF262A9140E16BA29BFE (void);
// 0x00000066 Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode Microsoft.Azure.ObjectAnchors.ObjectInstance::get_Mode()
extern void ObjectInstance_get_Mode_m4F965832DA0B051B3803E3E20035F7D211A70D4A (void);
// 0x00000067 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::set_Mode(Microsoft.Azure.ObjectAnchors.ObjectInstanceTrackingMode)
extern void ObjectInstance_set_Mode_m9F03B3A2680C345BFC5614172F74AF6DB90F55B5 (void);
// 0x00000068 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::ChangedStaticHandler(System.UInt64,System.IntPtr)
extern void ObjectInstance_ChangedStaticHandler_m275A8216515A1EC9719ADED22561D835AB058F1D (void);
// 0x00000069 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::add_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_add_Changed_mB8DB37E622D89CFB93DADE687A0D5A306EA934E7 (void);
// 0x0000006A System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::remove_Changed(Microsoft.Azure.ObjectAnchors.ObjectInstanceChangedHandler)
extern void ObjectInstance_remove_Changed_mE738DD7EE255B7F4CCE7C4455B5A2BE9ED8BCAFD (void);
// 0x0000006B Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstance::TryGetCurrentState()
extern void ObjectInstance_TryGetCurrentState_mF581C8B788037ABF2F0B151A95B596A438BAFD2C (void);
// 0x0000006C System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstance::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m90FF1DBA97766BD2927D07E4D68D26EF6F26B2B8 (void);
// 0x0000006D Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m93FEAB5BAE7530A5FC48555E080C043EFB34474F (void);
// 0x0000006E Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstance_GetOrCreateInstance_m66409DA73E12819BE35154FDCA4D874982C31F97 (void);
// 0x0000006F System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance::.cctor()
extern void ObjectInstance__cctor_m6787526E2461C6CEB8ECFAE1DFF0D172A7F9F2F6 (void);
// 0x00000070 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mA34A4C466A30EB2CEB94932B3B428F85C492BCE0 (void);
// 0x00000071 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectInstance/<>c__DisplayClass20_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m3D6B321F244B2ED2D307F112803ADE00A82CF7B4 (void);
// 0x00000072 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::.ctor(System.IntPtr,System.Boolean)
extern void ObjectInstanceState__ctor_m7BF7C2EC642DEB16700FC749B6AC329B677FDE69 (void);
// 0x00000073 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m4CA9B3462D9FDD331A2238F4177952512D41AE2F (void);
// 0x00000074 System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Finalize()
extern void ObjectInstanceState_Finalize_mAA57159EFD4A37E42F8BE8E39562407F1430A56F (void);
// 0x00000075 System.DateTimeOffset Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_LastUpdatedTime()
extern void ObjectInstanceState_get_LastUpdatedTime_m4BE25D20E6B97B9676BE3FEF9B8C511DE6736786 (void);
// 0x00000076 System.Single Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_SurfaceCoverage()
extern void ObjectInstanceState_get_SurfaceCoverage_m42DE536C337E3F7C5A5C30AD543897D7A69A6C9C (void);
// 0x00000077 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphLocation Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_Center()
extern void ObjectInstanceState_get_Center_m2E084E1D9EA82387B363B962B88C65B4807BB01E (void);
// 0x00000078 System.Numerics.Vector3 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::get_ScaleChange()
extern void ObjectInstanceState_get_ScaleChange_mF5888CBC2D04A6DE42AE8F5660D663194F200734 (void);
// 0x00000079 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.ObjectInstanceState::TryCreatePlacement(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem)
extern void ObjectInstanceState_TryCreatePlacement_m7B7ECE818B9A25F5214D07F883012A833340A738 (void);
// 0x0000007A System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectInstanceState::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m90848CBF0603819F7BA17D101942FAD282DCCD8D (void);
// 0x0000007B Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_m40C8AE99BDF08AC82A36F75F19696729D34108D2 (void);
// 0x0000007C Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectInstanceState_GetOrCreateInstance_mB0FB000416E0808132C623585998FFCAF1775601 (void);
// 0x0000007D System.Void Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m8E344C37EA225AD766B48486DE049D7141BADCBC (void);
// 0x0000007E Microsoft.Azure.ObjectAnchors.ObjectInstanceState Microsoft.Azure.ObjectAnchors.ObjectInstanceState/<>c__DisplayClass17_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m4FBF6F791DBACDAB54B049243F2D77A2E9D374BD (void);
// 0x0000007F System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.ctor(System.IntPtr,System.Boolean)
extern void ObjectModel__ctor_mBE26A6EBBDF3FD9A53DDEDFBD436D9C4D592EA7D (void);
// 0x00000080 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBBBD9CA18A619F7FCD3AA9A41F54D11D631D8C67 (void);
// 0x00000081 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Finalize()
extern void ObjectModel_Finalize_mA57710BE092A4C02227ABC4F3D0119D13317B70B (void);
// 0x00000082 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::Dispose()
extern void ObjectModel_Dispose_m8DE0CE27CD98AA78082E0A36CFB73A5AD3FF8C84 (void);
// 0x00000083 System.Guid Microsoft.Azure.ObjectAnchors.ObjectModel::get_Id()
extern void ObjectModel_get_Id_mBED8BCBB02D46CAC928D4C4C0C4104BC9EF0942D (void);
// 0x00000084 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialOrientedBox Microsoft.Azure.ObjectAnchors.ObjectModel::get_BoundingBox()
extern void ObjectModel_get_BoundingBox_mAC152BB989183C8F0169D0A3DB0C88902E9FD8AC (void);
// 0x00000085 System.Numerics.Matrix4x4 Microsoft.Azure.ObjectAnchors.ObjectModel::get_OriginToCenterTransform()
extern void ObjectModel_get_OriginToCenterTransform_m563234D3C2E7D32ABCD3BD08BF4F8B1542F98911 (void);
// 0x00000086 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_VertexCount()
extern void ObjectModel_get_VertexCount_mB6CBEF3AB9B86FB54BE24AF780ADDC41F0E6DEB3 (void);
// 0x00000087 System.UInt32 Microsoft.Azure.ObjectAnchors.ObjectModel::get_TriangleIndexCount()
extern void ObjectModel_get_TriangleIndexCount_mF9390FB8294DE4E396408D2A593AD73FB23E5908 (void);
// 0x00000088 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexPositions(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexPositions_m834D711556390DBEDA468A951CAEB6E4E4DA18A2 (void);
// 0x00000089 System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetVertexNormals(System.Numerics.Vector3[])
extern void ObjectModel_GetVertexNormals_m305B203672E57F3E86F72B9B6A2017081CFABB25 (void);
// 0x0000008A System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::GetTriangleIndices(System.UInt32[])
extern void ObjectModel_GetTriangleIndices_m806ED7F038D40771E2303507FC007289213AB65A (void);
// 0x0000008B System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectModel::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDDC0A2B3363294DF235BCA503528E5C11768DA91 (void);
// 0x0000008C Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_mAA18B44482887CAAD4290CA0D09A7132CF24C98E (void);
// 0x0000008D Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectModel_GetOrCreateInstance_m9BFA642007919B752F51AD0C462EEA3A58D948A9 (void);
// 0x0000008E System.Void Microsoft.Azure.ObjectAnchors.ObjectModel::.cctor()
extern void ObjectModel__cctor_m63B5551E7FB5B6F0C37CA39F623B5A6E21B9502A (void);
// 0x0000008F System.Void Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_m93AE92924BD1EF5734E39CAC0CE427D9FE85E2EA (void);
// 0x00000090 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectModel/<>c__DisplayClass23_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mA49FD40A28340C522B1BAC8EE1CA32F3946FD4EA (void);
// 0x00000091 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.ctor(System.IntPtr,System.Boolean)
extern void ObjectObserver__ctor_m68A615F02A2E78DE92F526B05736E3F6C7876A3F (void);
// 0x00000092 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m1DC53FEBF0AB15C76E0876D96980854ADCE8AF5E (void);
// 0x00000093 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Finalize()
extern void ObjectObserver_Finalize_m4F243C03892EBEF13198C9AB9766C7BA2133ABD7 (void);
// 0x00000094 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::Dispose()
extern void ObjectObserver_Dispose_m6C0DAE11268060AB5F49EFECDA918D879CE0DD26 (void);
// 0x00000095 System.Boolean Microsoft.Azure.ObjectAnchors.ObjectObserver::IsSupported()
extern void ObjectObserver_IsSupported_mE505BBBE6B131C77049EF6ED5900B73E39DE1877 (void);
// 0x00000096 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus> Microsoft.Azure.ObjectAnchors.ObjectObserver::RequestAccessAsync()
extern void ObjectObserver_RequestAccessAsync_m33FC48437AB1E32C6C99A8467F75143A0477995B (void);
// 0x00000097 System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.ObjectModel> Microsoft.Azure.ObjectAnchors.ObjectObserver::LoadObjectModelAsync(System.Byte[])
extern void ObjectObserver_LoadObjectModelAsync_m58BCE5A085B1FDF6C943996879CC8E6B901FBF28 (void);
// 0x00000098 System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.ObjectAnchors.ObjectInstance>> Microsoft.Azure.ObjectAnchors.ObjectObserver::DetectAsync(Microsoft.Azure.ObjectAnchors.ObjectQuery[])
extern void ObjectObserver_DetectAsync_m0FF605BAB9D39101928A6C9D128BE1FCA7D6C320 (void);
// 0x00000099 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::GetAppDomainUnloadEvents(System.IntPtr&,System.IntPtr&)
extern void ObjectObserver_GetAppDomainUnloadEvents_m3DF693F20D1C34CE9761A896DD55B7875F8369AA (void);
// 0x0000009A System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectObserver::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8E51D90E1E0E32404E65A811CDBF1D309EF2C0E2 (void);
// 0x0000009B Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_mD4C24D14D22E75A11DD0662C0436BC091A471024 (void);
// 0x0000009C Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void ObjectObserver_GetOrCreateInstance_m3EB591BC9EAAB435B2B0D2D2E67C286EFCA79257 (void);
// 0x0000009D System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::EnsureAppDomainUnloadHandlingInitialized()
extern void ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m158C7FEF9AC8D3D8163C7A88E646E96409219D9E (void);
// 0x0000009E System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::.cctor()
extern void ObjectObserver__cctor_m4004EE3C8CEE5EC8A57CD3B04B104B7DD0CE9D85 (void);
// 0x0000009F System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver::OnAppDomainUnload(System.Object,System.EventArgs)
extern void ObjectObserver_OnAppDomainUnload_m1AE9790DB9DB003428C94CEC246C4032553AF73C (void);
// 0x000000A0 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.cctor()
extern void U3CU3Ec__cctor_m59758C9425C9636131FC39C520328D85EF203359 (void);
// 0x000000A1 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::.ctor()
extern void U3CU3Ec__ctor_mD1D3CF43CC20AE634915DB20846442BB7E6319FC (void);
// 0x000000A2 Microsoft.Azure.ObjectAnchors.ObjectObserverAccessStatus Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<RequestAccessAsync>b__7_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m0ACB90CF69DAA0231889BD012AFA52DC9C8D577C (void);
// 0x000000A3 Microsoft.Azure.ObjectAnchors.ObjectModel Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<LoadObjectModelAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m8CD860F60E8FECC186692463B7BFC491E091EF98 (void);
// 0x000000A4 System.Collections.Generic.List`1<Microsoft.Azure.ObjectAnchors.ObjectInstance> Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m1AB304EA1012E5FAB9C6F7E0B4A49B366A65685F (void);
// 0x000000A5 Microsoft.Azure.ObjectAnchors.ObjectInstance Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_1(System.IntPtr)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_1_m107F9E7D88CA4F8C1211BD669545AD5E8BCA7BBC (void);
// 0x000000A6 System.IntPtr Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c::<DetectAsync>b__10_2(Microsoft.Azure.ObjectAnchors.ObjectQuery)
extern void U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9250280ED0EAD6CE1322ECE2C4CBF13F462F4DB6 (void);
// 0x000000A7 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::MoveNext()
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_m6D76E3FAC9ADF98357E79AB46C2D5D17EC52ABE1 (void);
// 0x000000A8 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<RequestAccessAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m475D8336A5F478495500363AD512FA0D9505855D (void);
// 0x000000A9 System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::MoveNext()
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFF1182B093B6409EA7B73B3E9B05A0D9783E2C66 (void);
// 0x000000AA System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<LoadObjectModelAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_mBB71785AAEBF658CE6DD233D9F045D1F68E69352 (void);
// 0x000000AB System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::MoveNext()
extern void U3CDetectAsyncU3Ed__10_MoveNext_mF524D3CBFC053E6643EEDFEE67E32A0B59B32247 (void);
// 0x000000AC System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<DetectAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_mC66661583B1DB7C39B3012C49DADC9DB07660C37 (void);
// 0x000000AD System.Void Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_mD4F2E870C220882733696F60F527348F3F0ADFCA (void);
// 0x000000AE Microsoft.Azure.ObjectAnchors.ObjectObserver Microsoft.Azure.ObjectAnchors.ObjectObserver/<>c__DisplayClass15_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m45AD83EDEB3AD14BA3340AD012075D300A49CFC7 (void);
// 0x000000AF System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m302BE157F6104211CA2763896B3CE43D66D0838E (void);
// 0x000000B0 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel)
extern void ObjectQuery__ctor_m9C0087BF3C42A95BECDCBF18FF00D4F5EA2F89F9 (void);
// 0x000000B1 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.ctor(Microsoft.Azure.ObjectAnchors.ObjectModel,Microsoft.Azure.ObjectAnchors.ObjectObservationMode)
extern void ObjectQuery__ctor_m5012AA88531D2BC2C839D3367B78F80FAA7B9EE3 (void);
// 0x000000B2 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Finalize()
extern void ObjectQuery_Finalize_mC61E627914634FDE640F5EF8833CFFEE4BB53FEE (void);
// 0x000000B3 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::Dispose()
extern void ObjectQuery_Dispose_m8C13AC36435053643FDDF77AC49D2DEABE8AE8DC (void);
// 0x000000B4 System.UInt64 Microsoft.Azure.ObjectAnchors.ObjectQuery::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mB1B556A4B96C66761BAEFE64FC6769B9BBF8AAEB (void);
// 0x000000B5 System.Void Microsoft.Azure.ObjectAnchors.ObjectQuery::.cctor()
extern void ObjectQuery__cctor_m7BB3E9DFB096623DE021E584DC992DF6EA5CB391 (void);
// 0x000000B6 System.Collections.Generic.List`1<T> Microsoft.Azure.ObjectAnchors.PackedValue::UnpackPtrs(Microsoft.Azure.ObjectAnchors.PackedValue,System.Func`2<System.IntPtr,T>,System.Boolean)
// 0x000000B7 System.Int64 Microsoft.Azure.ObjectAnchors.PackedValue::op_Implicit(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void PackedValue_op_Implicit_mA65BAB18CA50102212782BBB7EF98555378EF2BA (void);
// 0x000000B8 System.Void Microsoft.Azure.ObjectAnchors.PackedValue::.cctor()
extern void PackedValue__cctor_mC9E87BD06B170AC381D20396D50C0C01EAA8938D (void);
// 0x000000B9 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void PromiseBase__ctor_m4A15387153F9BF65458CE50EF2430AC4DDCA2D04 (void);
// 0x000000BA System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Finalize()
extern void PromiseBase_Finalize_mF41257C47D8B66E0013BA88FD318A21D0BF6BD95 (void);
// 0x000000BB System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose()
extern void PromiseBase_Dispose_m8E6FDE9F5E15E2FEB235FAEF24C6BBBE1DEDF545 (void);
// 0x000000BC System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::Dispose(System.Boolean)
extern void PromiseBase_Dispose_m05AFF9A1DA9A301B086BC8FF1512B896BFEEB796 (void);
// 0x000000BD System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressHandler(System.Single)
extern void PromiseBase_OnProgressHandler_m18822F9314EE918432F0EE9366F34EE9E7F85A59 (void);
// 0x000000BE System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorHandler(System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorHandler_m10518E411E70CE12A3FFE2A45A68964D8DDC0E45 (void);
// 0x000000BF System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCanceledHandler()
// 0x000000C0 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnExceptionHandler(System.Exception)
// 0x000000C1 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x000000C2 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnCompleteThunk(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void PromiseBase_OnCompleteThunk_mE6248BC04D632D905746AD2611F16D1E7B83AC88 (void);
// 0x000000C3 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnErrorThunk(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void PromiseBase_OnErrorThunk_mAEC2B6085FA121933175902FE74B599C099E9F8A (void);
// 0x000000C4 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::OnProgressThunk(System.IntPtr,System.Single)
extern void PromiseBase_OnProgressThunk_mB86B0EEEEBFAAF9C562FE46E0F88315829E10990 (void);
// 0x000000C5 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::.cctor()
extern void PromiseBase__cctor_mC9499DAA7D7C3561AE78D68214872F6A03C651EC (void);
// 0x000000C6 System.Void Microsoft.Azure.ObjectAnchors.PromiseBase::<.ctor>b__7_0()
extern void PromiseBase_U3C_ctorU3Eb__7_0_m90A72C56BA4B11847FF9050B0C9976A938C23BC8 (void);
// 0x000000C7 System.Threading.Tasks.Task`1<T> Microsoft.Azure.ObjectAnchors.Promise`1::get_Task()
// 0x000000C8 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::.ctor(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,T>,System.Action`1<System.Single>,System.Threading.CancellationToken)
// 0x000000C9 System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnExceptionHandler(System.Exception)
// 0x000000CA System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCanceledHandler()
// 0x000000CB System.Void Microsoft.Azure.ObjectAnchors.Promise`1::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
// 0x000000CC System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::.ctor()
// 0x000000CD System.Void Microsoft.Azure.ObjectAnchors.Promise`1/<>c__DisplayClass7_0::<OnCompleteHandler>b__0(System.Object)
// 0x000000CE System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Promise::get_Task()
extern void Promise_get_Task_mDE92B5BADA78405BBFE2A61ED685C29B08AAF2FB (void);
// 0x000000CF System.Void Microsoft.Azure.ObjectAnchors.Promise::.ctor(System.Action`1<System.Single>,System.Threading.CancellationToken)
extern void Promise__ctor_mBFCD9F49BCE239042641E6D6542F659F66D429FE (void);
// 0x000000D0 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnExceptionHandler(System.Exception)
extern void Promise_OnExceptionHandler_mCFFA93676A3155C2BDF3F90859020DCAB0BD2A47 (void);
// 0x000000D1 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCanceledHandler()
extern void Promise_OnCanceledHandler_mC9E45FC749DC4685F11059692DA049F5418D80A0 (void);
// 0x000000D2 System.Void Microsoft.Azure.ObjectAnchors.Promise::OnCompleteHandler(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void Promise_OnCompleteHandler_m88504428B7A8722085DC66B594E0C0037269E63C (void);
// 0x000000D3 Microsoft.Azure.ObjectAnchors.Promise Microsoft.Azure.ObjectAnchors.Promise::Create(System.Threading.CancellationToken)
extern void Promise_Create_mDA9072503E0528F82DF86F89A9A8AC28B23C242E (void);
// 0x000000D4 Microsoft.Azure.ObjectAnchors.Promise`1<TResult> Microsoft.Azure.ObjectAnchors.Promise::Create(System.Func`2<Microsoft.Azure.ObjectAnchors.PackedValue,TResult>,System.Threading.CancellationToken)
// 0x000000D5 System.Void Microsoft.Azure.ObjectAnchors.Promise::<OnCompleteHandler>b__6_0(System.Object)
extern void Promise_U3COnCompleteHandlerU3Eb__6_0_m496DB88C3D8A6BDF1C67C69C0CDA9535B5227AD5 (void);
// 0x000000D6 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_complete__ctor_m683B98F464A1868CE2D32221BED72FF50C55B881 (void);
// 0x000000D7 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::Invoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&)
extern void aoa_promise_on_complete_Invoke_mF4A3E377502F2B10257FC89AE638B22E66211383 (void);
// 0x000000D8 System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::BeginInvoke(System.IntPtr,Microsoft.Azure.ObjectAnchors.PackedValue&,System.AsyncCallback,System.Object)
extern void aoa_promise_on_complete_BeginInvoke_mDAC7DD48070957A87652F4A324B5E48CE8F6A883 (void);
// 0x000000D9 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_complete::EndInvoke(Microsoft.Azure.ObjectAnchors.PackedValue&,System.IAsyncResult)
extern void aoa_promise_on_complete_EndInvoke_m6C083374F5CCEB30A3EAD19A8B2FB89D329F2AB7 (void);
// 0x000000DA System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_error__ctor_m3EFDEFCE15AE3F2DD49062E58218D7459D44E7B6 (void);
// 0x000000DB System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::Invoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status)
extern void aoa_promise_on_error_Invoke_m737AD158A4D50E4491BF53B7C4F90F84A16D6ACD (void);
// 0x000000DC System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::BeginInvoke(System.IntPtr,System.IntPtr,Microsoft.Azure.ObjectAnchors.status,System.AsyncCallback,System.Object)
extern void aoa_promise_on_error_BeginInvoke_m079CCCF9F87DFCC63AEC769C2AA80F2F73176954 (void);
// 0x000000DD System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_error::EndInvoke(System.IAsyncResult)
extern void aoa_promise_on_error_EndInvoke_m0B795B9B3DF985D39C901F541FD9C1500C3C71CF (void);
// 0x000000DE System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::.ctor(System.Object,System.IntPtr)
extern void aoa_promise_on_progress__ctor_m8E63EB06C61C43F7AF019D34DE70ABD1524A5E10 (void);
// 0x000000DF System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::Invoke(System.IntPtr,System.Single)
extern void aoa_promise_on_progress_Invoke_m960E2493B3E6229147D35E70C3CC0F32FF8439F0 (void);
// 0x000000E0 System.IAsyncResult Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::BeginInvoke(System.IntPtr,System.Single,System.AsyncCallback,System.Object)
extern void aoa_promise_on_progress_BeginInvoke_mBE967761147B37A0C7241A40F93DC802F96EC78C (void);
// 0x000000E1 System.Void Microsoft.Azure.ObjectAnchors.aoa_promise_on_progress::EndInvoke(System.IAsyncResult)
extern void aoa_promise_on_progress_EndInvoke_m83A8DCA6ACA3C7E770AED2FF9B18FB70EB011E83 (void);
// 0x000000E2 System.Void Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::.ctor()
extern void PromiseSafeHandle__ctor_m62F25AB037F3F30DEEF2C33CB387374BAA624541 (void);
// 0x000000E3 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::get_IsInvalid()
extern void PromiseSafeHandle_get_IsInvalid_m27CE8F379B7AE16D947F3622F716D9EC516C3EB0 (void);
// 0x000000E4 System.Boolean Microsoft.Azure.ObjectAnchors.PromiseSafeHandle::ReleaseHandle()
extern void PromiseSafeHandle_ReleaseHandle_m9E2F6B2EC862034D2F9609D4E50803036C24CB35 (void);
// 0x000000E5 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_close_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_close_async_mF3E1C9A93121F1556F48FFE649350FD9DDF2B504 (void);
// 0x000000E6 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes(System.IntPtr,System.UInt32,System.IntPtr&)
extern void NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m369B7858031A73E24BC1C866862478AA53216183 (void);
// 0x000000E7 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_release(System.IntPtr)
extern void NativeLibrary_aoa_object_diagnostics_session_release_mB629B0069866B6B76BF9A7DC5D29A93C20B67E4F (void);
// 0x000000E8 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.Diagnostics.NativeLibrary::aoa_object_diagnostics_session_upload_diagnostics_async(System.String,System.IntPtr,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m5BABE07FB5382A6912FF198EFA4A8B8108D7B0B9 (void);
// 0x000000E9 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m77F2F2FC66A216DB67956FBB3ECA9B10C90F5DBC (void);
// 0x000000EA System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.ctor(Microsoft.Azure.ObjectAnchors.ObjectObserver,System.UInt32)
extern void ObjectDiagnosticsSession__ctor_mE6CF75118AF45D885BD8A3BDD53BD6787E833BCB (void);
// 0x000000EB System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Finalize()
extern void ObjectDiagnosticsSession_Finalize_m2632798F8146B94D3F70063E72B55077FFB5A3A9 (void);
// 0x000000EC System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::CloseAsync(System.String)
extern void ObjectDiagnosticsSession_CloseAsync_m579D9D766FBE334F48C3B0BC77E0AC6420648140 (void);
// 0x000000ED System.Threading.Tasks.Task`1<Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus> Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::UploadDiagnosticsAsync(System.String,Microsoft.Azure.ObjectAnchors.ObjectAnchorsSession)
extern void ObjectDiagnosticsSession_UploadDiagnosticsAsync_m3F4C7E514BF4787B4BED915E757C6BAB83B83EF2 (void);
// 0x000000EE System.UInt64 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m9D9624019B4F33F18B49D4E52C626235E33517DC (void);
// 0x000000EF System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession::.cctor()
extern void ObjectDiagnosticsSession__cctor_m1D0048C652AB70059463D5329E7701F700111BEA (void);
// 0x000000F0 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::MoveNext()
extern void U3CCloseAsyncU3Ed__8_MoveNext_m1DC0857EE22D5FFBB6AE1B789DE291DD4D075C44 (void);
// 0x000000F1 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<CloseAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_mCA33B444DA0247A035B0C6F09AD7824CA79623EF (void);
// 0x000000F2 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.cctor()
extern void U3CU3Ec__cctor_m9CE7F60A2E501737EA60722610777AD51A854625 (void);
// 0x000000F3 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::.ctor()
extern void U3CU3Ec__ctor_m85C8B6EF79A55120A637B36CDE438C7B0E0C2D71 (void);
// 0x000000F4 Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsUploadStatus Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<>c::<UploadDiagnosticsAsync>b__9_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m02F0F0504FAC848F64593A9D974C7F3B25D33E9D (void);
// 0x000000F5 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::MoveNext()
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mD9E1B0297E9215C576423211103B3CF612F38888 (void);
// 0x000000F6 System.Void Microsoft.Azure.ObjectAnchors.Diagnostics.ObjectDiagnosticsSession/<UploadDiagnosticsAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m8B76359C3E9EAC69E8A31A62DFF761308D56DD7E (void);
// 0x000000F7 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_addref(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_addref_m04868CA254067A7E3133C5DD8B71C48B16AD9245 (void);
// 0x000000F8 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_compute_origin_for_view(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose&)
extern void NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mB1690665CA8365C6FAFDEED73BB24779D4218C18 (void);
// 0x000000F9 Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_get_control_points(System.IntPtr,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[]&,System.Int32&)
extern void NativeLibrary_aoa_spatial_graph_placement_get_control_points_m4EAEA3B95733C5C9FB6C1713C0B7C8EE5A4F3EAD (void);
// 0x000000FA Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_release(System.IntPtr)
extern void NativeLibrary_aoa_spatial_graph_placement_release_mB53B78730585B7F08446F006ED1F1A79DD1C7F4C (void);
// 0x000000FB Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_create(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[],System.Int32,System.IntPtr&)
extern void NativeLibrary_aoa_spatial_graph_placement_try_create_m48DBB376B0FAA777E26A84F268808C38C13E5A96 (void);
// 0x000000FC Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_try_persist_static_nodes_async(System.IntPtr,System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_mDB5AE06B8E6E3369B081DBA280CF62465E64B193 (void);
// 0x000000FD Microsoft.Azure.ObjectAnchors.status Microsoft.Azure.ObjectAnchors.SpatialGraph.NativeLibrary::aoa_spatial_graph_placement_unpersist_static_nodes_async(System.String,Microsoft.Azure.ObjectAnchors.PromiseSafeHandle)
extern void NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m595687CCA24FECBBAF35059AADF1E01E8657FFCE (void);
// 0x000000FE System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.ctor(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement__ctor_mCC0EE954B8C02279C815787918532EEEDCC3E61E (void);
// 0x000000FF System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.IReferenceCounted.DecreaseReferenceCount()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m931821472AC7D1DE7290C2A699720ABDCABF125B (void);
// 0x00000100 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Finalize()
extern void SpatialGraphPlacement_Finalize_m73D35566B9E74B91872AC420EF834D9FCA7E6AFB (void);
// 0x00000101 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::ComputeOriginForView(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialPose,System.Numerics.Matrix4x4)
extern void SpatialGraphPlacement_ComputeOriginForView_m0C3EBF5BAD723E29CCF5615D44D333D280DB7456 (void);
// 0x00000102 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryCreate(Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphCoordinateSystem,Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[])
extern void SpatialGraphPlacement_TryCreate_mD8557498E25185C718A8C69B47B7DD84ED25C72C (void);
// 0x00000103 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacementControlPoint[] Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetControlPoints()
extern void SpatialGraphPlacement_GetControlPoints_m193099463DB7587CF18C0A0ACE32AC7DCD408F9F (void);
// 0x00000104 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::TryPersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_TryPersistStaticNodesAsync_m143A7C30FBB2DFF18E826B68E3EDE8A7561975B2 (void);
// 0x00000105 System.Threading.Tasks.Task Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::UnpersistStaticNodesAsync(System.String)
extern void SpatialGraphPlacement_UnpersistStaticNodesAsync_mE392E80180E4FFC561D6E3E29490CF3EBA79CA05 (void);
// 0x00000106 System.UInt64 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::Microsoft.Azure.ObjectAnchors.ICachedObject.get_Cookie()
extern void SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m350E8ECB3F4849D4717A1751C4124E554021D56D (void);
// 0x00000107 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.IntPtr,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_m64E7FC16CF93F96E640AA3925C6DAEFF6821B426 (void);
// 0x00000108 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::GetOrCreateInstance(System.UInt64,System.Boolean)
extern void SpatialGraphPlacement_GetOrCreateInstance_m0A4AE20160171F64A87700A5B6B9F329EBC480A0 (void);
// 0x00000109 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement::.cctor()
extern void SpatialGraphPlacement__cctor_mCD4799CA6FDC8627CF6AB5B16B66E23C8D51F823 (void);
// 0x0000010A System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.cctor()
extern void U3CU3Ec__cctor_m50F483F1C0F361F8F38931150448F384F0D8918A (void);
// 0x0000010B System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::.ctor()
extern void U3CU3Ec__ctor_mE8C4E5000A029C1AE46B4BBB4BC4732DD879B1EF (void);
// 0x0000010C System.Boolean Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c::<TryPersistStaticNodesAsync>b__8_0(Microsoft.Azure.ObjectAnchors.PackedValue)
extern void U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_mEFCC1919E345DD407EB9EA4AA79754C7EE1DB541 (void);
// 0x0000010D System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::MoveNext()
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m0DC1A3A24ED35589D8C347A4468327894EE001A7 (void);
// 0x0000010E System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<TryPersistStaticNodesAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m9369B1455DF3BBCE535216E19FF44B5E441BADFB (void);
// 0x0000010F System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::MoveNext()
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mA4A0C3C6E977C5FACD75B82F81ED5138C3F95CBF (void);
// 0x00000110 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<UnpersistStaticNodesAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m4FE92859D56EC7B0EACEA4FF5DCBE09BC23B3540 (void);
// 0x00000111 System.Void Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m2CE224F0D6DFFFE9A7E0291DC264B410C831A0F4 (void);
// 0x00000112 Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement Microsoft.Azure.ObjectAnchors.SpatialGraph.SpatialGraphPlacement/<>c__DisplayClass13_0::<GetOrCreateInstance>b__0(System.UInt64)
extern void U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_m38097AF3021FEA0A84025574E816426A396C6C47 (void);
static Il2CppMethodPointer s_methodPointers[274] = 
{
	NativeLibraryHelpers_CheckStatus_m18913DDE619E43B1EF745EC85B8AC53E2DE00944,
	NativeLibraryHelpers_CheckStatus_m952F56500614B10DF6A07AD211A01C5B2159582C,
	ProjectedObjectHelpers_ConvertHandleToCookie_m23B4956AB0548186BCEAC039E57F28369B50D0A6,
	ProjectedObjectHelpers_ConvertCookieToHandle_mB480AD07DAB6A8EB9583A3EA9356D43DCE7DE30F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ProjectedObjectEventHandlerCache_Clear_mF3BEEACA962F482F0C7D62BB2889673AAAE0F376,
	ProjectedObjectEventHandlerCache_GetOrInitializeEvents_mF8B9F6721C57B083A836195A773952DB9AA629A7,
	ProjectedObjectEventHandlerCache__cctor_m7B7797FA0155F6CF7801E0452C83812578C09102,
	ProjectedObjectCache__cctor_m1DB360A8A654F47EC9003577DFCF3DF248BC8786,
	ProjectedObjectCache_Add_m1A9EEF0EE17FA6145CBB0AAB906962044FAE9782,
	NULL,
	ProjectedObjectCache_Remove_m116914623ABFF06264B7E92A3EEE0FD541757C7F,
	ProjectedObjectCache_ProjectedObjectCleanupHandler_mFEED35D3D167257D4E1939F0C801C10A7F4D1507,
	ObjectInstanceChangedHandlerNative__ctor_m0F25ED12F7DBE82CAA9AF6D1CBC95CC9D079F9BC,
	ObjectInstanceChangedHandlerNative_Invoke_m7323E76E93C6150A54ACB1F9430852001ACF085A,
	ObjectInstanceChangedHandlerNative_BeginInvoke_m7AAA0ED76D404B50506485D7EB2640CB1396EA17,
	ObjectInstanceChangedHandlerNative_EndInvoke_mBBA0EFCCFAB1B7DE6446A874AF3A37C3801C952D,
	ProjectedObjectCleanupNative__ctor_m064D2C1A6C8AC53DDFFEB8D931AA3B22F8D3090F,
	ProjectedObjectCleanupNative_Invoke_mEA651BD1C7FC47F54AFBC8D794C3E4A8EED04B54,
	ProjectedObjectCleanupNative_BeginInvoke_m1F81EFE5AF26B5BA4236E6E8E305AAE37FCA06EB,
	ProjectedObjectCleanupNative_EndInvoke_m0FA6DDD47947902D80E6942992102E26C512CF46,
	NativeLibrary_PromiseCreate_m301C858FFE7F2ECC99964794771D7697F3F95403,
	NativeLibrary_PromiseCancel_m7DD2508E85FA88F824AE16CD33BA11CE77B85B53,
	NativeLibrary_PromiseDestroy_m77B91B4B62AABB1EA252F1413F73EBC848A003A2,
	NativeLibrary_aoa_account_information_create_guid_account_id_string_account_key_string_account_domain_m7E8063B7AB185891012894BD2FECDBCDA671563E,
	NativeLibrary_aoa_account_information_release_m6CCFEE8CC8DFDA5C71FF53C79931A5E778FD0C98,
	NativeLibrary_aoa_get_error_details_m07FC847119B437C185892F07FA6ABE0AC089B1B1,
	NativeLibrary_aoa_object_anchors_session_create_account_information_account_information_m97487272F1F9AC3B85F7AB522C8F7CCF2E5F9204,
	NativeLibrary_aoa_object_anchors_session_create_object_observer_m8D9DE212F44DB857B94C1DD2F519B44AB427644A,
	NativeLibrary_aoa_object_anchors_session_release_m701BAA8248649DB5A89BA7793FDFCBC4B2FD520C,
	NativeLibrary_aoa_object_instance_addref_mE20A9C82D1953110F2E473DFEC0970B5B6D4911A,
	NativeLibrary_aoa_object_instance_changed_event_args_addref_m7125DE6BB66AB30F717347508E261D322C79C781,
	NativeLibrary_aoa_object_instance_changed_event_args_release_m9D74352E635D03E1AD50173E127794922C3E4F86,
	NativeLibrary_aoa_object_instance_dispose_m964E7681FBDB5F25C46AE154968881AA73E7B55C,
	NativeLibrary_aoa_object_instance_get_mode_m80D782D6B90E894ADD7B1C4A13A698577912E11F,
	NativeLibrary_aoa_object_instance_get_model_id_m783F5D73C99FFEDCEB680E04D8F78448F9C64F46,
	NativeLibrary_aoa_object_instance_release_mECBBAF32C3D00F16DB231CD7ABA6DE9F6E4FBDC6,
	NativeLibrary_aoa_object_instance_set_changed_m5820DEDF7F23C18EB3335A202697F79AE8AFC34D,
	NativeLibrary_aoa_object_instance_set_mode_m5989FB71A3B24CDAE9A0C2105F62D43398B4ABC8,
	NativeLibrary_aoa_object_instance_state_addref_mC36003E897F12919C4942B6B277802C9D3A2D296,
	NativeLibrary_aoa_object_instance_state_get_center_mF2D2A6AEA090C1A1DE07C933776436A95FC1A01E,
	NativeLibrary_aoa_object_instance_state_get_last_updated_time_m1AAEA0DB200DE4D1547858906DD970A2A206A653,
	NativeLibrary_aoa_object_instance_state_get_scale_change_m0CFD4984B1E8D780AD9C7372C320FE07B63D43BB,
	NativeLibrary_aoa_object_instance_state_get_surface_coverage_m618885BBA26C110ECD0B846180C61F6E6AD6C3DF,
	NativeLibrary_aoa_object_instance_state_release_m835D26B9BD20A2FD47FA78F08A67014988E9CD23,
	NativeLibrary_aoa_object_instance_state_try_create_placement_m2735FF4B102C8757C5A2B70C44FD2A3B1CF3967C,
	NativeLibrary_aoa_object_instance_try_get_current_state_m6C910A3CD5D38EB5371D7EE60C1F5DA058E368AB,
	NativeLibrary_aoa_object_model_addref_m70D2A595F17933A50F61A1CE9AA3D6CF198389EA,
	NativeLibrary_aoa_object_model_dispose_mDB3F723C85CECD8A4B484FE86572E17D808D9053,
	NativeLibrary_aoa_object_model_get_bounding_box_m42651C3D8111B86E0B6F31B5F0946C54F1EED6C7,
	NativeLibrary_aoa_object_model_get_id_mE741B914DD00DD5557E15E37AB89E7D4A32DB046,
	NativeLibrary_aoa_object_model_get_origin_to_center_transform_m404E8DF6CF018C258329449F0105F1A633448BB6,
	NativeLibrary_aoa_object_model_get_triangle_index_count_mC5ACBB1D927CF64EF0E15AD5A9928285D5216950,
	NativeLibrary_aoa_object_model_get_triangle_indices_m38478F52AA7939E0CFE34DAA2B2EDC68C4469CFD,
	NativeLibrary_aoa_object_model_get_vertex_count_mB12FDB54C06DC6D2B55E70FBB9AD067065899774,
	NativeLibrary_aoa_object_model_get_vertex_normals_m11220768282FAB1BBDFDAEB99D2AF59BF2E14EF6,
	NativeLibrary_aoa_object_model_get_vertex_positions_m73DFCC0D8DC80B659864EEFE8FA1BD284B6CC647,
	NativeLibrary_aoa_object_model_release_m557E77E0B5D333957059D30BE87FA2F5BF7112FF,
	NativeLibrary_aoa_object_observer_addref_m57F65950316A51FD15F299A0A73938D0CB331843,
	NativeLibrary_aoa_object_observer_detect_async_queries_m65DE9610BBB53350A3CD61C569526112025FF2E2,
	NativeLibrary_aoa_object_observer_dispose_mD28292ACE1B988E6A9C169A91CC59E1D1C242D88,
	NativeLibrary_aoa_object_observer_get_app_domain_unload_events_mC09CF51AE2DBBA7B132D865708DC31A5F1BF06DA,
	NativeLibrary_aoa_object_observer_is_supported_m41FDEE3F954DB9F9CB1D8774B907969FF2B86B6A,
	NativeLibrary_aoa_object_observer_load_object_model_async_mDF78B0B4AE7095AE45A78CBAA464EAA0F79E22B7,
	NativeLibrary_aoa_object_observer_release_m2EE1F920C90BDB4BCD9B4F1167E86EDE890EBB49,
	NativeLibrary_aoa_object_observer_request_access_async_mBFF38EDF06751DF519F816AA83A714BAB22DDA39,
	NativeLibrary_aoa_object_query_create_object_model_model_m6FA31EA9C2650A2DF181C195969CC55436C61865,
	NativeLibrary_aoa_object_query_create_object_model_model_object_observation_mode_observation_mode_mDD8C66B642555ADAB7BAD162C92F4B2F1DAC43AB,
	NativeLibrary_aoa_object_query_dispose_m1BA7D9EE8EC5664D4FD2E9D2468DDEBEAC1F5E5A,
	NativeLibrary_aoa_object_query_release_m0491FAF8D92EA4D6A3A0F9AD6D8041D927777404,
	NativeLibrary_aoa_set_projected_object_cleanup_m2026E716927E77F3B3B030E7DBDD29FF061BAF06,
	ObjectInstanceChangedHandler__ctor_mF04EBAF510A32554A5A75B1D8A8FA3929A5D1F86,
	ObjectInstanceChangedHandler_Invoke_mD57BE96F1B331A1FFD73738C1BA9FFE91FC580EC,
	ObjectInstanceChangedHandler_BeginInvoke_m8DC8139DF36F3AFDB1BCB5DB574F74AF514EADDA,
	ObjectInstanceChangedHandler_EndInvoke_m0C13AFBAE53336C2A7B05C9CEE2A3AEE802CA83D,
	AccountInformation_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m36CC04C097AA66F6B7171B04EEDFE66CB8F323B7,
	AccountInformation__ctor_m807F78FDD69046F3BA6457605A598129651C9AE2,
	AccountInformation_Finalize_mBDBE7E45224EEEF1EB6162636D352613AEE17543,
	AccountInformation_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m849EBA3AB463B774D743E069EB474D183599CC5F,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m3C754990EEF169750A515BFE010E41C75D998BD9,
	ObjectAnchorsSession__ctor_m7993EC672EC7A6119F121545552909FAE4CDD83B,
	ObjectAnchorsSession_Finalize_m0EB5AC9118712544F7014632998D702598B834B3,
	ObjectAnchorsSession_CreateObjectObserver_mF3E8ADA97D37E4C2F7D488B34E1F608303B59C1C,
	ObjectAnchorsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDC59DD0127920A6AE0F502EEF774194D143AD02F,
	ObjectInstanceChangedEventArgs__ctor_m4D13F760CB6679F0B247404CD73D593E00E2E846,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mAC20793CF72FD3CBAAAF42C6D48D07D7549E63EB,
	ObjectInstanceChangedEventArgs_Finalize_m2871454809B172EB2A0E637F99612737BB0732E9,
	ObjectInstanceChangedEventArgs_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m0C81F7C02D1F34E86F2B924490C6FBF560256A61,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m5F3A971CB5D6F4ABF5934A92CDE0D34615C4DDBC,
	ObjectInstanceChangedEventArgs_GetOrCreateInstance_m3EB257A5CB8EC2802342EE1E7C82A3C1E2F1014D,
	U3CU3Ec__DisplayClass8_0__ctor_m9B9DDF4156BE9CFA319D37E157BE7FFF544D9431,
	U3CU3Ec__DisplayClass8_0_U3CGetOrCreateInstanceU3Eb__0_mCEAFAAA419BF9F608FD171317C04184A64825984,
	ObjectInstance__ctor_m8F7741D48FC43B079F9F996A93C8F180BD8C0447,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m262FBF516B823216A3EBCEC12ACA9205CA57B6B6,
	ObjectInstance_Finalize_mA0B626075EE8D829080D676E379E47A487486EB6,
	ObjectInstance_Dispose_m259290CDA8248FB232CF1D4B6E691B4BCC674B22,
	ObjectInstance_get_ModelId_m9488EBB24676F0CB8026BF262A9140E16BA29BFE,
	ObjectInstance_get_Mode_m4F965832DA0B051B3803E3E20035F7D211A70D4A,
	ObjectInstance_set_Mode_m9F03B3A2680C345BFC5614172F74AF6DB90F55B5,
	ObjectInstance_ChangedStaticHandler_m275A8216515A1EC9719ADED22561D835AB058F1D,
	ObjectInstance_add_Changed_mB8DB37E622D89CFB93DADE687A0D5A306EA934E7,
	ObjectInstance_remove_Changed_mE738DD7EE255B7F4CCE7C4455B5A2BE9ED8BCAFD,
	ObjectInstance_TryGetCurrentState_mF581C8B788037ABF2F0B151A95B596A438BAFD2C,
	ObjectInstance_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m90FF1DBA97766BD2927D07E4D68D26EF6F26B2B8,
	ObjectInstance_GetOrCreateInstance_m93FEAB5BAE7530A5FC48555E080C043EFB34474F,
	ObjectInstance_GetOrCreateInstance_m66409DA73E12819BE35154FDCA4D874982C31F97,
	ObjectInstance__cctor_m6787526E2461C6CEB8ECFAE1DFF0D172A7F9F2F6,
	U3CU3Ec__DisplayClass20_0__ctor_mA34A4C466A30EB2CEB94932B3B428F85C492BCE0,
	U3CU3Ec__DisplayClass20_0_U3CGetOrCreateInstanceU3Eb__0_m3D6B321F244B2ED2D307F112803ADE00A82CF7B4,
	ObjectInstanceState__ctor_m7BF7C2EC642DEB16700FC749B6AC329B677FDE69,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m4CA9B3462D9FDD331A2238F4177952512D41AE2F,
	ObjectInstanceState_Finalize_mAA57159EFD4A37E42F8BE8E39562407F1430A56F,
	ObjectInstanceState_get_LastUpdatedTime_m4BE25D20E6B97B9676BE3FEF9B8C511DE6736786,
	ObjectInstanceState_get_SurfaceCoverage_m42DE536C337E3F7C5A5C30AD543897D7A69A6C9C,
	ObjectInstanceState_get_Center_m2E084E1D9EA82387B363B962B88C65B4807BB01E,
	ObjectInstanceState_get_ScaleChange_mF5888CBC2D04A6DE42AE8F5660D663194F200734,
	ObjectInstanceState_TryCreatePlacement_m7B7ECE818B9A25F5214D07F883012A833340A738,
	ObjectInstanceState_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m90848CBF0603819F7BA17D101942FAD282DCCD8D,
	ObjectInstanceState_GetOrCreateInstance_m40C8AE99BDF08AC82A36F75F19696729D34108D2,
	ObjectInstanceState_GetOrCreateInstance_mB0FB000416E0808132C623585998FFCAF1775601,
	U3CU3Ec__DisplayClass17_0__ctor_m8E344C37EA225AD766B48486DE049D7141BADCBC,
	U3CU3Ec__DisplayClass17_0_U3CGetOrCreateInstanceU3Eb__0_m4FBF6F791DBACDAB54B049243F2D77A2E9D374BD,
	ObjectModel__ctor_mBE26A6EBBDF3FD9A53DDEDFBD436D9C4D592EA7D,
	ObjectModel_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_mBBBD9CA18A619F7FCD3AA9A41F54D11D631D8C67,
	ObjectModel_Finalize_mA57710BE092A4C02227ABC4F3D0119D13317B70B,
	ObjectModel_Dispose_m8DE0CE27CD98AA78082E0A36CFB73A5AD3FF8C84,
	ObjectModel_get_Id_mBED8BCBB02D46CAC928D4C4C0C4104BC9EF0942D,
	ObjectModel_get_BoundingBox_mAC152BB989183C8F0169D0A3DB0C88902E9FD8AC,
	ObjectModel_get_OriginToCenterTransform_m563234D3C2E7D32ABCD3BD08BF4F8B1542F98911,
	ObjectModel_get_VertexCount_mB6CBEF3AB9B86FB54BE24AF780ADDC41F0E6DEB3,
	ObjectModel_get_TriangleIndexCount_mF9390FB8294DE4E396408D2A593AD73FB23E5908,
	ObjectModel_GetVertexPositions_m834D711556390DBEDA468A951CAEB6E4E4DA18A2,
	ObjectModel_GetVertexNormals_m305B203672E57F3E86F72B9B6A2017081CFABB25,
	ObjectModel_GetTriangleIndices_m806ED7F038D40771E2303507FC007289213AB65A,
	ObjectModel_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mDDC0A2B3363294DF235BCA503528E5C11768DA91,
	ObjectModel_GetOrCreateInstance_mAA18B44482887CAAD4290CA0D09A7132CF24C98E,
	ObjectModel_GetOrCreateInstance_m9BFA642007919B752F51AD0C462EEA3A58D948A9,
	ObjectModel__cctor_m63B5551E7FB5B6F0C37CA39F623B5A6E21B9502A,
	U3CU3Ec__DisplayClass23_0__ctor_m93AE92924BD1EF5734E39CAC0CE427D9FE85E2EA,
	U3CU3Ec__DisplayClass23_0_U3CGetOrCreateInstanceU3Eb__0_mA49FD40A28340C522B1BAC8EE1CA32F3946FD4EA,
	ObjectObserver__ctor_m68A615F02A2E78DE92F526B05736E3F6C7876A3F,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m1DC53FEBF0AB15C76E0876D96980854ADCE8AF5E,
	ObjectObserver_Finalize_m4F243C03892EBEF13198C9AB9766C7BA2133ABD7,
	ObjectObserver_Dispose_m6C0DAE11268060AB5F49EFECDA918D879CE0DD26,
	ObjectObserver_IsSupported_mE505BBBE6B131C77049EF6ED5900B73E39DE1877,
	ObjectObserver_RequestAccessAsync_m33FC48437AB1E32C6C99A8467F75143A0477995B,
	ObjectObserver_LoadObjectModelAsync_m58BCE5A085B1FDF6C943996879CC8E6B901FBF28,
	ObjectObserver_DetectAsync_m0FF605BAB9D39101928A6C9D128BE1FCA7D6C320,
	ObjectObserver_GetAppDomainUnloadEvents_m3DF693F20D1C34CE9761A896DD55B7875F8369AA,
	ObjectObserver_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m8E51D90E1E0E32404E65A811CDBF1D309EF2C0E2,
	ObjectObserver_GetOrCreateInstance_mD4C24D14D22E75A11DD0662C0436BC091A471024,
	ObjectObserver_GetOrCreateInstance_m3EB591BC9EAAB435B2B0D2D2E67C286EFCA79257,
	ObjectObserver_EnsureAppDomainUnloadHandlingInitialized_m158C7FEF9AC8D3D8163C7A88E646E96409219D9E,
	ObjectObserver__cctor_m4004EE3C8CEE5EC8A57CD3B04B104B7DD0CE9D85,
	ObjectObserver_OnAppDomainUnload_m1AE9790DB9DB003428C94CEC246C4032553AF73C,
	U3CU3Ec__cctor_m59758C9425C9636131FC39C520328D85EF203359,
	U3CU3Ec__ctor_mD1D3CF43CC20AE634915DB20846442BB7E6319FC,
	U3CU3Ec_U3CRequestAccessAsyncU3Eb__7_0_m0ACB90CF69DAA0231889BD012AFA52DC9C8D577C,
	U3CU3Ec_U3CLoadObjectModelAsyncU3Eb__8_0_m8CD860F60E8FECC186692463B7BFC491E091EF98,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_0_m1AB304EA1012E5FAB9C6F7E0B4A49B366A65685F,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_1_m107F9E7D88CA4F8C1211BD669545AD5E8BCA7BBC,
	U3CU3Ec_U3CDetectAsyncU3Eb__10_2_m9250280ED0EAD6CE1322ECE2C4CBF13F462F4DB6,
	U3CRequestAccessAsyncU3Ed__7_MoveNext_m6D76E3FAC9ADF98357E79AB46C2D5D17EC52ABE1,
	U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m475D8336A5F478495500363AD512FA0D9505855D,
	U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFF1182B093B6409EA7B73B3E9B05A0D9783E2C66,
	U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_mBB71785AAEBF658CE6DD233D9F045D1F68E69352,
	U3CDetectAsyncU3Ed__10_MoveNext_mF524D3CBFC053E6643EEDFEE67E32A0B59B32247,
	U3CDetectAsyncU3Ed__10_SetStateMachine_mC66661583B1DB7C39B3012C49DADC9DB07660C37,
	U3CU3Ec__DisplayClass15_0__ctor_mD4F2E870C220882733696F60F527348F3F0ADFCA,
	U3CU3Ec__DisplayClass15_0_U3CGetOrCreateInstanceU3Eb__0_m45AD83EDEB3AD14BA3340AD012075D300A49CFC7,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m302BE157F6104211CA2763896B3CE43D66D0838E,
	ObjectQuery__ctor_m9C0087BF3C42A95BECDCBF18FF00D4F5EA2F89F9,
	ObjectQuery__ctor_m5012AA88531D2BC2C839D3367B78F80FAA7B9EE3,
	ObjectQuery_Finalize_mC61E627914634FDE640F5EF8833CFFEE4BB53FEE,
	ObjectQuery_Dispose_m8C13AC36435053643FDDF77AC49D2DEABE8AE8DC,
	ObjectQuery_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_mB1B556A4B96C66761BAEFE64FC6769B9BBF8AAEB,
	ObjectQuery__cctor_m7BB3E9DFB096623DE021E584DC992DF6EA5CB391,
	NULL,
	PackedValue_op_Implicit_mA65BAB18CA50102212782BBB7EF98555378EF2BA,
	PackedValue__cctor_mC9E87BD06B170AC381D20396D50C0C01EAA8938D,
	PromiseBase__ctor_m4A15387153F9BF65458CE50EF2430AC4DDCA2D04,
	PromiseBase_Finalize_mF41257C47D8B66E0013BA88FD318A21D0BF6BD95,
	PromiseBase_Dispose_m8E6FDE9F5E15E2FEB235FAEF24C6BBBE1DEDF545,
	PromiseBase_Dispose_m05AFF9A1DA9A301B086BC8FF1512B896BFEEB796,
	PromiseBase_OnProgressHandler_m18822F9314EE918432F0EE9366F34EE9E7F85A59,
	PromiseBase_OnErrorHandler_m10518E411E70CE12A3FFE2A45A68964D8DDC0E45,
	NULL,
	NULL,
	NULL,
	PromiseBase_OnCompleteThunk_mE6248BC04D632D905746AD2611F16D1E7B83AC88,
	PromiseBase_OnErrorThunk_mAEC2B6085FA121933175902FE74B599C099E9F8A,
	PromiseBase_OnProgressThunk_mB86B0EEEEBFAAF9C562FE46E0F88315829E10990,
	PromiseBase__cctor_mC9499DAA7D7C3561AE78D68214872F6A03C651EC,
	PromiseBase_U3C_ctorU3Eb__7_0_m90A72C56BA4B11847FF9050B0C9976A938C23BC8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Promise_get_Task_mDE92B5BADA78405BBFE2A61ED685C29B08AAF2FB,
	Promise__ctor_mBFCD9F49BCE239042641E6D6542F659F66D429FE,
	Promise_OnExceptionHandler_mCFFA93676A3155C2BDF3F90859020DCAB0BD2A47,
	Promise_OnCanceledHandler_mC9E45FC749DC4685F11059692DA049F5418D80A0,
	Promise_OnCompleteHandler_m88504428B7A8722085DC66B594E0C0037269E63C,
	Promise_Create_mDA9072503E0528F82DF86F89A9A8AC28B23C242E,
	NULL,
	Promise_U3COnCompleteHandlerU3Eb__6_0_m496DB88C3D8A6BDF1C67C69C0CDA9535B5227AD5,
	aoa_promise_on_complete__ctor_m683B98F464A1868CE2D32221BED72FF50C55B881,
	aoa_promise_on_complete_Invoke_mF4A3E377502F2B10257FC89AE638B22E66211383,
	aoa_promise_on_complete_BeginInvoke_mDAC7DD48070957A87652F4A324B5E48CE8F6A883,
	aoa_promise_on_complete_EndInvoke_m6C083374F5CCEB30A3EAD19A8B2FB89D329F2AB7,
	aoa_promise_on_error__ctor_m3EFDEFCE15AE3F2DD49062E58218D7459D44E7B6,
	aoa_promise_on_error_Invoke_m737AD158A4D50E4491BF53B7C4F90F84A16D6ACD,
	aoa_promise_on_error_BeginInvoke_m079CCCF9F87DFCC63AEC769C2AA80F2F73176954,
	aoa_promise_on_error_EndInvoke_m0B795B9B3DF985D39C901F541FD9C1500C3C71CF,
	aoa_promise_on_progress__ctor_m8E63EB06C61C43F7AF019D34DE70ABD1524A5E10,
	aoa_promise_on_progress_Invoke_m960E2493B3E6229147D35E70C3CC0F32FF8439F0,
	aoa_promise_on_progress_BeginInvoke_mBE967761147B37A0C7241A40F93DC802F96EC78C,
	aoa_promise_on_progress_EndInvoke_m83A8DCA6ACA3C7E770AED2FF9B18FB70EB011E83,
	PromiseSafeHandle__ctor_m62F25AB037F3F30DEEF2C33CB387374BAA624541,
	PromiseSafeHandle_get_IsInvalid_m27CE8F379B7AE16D947F3622F716D9EC516C3EB0,
	PromiseSafeHandle_ReleaseHandle_m9E2F6B2EC862034D2F9609D4E50803036C24CB35,
	NativeLibrary_aoa_object_diagnostics_session_close_async_mF3E1C9A93121F1556F48FFE649350FD9DDF2B504,
	NativeLibrary_aoa_object_diagnostics_session_create_object_observer_observer_uint32_max_session_size_in_mega_bytes_m369B7858031A73E24BC1C866862478AA53216183,
	NativeLibrary_aoa_object_diagnostics_session_release_mB629B0069866B6B76BF9A7DC5D29A93C20B67E4F,
	NativeLibrary_aoa_object_diagnostics_session_upload_diagnostics_async_m5BABE07FB5382A6912FF198EFA4A8B8108D7B0B9,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m77F2F2FC66A216DB67956FBB3ECA9B10C90F5DBC,
	ObjectDiagnosticsSession__ctor_mE6CF75118AF45D885BD8A3BDD53BD6787E833BCB,
	ObjectDiagnosticsSession_Finalize_m2632798F8146B94D3F70063E72B55077FFB5A3A9,
	ObjectDiagnosticsSession_CloseAsync_m579D9D766FBE334F48C3B0BC77E0AC6420648140,
	ObjectDiagnosticsSession_UploadDiagnosticsAsync_m3F4C7E514BF4787B4BED915E757C6BAB83B83EF2,
	ObjectDiagnosticsSession_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m9D9624019B4F33F18B49D4E52C626235E33517DC,
	ObjectDiagnosticsSession__cctor_m1D0048C652AB70059463D5329E7701F700111BEA,
	U3CCloseAsyncU3Ed__8_MoveNext_m1DC0857EE22D5FFBB6AE1B789DE291DD4D075C44,
	U3CCloseAsyncU3Ed__8_SetStateMachine_mCA33B444DA0247A035B0C6F09AD7824CA79623EF,
	U3CU3Ec__cctor_m9CE7F60A2E501737EA60722610777AD51A854625,
	U3CU3Ec__ctor_m85C8B6EF79A55120A637B36CDE438C7B0E0C2D71,
	U3CU3Ec_U3CUploadDiagnosticsAsyncU3Eb__9_0_m02F0F0504FAC848F64593A9D974C7F3B25D33E9D,
	U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mD9E1B0297E9215C576423211103B3CF612F38888,
	U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m8B76359C3E9EAC69E8A31A62DFF761308D56DD7E,
	NativeLibrary_aoa_spatial_graph_placement_addref_m04868CA254067A7E3133C5DD8B71C48B16AD9245,
	NativeLibrary_aoa_spatial_graph_placement_compute_origin_for_view_mB1690665CA8365C6FAFDEED73BB24779D4218C18,
	NativeLibrary_aoa_spatial_graph_placement_get_control_points_m4EAEA3B95733C5C9FB6C1713C0B7C8EE5A4F3EAD,
	NativeLibrary_aoa_spatial_graph_placement_release_mB53B78730585B7F08446F006ED1F1A79DD1C7F4C,
	NativeLibrary_aoa_spatial_graph_placement_try_create_m48DBB376B0FAA777E26A84F268808C38C13E5A96,
	NativeLibrary_aoa_spatial_graph_placement_try_persist_static_nodes_async_mDB5AE06B8E6E3369B081DBA280CF62465E64B193,
	NativeLibrary_aoa_spatial_graph_placement_unpersist_static_nodes_async_m595687CCA24FECBBAF35059AADF1E01E8657FFCE,
	SpatialGraphPlacement__ctor_mCC0EE954B8C02279C815787918532EEEDCC3E61E,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_IReferenceCounted_DecreaseReferenceCount_m931821472AC7D1DE7290C2A699720ABDCABF125B,
	SpatialGraphPlacement_Finalize_m73D35566B9E74B91872AC420EF834D9FCA7E6AFB,
	SpatialGraphPlacement_ComputeOriginForView_m0C3EBF5BAD723E29CCF5615D44D333D280DB7456,
	SpatialGraphPlacement_TryCreate_mD8557498E25185C718A8C69B47B7DD84ED25C72C,
	SpatialGraphPlacement_GetControlPoints_m193099463DB7587CF18C0A0ACE32AC7DCD408F9F,
	SpatialGraphPlacement_TryPersistStaticNodesAsync_m143A7C30FBB2DFF18E826B68E3EDE8A7561975B2,
	SpatialGraphPlacement_UnpersistStaticNodesAsync_mE392E80180E4FFC561D6E3E29490CF3EBA79CA05,
	SpatialGraphPlacement_Microsoft_Azure_ObjectAnchors_ICachedObject_get_Cookie_m350E8ECB3F4849D4717A1751C4124E554021D56D,
	SpatialGraphPlacement_GetOrCreateInstance_m64E7FC16CF93F96E640AA3925C6DAEFF6821B426,
	SpatialGraphPlacement_GetOrCreateInstance_m0A4AE20160171F64A87700A5B6B9F329EBC480A0,
	SpatialGraphPlacement__cctor_mCD4799CA6FDC8627CF6AB5B16B66E23C8D51F823,
	U3CU3Ec__cctor_m50F483F1C0F361F8F38931150448F384F0D8918A,
	U3CU3Ec__ctor_mE8C4E5000A029C1AE46B4BBB4BC4732DD879B1EF,
	U3CU3Ec_U3CTryPersistStaticNodesAsyncU3Eb__8_0_mEFCC1919E345DD407EB9EA4AA79754C7EE1DB541,
	U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m0DC1A3A24ED35589D8C347A4468327894EE001A7,
	U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m9369B1455DF3BBCE535216E19FF44B5E441BADFB,
	U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mA4A0C3C6E977C5FACD75B82F81ED5138C3F95CBF,
	U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m4FE92859D56EC7B0EACEA4FF5DCBE09BC23B3540,
	U3CU3Ec__DisplayClass13_0__ctor_m2CE224F0D6DFFFE9A7E0291DC264B410C831A0F4,
	U3CU3Ec__DisplayClass13_0_U3CGetOrCreateInstanceU3Eb__0_m38097AF3021FEA0A84025574E816426A396C6C47,
};
extern void U3CRequestAccessAsyncU3Ed__7_MoveNext_m6D76E3FAC9ADF98357E79AB46C2D5D17EC52ABE1_AdjustorThunk (void);
extern void U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m475D8336A5F478495500363AD512FA0D9505855D_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFF1182B093B6409EA7B73B3E9B05A0D9783E2C66_AdjustorThunk (void);
extern void U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_mBB71785AAEBF658CE6DD233D9F045D1F68E69352_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_MoveNext_mF524D3CBFC053E6643EEDFEE67E32A0B59B32247_AdjustorThunk (void);
extern void U3CDetectAsyncU3Ed__10_SetStateMachine_mC66661583B1DB7C39B3012C49DADC9DB07660C37_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_MoveNext_m1DC0857EE22D5FFBB6AE1B789DE291DD4D075C44_AdjustorThunk (void);
extern void U3CCloseAsyncU3Ed__8_SetStateMachine_mCA33B444DA0247A035B0C6F09AD7824CA79623EF_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mD9E1B0297E9215C576423211103B3CF612F38888_AdjustorThunk (void);
extern void U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m8B76359C3E9EAC69E8A31A62DFF761308D56DD7E_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m0DC1A3A24ED35589D8C347A4468327894EE001A7_AdjustorThunk (void);
extern void U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m9369B1455DF3BBCE535216E19FF44B5E441BADFB_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mA4A0C3C6E977C5FACD75B82F81ED5138C3F95CBF_AdjustorThunk (void);
extern void U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m4FE92859D56EC7B0EACEA4FF5DCBE09BC23B3540_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[14] = 
{
	{ 0x060000A7, U3CRequestAccessAsyncU3Ed__7_MoveNext_m6D76E3FAC9ADF98357E79AB46C2D5D17EC52ABE1_AdjustorThunk },
	{ 0x060000A8, U3CRequestAccessAsyncU3Ed__7_SetStateMachine_m475D8336A5F478495500363AD512FA0D9505855D_AdjustorThunk },
	{ 0x060000A9, U3CLoadObjectModelAsyncU3Ed__8_MoveNext_mFF1182B093B6409EA7B73B3E9B05A0D9783E2C66_AdjustorThunk },
	{ 0x060000AA, U3CLoadObjectModelAsyncU3Ed__8_SetStateMachine_mBB71785AAEBF658CE6DD233D9F045D1F68E69352_AdjustorThunk },
	{ 0x060000AB, U3CDetectAsyncU3Ed__10_MoveNext_mF524D3CBFC053E6643EEDFEE67E32A0B59B32247_AdjustorThunk },
	{ 0x060000AC, U3CDetectAsyncU3Ed__10_SetStateMachine_mC66661583B1DB7C39B3012C49DADC9DB07660C37_AdjustorThunk },
	{ 0x060000F0, U3CCloseAsyncU3Ed__8_MoveNext_m1DC0857EE22D5FFBB6AE1B789DE291DD4D075C44_AdjustorThunk },
	{ 0x060000F1, U3CCloseAsyncU3Ed__8_SetStateMachine_mCA33B444DA0247A035B0C6F09AD7824CA79623EF_AdjustorThunk },
	{ 0x060000F5, U3CUploadDiagnosticsAsyncU3Ed__9_MoveNext_mD9E1B0297E9215C576423211103B3CF612F38888_AdjustorThunk },
	{ 0x060000F6, U3CUploadDiagnosticsAsyncU3Ed__9_SetStateMachine_m8B76359C3E9EAC69E8A31A62DFF761308D56DD7E_AdjustorThunk },
	{ 0x0600010D, U3CTryPersistStaticNodesAsyncU3Ed__8_MoveNext_m0DC1A3A24ED35589D8C347A4468327894EE001A7_AdjustorThunk },
	{ 0x0600010E, U3CTryPersistStaticNodesAsyncU3Ed__8_SetStateMachine_m9369B1455DF3BBCE535216E19FF44B5E441BADFB_AdjustorThunk },
	{ 0x0600010F, U3CUnpersistStaticNodesAsyncU3Ed__9_MoveNext_mA4A0C3C6E977C5FACD75B82F81ED5138C3F95CBF_AdjustorThunk },
	{ 0x06000110, U3CUnpersistStaticNodesAsyncU3Ed__9_SetStateMachine_m4FE92859D56EC7B0EACEA4FF5DCBE09BC23B3540_AdjustorThunk },
};
static const int32_t s_InvokerIndices[274] = 
{
	8669,
	7963,
	8625,
	8352,
	5851,
	5863,
	-1,
	-1,
	-1,
	8682,
	8459,
	8822,
	8822,
	8674,
	-1,
	8682,
	8671,
	2631,
	2741,
	803,
	4762,
	2631,
	4728,
	1213,
	4762,
	7634,
	8314,
	8312,
	6678,
	8312,
	6683,
	7652,
	7652,
	8312,
	8312,
	8312,
	8312,
	8312,
	7652,
	7652,
	8312,
	7097,
	7653,
	8312,
	7652,
	7652,
	7652,
	7652,
	8312,
	7095,
	7652,
	8312,
	8312,
	7652,
	7652,
	7652,
	7652,
	7093,
	7652,
	7093,
	7093,
	8312,
	8312,
	6684,
	8312,
	7634,
	8298,
	6684,
	8312,
	8314,
	7652,
	7089,
	8312,
	8312,
	8314,
	2631,
	2635,
	774,
	4762,
	5863,
	1380,
	5863,
	5851,
	5863,
	4762,
	5863,
	5761,
	5851,
	2600,
	5863,
	5863,
	5851,
	7727,
	7760,
	5863,
	4183,
	2600,
	5863,
	5863,
	5863,
	5694,
	5724,
	4726,
	8034,
	4762,
	4762,
	5761,
	5851,
	7727,
	7760,
	8822,
	5863,
	4183,
	2600,
	5863,
	5863,
	5666,
	5811,
	5815,
	5857,
	4176,
	5851,
	7727,
	7760,
	5863,
	4183,
	2600,
	5863,
	5863,
	5863,
	5694,
	5817,
	5739,
	5850,
	5850,
	4762,
	4762,
	4762,
	5851,
	7727,
	7760,
	8822,
	5863,
	4183,
	2600,
	5863,
	5863,
	5863,
	8754,
	8786,
	4170,
	4170,
	7940,
	5851,
	7727,
	7760,
	8822,
	8822,
	8016,
	8822,
	5863,
	3889,
	4171,
	4171,
	4166,
	4082,
	5863,
	4762,
	5863,
	4762,
	5863,
	4762,
	5863,
	4183,
	5863,
	4762,
	2629,
	5863,
	5863,
	5851,
	8822,
	-1,
	8337,
	8822,
	2618,
	5863,
	5863,
	4649,
	4808,
	2601,
	5863,
	4762,
	4765,
	7962,
	7349,
	7965,
	8822,
	5863,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5761,
	2618,
	4762,
	5863,
	4765,
	8428,
	-1,
	4762,
	2631,
	2599,
	736,
	2194,
	2631,
	1410,
	243,
	4762,
	2631,
	2602,
	738,
	4762,
	5863,
	5650,
	5650,
	7094,
	7096,
	8312,
	7106,
	5863,
	2645,
	5863,
	4170,
	7742,
	5851,
	8822,
	5863,
	4762,
	8822,
	5863,
	3889,
	5863,
	4762,
	8312,
	6685,
	7088,
	8312,
	6781,
	7094,
	7661,
	2600,
	5863,
	5863,
	2130,
	7756,
	5761,
	4170,
	8444,
	5851,
	7727,
	7760,
	8822,
	8822,
	5863,
	3360,
	5863,
	4762,
	5863,
	4762,
	5863,
	4183,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[5] = 
{
	{ 0x06000011, 17,  (void**)&ProjectedObjectCache_ProjectedObjectCleanupHandler_mFEED35D3D167257D4E1939F0C801C10A7F4D1507_RuntimeMethod_var, 0 },
	{ 0x06000068, 15,  (void**)&ObjectInstance_ChangedStaticHandler_m275A8216515A1EC9719ADED22561D835AB058F1D_RuntimeMethod_var, 0 },
	{ 0x060000C2, 19,  (void**)&PromiseBase_OnCompleteThunk_mE6248BC04D632D905746AD2611F16D1E7B83AC88_RuntimeMethod_var, 0 },
	{ 0x060000C3, 20,  (void**)&PromiseBase_OnErrorThunk_mAEC2B6085FA121933175902FE74B599C099E9F8A_RuntimeMethod_var, 0 },
	{ 0x060000C4, 21,  (void**)&PromiseBase_OnProgressThunk_mB86B0EEEEBFAAF9C562FE46E0F88315829E10990_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000024, { 9, 10 } },
	{ 0x02000025, { 19, 1 } },
	{ 0x06000007, { 0, 1 } },
	{ 0x06000008, { 1, 1 } },
	{ 0x06000009, { 2, 1 } },
	{ 0x0600000F, { 3, 2 } },
	{ 0x060000B6, { 5, 4 } },
	{ 0x060000D4, { 20, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[22] = 
{
	{ (Il2CppRGCTXDataType)2, 487 },
	{ (Il2CppRGCTXDataType)2, 486 },
	{ (Il2CppRGCTXDataType)2, 488 },
	{ (Il2CppRGCTXDataType)3, 19893 },
	{ (Il2CppRGCTXDataType)2, 484 },
	{ (Il2CppRGCTXDataType)2, 9114 },
	{ (Il2CppRGCTXDataType)3, 33017 },
	{ (Il2CppRGCTXDataType)3, 19528 },
	{ (Il2CppRGCTXDataType)3, 33018 },
	{ (Il2CppRGCTXDataType)3, 49380 },
	{ (Il2CppRGCTXDataType)2, 11598 },
	{ (Il2CppRGCTXDataType)3, 49376 },
	{ (Il2CppRGCTXDataType)3, 49378 },
	{ (Il2CppRGCTXDataType)3, 49377 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)3, 217 },
	{ (Il2CppRGCTXDataType)3, 19835 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)3, 49379 },
	{ (Il2CppRGCTXDataType)3, 49386 },
	{ (Il2CppRGCTXDataType)2, 10009 },
	{ (Il2CppRGCTXDataType)3, 42483 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_ObjectAnchors_Runtime_Api_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_ObjectAnchors_Runtime_Api_CodeGenModule = 
{
	"Microsoft.ObjectAnchors.Runtime.Api.dll",
	274,
	s_methodPointers,
	14,
	s_adjustorThunks,
	s_InvokerIndices,
	5,
	s_reversePInvokeIndices,
	8,
	s_rgctxIndices,
	22,
	s_rgctxValues,
	NULL,
	g_Microsoft_ObjectAnchors_Runtime_Api_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
