#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
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

// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// UnityEngine.RuntimeInitializeLoadType
struct RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t78BE0E3079AE8955C97DF6A9814A6E6BFA146EA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D  : public PreserveAttribute_tD3CDF1454F8E64CEF59CF7094B45BBACE2C69948
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::m_LoadType
	int32_t ___m_LoadType_0;

public:
	inline static int32_t get_offset_of_m_LoadType_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D, ___m_LoadType_0)); }
	inline int32_t get_m_LoadType_0() const { return ___m_LoadType_0; }
	inline int32_t* get_address_of_m_LoadType_0() { return &___m_LoadType_0; }
	inline void set_m_LoadType_0(int32_t value)
	{
		___m_LoadType_0 = value;
	}
};


// System.Object


// System.Object


// System.Attribute


// System.Attribute


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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute


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


// System.ObsoleteAttribute


// System.ObsoleteAttribute


// UnityEngine.Scripting.PreserveAttribute


// UnityEngine.Scripting.PreserveAttribute


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute


// System.Void


// System.Void


// UnityEngine.RuntimeInitializeLoadType


// UnityEngine.RuntimeInitializeLoadType


// System.Diagnostics.DebuggableAttribute/DebuggingModes


// System.Diagnostics.DebuggableAttribute/DebuggingModes


// System.Diagnostics.DebuggableAttribute


// System.Diagnostics.DebuggableAttribute


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute


// UnityEngine.RuntimeInitializeOnLoadMethodAttribute

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081 (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
static void Unity_Robotics_ROSTCPConnector_Messages_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[1];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void LookupTransformFeedback_t8BEB92DAF8383F8E508B2B3EF93ED9FF3DD618C9_CustomAttributesCacheGenerator_LookupTransformFeedback_Register_mCAFBEE2BE72EBD75358800B10AA4D984C6ED1CE0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LookupTransformGoal_t2ABB2ABC874B6824B29736D601005B24F16E53DC_CustomAttributesCacheGenerator_LookupTransformGoal_Register_mDB9F053CBB260F698AE861DAE6B113E99E62B15E(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LookupTransformResult_t5BD0AF7552FBD232CD43294AE88DF4F23CF6E264_CustomAttributesCacheGenerator_LookupTransformResult_Register_mD7F80849A1E47552FBF9E483C98A7F6D867A508B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TF2ErrorMsg_tBAACE8B85832A980A4C27A419EF861D39A09EF9A_CustomAttributesCacheGenerator_TF2ErrorMsg_Register_mF76D55101BE5CB2271BCAA97C489228DB0A1F036(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_CustomAttributesCacheGenerator_TFMessageMsg_Register_m7553EB7075257A6168ED98D3237248499CCF711D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void FrameGraphRequest_tB964E4AE987858B34872245328E3670BBA3BD12C_CustomAttributesCacheGenerator_FrameGraphRequest_Register_mCCD4E57412E3F1ABB5DFCE255552B8463DCA40F2(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void FrameGraphResponse_t83535475D690057ABDDF923C0C20B7219D7D73C5_CustomAttributesCacheGenerator_FrameGraphResponse_Register_m945CD437D3CE64206725D8444164460B05103B6B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ClockMsg_t38C5C28EEB6FE2BF3DCCD7DBFE6C5C1FC5662A2F_CustomAttributesCacheGenerator_ClockMsg_Register_mDF3B9D07CF70B3D6327A06796268027D18B14C5C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LogMsg_t2CA32B51EFCC40FC88EA5478D5DD91C247957D63_CustomAttributesCacheGenerator_LogMsg_Register_m6149D3A34B26C68D2CC58F12559AA239042ACBA9(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TopicStatisticsMsg_tC0D96A783414748300FB76D7480B859E46C86910_CustomAttributesCacheGenerator_TopicStatisticsMsg_Register_m89578501B8278CB3D249B565AC2296D8AA33093C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ImageMarkerMsg_t12554A6E781998CDD2993872D9463478A586CA69_CustomAttributesCacheGenerator_ImageMarkerMsg_Register_m4AC14DF0A2C8211A0C42DA7FB3048D8938576D27(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerControlMsg_tC0D9658A9F27B85202EFD25486063E1A03E4F3CB_CustomAttributesCacheGenerator_InteractiveMarkerControlMsg_Register_m4FB38E7FC16E37DF9F04AF086B59BDCF80E71B21(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerFeedbackMsg_tA99FFAD4399C21FF6786A9C7D99A9A817AB7C7AE_CustomAttributesCacheGenerator_InteractiveMarkerFeedbackMsg_Register_m3C68480A883ED386985DB84E609157C3FD051B50(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerInitMsg_t74AB93929B955A982439E55BB0017418A5D9E88D_CustomAttributesCacheGenerator_InteractiveMarkerInitMsg_Register_mAA01B703698AF0C176B5A9610447A2497FBC03C6(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerMsg_tDFF70E1EB5982C23AD0765F37CAB04477ACD0F4C_CustomAttributesCacheGenerator_InteractiveMarkerMsg_Register_mEABE63CF335F09A31FFD5DC0E77FE466E4A39B88(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerPoseMsg_t4CEEDCF1611707062180DBBEB24EA08B7D202CFE_CustomAttributesCacheGenerator_InteractiveMarkerPoseMsg_Register_mF2BB6BD9787A5E330F35E43EF2CE6BE1D593895A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InteractiveMarkerUpdateMsg_t491EB28B5F9A18EC7587A21E37C6F6A55D46B707_CustomAttributesCacheGenerator_InteractiveMarkerUpdateMsg_Register_m8A671F2DE6B882B6895C360E04D8F997B681ACFA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MarkerArrayMsg_tDB9F28F3622F324A7A471DE4D392B54FE16D8CB1_CustomAttributesCacheGenerator_MarkerArrayMsg_Register_m42C5A5362F93A516C35A3406F25571DBA44475C4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MarkerMsg_t118455A1AD309CC44BB928D9733DEC023E2BAA4B_CustomAttributesCacheGenerator_MarkerMsg_Register_m9934C959266D3BBCC9EEA2E8C4C285F8FCBCB757(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MenuEntryMsg_t76CBD4F3C441AB2FA4254AC0C6140353445265C7_CustomAttributesCacheGenerator_MenuEntryMsg_Register_m8C8925597DCF0C00C2C671259F95FFEA40DCC995(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetInteractiveMarkersRequest_tE1A2AD1C1C3C8C736BDAA0702E0DDB3428A0DF6D_CustomAttributesCacheGenerator_GetInteractiveMarkersRequest_Register_m9BD25A07931EB83F4066647F689082D3C947DAA4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetInteractiveMarkersResponse_t04F31E3FD82DA3CAA4AA8E6144347B42DF038589_CustomAttributesCacheGenerator_GetInteractiveMarkersResponse_Register_mB52EC6B6175D31BAE95D43C3AF1030DB63BEE889(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JointTrajectoryMsg_tFA94D483F7D630936B15DC7A30C1AFBED4D535A9_CustomAttributesCacheGenerator_JointTrajectoryMsg_Register_mC642D61E9216B301C3D2198230C3FE8AA53CA47F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JointTrajectoryPointMsg_tB273DC8B04A6199AD97AE157A0B6C3F40D4B32FC_CustomAttributesCacheGenerator_JointTrajectoryPointMsg_Register_mDF2662AB0DF6C251D3C0BAAC8DC5443B6BA66425(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiDOFJointTrajectoryMsg_t538FA90BE2896B9CB3049FEC0F292D4FA82CEFCC_CustomAttributesCacheGenerator_MultiDOFJointTrajectoryMsg_Register_mF3A2A90E7B82BE8B247A9A5411B7616A66D933C5(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiDOFJointTrajectoryPointMsg_t57A3A44349B6C24A7BC74DE087B1FA4F1EB3EE8B_CustomAttributesCacheGenerator_MultiDOFJointTrajectoryPointMsg_Register_mECD2373F89507433685F87A0D72970E6316A6C59(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void DisparityImageMsg_t7B550F77267147774A1D78F6528248C46A8B201E_CustomAttributesCacheGenerator_DisparityImageMsg_Register_m773916D24418CBD1BF30FED1461C48A543AB8C57(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MeshMsg_t1D38CDB70F0719DFB2F055E3757E5409CD5AD2AB_CustomAttributesCacheGenerator_MeshMsg_Register_mA5C54DF22140D82B67371787302303FA412CB305(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MeshTriangleMsg_tC22A927D7DA1E62FE7EEA7C99B621BBFA0DA1327_CustomAttributesCacheGenerator_MeshTriangleMsg_Register_m9A4314E0775614AA04C5F80764D9E5EA4B15C084(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PlaneMsg_t60992C28F8DF365642A2D31606A50B4DB949BD4B_CustomAttributesCacheGenerator_PlaneMsg_Register_m9FDC0135445920249488E670783D3013FC47B8EE(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SolidPrimitiveMsg_t02AB49B76151C6BF4E133117232CBACE18FC66DD_CustomAttributesCacheGenerator_SolidPrimitiveMsg_Register_m97184A4BE5C51E8C30B60B6D5BAE341D9C62827F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void OctomapMsg_tF21405491A08C6D90CB15F178B3551FA6600D4CD_CustomAttributesCacheGenerator_OctomapMsg_Register_m83AB64247441688FEB643D9811500E666F67B485(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void OctomapWithPoseMsg_t1A4AF0F844EAF262B78EE67C9D329BA7615635A0_CustomAttributesCacheGenerator_OctomapWithPoseMsg_Register_m30F66311D378814905AC3CD0EEAC370EF9ACF7BA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void BoundingBoxQueryRequest_tADBD0DDB4F6D055AF128DA24863B9BA36D47A252_CustomAttributesCacheGenerator_BoundingBoxQueryRequest_Register_m0E4B4D1DB719396D66FA5CBFDDCD932124BF9B92(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void BoundingBoxQueryResponse_tBFA3E424BF8FEBB21CBF1CA50488CDA4B5CA87ED_CustomAttributesCacheGenerator_BoundingBoxQueryResponse_Register_m51A2C811B189A37B4C3092E580F1A9A8738E6F2C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetOctomapRequest_tDC6C0034065CB1270B75F575BDA114F08493E88A_CustomAttributesCacheGenerator_GetOctomapRequest_Register_mAE63FE9F58612126AD6B40FDDCFBB84EE9445568(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetOctomapResponse_tC4A7BEE42CC57492186060A8B08D8A42FEAABA27_CustomAttributesCacheGenerator_GetOctomapResponse_Register_mA664DDF242A63848594F00A4DD98096C77455FE0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ObjectRecognitionFeedback_tD1D10A3E1F26F512B335F104EF81EA29D4708D07_CustomAttributesCacheGenerator_ObjectRecognitionFeedback_Register_mF27CFF37CBA6D4ACC6CC5B899376C56DB4B66984(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ObjectRecognitionGoal_t2DAF9B49C3FB5C4AF21769330B4D87908F60A4FC_CustomAttributesCacheGenerator_ObjectRecognitionGoal_Register_m21C400276708E7E7C66E6926757679DC1C17652F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ObjectRecognitionResult_t61447536102A1AB57BF27AC1522C29841FD15C8D_CustomAttributesCacheGenerator_ObjectRecognitionResult_Register_m7E3B09B2723DF0E16F892141F2EF6FEE20828C51(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ObjectInformationMsg_tE7D2C3C50B59CEB42B4AA99DD3E3B10AAE6D69BC_CustomAttributesCacheGenerator_ObjectInformationMsg_Register_mF43A953D7260DB19B4A1D4046D1401ED0FBEBD82(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ObjectTypeMsg_tD930C11B9882022739816B02837FAB20E50E2940_CustomAttributesCacheGenerator_ObjectTypeMsg_Register_m97771C2E57013739B11018E83C8512C0D2D70D19(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void RecognizedObjectArrayMsg_t5E2F8D91C73FA7C6E8DD99BD5FC6287451A553CD_CustomAttributesCacheGenerator_RecognizedObjectArrayMsg_Register_m5A20E8F8A649F1E795179EE58CCB33BE7999D19B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void RecognizedObjectMsg_tD33A6C1DFB78FFAD84ABF402F1465FCB30DE45C3_CustomAttributesCacheGenerator_RecognizedObjectMsg_Register_mC3CB3EBBDE46CD8977C688E66A78788E6DEA103D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TableArrayMsg_t49370E2BB44BAC3485FC77FD7A2D62549CE134E6_CustomAttributesCacheGenerator_TableArrayMsg_Register_mFA2DF5434CA927F1ED2B009EF871B39C43E399A4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TableMsg_t310756EFA247989B20F34ACAC0BCE89840FC273A_CustomAttributesCacheGenerator_TableMsg_Register_mFB078BDEBB22844EB748440968F848E20E68BA98(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetObjectInformationRequest_t985CB2D114E6B1619319862292C2834E23F9EE24_CustomAttributesCacheGenerator_GetObjectInformationRequest_Register_mE73BCD9D2CAAAC0AD2A89E9F053DF4125779F914(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetObjectInformationResponse_t8C87B01117BCD31603DBED2B5E5B3C7092A2D7CB_CustomAttributesCacheGenerator_GetObjectInformationResponse_Register_mFF4BF782EC6A330C395A94FE43CB878457A9D074(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetMapFeedback_tF047B17A586EB8814E04F8274EE5C9EE8A95B5C3_CustomAttributesCacheGenerator_GetMapFeedback_Register_mE5056B1504673EBEA19B7DEC92712A4A726DD815(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetMapGoal_t2DD6AF429F193B0F02FD8A192F7D2F8BD0F74282_CustomAttributesCacheGenerator_GetMapGoal_Register_m03E988E59A2F4FCF2D7CC32479C239C746D423B8(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetMapResult_t477E7FAD04B7D00E5D0010EAC82DCFD61D376CE2_CustomAttributesCacheGenerator_GetMapResult_Register_m01637B147DC843F9ED51370DBA66D56E1E29707F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GridCellsMsg_t0F353C70322B4ECCE644C87D907020969C9D345C_CustomAttributesCacheGenerator_GridCellsMsg_Register_mEC08687623B9320AB736A4305B454B818315CCD0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MapMetaDataMsg_tE12B779EA0F5F3B2D300F17B9E56BF696E4CD632_CustomAttributesCacheGenerator_MapMetaDataMsg_Register_m54CD541D854AABCA0B0EEE6659A22E24C2B946AE(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void OccupancyGridMsg_tBABE370849746E0B9538F404C110F2CCDE877C54_CustomAttributesCacheGenerator_OccupancyGridMsg_Register_m6BB44910D79D47AE8F5DFAE761B54CFF7E61AFF0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void OdometryMsg_tC3C114BE93257B9A729C34EB84893A96E6A4C217_CustomAttributesCacheGenerator_OdometryMsg_Register_m61E8CE2127431915FA2561DBF2D3302ADCE04C10(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PathMsg_tC92434519D422DFD59555D7DF40DB7C497CD8806_CustomAttributesCacheGenerator_PathMsg_Register_m8EF6247BC9203B1899DC236957FB7BFE8391691A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetMapRequest_tE1DD0040A38586223F84543E40884C083B1CF457_CustomAttributesCacheGenerator_GetMapRequest_Register_m562DE0246352F99633992E4FB6BF86E3EDF9575D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetMapResponse_tA05C96AB7BFAB1C654E7316D0D54137745A3F1A4_CustomAttributesCacheGenerator_GetMapResponse_Register_m7EEFC73B94654672191BC2B9F45D056D5AD95863(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetPlanRequest_tAFF4C080630B18C427B09D4703229F8732E3AA07_CustomAttributesCacheGenerator_GetPlanRequest_Register_m2536C9070400D8EC8967C8832600FF0C9391FC7B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GetPlanResponse_tE08A5A11C57D0E572208BCF8FA107D8C907F3D0E_CustomAttributesCacheGenerator_GetPlanResponse_Register_m811739BF18C54AC6788113702BDD2478ECAC5624(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LoadMapRequest_t7AE312174E68C63C23308CB6AB75B2F05F4E37A9_CustomAttributesCacheGenerator_LoadMapRequest_Register_mDE1CA24EEDC29301B69C085F20059BCF317A578B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LoadMapResponse_t46E6FE1EADB7D1C3811347245E41FA74F21DD88A_CustomAttributesCacheGenerator_LoadMapResponse_Register_mE708F2B0A8D7E2C86A9685577C17D50D59B7B626(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetMapRequest_t42D121C6CCCDC899DBE3ADF7A716F972EBDE3509_CustomAttributesCacheGenerator_SetMapRequest_Register_m8B703E7B343F95461DEB77C85E7B3C817B34DA6C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetMapResponse_t7360C1579FD2BAEBAD3180C0C24AF2E2F83318FE_CustomAttributesCacheGenerator_SetMapResponse_Register_m0F30D7E6212F826E17C864D06ECED8CE70E2DEA1(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC_CustomAttributesCacheGenerator_HeaderMsg_Register_mAF46A7F1DB84B557EB7AF62BBE0B4EDE53BC5244(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void BoolMsg_t444688F9348E01F45542274280471713F4A9B9DB_CustomAttributesCacheGenerator_BoolMsg_Register_m6A020615DEB4C29868A1455709C95142F3EF5A80(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ByteMsg_t9406E81C95620F3E2BBDE02A06417015203E74C8_CustomAttributesCacheGenerator_ByteMsg_Register_m41EC62B506E791586156EE629E235EE6985CB15D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ByteMultiArrayMsg_tCBB0C46F4A1ACAC1593626F3D6AD0E0B4568FB2C_CustomAttributesCacheGenerator_ByteMultiArrayMsg_Register_m1080DD8502D1A01CE09DD3B52E38BA19B79C72E9(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void CharMsg_t7C76020B5A656F5515F30A2F89B480CAAFF22F7D_CustomAttributesCacheGenerator_CharMsg_Register_m8A78F532AFEF682B89371514AEF56A071A80D866(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ColorRGBAMsg_t6BA76AF03A95FC81D0F1846D08CC735133E62482_CustomAttributesCacheGenerator_ColorRGBAMsg_Register_m96012614633CD038532D39BA713D5A163DCFADAA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void EmptyMsg_t791F716EDB38A00CB9B82C72388579CA246AA8FA_CustomAttributesCacheGenerator_EmptyMsg_Register_mB38AEEFD5CF35696E104BAC2536D50C2D25FBEA4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Float32Msg_tF5EF25C6E58E35B612EBBCE559892F36A6834A5C_CustomAttributesCacheGenerator_Float32Msg_Register_mF2E8AB0E5BC6BAF5497DF2680B2F0843204B3B84(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Float32MultiArrayMsg_tABEC146FE79FB3EA329C41F66E73DF8CF7761D99_CustomAttributesCacheGenerator_Float32MultiArrayMsg_Register_m572B50345C7976D8FCAB0CB3A7F03B82C7429F80(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Float64Msg_t57CF5D88FA19A3EEABD96FA7A04702F091E4BD31_CustomAttributesCacheGenerator_Float64Msg_Register_mE9FF4201A946C84A7A658048A29401DD008F77B5(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Float64MultiArrayMsg_tE7BC83D718F4D8B60E71BD7A8F103C3E55F6F011_CustomAttributesCacheGenerator_Float64MultiArrayMsg_Register_m099E26A501D8CF017FB983CF07063501B39AEBF0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int16Msg_t96609AF86BF518E95D0BAA40E263DA409F95645B_CustomAttributesCacheGenerator_Int16Msg_Register_m6C149ABD10F023E53D49F9FB195D914E07E15030(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int16MultiArrayMsg_t9CAA8E56CB3A47F7EF7792309482AF61243533CF_CustomAttributesCacheGenerator_Int16MultiArrayMsg_Register_m9299FB257EF7606C5F55C2C06F88B1262EE79EB0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int32Msg_t48ECAA95976C26C09183F6665DAF046F30DD12C3_CustomAttributesCacheGenerator_Int32Msg_Register_m6E6A7433DD0390A30A91EB67A1A5608E8C1C7EDB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int32MultiArrayMsg_tDC8AD4BFF3868A04944B1A94727039E4521A748D_CustomAttributesCacheGenerator_Int32MultiArrayMsg_Register_m1AB6DEDEA03485122F1900009D82257F0A66205A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int64Msg_t81ECBE6EC83A6697D48BE33CCE1EF8B212D039F7_CustomAttributesCacheGenerator_Int64Msg_Register_m0C94928B7418B5A60851E06836AF789D011C57CB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int64MultiArrayMsg_t0227B421A509B092423033ED93C273AECCF27879_CustomAttributesCacheGenerator_Int64MultiArrayMsg_Register_mF262048E5934B94E71A57A9C392A0D1AE84ADDD1(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int8Msg_tC619A5C771DCA9C4DE10BB36AA1F7DC6ECBE2F56_CustomAttributesCacheGenerator_Int8Msg_Register_m3312A90DBA9298E43C2095000E0D758965D30739(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Int8MultiArrayMsg_t8D9B2C709AB868701C56FF473489BD21F352DC02_CustomAttributesCacheGenerator_Int8MultiArrayMsg_Register_m2634A6C484A998E47BE6421D577172DB83B786E4(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiArrayDimensionMsg_tAE3C238CED3C2C927B9F460945D64AF4728FE74D_CustomAttributesCacheGenerator_MultiArrayDimensionMsg_Register_m0173DC62F03783DF75BA37069B4D191210780734(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiArrayLayoutMsg_tA3ED3517CC669A97BFC60CFEA1DDCA7960ED5B7D_CustomAttributesCacheGenerator_MultiArrayLayoutMsg_Register_m65600904126832CDEDA4C7B8253E6950DFE63F0B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void StringMsg_tB09089629A1BCAD0C7D5858CCFC6FDAD5A9BF898_CustomAttributesCacheGenerator_StringMsg_Register_m596AE9EF030D4ABC380C7468E34E1C17603ACEED(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt16Msg_t44765C7548BE83586E07BEC9A6BCA1EF9AB1450E_CustomAttributesCacheGenerator_UInt16Msg_Register_mB3745F6514E7399ED1AD18614BB927659D604B55(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt16MultiArrayMsg_t3761D1CE60675E051FB47D43E6C61E196C3A8B45_CustomAttributesCacheGenerator_UInt16MultiArrayMsg_Register_mB49E6B959E80B5D87EC4EF16D0DC05163A66ED44(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt32Msg_t973AEEDC69C39FB32E91BF0E2002FB25558EDF44_CustomAttributesCacheGenerator_UInt32Msg_Register_m3A77D93D98F7A1BFAAAF72D318A3C924D99D5041(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt32MultiArrayMsg_t2B74F7E11E8540B1373297DDFE2B350307D60390_CustomAttributesCacheGenerator_UInt32MultiArrayMsg_Register_mC88E9C465B37C2297A20729B8A6C3BCDB9CC1205(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt64Msg_t99A563F80EB2058981064806B4435BAE021A1E70_CustomAttributesCacheGenerator_UInt64Msg_Register_m73683B5145D8CF2964C17AC5D20E98B98EAA3D9F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt64MultiArrayMsg_t1BD06ADB661B0D52DB41F6D7C3D74EF3B78D0A52_CustomAttributesCacheGenerator_UInt64MultiArrayMsg_Register_mE25C899BC353DB07D608179E33F9DEFB5D82D3B6(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt8Msg_t64B456F212ED22CB2355F1E7AA1FDEA8F91D1230_CustomAttributesCacheGenerator_UInt8Msg_Register_mC8FBD394357FFE6272220BD5A9905C2FE0AA3E5A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void UInt8MultiArrayMsg_t09A78555AB848F1C55A317BEFB18AF676030BB3C_CustomAttributesCacheGenerator_UInt8MultiArrayMsg_Register_m986AC3B8C62AD3AAA259FB93746009444FE73F89(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void EmptyRequest_t557B2012074607091EC3F8A95EA95FE976415B37_CustomAttributesCacheGenerator_EmptyRequest_Register_m9F1D5C84FD6A2591B531E603E3D915D25BF9101E(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void EmptyResponse_tD5C83D3DC4CD21B498103C7EC5C930C456C0B69A_CustomAttributesCacheGenerator_EmptyResponse_Register_mCC5A9A402DAA00EECF3B9448CB3602AE01E52356(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetBoolRequest_t93FA2B0F2DCAC299C9D9E78E71C899558E64A2D9_CustomAttributesCacheGenerator_SetBoolRequest_Register_m594F84F595A2B5935073DD6D4090034458E1B5AA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetBoolResponse_tCC7F06A4DC5EE314F650878B071A71F8DEAEF9FA_CustomAttributesCacheGenerator_SetBoolResponse_Register_m8FDCC6C1A75933C399449B123A2E2E5034DBB8D5(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TriggerRequest_tAF125F60051F3A127DD290D0E88F1C1950D61468_CustomAttributesCacheGenerator_TriggerRequest_Register_mE080CCCD0CC7B5F09EBB49F05A23DA63C475C2FA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TriggerResponse_tA31841E0633ABE04A59718C33EA4F23F1CE5B6D7_CustomAttributesCacheGenerator_TriggerResponse_Register_m904CFB3AF1A874B9B6B1C69A2AA97EAFD651AB08(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void DurationMsg_tCA0ADB3CFC582A35D7CDF71594EC4771649F296F_CustomAttributesCacheGenerator_DurationMsg_Register_mAA99857785BD15EC29D90FFC89C911BE338AEED3(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1_CustomAttributesCacheGenerator_TimeMsg_Register_m981B24BA0136EE677AAC7B9BC4298E657653F1D3(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void CameraInfoMsg_tCB50006A43F482A34AB19DE1D78DB7AF22BE5D3D_CustomAttributesCacheGenerator_CameraInfoMsg_Register_m887E0C6BB0975DCA465D00C7B780503047F98459(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void BatteryStateMsg_t90233A667F0367554E8FFAB60B24A32C6B6CDC64_CustomAttributesCacheGenerator_BatteryStateMsg_Register_mE80D61711B15FB5E1779AE115CAEE96218301683(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ChannelFloat32Msg_t522F111DC04D12DF9B2EF8AE89F3128447CC1DD0_CustomAttributesCacheGenerator_ChannelFloat32Msg_Register_m296B2BFF51DC0B407AF8F010B5005543BCF1BC86(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void CompressedImageMsg_t5723AFCFF6AE44429780D9E2AE4DFD57E5007ADC_CustomAttributesCacheGenerator_CompressedImageMsg_Register_mC71CC49FB0DC0D38063AF15686A7D5B578A98A5C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void FluidPressureMsg_t8510C1B53F8C765F52C694305651FDE89F7818B3_CustomAttributesCacheGenerator_FluidPressureMsg_Register_mD687A01193A12936FB5D85AD303E208492F33B15(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void IlluminanceMsg_tC5240841334755F85C0D75890446BA904B34FD16_CustomAttributesCacheGenerator_IlluminanceMsg_Register_m96E857F926C3F90E69F943285AD50DB8D30CD6DB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ImageMsg_tC54BDF10A64C705ED1A53A71CF2CBF61F4EDC4A1_CustomAttributesCacheGenerator_ImageMsg_Register_mF73C6E0082FD811A966E40AB28BD37F73B5D9C9E(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void ImuMsg_tFD4E5B4B21567CFC3C05AD5CECB354E1633CAEEF_CustomAttributesCacheGenerator_ImuMsg_Register_m6CF9B02ECA1AFCC29128ADECE37EF1676DC63D0B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JointStateMsg_t62BC4F9220EB2001A1F8066085C359E8316B894C_CustomAttributesCacheGenerator_JointStateMsg_Register_m1B8794E7F347016234213442B009D0DECDFA59CC(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JoyFeedbackArrayMsg_t0534BA48B5B96674C17CA6B47C5DF79129525BB8_CustomAttributesCacheGenerator_JoyFeedbackArrayMsg_Register_mFCECC28F2F3F941B799E4DD3786A899F106602E8(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JoyFeedbackMsg_t5755F90DE75B678CC1928B15F148CB1FB1437AEA_CustomAttributesCacheGenerator_JoyFeedbackMsg_Register_m4DC98D920493A6A3F1F9D74D6CAA2FE13012319A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void JoyMsg_tB366EE19D51BE975574C7734187B7B5BEE838F0D_CustomAttributesCacheGenerator_JoyMsg_Register_m953E347FEA27F01DF697827958C27047E2CEDC66(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LaserEchoMsg_t5109FBFFF8D157209C9E82EB9F568DCAA863507F_CustomAttributesCacheGenerator_LaserEchoMsg_Register_mF6DADB953546B337A28EAF5973051CC1348C7A00(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void LaserScanMsg_t7B1788F530E3BEB2C34962884D24471426C6F7D9_CustomAttributesCacheGenerator_LaserScanMsg_Register_m92A63662B02BB8DB4D916E33162DAE84B8BB4932(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MagneticFieldMsg_tCDB59540B571C0199A41AE793A5DE362EF61A55C_CustomAttributesCacheGenerator_MagneticFieldMsg_Register_mC261840B77B27B7862C4E63668EF72A69ED361CB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiDOFJointStateMsg_tE55B6560085658138CABDA328F49859751EE1B5B_CustomAttributesCacheGenerator_MultiDOFJointStateMsg_Register_mF4E1A14F48EF9780EF1FF6E8B5BE5FDBE325243B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MultiEchoLaserScanMsg_tBA7D9FAB4BD29F87BC37EF3E3DD4E5636610841F_CustomAttributesCacheGenerator_MultiEchoLaserScanMsg_Register_m97BA93E0120DB60DE44BF139779890CCAA4E54F5(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void NavSatFixMsg_tFC83CD234FECCC356D062F6D5EEAB6B437FCCB85_CustomAttributesCacheGenerator_NavSatFixMsg_Register_mED39C9B20AFA6156D6F05AB83F11CB40683411E7(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void NavSatStatusMsg_t16EEFDCA0BA67EC89490B8B81992C6A955E3D06E_CustomAttributesCacheGenerator_NavSatStatusMsg_Register_m639832A014EB360075B6E7FADCA7B1C945A4D293(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PointCloud2Msg_tC94B580EC8F29DC86FB4CB9D9551DFB86D170F02_CustomAttributesCacheGenerator_PointCloud2Msg_Register_mEF4193ABA2301C800D71FE76C5EDDA7770FFA121(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PointCloudMsg_t0A2955C0B20A4DBD9DCC1AA7F6F1A9000F6550B9_CustomAttributesCacheGenerator_PointCloudMsg_Register_m3D5CDCC7BB0E66508B1F88BFBCF49290FB67DE8D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PointFieldMsg_t412B6A8BE2F3E3211DA8069EED6C4D28E92838E8_CustomAttributesCacheGenerator_PointFieldMsg_Register_mF878AC88C3553EAF0CFF3DB5DABB8BD85AA36EF2(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void RangeMsg_t993BEB0B5147CCB9B77090D2ED1A3ED446C39E80_CustomAttributesCacheGenerator_RangeMsg_Register_m085F6176E4556FFB7ADEAC64E739DFF7465B7493(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void RegionOfInterestMsg_tD23CC8CD20DDE1D1F7A67FFC7C32D6049E940F87_CustomAttributesCacheGenerator_RegionOfInterestMsg_Register_m773246E5C72D3D32E0BA72822398819B44E47675(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void RelativeHumidityMsg_t57E40B8E9CB63ADE4B4E5991DC5BDFAADAB12120_CustomAttributesCacheGenerator_RelativeHumidityMsg_Register_mDBDB3D71CB4E32397484B919156A425226008FCC(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TemperatureMsg_tBCCC328EBB5348244CED6546754AADA639D8C63B_CustomAttributesCacheGenerator_TemperatureMsg_Register_m7CB9B02AB93CEEC8372D9D1200D34E627BC1C5FA(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TimeReferenceMsg_t7FE2356CAB7FA25C9AB3E61A21359A5B33B25C04_CustomAttributesCacheGenerator_TimeReferenceMsg_Register_m24F485141E5706DBC89576DB2B18F22BCCDC4E4F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetCameraInfoRequest_t38E3F56CC447B479588BB8FD1183EE39642B9D59_CustomAttributesCacheGenerator_SetCameraInfoRequest_Register_m8AFD0AA938DD21D9A03FFAE111C4DC29804AD98F(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SetCameraInfoResponse_t964C68D1FB642826BAE3FF6BD5F6B5788C974DCE_CustomAttributesCacheGenerator_SetCameraInfoResponse_Register_mFE5FF5537C4A9F944D7DF8F02214024751C1ADEC(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AccelMsg_tF60EB6EBF6216373E1F66673BCB44DB3E5AA1C30_CustomAttributesCacheGenerator_AccelMsg_Register_m6ECB5827ADBD2B666156DB21224F9FACF3E69580(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AccelStampedMsg_t7A915022B020F9711672075F396AAA8459312507_CustomAttributesCacheGenerator_AccelStampedMsg_Register_m6545FF5F888CF2237DF3CDF09D1691D2B73A6923(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AccelWithCovarianceMsg_tDF2F4D93E01C4E4C7C8B591BB293B1F2471A6E50_CustomAttributesCacheGenerator_AccelWithCovarianceMsg_Register_mA032586FB16565065432701A01B2F49DC407B877(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AccelWithCovarianceStampedMsg_tBA1A3539DCC04685CBA6C527F20A6FFB15E35AB9_CustomAttributesCacheGenerator_AccelWithCovarianceStampedMsg_Register_m80B14FE15953AE35CE67698F997EB7BE06712809(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InertiaMsg_tD73719465975C6AEF3D5F5AA99A616F5F8145F52_CustomAttributesCacheGenerator_InertiaMsg_Register_m6CC5795F49AFF9CF1AE05E2FB544FA079CDCDFBE(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void InertiaStampedMsg_t49DDBA58165A5DB2D0863E7674A43C790667C51F_CustomAttributesCacheGenerator_InertiaStampedMsg_Register_mE4472EA786B796CDB799262986EF5E88D5588F35(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Point32Msg_tE4185EC13AC9D24A041A6ACAE8B4F2BF5F182A49_CustomAttributesCacheGenerator_Point32Msg_Register_mBB122CFFF16D62E9BC0B905457D39EFD00C0AB35(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PointMsg_t37A31157DA5C3DA553C1E0B5A07E46F53C9244DD_CustomAttributesCacheGenerator_PointMsg_Register_m90B136B19C936176C1304FEEF959F0F03F9A93E1(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PointStampedMsg_t976C10E0C9743D7D3E51C18FDB3777383946FE45_CustomAttributesCacheGenerator_PointStampedMsg_Register_m6E0499A45A0A209381FE6035F1C38498FDC2A6DD(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PolygonMsg_t41D973D461735968793724F76166F2134DF07A1A_CustomAttributesCacheGenerator_PolygonMsg_Register_mEA9FB2D969A9F27FC868D7F2D4FF66B86120A1EE(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PolygonStampedMsg_tF296A67358705E38ACB347B62538FC1D3A72D2F8_CustomAttributesCacheGenerator_PolygonStampedMsg_Register_m3B257BDFC0C44EAA401E3EC5EA73CEA4D71CB680(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Pose2DMsg_t931139EA1242DEAD381C605AE76B43F6A6887911_CustomAttributesCacheGenerator_Pose2DMsg_Register_mA3374D8B224429764C65FD55A3D036B5FE751A2D(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PoseArrayMsg_t1EAC5FDF143C0B3AD3DA4279AC8D9F0C41F4825C_CustomAttributesCacheGenerator_PoseArrayMsg_Register_mA3A57C25EB2083B533370F6BFF16859F19D3CDFB(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PoseMsg_tBC959A342713CFAE611FA20D9FB44F8F82BFE3B4_CustomAttributesCacheGenerator_PoseMsg_Register_m92BF09B3AC0B1EDA2B14554EFA9903AF8472F7F0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PoseStampedMsg_t53F57E07E85481C285309DCB594CB5A550FFE70D_CustomAttributesCacheGenerator_PoseStampedMsg_Register_m563D52B89ACC61FFA99C2DF40F2DE8B217AE2F79(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PoseWithCovarianceMsg_t73F74334F250603747EC6F6BE6C108EF3869C4F7_CustomAttributesCacheGenerator_PoseWithCovarianceMsg_Register_m2047216803C5D2BF89BCB016668BBAC11F712C63(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void PoseWithCovarianceStampedMsg_t475E25D4F58B6453436E2B47B71249B43E273E7A_CustomAttributesCacheGenerator_PoseWithCovarianceStampedMsg_Register_m3455975DD1EDBD688604B06AE59F879FE64967C8(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF_CustomAttributesCacheGenerator_QuaternionMsg_Register_mBDBF429F884D7B40C6158D295FB7FAB1CC95ED53(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void QuaternionStampedMsg_t1B0AF4FAD13D862A49EAB030E55CF59BD4261971_CustomAttributesCacheGenerator_QuaternionStampedMsg_Register_m2089FBCAD4ECEDEB698424AA5A231F40F5B42F97(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42_CustomAttributesCacheGenerator_TransformMsg_Register_m246EFF789FA282256EF49A4C5CB658F7D4BBE1A0(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111_CustomAttributesCacheGenerator_TransformStampedMsg_Register_m12927CE3D8B859C062AAC69EC50CB5DBA002BBA7(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TwistMsg_t69A32638DD98899C2C882FDA4B7EB0A2DB7AF1D5_CustomAttributesCacheGenerator_TwistMsg_Register_m22B86842AB8519BB4100F9C72A0AD22E168C0D03(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TwistStampedMsg_tAE4CC14273DF1C9D2DB26EE1E1D211304C36ECE5_CustomAttributesCacheGenerator_TwistStampedMsg_Register_m82FDF270E75AF7EF9B3DF048EE284A66ACFA8D03(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TwistWithCovarianceMsg_tE502230CA2B6E0BE8D337AB178BC90E5AC479167_CustomAttributesCacheGenerator_TwistWithCovarianceMsg_Register_m62B073CBADB7B460FE2480A30E95CF010BD2E313(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void TwistWithCovarianceStampedMsg_t8D30F9565275E7BAD6C18B066F6E54251CB32BDD_CustomAttributesCacheGenerator_TwistWithCovarianceStampedMsg_Register_mADC95D7EA0AC5550004F49376A13853CFCEF0F5C(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3_CustomAttributesCacheGenerator_Vector3Msg_Register_m7DDD109FF8522D88281E2E5DE3E574955156C59A(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void Vector3StampedMsg_t02ACDA5B48B521C2E77A2AF924EF8973234C9CF7_CustomAttributesCacheGenerator_Vector3StampedMsg_Register_mEB06361A4D782DF276C73BAD8C17DB4A29E822C7(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void WrenchMsg_t0DB3DC96CCBAF70A31920B63A2B54EB2A12568C9_CustomAttributesCacheGenerator_WrenchMsg_Register_mBF7475EF8DBC22B28ECFCD5EF8AF6BBD069253B6(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void WrenchStampedMsg_t5B1DE74FF30790DEDD1270711CC5D780BB2F7109_CustomAttributesCacheGenerator_WrenchStampedMsg_Register_m4DE67D784FA333F1474682C006B903E4D11918E2(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void MPoint_t92EC1DAF3F256ECB938FBB4D0C1641ECCC3B52A3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x50\x6F\x69\x6E\x74\x20\x69\x73\x20\x6E\x6F\x77\x20\x63\x61\x6C\x6C\x65\x64\x20\x50\x6F\x69\x6E\x74\x4D\x73\x67"), NULL);
	}
}
static void MPoint32_t36F13BA8869EEBA2FAD2549046224CB95D23CA85_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x50\x6F\x69\x6E\x74\x33\x32\x20\x69\x73\x20\x6E\x6F\x77\x20\x63\x61\x6C\x6C\x65\x64\x20\x50\x6F\x69\x6E\x74\x33\x32\x4D\x73\x67"), NULL);
	}
}
static void MQuaternion_tEEF8569CB80147960608AEB841C303899F549E85_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x51\x75\x61\x74\x65\x72\x6E\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x77\x20\x63\x61\x6C\x6C\x65\x64\x20\x51\x75\x61\x74\x65\x72\x6E\x69\x6F\x6E\x4D\x73\x67"), NULL);
	}
}
static void MVector3_t788482061BF1B822C084F72B74DBED4B77A39E73_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x56\x65\x63\x74\x6F\x72\x33\x20\x69\x73\x20\x6E\x6F\x77\x20\x63\x61\x6C\x6C\x65\x64\x20\x56\x65\x63\x74\x6F\x72\x33\x4D\x73\x67"), NULL);
	}
}
static void DiagnosticArrayMsg_tA80FD4FEEFB785FA4A52D50B29695648D33258C5_CustomAttributesCacheGenerator_DiagnosticArrayMsg_Register_mF503E6BEC1C526B825175BBF548C308BDB198976(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void DiagnosticStatusMsg_t8C28C3D93DC18364D3E6E309C894BAD23D18A14F_CustomAttributesCacheGenerator_DiagnosticStatusMsg_Register_m89D25E896531DFFCBCEAD8A0E73B4E70D16E4739(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void KeyValueMsg_tA4A6343D29392CE5CEE2B5E4FEBE95F3D5867777_CustomAttributesCacheGenerator_KeyValueMsg_Register_mC52A25CA2AD2B97FB73A2EBB642CD7BDE86E33E3(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AddDiagnosticsRequest_t70BABF7C353949C6EF01179B37E017F5D8C5ED56_CustomAttributesCacheGenerator_AddDiagnosticsRequest_Register_mFF74F9873E7040BAB5959262B1E0ADB80AF6F046(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void AddDiagnosticsResponse_tE7DE82E2DA6CAFC18E1C6AFD15D5170E297E51FF_CustomAttributesCacheGenerator_AddDiagnosticsResponse_Register_mF959BD98F66A5F2B89B0B2D32BA37E73B1F4DD92(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SelfTestRequest_t029ED8256DB879FC828D5C32E83FBA81A496CA8D_CustomAttributesCacheGenerator_SelfTestRequest_Register_m34023AD44E23295F02B784319E1BAF5D6FDEF570(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void SelfTestResponse_tE18C37BF79BFFC2B3F3321F0CB17EC1601570BB6_CustomAttributesCacheGenerator_SelfTestResponse_Register_m633F3E736E8299F3BFFA24610A1BD37E1C6371BE(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GoalIDMsg_t5C38382C8C332D3AB2325D699DB1AC4EEC1B4752_CustomAttributesCacheGenerator_GoalIDMsg_Register_mD09E4F20E01CB6D185E609686933A037196C44E1(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GoalStatusArrayMsg_tB3CF3C8E77DFC1E8CA34A13688560ACEB46F2824_CustomAttributesCacheGenerator_GoalStatusArrayMsg_Register_mB5EB0AFA537ACA64CD1ECA9887B0E1EFAF9B0A3B(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
static void GoalStatusMsg_tA5D516598B30001C1D2F3A2CFF010C6EFEC0102C_CustomAttributesCacheGenerator_GoalStatusMsg_Register_mABBD4E3960FA4D5E670718CBB7F42F2FC2A1B266(CustomAttributesCache* cache)
{
	{
		RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D * tmp = (RuntimeInitializeOnLoadMethodAttribute_tDE87D2AA72896514411AC9F8F48A4084536BDC2D *)cache->attributes[0];
		RuntimeInitializeOnLoadMethodAttribute__ctor_mAEDC96FCA281601682E7207BD386A1553C1B6081(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_Robotics_ROSTCPConnector_Messages_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_Robotics_ROSTCPConnector_Messages_AttributeGenerators[175] = 
{
	MPoint_t92EC1DAF3F256ECB938FBB4D0C1641ECCC3B52A3_CustomAttributesCacheGenerator,
	MPoint32_t36F13BA8869EEBA2FAD2549046224CB95D23CA85_CustomAttributesCacheGenerator,
	MQuaternion_tEEF8569CB80147960608AEB841C303899F549E85_CustomAttributesCacheGenerator,
	MVector3_t788482061BF1B822C084F72B74DBED4B77A39E73_CustomAttributesCacheGenerator,
	LookupTransformFeedback_t8BEB92DAF8383F8E508B2B3EF93ED9FF3DD618C9_CustomAttributesCacheGenerator_LookupTransformFeedback_Register_mCAFBEE2BE72EBD75358800B10AA4D984C6ED1CE0,
	LookupTransformGoal_t2ABB2ABC874B6824B29736D601005B24F16E53DC_CustomAttributesCacheGenerator_LookupTransformGoal_Register_mDB9F053CBB260F698AE861DAE6B113E99E62B15E,
	LookupTransformResult_t5BD0AF7552FBD232CD43294AE88DF4F23CF6E264_CustomAttributesCacheGenerator_LookupTransformResult_Register_mD7F80849A1E47552FBF9E483C98A7F6D867A508B,
	TF2ErrorMsg_tBAACE8B85832A980A4C27A419EF861D39A09EF9A_CustomAttributesCacheGenerator_TF2ErrorMsg_Register_mF76D55101BE5CB2271BCAA97C489228DB0A1F036,
	TFMessageMsg_t1170986BF0DF17FC4CA105FB5D93B9C5C84789C7_CustomAttributesCacheGenerator_TFMessageMsg_Register_m7553EB7075257A6168ED98D3237248499CCF711D,
	FrameGraphRequest_tB964E4AE987858B34872245328E3670BBA3BD12C_CustomAttributesCacheGenerator_FrameGraphRequest_Register_mCCD4E57412E3F1ABB5DFCE255552B8463DCA40F2,
	FrameGraphResponse_t83535475D690057ABDDF923C0C20B7219D7D73C5_CustomAttributesCacheGenerator_FrameGraphResponse_Register_m945CD437D3CE64206725D8444164460B05103B6B,
	ClockMsg_t38C5C28EEB6FE2BF3DCCD7DBFE6C5C1FC5662A2F_CustomAttributesCacheGenerator_ClockMsg_Register_mDF3B9D07CF70B3D6327A06796268027D18B14C5C,
	LogMsg_t2CA32B51EFCC40FC88EA5478D5DD91C247957D63_CustomAttributesCacheGenerator_LogMsg_Register_m6149D3A34B26C68D2CC58F12559AA239042ACBA9,
	TopicStatisticsMsg_tC0D96A783414748300FB76D7480B859E46C86910_CustomAttributesCacheGenerator_TopicStatisticsMsg_Register_m89578501B8278CB3D249B565AC2296D8AA33093C,
	ImageMarkerMsg_t12554A6E781998CDD2993872D9463478A586CA69_CustomAttributesCacheGenerator_ImageMarkerMsg_Register_m4AC14DF0A2C8211A0C42DA7FB3048D8938576D27,
	InteractiveMarkerControlMsg_tC0D9658A9F27B85202EFD25486063E1A03E4F3CB_CustomAttributesCacheGenerator_InteractiveMarkerControlMsg_Register_m4FB38E7FC16E37DF9F04AF086B59BDCF80E71B21,
	InteractiveMarkerFeedbackMsg_tA99FFAD4399C21FF6786A9C7D99A9A817AB7C7AE_CustomAttributesCacheGenerator_InteractiveMarkerFeedbackMsg_Register_m3C68480A883ED386985DB84E609157C3FD051B50,
	InteractiveMarkerInitMsg_t74AB93929B955A982439E55BB0017418A5D9E88D_CustomAttributesCacheGenerator_InteractiveMarkerInitMsg_Register_mAA01B703698AF0C176B5A9610447A2497FBC03C6,
	InteractiveMarkerMsg_tDFF70E1EB5982C23AD0765F37CAB04477ACD0F4C_CustomAttributesCacheGenerator_InteractiveMarkerMsg_Register_mEABE63CF335F09A31FFD5DC0E77FE466E4A39B88,
	InteractiveMarkerPoseMsg_t4CEEDCF1611707062180DBBEB24EA08B7D202CFE_CustomAttributesCacheGenerator_InteractiveMarkerPoseMsg_Register_mF2BB6BD9787A5E330F35E43EF2CE6BE1D593895A,
	InteractiveMarkerUpdateMsg_t491EB28B5F9A18EC7587A21E37C6F6A55D46B707_CustomAttributesCacheGenerator_InteractiveMarkerUpdateMsg_Register_m8A671F2DE6B882B6895C360E04D8F997B681ACFA,
	MarkerArrayMsg_tDB9F28F3622F324A7A471DE4D392B54FE16D8CB1_CustomAttributesCacheGenerator_MarkerArrayMsg_Register_m42C5A5362F93A516C35A3406F25571DBA44475C4,
	MarkerMsg_t118455A1AD309CC44BB928D9733DEC023E2BAA4B_CustomAttributesCacheGenerator_MarkerMsg_Register_m9934C959266D3BBCC9EEA2E8C4C285F8FCBCB757,
	MenuEntryMsg_t76CBD4F3C441AB2FA4254AC0C6140353445265C7_CustomAttributesCacheGenerator_MenuEntryMsg_Register_m8C8925597DCF0C00C2C671259F95FFEA40DCC995,
	GetInteractiveMarkersRequest_tE1A2AD1C1C3C8C736BDAA0702E0DDB3428A0DF6D_CustomAttributesCacheGenerator_GetInteractiveMarkersRequest_Register_m9BD25A07931EB83F4066647F689082D3C947DAA4,
	GetInteractiveMarkersResponse_t04F31E3FD82DA3CAA4AA8E6144347B42DF038589_CustomAttributesCacheGenerator_GetInteractiveMarkersResponse_Register_mB52EC6B6175D31BAE95D43C3AF1030DB63BEE889,
	JointTrajectoryMsg_tFA94D483F7D630936B15DC7A30C1AFBED4D535A9_CustomAttributesCacheGenerator_JointTrajectoryMsg_Register_mC642D61E9216B301C3D2198230C3FE8AA53CA47F,
	JointTrajectoryPointMsg_tB273DC8B04A6199AD97AE157A0B6C3F40D4B32FC_CustomAttributesCacheGenerator_JointTrajectoryPointMsg_Register_mDF2662AB0DF6C251D3C0BAAC8DC5443B6BA66425,
	MultiDOFJointTrajectoryMsg_t538FA90BE2896B9CB3049FEC0F292D4FA82CEFCC_CustomAttributesCacheGenerator_MultiDOFJointTrajectoryMsg_Register_mF3A2A90E7B82BE8B247A9A5411B7616A66D933C5,
	MultiDOFJointTrajectoryPointMsg_t57A3A44349B6C24A7BC74DE087B1FA4F1EB3EE8B_CustomAttributesCacheGenerator_MultiDOFJointTrajectoryPointMsg_Register_mECD2373F89507433685F87A0D72970E6316A6C59,
	DisparityImageMsg_t7B550F77267147774A1D78F6528248C46A8B201E_CustomAttributesCacheGenerator_DisparityImageMsg_Register_m773916D24418CBD1BF30FED1461C48A543AB8C57,
	MeshMsg_t1D38CDB70F0719DFB2F055E3757E5409CD5AD2AB_CustomAttributesCacheGenerator_MeshMsg_Register_mA5C54DF22140D82B67371787302303FA412CB305,
	MeshTriangleMsg_tC22A927D7DA1E62FE7EEA7C99B621BBFA0DA1327_CustomAttributesCacheGenerator_MeshTriangleMsg_Register_m9A4314E0775614AA04C5F80764D9E5EA4B15C084,
	PlaneMsg_t60992C28F8DF365642A2D31606A50B4DB949BD4B_CustomAttributesCacheGenerator_PlaneMsg_Register_m9FDC0135445920249488E670783D3013FC47B8EE,
	SolidPrimitiveMsg_t02AB49B76151C6BF4E133117232CBACE18FC66DD_CustomAttributesCacheGenerator_SolidPrimitiveMsg_Register_m97184A4BE5C51E8C30B60B6D5BAE341D9C62827F,
	OctomapMsg_tF21405491A08C6D90CB15F178B3551FA6600D4CD_CustomAttributesCacheGenerator_OctomapMsg_Register_m83AB64247441688FEB643D9811500E666F67B485,
	OctomapWithPoseMsg_t1A4AF0F844EAF262B78EE67C9D329BA7615635A0_CustomAttributesCacheGenerator_OctomapWithPoseMsg_Register_m30F66311D378814905AC3CD0EEAC370EF9ACF7BA,
	BoundingBoxQueryRequest_tADBD0DDB4F6D055AF128DA24863B9BA36D47A252_CustomAttributesCacheGenerator_BoundingBoxQueryRequest_Register_m0E4B4D1DB719396D66FA5CBFDDCD932124BF9B92,
	BoundingBoxQueryResponse_tBFA3E424BF8FEBB21CBF1CA50488CDA4B5CA87ED_CustomAttributesCacheGenerator_BoundingBoxQueryResponse_Register_m51A2C811B189A37B4C3092E580F1A9A8738E6F2C,
	GetOctomapRequest_tDC6C0034065CB1270B75F575BDA114F08493E88A_CustomAttributesCacheGenerator_GetOctomapRequest_Register_mAE63FE9F58612126AD6B40FDDCFBB84EE9445568,
	GetOctomapResponse_tC4A7BEE42CC57492186060A8B08D8A42FEAABA27_CustomAttributesCacheGenerator_GetOctomapResponse_Register_mA664DDF242A63848594F00A4DD98096C77455FE0,
	ObjectRecognitionFeedback_tD1D10A3E1F26F512B335F104EF81EA29D4708D07_CustomAttributesCacheGenerator_ObjectRecognitionFeedback_Register_mF27CFF37CBA6D4ACC6CC5B899376C56DB4B66984,
	ObjectRecognitionGoal_t2DAF9B49C3FB5C4AF21769330B4D87908F60A4FC_CustomAttributesCacheGenerator_ObjectRecognitionGoal_Register_m21C400276708E7E7C66E6926757679DC1C17652F,
	ObjectRecognitionResult_t61447536102A1AB57BF27AC1522C29841FD15C8D_CustomAttributesCacheGenerator_ObjectRecognitionResult_Register_m7E3B09B2723DF0E16F892141F2EF6FEE20828C51,
	ObjectInformationMsg_tE7D2C3C50B59CEB42B4AA99DD3E3B10AAE6D69BC_CustomAttributesCacheGenerator_ObjectInformationMsg_Register_mF43A953D7260DB19B4A1D4046D1401ED0FBEBD82,
	ObjectTypeMsg_tD930C11B9882022739816B02837FAB20E50E2940_CustomAttributesCacheGenerator_ObjectTypeMsg_Register_m97771C2E57013739B11018E83C8512C0D2D70D19,
	RecognizedObjectArrayMsg_t5E2F8D91C73FA7C6E8DD99BD5FC6287451A553CD_CustomAttributesCacheGenerator_RecognizedObjectArrayMsg_Register_m5A20E8F8A649F1E795179EE58CCB33BE7999D19B,
	RecognizedObjectMsg_tD33A6C1DFB78FFAD84ABF402F1465FCB30DE45C3_CustomAttributesCacheGenerator_RecognizedObjectMsg_Register_mC3CB3EBBDE46CD8977C688E66A78788E6DEA103D,
	TableArrayMsg_t49370E2BB44BAC3485FC77FD7A2D62549CE134E6_CustomAttributesCacheGenerator_TableArrayMsg_Register_mFA2DF5434CA927F1ED2B009EF871B39C43E399A4,
	TableMsg_t310756EFA247989B20F34ACAC0BCE89840FC273A_CustomAttributesCacheGenerator_TableMsg_Register_mFB078BDEBB22844EB748440968F848E20E68BA98,
	GetObjectInformationRequest_t985CB2D114E6B1619319862292C2834E23F9EE24_CustomAttributesCacheGenerator_GetObjectInformationRequest_Register_mE73BCD9D2CAAAC0AD2A89E9F053DF4125779F914,
	GetObjectInformationResponse_t8C87B01117BCD31603DBED2B5E5B3C7092A2D7CB_CustomAttributesCacheGenerator_GetObjectInformationResponse_Register_mFF4BF782EC6A330C395A94FE43CB878457A9D074,
	GetMapFeedback_tF047B17A586EB8814E04F8274EE5C9EE8A95B5C3_CustomAttributesCacheGenerator_GetMapFeedback_Register_mE5056B1504673EBEA19B7DEC92712A4A726DD815,
	GetMapGoal_t2DD6AF429F193B0F02FD8A192F7D2F8BD0F74282_CustomAttributesCacheGenerator_GetMapGoal_Register_m03E988E59A2F4FCF2D7CC32479C239C746D423B8,
	GetMapResult_t477E7FAD04B7D00E5D0010EAC82DCFD61D376CE2_CustomAttributesCacheGenerator_GetMapResult_Register_m01637B147DC843F9ED51370DBA66D56E1E29707F,
	GridCellsMsg_t0F353C70322B4ECCE644C87D907020969C9D345C_CustomAttributesCacheGenerator_GridCellsMsg_Register_mEC08687623B9320AB736A4305B454B818315CCD0,
	MapMetaDataMsg_tE12B779EA0F5F3B2D300F17B9E56BF696E4CD632_CustomAttributesCacheGenerator_MapMetaDataMsg_Register_m54CD541D854AABCA0B0EEE6659A22E24C2B946AE,
	OccupancyGridMsg_tBABE370849746E0B9538F404C110F2CCDE877C54_CustomAttributesCacheGenerator_OccupancyGridMsg_Register_m6BB44910D79D47AE8F5DFAE761B54CFF7E61AFF0,
	OdometryMsg_tC3C114BE93257B9A729C34EB84893A96E6A4C217_CustomAttributesCacheGenerator_OdometryMsg_Register_m61E8CE2127431915FA2561DBF2D3302ADCE04C10,
	PathMsg_tC92434519D422DFD59555D7DF40DB7C497CD8806_CustomAttributesCacheGenerator_PathMsg_Register_m8EF6247BC9203B1899DC236957FB7BFE8391691A,
	GetMapRequest_tE1DD0040A38586223F84543E40884C083B1CF457_CustomAttributesCacheGenerator_GetMapRequest_Register_m562DE0246352F99633992E4FB6BF86E3EDF9575D,
	GetMapResponse_tA05C96AB7BFAB1C654E7316D0D54137745A3F1A4_CustomAttributesCacheGenerator_GetMapResponse_Register_m7EEFC73B94654672191BC2B9F45D056D5AD95863,
	GetPlanRequest_tAFF4C080630B18C427B09D4703229F8732E3AA07_CustomAttributesCacheGenerator_GetPlanRequest_Register_m2536C9070400D8EC8967C8832600FF0C9391FC7B,
	GetPlanResponse_tE08A5A11C57D0E572208BCF8FA107D8C907F3D0E_CustomAttributesCacheGenerator_GetPlanResponse_Register_m811739BF18C54AC6788113702BDD2478ECAC5624,
	LoadMapRequest_t7AE312174E68C63C23308CB6AB75B2F05F4E37A9_CustomAttributesCacheGenerator_LoadMapRequest_Register_mDE1CA24EEDC29301B69C085F20059BCF317A578B,
	LoadMapResponse_t46E6FE1EADB7D1C3811347245E41FA74F21DD88A_CustomAttributesCacheGenerator_LoadMapResponse_Register_mE708F2B0A8D7E2C86A9685577C17D50D59B7B626,
	SetMapRequest_t42D121C6CCCDC899DBE3ADF7A716F972EBDE3509_CustomAttributesCacheGenerator_SetMapRequest_Register_m8B703E7B343F95461DEB77C85E7B3C817B34DA6C,
	SetMapResponse_t7360C1579FD2BAEBAD3180C0C24AF2E2F83318FE_CustomAttributesCacheGenerator_SetMapResponse_Register_m0F30D7E6212F826E17C864D06ECED8CE70E2DEA1,
	HeaderMsg_t5480B879B133FEE83B5D8B1E10D33EB1CC06C7DC_CustomAttributesCacheGenerator_HeaderMsg_Register_mAF46A7F1DB84B557EB7AF62BBE0B4EDE53BC5244,
	BoolMsg_t444688F9348E01F45542274280471713F4A9B9DB_CustomAttributesCacheGenerator_BoolMsg_Register_m6A020615DEB4C29868A1455709C95142F3EF5A80,
	ByteMsg_t9406E81C95620F3E2BBDE02A06417015203E74C8_CustomAttributesCacheGenerator_ByteMsg_Register_m41EC62B506E791586156EE629E235EE6985CB15D,
	ByteMultiArrayMsg_tCBB0C46F4A1ACAC1593626F3D6AD0E0B4568FB2C_CustomAttributesCacheGenerator_ByteMultiArrayMsg_Register_m1080DD8502D1A01CE09DD3B52E38BA19B79C72E9,
	CharMsg_t7C76020B5A656F5515F30A2F89B480CAAFF22F7D_CustomAttributesCacheGenerator_CharMsg_Register_m8A78F532AFEF682B89371514AEF56A071A80D866,
	ColorRGBAMsg_t6BA76AF03A95FC81D0F1846D08CC735133E62482_CustomAttributesCacheGenerator_ColorRGBAMsg_Register_m96012614633CD038532D39BA713D5A163DCFADAA,
	EmptyMsg_t791F716EDB38A00CB9B82C72388579CA246AA8FA_CustomAttributesCacheGenerator_EmptyMsg_Register_mB38AEEFD5CF35696E104BAC2536D50C2D25FBEA4,
	Float32Msg_tF5EF25C6E58E35B612EBBCE559892F36A6834A5C_CustomAttributesCacheGenerator_Float32Msg_Register_mF2E8AB0E5BC6BAF5497DF2680B2F0843204B3B84,
	Float32MultiArrayMsg_tABEC146FE79FB3EA329C41F66E73DF8CF7761D99_CustomAttributesCacheGenerator_Float32MultiArrayMsg_Register_m572B50345C7976D8FCAB0CB3A7F03B82C7429F80,
	Float64Msg_t57CF5D88FA19A3EEABD96FA7A04702F091E4BD31_CustomAttributesCacheGenerator_Float64Msg_Register_mE9FF4201A946C84A7A658048A29401DD008F77B5,
	Float64MultiArrayMsg_tE7BC83D718F4D8B60E71BD7A8F103C3E55F6F011_CustomAttributesCacheGenerator_Float64MultiArrayMsg_Register_m099E26A501D8CF017FB983CF07063501B39AEBF0,
	Int16Msg_t96609AF86BF518E95D0BAA40E263DA409F95645B_CustomAttributesCacheGenerator_Int16Msg_Register_m6C149ABD10F023E53D49F9FB195D914E07E15030,
	Int16MultiArrayMsg_t9CAA8E56CB3A47F7EF7792309482AF61243533CF_CustomAttributesCacheGenerator_Int16MultiArrayMsg_Register_m9299FB257EF7606C5F55C2C06F88B1262EE79EB0,
	Int32Msg_t48ECAA95976C26C09183F6665DAF046F30DD12C3_CustomAttributesCacheGenerator_Int32Msg_Register_m6E6A7433DD0390A30A91EB67A1A5608E8C1C7EDB,
	Int32MultiArrayMsg_tDC8AD4BFF3868A04944B1A94727039E4521A748D_CustomAttributesCacheGenerator_Int32MultiArrayMsg_Register_m1AB6DEDEA03485122F1900009D82257F0A66205A,
	Int64Msg_t81ECBE6EC83A6697D48BE33CCE1EF8B212D039F7_CustomAttributesCacheGenerator_Int64Msg_Register_m0C94928B7418B5A60851E06836AF789D011C57CB,
	Int64MultiArrayMsg_t0227B421A509B092423033ED93C273AECCF27879_CustomAttributesCacheGenerator_Int64MultiArrayMsg_Register_mF262048E5934B94E71A57A9C392A0D1AE84ADDD1,
	Int8Msg_tC619A5C771DCA9C4DE10BB36AA1F7DC6ECBE2F56_CustomAttributesCacheGenerator_Int8Msg_Register_m3312A90DBA9298E43C2095000E0D758965D30739,
	Int8MultiArrayMsg_t8D9B2C709AB868701C56FF473489BD21F352DC02_CustomAttributesCacheGenerator_Int8MultiArrayMsg_Register_m2634A6C484A998E47BE6421D577172DB83B786E4,
	MultiArrayDimensionMsg_tAE3C238CED3C2C927B9F460945D64AF4728FE74D_CustomAttributesCacheGenerator_MultiArrayDimensionMsg_Register_m0173DC62F03783DF75BA37069B4D191210780734,
	MultiArrayLayoutMsg_tA3ED3517CC669A97BFC60CFEA1DDCA7960ED5B7D_CustomAttributesCacheGenerator_MultiArrayLayoutMsg_Register_m65600904126832CDEDA4C7B8253E6950DFE63F0B,
	StringMsg_tB09089629A1BCAD0C7D5858CCFC6FDAD5A9BF898_CustomAttributesCacheGenerator_StringMsg_Register_m596AE9EF030D4ABC380C7468E34E1C17603ACEED,
	UInt16Msg_t44765C7548BE83586E07BEC9A6BCA1EF9AB1450E_CustomAttributesCacheGenerator_UInt16Msg_Register_mB3745F6514E7399ED1AD18614BB927659D604B55,
	UInt16MultiArrayMsg_t3761D1CE60675E051FB47D43E6C61E196C3A8B45_CustomAttributesCacheGenerator_UInt16MultiArrayMsg_Register_mB49E6B959E80B5D87EC4EF16D0DC05163A66ED44,
	UInt32Msg_t973AEEDC69C39FB32E91BF0E2002FB25558EDF44_CustomAttributesCacheGenerator_UInt32Msg_Register_m3A77D93D98F7A1BFAAAF72D318A3C924D99D5041,
	UInt32MultiArrayMsg_t2B74F7E11E8540B1373297DDFE2B350307D60390_CustomAttributesCacheGenerator_UInt32MultiArrayMsg_Register_mC88E9C465B37C2297A20729B8A6C3BCDB9CC1205,
	UInt64Msg_t99A563F80EB2058981064806B4435BAE021A1E70_CustomAttributesCacheGenerator_UInt64Msg_Register_m73683B5145D8CF2964C17AC5D20E98B98EAA3D9F,
	UInt64MultiArrayMsg_t1BD06ADB661B0D52DB41F6D7C3D74EF3B78D0A52_CustomAttributesCacheGenerator_UInt64MultiArrayMsg_Register_mE25C899BC353DB07D608179E33F9DEFB5D82D3B6,
	UInt8Msg_t64B456F212ED22CB2355F1E7AA1FDEA8F91D1230_CustomAttributesCacheGenerator_UInt8Msg_Register_mC8FBD394357FFE6272220BD5A9905C2FE0AA3E5A,
	UInt8MultiArrayMsg_t09A78555AB848F1C55A317BEFB18AF676030BB3C_CustomAttributesCacheGenerator_UInt8MultiArrayMsg_Register_m986AC3B8C62AD3AAA259FB93746009444FE73F89,
	EmptyRequest_t557B2012074607091EC3F8A95EA95FE976415B37_CustomAttributesCacheGenerator_EmptyRequest_Register_m9F1D5C84FD6A2591B531E603E3D915D25BF9101E,
	EmptyResponse_tD5C83D3DC4CD21B498103C7EC5C930C456C0B69A_CustomAttributesCacheGenerator_EmptyResponse_Register_mCC5A9A402DAA00EECF3B9448CB3602AE01E52356,
	SetBoolRequest_t93FA2B0F2DCAC299C9D9E78E71C899558E64A2D9_CustomAttributesCacheGenerator_SetBoolRequest_Register_m594F84F595A2B5935073DD6D4090034458E1B5AA,
	SetBoolResponse_tCC7F06A4DC5EE314F650878B071A71F8DEAEF9FA_CustomAttributesCacheGenerator_SetBoolResponse_Register_m8FDCC6C1A75933C399449B123A2E2E5034DBB8D5,
	TriggerRequest_tAF125F60051F3A127DD290D0E88F1C1950D61468_CustomAttributesCacheGenerator_TriggerRequest_Register_mE080CCCD0CC7B5F09EBB49F05A23DA63C475C2FA,
	TriggerResponse_tA31841E0633ABE04A59718C33EA4F23F1CE5B6D7_CustomAttributesCacheGenerator_TriggerResponse_Register_m904CFB3AF1A874B9B6B1C69A2AA97EAFD651AB08,
	DurationMsg_tCA0ADB3CFC582A35D7CDF71594EC4771649F296F_CustomAttributesCacheGenerator_DurationMsg_Register_mAA99857785BD15EC29D90FFC89C911BE338AEED3,
	TimeMsg_t7629FD1413F618167E7FE6498A49D9356EFED7B1_CustomAttributesCacheGenerator_TimeMsg_Register_m981B24BA0136EE677AAC7B9BC4298E657653F1D3,
	CameraInfoMsg_tCB50006A43F482A34AB19DE1D78DB7AF22BE5D3D_CustomAttributesCacheGenerator_CameraInfoMsg_Register_m887E0C6BB0975DCA465D00C7B780503047F98459,
	BatteryStateMsg_t90233A667F0367554E8FFAB60B24A32C6B6CDC64_CustomAttributesCacheGenerator_BatteryStateMsg_Register_mE80D61711B15FB5E1779AE115CAEE96218301683,
	ChannelFloat32Msg_t522F111DC04D12DF9B2EF8AE89F3128447CC1DD0_CustomAttributesCacheGenerator_ChannelFloat32Msg_Register_m296B2BFF51DC0B407AF8F010B5005543BCF1BC86,
	CompressedImageMsg_t5723AFCFF6AE44429780D9E2AE4DFD57E5007ADC_CustomAttributesCacheGenerator_CompressedImageMsg_Register_mC71CC49FB0DC0D38063AF15686A7D5B578A98A5C,
	FluidPressureMsg_t8510C1B53F8C765F52C694305651FDE89F7818B3_CustomAttributesCacheGenerator_FluidPressureMsg_Register_mD687A01193A12936FB5D85AD303E208492F33B15,
	IlluminanceMsg_tC5240841334755F85C0D75890446BA904B34FD16_CustomAttributesCacheGenerator_IlluminanceMsg_Register_m96E857F926C3F90E69F943285AD50DB8D30CD6DB,
	ImageMsg_tC54BDF10A64C705ED1A53A71CF2CBF61F4EDC4A1_CustomAttributesCacheGenerator_ImageMsg_Register_mF73C6E0082FD811A966E40AB28BD37F73B5D9C9E,
	ImuMsg_tFD4E5B4B21567CFC3C05AD5CECB354E1633CAEEF_CustomAttributesCacheGenerator_ImuMsg_Register_m6CF9B02ECA1AFCC29128ADECE37EF1676DC63D0B,
	JointStateMsg_t62BC4F9220EB2001A1F8066085C359E8316B894C_CustomAttributesCacheGenerator_JointStateMsg_Register_m1B8794E7F347016234213442B009D0DECDFA59CC,
	JoyFeedbackArrayMsg_t0534BA48B5B96674C17CA6B47C5DF79129525BB8_CustomAttributesCacheGenerator_JoyFeedbackArrayMsg_Register_mFCECC28F2F3F941B799E4DD3786A899F106602E8,
	JoyFeedbackMsg_t5755F90DE75B678CC1928B15F148CB1FB1437AEA_CustomAttributesCacheGenerator_JoyFeedbackMsg_Register_m4DC98D920493A6A3F1F9D74D6CAA2FE13012319A,
	JoyMsg_tB366EE19D51BE975574C7734187B7B5BEE838F0D_CustomAttributesCacheGenerator_JoyMsg_Register_m953E347FEA27F01DF697827958C27047E2CEDC66,
	LaserEchoMsg_t5109FBFFF8D157209C9E82EB9F568DCAA863507F_CustomAttributesCacheGenerator_LaserEchoMsg_Register_mF6DADB953546B337A28EAF5973051CC1348C7A00,
	LaserScanMsg_t7B1788F530E3BEB2C34962884D24471426C6F7D9_CustomAttributesCacheGenerator_LaserScanMsg_Register_m92A63662B02BB8DB4D916E33162DAE84B8BB4932,
	MagneticFieldMsg_tCDB59540B571C0199A41AE793A5DE362EF61A55C_CustomAttributesCacheGenerator_MagneticFieldMsg_Register_mC261840B77B27B7862C4E63668EF72A69ED361CB,
	MultiDOFJointStateMsg_tE55B6560085658138CABDA328F49859751EE1B5B_CustomAttributesCacheGenerator_MultiDOFJointStateMsg_Register_mF4E1A14F48EF9780EF1FF6E8B5BE5FDBE325243B,
	MultiEchoLaserScanMsg_tBA7D9FAB4BD29F87BC37EF3E3DD4E5636610841F_CustomAttributesCacheGenerator_MultiEchoLaserScanMsg_Register_m97BA93E0120DB60DE44BF139779890CCAA4E54F5,
	NavSatFixMsg_tFC83CD234FECCC356D062F6D5EEAB6B437FCCB85_CustomAttributesCacheGenerator_NavSatFixMsg_Register_mED39C9B20AFA6156D6F05AB83F11CB40683411E7,
	NavSatStatusMsg_t16EEFDCA0BA67EC89490B8B81992C6A955E3D06E_CustomAttributesCacheGenerator_NavSatStatusMsg_Register_m639832A014EB360075B6E7FADCA7B1C945A4D293,
	PointCloud2Msg_tC94B580EC8F29DC86FB4CB9D9551DFB86D170F02_CustomAttributesCacheGenerator_PointCloud2Msg_Register_mEF4193ABA2301C800D71FE76C5EDDA7770FFA121,
	PointCloudMsg_t0A2955C0B20A4DBD9DCC1AA7F6F1A9000F6550B9_CustomAttributesCacheGenerator_PointCloudMsg_Register_m3D5CDCC7BB0E66508B1F88BFBCF49290FB67DE8D,
	PointFieldMsg_t412B6A8BE2F3E3211DA8069EED6C4D28E92838E8_CustomAttributesCacheGenerator_PointFieldMsg_Register_mF878AC88C3553EAF0CFF3DB5DABB8BD85AA36EF2,
	RangeMsg_t993BEB0B5147CCB9B77090D2ED1A3ED446C39E80_CustomAttributesCacheGenerator_RangeMsg_Register_m085F6176E4556FFB7ADEAC64E739DFF7465B7493,
	RegionOfInterestMsg_tD23CC8CD20DDE1D1F7A67FFC7C32D6049E940F87_CustomAttributesCacheGenerator_RegionOfInterestMsg_Register_m773246E5C72D3D32E0BA72822398819B44E47675,
	RelativeHumidityMsg_t57E40B8E9CB63ADE4B4E5991DC5BDFAADAB12120_CustomAttributesCacheGenerator_RelativeHumidityMsg_Register_mDBDB3D71CB4E32397484B919156A425226008FCC,
	TemperatureMsg_tBCCC328EBB5348244CED6546754AADA639D8C63B_CustomAttributesCacheGenerator_TemperatureMsg_Register_m7CB9B02AB93CEEC8372D9D1200D34E627BC1C5FA,
	TimeReferenceMsg_t7FE2356CAB7FA25C9AB3E61A21359A5B33B25C04_CustomAttributesCacheGenerator_TimeReferenceMsg_Register_m24F485141E5706DBC89576DB2B18F22BCCDC4E4F,
	SetCameraInfoRequest_t38E3F56CC447B479588BB8FD1183EE39642B9D59_CustomAttributesCacheGenerator_SetCameraInfoRequest_Register_m8AFD0AA938DD21D9A03FFAE111C4DC29804AD98F,
	SetCameraInfoResponse_t964C68D1FB642826BAE3FF6BD5F6B5788C974DCE_CustomAttributesCacheGenerator_SetCameraInfoResponse_Register_mFE5FF5537C4A9F944D7DF8F02214024751C1ADEC,
	AccelMsg_tF60EB6EBF6216373E1F66673BCB44DB3E5AA1C30_CustomAttributesCacheGenerator_AccelMsg_Register_m6ECB5827ADBD2B666156DB21224F9FACF3E69580,
	AccelStampedMsg_t7A915022B020F9711672075F396AAA8459312507_CustomAttributesCacheGenerator_AccelStampedMsg_Register_m6545FF5F888CF2237DF3CDF09D1691D2B73A6923,
	AccelWithCovarianceMsg_tDF2F4D93E01C4E4C7C8B591BB293B1F2471A6E50_CustomAttributesCacheGenerator_AccelWithCovarianceMsg_Register_mA032586FB16565065432701A01B2F49DC407B877,
	AccelWithCovarianceStampedMsg_tBA1A3539DCC04685CBA6C527F20A6FFB15E35AB9_CustomAttributesCacheGenerator_AccelWithCovarianceStampedMsg_Register_m80B14FE15953AE35CE67698F997EB7BE06712809,
	InertiaMsg_tD73719465975C6AEF3D5F5AA99A616F5F8145F52_CustomAttributesCacheGenerator_InertiaMsg_Register_m6CC5795F49AFF9CF1AE05E2FB544FA079CDCDFBE,
	InertiaStampedMsg_t49DDBA58165A5DB2D0863E7674A43C790667C51F_CustomAttributesCacheGenerator_InertiaStampedMsg_Register_mE4472EA786B796CDB799262986EF5E88D5588F35,
	Point32Msg_tE4185EC13AC9D24A041A6ACAE8B4F2BF5F182A49_CustomAttributesCacheGenerator_Point32Msg_Register_mBB122CFFF16D62E9BC0B905457D39EFD00C0AB35,
	PointMsg_t37A31157DA5C3DA553C1E0B5A07E46F53C9244DD_CustomAttributesCacheGenerator_PointMsg_Register_m90B136B19C936176C1304FEEF959F0F03F9A93E1,
	PointStampedMsg_t976C10E0C9743D7D3E51C18FDB3777383946FE45_CustomAttributesCacheGenerator_PointStampedMsg_Register_m6E0499A45A0A209381FE6035F1C38498FDC2A6DD,
	PolygonMsg_t41D973D461735968793724F76166F2134DF07A1A_CustomAttributesCacheGenerator_PolygonMsg_Register_mEA9FB2D969A9F27FC868D7F2D4FF66B86120A1EE,
	PolygonStampedMsg_tF296A67358705E38ACB347B62538FC1D3A72D2F8_CustomAttributesCacheGenerator_PolygonStampedMsg_Register_m3B257BDFC0C44EAA401E3EC5EA73CEA4D71CB680,
	Pose2DMsg_t931139EA1242DEAD381C605AE76B43F6A6887911_CustomAttributesCacheGenerator_Pose2DMsg_Register_mA3374D8B224429764C65FD55A3D036B5FE751A2D,
	PoseArrayMsg_t1EAC5FDF143C0B3AD3DA4279AC8D9F0C41F4825C_CustomAttributesCacheGenerator_PoseArrayMsg_Register_mA3A57C25EB2083B533370F6BFF16859F19D3CDFB,
	PoseMsg_tBC959A342713CFAE611FA20D9FB44F8F82BFE3B4_CustomAttributesCacheGenerator_PoseMsg_Register_m92BF09B3AC0B1EDA2B14554EFA9903AF8472F7F0,
	PoseStampedMsg_t53F57E07E85481C285309DCB594CB5A550FFE70D_CustomAttributesCacheGenerator_PoseStampedMsg_Register_m563D52B89ACC61FFA99C2DF40F2DE8B217AE2F79,
	PoseWithCovarianceMsg_t73F74334F250603747EC6F6BE6C108EF3869C4F7_CustomAttributesCacheGenerator_PoseWithCovarianceMsg_Register_m2047216803C5D2BF89BCB016668BBAC11F712C63,
	PoseWithCovarianceStampedMsg_t475E25D4F58B6453436E2B47B71249B43E273E7A_CustomAttributesCacheGenerator_PoseWithCovarianceStampedMsg_Register_m3455975DD1EDBD688604B06AE59F879FE64967C8,
	QuaternionMsg_t6D64DDB209CE179DFA7A4DC9DB7A8655D2DE7AEF_CustomAttributesCacheGenerator_QuaternionMsg_Register_mBDBF429F884D7B40C6158D295FB7FAB1CC95ED53,
	QuaternionStampedMsg_t1B0AF4FAD13D862A49EAB030E55CF59BD4261971_CustomAttributesCacheGenerator_QuaternionStampedMsg_Register_m2089FBCAD4ECEDEB698424AA5A231F40F5B42F97,
	TransformMsg_tC91498DF69DAAB185B6CD8A2FADE989DAD4B7E42_CustomAttributesCacheGenerator_TransformMsg_Register_m246EFF789FA282256EF49A4C5CB658F7D4BBE1A0,
	TransformStampedMsg_tDB1B3C7641B3603DF5DFE8EBFC9FB73039D00111_CustomAttributesCacheGenerator_TransformStampedMsg_Register_m12927CE3D8B859C062AAC69EC50CB5DBA002BBA7,
	TwistMsg_t69A32638DD98899C2C882FDA4B7EB0A2DB7AF1D5_CustomAttributesCacheGenerator_TwistMsg_Register_m22B86842AB8519BB4100F9C72A0AD22E168C0D03,
	TwistStampedMsg_tAE4CC14273DF1C9D2DB26EE1E1D211304C36ECE5_CustomAttributesCacheGenerator_TwistStampedMsg_Register_m82FDF270E75AF7EF9B3DF048EE284A66ACFA8D03,
	TwistWithCovarianceMsg_tE502230CA2B6E0BE8D337AB178BC90E5AC479167_CustomAttributesCacheGenerator_TwistWithCovarianceMsg_Register_m62B073CBADB7B460FE2480A30E95CF010BD2E313,
	TwistWithCovarianceStampedMsg_t8D30F9565275E7BAD6C18B066F6E54251CB32BDD_CustomAttributesCacheGenerator_TwistWithCovarianceStampedMsg_Register_mADC95D7EA0AC5550004F49376A13853CFCEF0F5C,
	Vector3Msg_tCBCD65904A6F361B28241F88BE5F4D8D674CE4E3_CustomAttributesCacheGenerator_Vector3Msg_Register_m7DDD109FF8522D88281E2E5DE3E574955156C59A,
	Vector3StampedMsg_t02ACDA5B48B521C2E77A2AF924EF8973234C9CF7_CustomAttributesCacheGenerator_Vector3StampedMsg_Register_mEB06361A4D782DF276C73BAD8C17DB4A29E822C7,
	WrenchMsg_t0DB3DC96CCBAF70A31920B63A2B54EB2A12568C9_CustomAttributesCacheGenerator_WrenchMsg_Register_mBF7475EF8DBC22B28ECFCD5EF8AF6BBD069253B6,
	WrenchStampedMsg_t5B1DE74FF30790DEDD1270711CC5D780BB2F7109_CustomAttributesCacheGenerator_WrenchStampedMsg_Register_m4DE67D784FA333F1474682C006B903E4D11918E2,
	DiagnosticArrayMsg_tA80FD4FEEFB785FA4A52D50B29695648D33258C5_CustomAttributesCacheGenerator_DiagnosticArrayMsg_Register_mF503E6BEC1C526B825175BBF548C308BDB198976,
	DiagnosticStatusMsg_t8C28C3D93DC18364D3E6E309C894BAD23D18A14F_CustomAttributesCacheGenerator_DiagnosticStatusMsg_Register_m89D25E896531DFFCBCEAD8A0E73B4E70D16E4739,
	KeyValueMsg_tA4A6343D29392CE5CEE2B5E4FEBE95F3D5867777_CustomAttributesCacheGenerator_KeyValueMsg_Register_mC52A25CA2AD2B97FB73A2EBB642CD7BDE86E33E3,
	AddDiagnosticsRequest_t70BABF7C353949C6EF01179B37E017F5D8C5ED56_CustomAttributesCacheGenerator_AddDiagnosticsRequest_Register_mFF74F9873E7040BAB5959262B1E0ADB80AF6F046,
	AddDiagnosticsResponse_tE7DE82E2DA6CAFC18E1C6AFD15D5170E297E51FF_CustomAttributesCacheGenerator_AddDiagnosticsResponse_Register_mF959BD98F66A5F2B89B0B2D32BA37E73B1F4DD92,
	SelfTestRequest_t029ED8256DB879FC828D5C32E83FBA81A496CA8D_CustomAttributesCacheGenerator_SelfTestRequest_Register_m34023AD44E23295F02B784319E1BAF5D6FDEF570,
	SelfTestResponse_tE18C37BF79BFFC2B3F3321F0CB17EC1601570BB6_CustomAttributesCacheGenerator_SelfTestResponse_Register_m633F3E736E8299F3BFFA24610A1BD37E1C6371BE,
	GoalIDMsg_t5C38382C8C332D3AB2325D699DB1AC4EEC1B4752_CustomAttributesCacheGenerator_GoalIDMsg_Register_mD09E4F20E01CB6D185E609686933A037196C44E1,
	GoalStatusArrayMsg_tB3CF3C8E77DFC1E8CA34A13688560ACEB46F2824_CustomAttributesCacheGenerator_GoalStatusArrayMsg_Register_mB5EB0AFA537ACA64CD1ECA9887B0E1EFAF9B0A3B,
	GoalStatusMsg_tA5D516598B30001C1D2F3A2CFF010C6EFEC0102C_CustomAttributesCacheGenerator_GoalStatusMsg_Register_mABBD4E3960FA4D5E670718CBB7F42F2FC2A1B266,
	Unity_Robotics_ROSTCPConnector_Messages_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
