#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t9B09E145338E5053E03FE6190E5D1262CF40AA35;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct KeyCollection_t3B3CAAE24991BE4B813EE85C819FFF23E39EA958;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct ValueCollection_tE1B5AF0FE26F4E7D5782662BD045F02784E917BD;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct EntryU5BU5D_tA4800D9FFBD3D36FCCD5CE4342BFAFAAADF729BE;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralAA85FF4E5A7BD42CAFF8E40C42EF0FDF21AF42E2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB9AC12075A67F6AFEE845A1ABFEE8A81A27AC226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m5413721225D9B516B069CB3126DBE04E4241D3F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_SerializeTo_m6775308DA7FB6C266F439066EF5AF1C3905E2F99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_get_RosMessageName_m18A983C312C193CE76D87C1FFE5AE9D45BF961EF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89;
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1CD2312296BE33B52450C6B62469DDEB7EFB5D2C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>
struct Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA4800D9FFBD3D36FCCD5CE4342BFAFAAADF729BE* ___entries_1;
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
	KeyCollection_t3B3CAAE24991BE4B813EE85C819FFF23E39EA958 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE1B5AF0FE26F4E7D5782662BD045F02784E917BD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___entries_1)); }
	inline EntryU5BU5D_tA4800D9FFBD3D36FCCD5CE4342BFAFAAADF729BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA4800D9FFBD3D36FCCD5CE4342BFAFAAADF729BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA4800D9FFBD3D36FCCD5CE4342BFAFAAADF729BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___keys_7)); }
	inline KeyCollection_t3B3CAAE24991BE4B813EE85C819FFF23E39EA958 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3B3CAAE24991BE4B813EE85C819FFF23E39EA958 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3B3CAAE24991BE4B813EE85C819FFF23E39EA958 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ___values_8)); }
	inline ValueCollection_tE1B5AF0FE26F4E7D5782662BD045F02784E917BD * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE1B5AF0FE26F4E7D5782662BD045F02784E917BD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE1B5AF0FE26F4E7D5782662BD045F02784E917BD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};


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


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry
struct MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE  : public RuntimeObject
{
public:

public:
};


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A  : public RuntimeObject
{
public:
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_AlignmentOffset
	int32_t ___m_AlignmentOffset_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_LengthCorrection
	int32_t ___m_LengthCorrection_4;
	// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_ListOfSerializations
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___m_ListOfSerializations_5;

public:
	inline static int32_t get_offset_of_m_AlignmentOffset_3() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A, ___m_AlignmentOffset_3)); }
	inline int32_t get_m_AlignmentOffset_3() const { return ___m_AlignmentOffset_3; }
	inline int32_t* get_address_of_m_AlignmentOffset_3() { return &___m_AlignmentOffset_3; }
	inline void set_m_AlignmentOffset_3(int32_t value)
	{
		___m_AlignmentOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_LengthCorrection_4() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A, ___m_LengthCorrection_4)); }
	inline int32_t get_m_LengthCorrection_4() const { return ___m_LengthCorrection_4; }
	inline int32_t* get_address_of_m_LengthCorrection_4() { return &___m_LengthCorrection_4; }
	inline void set_m_LengthCorrection_4(int32_t value)
	{
		___m_LengthCorrection_4 = value;
	}

	inline static int32_t get_offset_of_m_ListOfSerializations_5() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A, ___m_ListOfSerializations_5)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_m_ListOfSerializations_5() const { return ___m_ListOfSerializations_5; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_m_ListOfSerializations_5() { return &___m_ListOfSerializations_5; }
	inline void set_m_ListOfSerializations_5(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___m_ListOfSerializations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ListOfSerializations_5), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___list_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_list_0() const { return ___list_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950, ___current_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_current_3() const { return ___current_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>
struct Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>


// System.Collections.Generic.List`1<System.Byte[]>

struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.Encoding


// System.MarshalByRefObject


// System.MarshalByRefObject


// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message


// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry

struct MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::s_DeserializeFunctionsByName
	Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* ___s_DeserializeFunctionsByName_0;

public:
	inline static int32_t get_offset_of_s_DeserializeFunctionsByName_0() { return static_cast<int32_t>(offsetof(MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_StaticFields, ___s_DeserializeFunctionsByName_0)); }
	inline Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* get_s_DeserializeFunctionsByName_0() const { return ___s_DeserializeFunctionsByName_0; }
	inline Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89** get_address_of_s_DeserializeFunctionsByName_0() { return &___s_DeserializeFunctionsByName_0; }
	inline void set_s_DeserializeFunctionsByName_0(Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* value)
	{
		___s_DeserializeFunctionsByName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeserializeFunctionsByName_0), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer

struct MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields
{
public:
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_Ros2Header
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___k_Ros2Header_0;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_NullByte
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___k_NullByte_1;
	// System.Byte[][] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_PaddingBytes
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___k_PaddingBytes_2;

public:
	inline static int32_t get_offset_of_k_Ros2Header_0() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields, ___k_Ros2Header_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_k_Ros2Header_0() const { return ___k_Ros2Header_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_k_Ros2Header_0() { return &___k_Ros2Header_0; }
	inline void set_k_Ros2Header_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___k_Ros2Header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Ros2Header_0), (void*)value);
	}

	inline static int32_t get_offset_of_k_NullByte_1() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields, ___k_NullByte_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_k_NullByte_1() const { return ___k_NullByte_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_k_NullByte_1() { return &___k_NullByte_1; }
	inline void set_k_NullByte_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___k_NullByte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_NullByte_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_PaddingBytes_2() { return static_cast<int32_t>(offsetof(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields, ___k_PaddingBytes_2)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get_k_PaddingBytes_2() const { return ___k_PaddingBytes_2; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of_k_PaddingBytes_2() { return &___k_PaddingBytes_2; }
	inline void set_k_PaddingBytes_2(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		___k_PaddingBytes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_PaddingBytes_2), (void*)value);
	}
};


// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer


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


// System.Collections.Generic.List`1/Enumerator<System.Byte[]>


// System.Collections.Generic.List`1/Enumerator<System.Byte[]>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


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


// System.Double

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Double


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


// System.Int16


// System.Int16


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


// System.SByte


// System.SByte


// System.Single


// System.Single


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


// System.UInt16


// System.UInt16


// System.UInt32


// System.UInt32


// System.UInt64


// System.UInt64


// System.Void


// System.Void


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


// System.MulticastDelegate


// System.MulticastDelegate


// System.SystemException


// System.SystemException


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>


// System.NotImplementedException


// System.NotImplementedException

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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>[]
struct Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * m_Items[1];

public:
	inline Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* m_Items[1];

public:
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);

// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int32_t ___dataSize0, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m6C9D9DF7A40AA0C688BE3968C00A932089660E03 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_m081EF227DC8AD7CF4A487BEC737005C1A1D85E17 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_m87D6CFC8A4B35DB7B4092BBC9266D8574340961B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverter_ToUInt16_m85FCA553FCFB8EEA87C368C7F784C1AD4E067EC9 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mBF4B5469DEE140E388EAFDB65BF83DF55387A398 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Double System.BitConverter::ToDouble(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BitConverter_ToDouble_mBC80C1ED8DDED5FF99080F8E8E0BB96E18B4D29F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m1A6A32E9A8717239CAA2400C0E367005845E8A6C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_mD07B4A72702FDD12616AD772A613E235BDC4F8D3 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_m1BF82B6390CE9BA0C5FBC367F3102E8F32A64F0B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::ReadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDeserializer_ReadLength_m1706A0D09B111CD3187634440A2A35DCC5161A4A (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mEB7CAC851487D4E6C33CC6181D41B828E036A878 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, String_t** ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB9AC12075A67F6AFEE845A1ABFEE8A81A27AC226 (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * __this, String_t* ___key0, Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *, String_t*, Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message>>::.ctor()
inline void Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86 (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
inline void List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_mCF0F9ADD5597831A83F9BA96B39B7CBE2CA2E075 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_m7BBC6DB8FBEF96C953E4708B5D66D87865C0466E (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m157697D6F057097D99F94074427624FE09F62769 (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m5413721225D9B516B069CB3126DBE04E4241D3F6 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, int32_t ___index0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_inline (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421 (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3 (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m8DB2BC34DFFDDAF1CD021D8564B6984692AF399D (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int32_t ___dataSize0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m133B5C1B4157300D1DE1C2BCC099013694B1CD47 (int16_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m690AD239C61D25E492EF5E8B2AD503A119A062A8 (uint16_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_mD9CB5199B04DE2262B92FA1A93B2FF5E27A1D2A6 (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m3522FD50D418F0AA376ECCCE746931A1C92478D1 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m2A733032C002E4BEE000300B5A7AE6AB928F6752 (uint64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m1D7C383AFC4B6C6D9F3E00B41C1AE7DBA99D3DB1 (float ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_mF54C0E3F1CDE343B487B944FDACC10EED1B12CB6 (double ___value0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0C0CBE16D1D3897C864864D1DA52C0701AF4485D (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, String_t* ___inputString0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_SerializeTo_m6775308DA7FB6C266F439066EF5AF1C3905E2F99 (Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * __this, MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * ___state0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException("Your message class needs to be rebuilt");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA85FF4E5A7BD42CAFF8E40C42EF0FDF21AF42E2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_SerializeTo_m6775308DA7FB6C266F439066EF5AF1C3905E2F99_RuntimeMethod_var)));
	}
}
// System.String Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Message_get_RosMessageName_m18A983C312C193CE76D87C1FFE5AE9D45BF961EF (Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * __this, const RuntimeMethod* method)
{
	{
		// public virtual string RosMessageName => throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Message_get_RosMessageName_m18A983C312C193CE76D87C1FFE5AE9D45BF961EF_RuntimeMethod_var)));
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m31C4BB2B9B3E726AADAB9373739EA91F07E1E2F8 (Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::InitWithBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_InitWithBuffer_m069B071967AD7A76E2591C6FA514AFD6F8ED7675 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	{
		// this.data = data;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		__this->set_data_0(L_0);
		// this.offset = 0;
		__this->set_offset_1(0);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int32_t ___dataSize0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::ReadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageDeserializer_ReadLength_m1706A0D09B111CD3187634440A2A35DCC5161A4A (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 4, /*hidden argument*/NULL);
		// int result = BitConverter.ToInt32(data, offset);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_data_0();
		int32_t L_1 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = BitConverter_ToInt32_m6C9D9DF7A40AA0C688BE3968C00A932089660E03(L_0, L_1, /*hidden argument*/NULL);
		// offset += sizeof(int);
		int32_t L_3 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// return result;
		return L_2;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mBA89D1AD7F2B163BE1285DF3383C8AA96EBA534C (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, bool* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value = BitConverter.ToBoolean(data, offset);
		bool* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BitConverter_ToBoolean_m081EF227DC8AD7CF4A487BEC737005C1A1D85E17(L_1, L_2, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)L_3;
		// offset += sizeof(bool);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mF31E47575FC4ED77394FB0D776F9B7E1732699ED (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, uint8_t* ___value0, const RuntimeMethod* method)
{
	{
		// value = data[offset];
		uint8_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		// offset += sizeof(byte);
		int32_t L_5 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.SByte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m9CD231956835B6F3AB9123675E3572EE550398B8 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int8_t* ___value0, const RuntimeMethod* method)
{
	{
		// value = (sbyte)data[offset];
		int8_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)((int8_t)((int8_t)L_4));
		// offset += sizeof(sbyte);
		int32_t L_5 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m8A24190429615818F2F76626D548B22EBC66ED62 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int16_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(short));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 2, /*hidden argument*/NULL);
		// value = BitConverter.ToInt16(data, offset);
		int16_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int16_t L_3;
		L_3 = BitConverter_ToInt16_m87D6CFC8A4B35DB7B4092BBC9266D8574340961B(L_1, L_2, /*hidden argument*/NULL);
		*((int16_t*)L_0) = (int16_t)L_3;
		// offset += sizeof(short);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mC1016CEA2F0FAF801A9ED29946470619661F58E5 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, uint16_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ushort));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 2, /*hidden argument*/NULL);
		// value = BitConverter.ToUInt16(data, offset);
		uint16_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint16_t L_3;
		L_3 = BitConverter_ToUInt16_m85FCA553FCFB8EEA87C368C7F784C1AD4E067EC9(L_1, L_2, /*hidden argument*/NULL);
		*((int16_t*)L_0) = (int16_t)L_3;
		// offset += sizeof(ushort);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mB1DA9D257E9DD1AD84443E0D2F51A26016689CC7 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, float* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(float));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 4, /*hidden argument*/NULL);
		// value = BitConverter.ToSingle(data, offset);
		float* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = BitConverter_ToSingle_mBF4B5469DEE140E388EAFDB65BF83DF55387A398(L_1, L_2, /*hidden argument*/NULL);
		*((float*)L_0) = (float)L_3;
		// offset += sizeof(float);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m819002DDE56E9D893BFF331392D3A26E17833329 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, double* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(double));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 8, /*hidden argument*/NULL);
		// value = BitConverter.ToDouble(data, offset);
		double* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = BitConverter_ToDouble_mBC80C1ED8DDED5FF99080F8E8E0BB96E18B4D29F(L_1, L_2, /*hidden argument*/NULL);
		*((double*)L_0) = (double)L_3;
		// offset += sizeof(double);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mE77BAB2DFD2163947F40578E1B745B7B35816B3E (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, uint32_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(uint));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 4, /*hidden argument*/NULL);
		// value = BitConverter.ToUInt32(data, offset);
		uint32_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BitConverter_ToUInt32_m1A6A32E9A8717239CAA2400C0E367005845E8A6C(L_1, L_2, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_3;
		// offset += sizeof(uint);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mAAE5C5143928B321C9D32609A893CCDB6404BD00 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int32_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 4, /*hidden argument*/NULL);
		// value = BitConverter.ToInt32(data, offset);
		int32_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m6C9D9DF7A40AA0C688BE3968C00A932089660E03(L_1, L_2, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_3;
		// offset += sizeof(int);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m979C2BEE5C5331C75328F6EBAF67F777765451FA (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, int64_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(long));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 8, /*hidden argument*/NULL);
		// value = BitConverter.ToInt64(data, offset);
		int64_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int64_t L_3;
		L_3 = BitConverter_ToInt64_mD07B4A72702FDD12616AD772A613E235BDC4F8D3(L_1, L_2, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)L_3;
		// offset += sizeof(long);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m22703198C36A680A491041AFB75A791757DE03DF (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ulong));
		MessageDeserializer_Align_m2FDE43EB7A891C4E754F9688D7E6307EAC2D6519(__this, 8, /*hidden argument*/NULL);
		// value = BitConverter.ToUInt64(data, offset);
		uint64_t* L_0 = ___value0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_data_0();
		int32_t L_2 = __this->get_offset_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = BitConverter_ToUInt64_m1BF82B6390CE9BA0C5FBC367F3102E8F32A64F0B(L_1, L_2, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)L_3;
		// offset += sizeof(ulong);
		int32_t L_4 = __this->get_offset_1();
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mEB7CAC851487D4E6C33CC6181D41B828E036A878 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, String_t** ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var length = ReadLength();
		int32_t L_0;
		L_0 = MessageDeserializer_ReadLength_m1706A0D09B111CD3187634440A2A35DCC5161A4A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// value = System.Text.Encoding.UTF8.GetString(data, offset, length);
		String_t** L_1 = ___value0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_0();
		int32_t L_4 = __this->get_offset_1();
		int32_t L_5 = V_0;
		NullCheck(L_2);
		String_t* L_6;
		L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		*((RuntimeObject **)L_1) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)L_6);
		// offset += length;
		int32_t L_7 = __this->get_offset_1();
		int32_t L_8 = V_0;
		__this->set_offset_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mF204A09718C0B26CABF0E92DC22C41FF88C8A37A (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** ___values0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// values = new string[length];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** L_0 = ___values0;
		int32_t L_1 = ___length1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_1);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		// for (var i = 0; i < length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// Read(out values[i]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** L_3 = ___values0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = *((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A**)L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		MessageDeserializer_Read_mEB7CAC851487D4E6C33CC6181D41B828E036A878(__this, (String_t**)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// for (var i = 0; i < length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for (var i = 0; i < length; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = ___length1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer__ctor_m01AD106F5A3A7576CB86B6060E531DC7B66EB842 (MessageDeserializer_t64F520F5A975936DD3E579C98CC8C8E4CEFD7074 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,Unity.Robotics.ROSTCPConnector.MessageGeneration.Message> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::GetDeserializeFunction(System.String,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * MessageRegistry_GetDeserializeFunction_m8BF9748795B5E8CBD3FE3FED9A65D84147059037 (String_t* ___rosMessageName0, int32_t ___subtopic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB9AC12075A67F6AFEE845A1ABFEE8A81A27AC226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * V_0 = NULL;
	{
		// s_DeserializeFunctionsByName[(int)subtopic].TryGetValue(rosMessageName, out result);
		IL2CPP_RUNTIME_CLASS_INIT(MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_0 = ((MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var))->get_s_DeserializeFunctionsByName_0();
		int32_t L_1 = ___subtopic1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_3 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4 = ___rosMessageName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mB9AC12075A67F6AFEE845A1ABFEE8A81A27AC226(L_3, L_4, (Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mB9AC12075A67F6AFEE845A1ABFEE8A81A27AC226_RuntimeMethod_var);
		// return result;
		Func_2_t7567F2F4F709A914ED8D1E5CF27396C23480D55F * L_6 = V_0;
		return L_6;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageRegistry__cctor_mBF63B4B4D487B57860F1E6BDE67B6FF32E71B124 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<string, Func<MessageDeserializer, Message>>[] s_DeserializeFunctionsByName = new Dictionary<string, Func<MessageDeserializer, Message>>[]{
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // default
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // response
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // goal
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // feedback
		//     new Dictionary<string, Func<MessageDeserializer, Message>>(), // result
		// };
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_0 = (Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89*)(Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89*)SZArrayNew(Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89_il2cpp_TypeInfo_var, (uint32_t)5);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_1 = L_0;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_2 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)il2cpp_codegen_object_new(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86(L_2, /*hidden argument*/Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)L_2);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_3 = L_1;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_4 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)il2cpp_codegen_object_new(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86(L_4, /*hidden argument*/Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)L_4);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_5 = L_3;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_6 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)il2cpp_codegen_object_new(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86(L_6, /*hidden argument*/Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)L_6);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_7 = L_5;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_8 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)il2cpp_codegen_object_new(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86(L_8, /*hidden argument*/Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)L_8);
		Dictionary_2U5BU5D_t8FD84AF1FBD6624DF1F5ECBEEB06528600090D89* L_9 = L_7;
		Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 * L_10 = (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)il2cpp_codegen_object_new(Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86(L_10, /*hidden argument*/Dictionary_2__ctor_mF436A234BCE3A265116DAC72D2EAAFFBF57B9D86_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Dictionary_2_tD56143BBB62F1B3C66D42FCA2BEEE5D84B65F188 *)L_10);
		((MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_StaticFields*)il2cpp_codegen_static_fields_for(MessageRegistry_t17300B56D2542C6CF6B1E26D08DBF0A4A104E6AE_il2cpp_TypeInfo_var))->set_s_DeserializeFunctionsByName_0(L_9);
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
// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageSerializer_get_Length_mCF0F9ADD5597831A83F9BA96B39B7CBE2CA2E075 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method)
{
	{
		// public int Length => m_AlignmentOffset + m_LengthCorrection;
		int32_t L_0 = __this->get_m_AlignmentOffset_3();
		int32_t L_1 = __this->get_m_LengthCorrection_4();
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__ctor_m5753998F8432B258538D2630E75A2A0E754CB0B0 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> m_ListOfSerializations = new List<byte[]>();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05(L_0, /*hidden argument*/List_1__ctor_mC74F8340E150B8F9520188937677421C55AF5C05_RuntimeMethod_var);
		__this->set_m_ListOfSerializations_5(L_0);
		// public MessageSerializer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Clear_m4DA06F5649B0397CCB5ECC5E9E71079ADB351CF0 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AlignmentOffset = 0;
		__this->set_m_AlignmentOffset_3(0);
		// m_LengthCorrection = 0;
		__this->set_m_LengthCorrection_4(0);
		// m_ListOfSerializations.Clear();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		NullCheck(L_0);
		List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D(L_0, /*hidden argument*/List_1_Clear_m5621C38865E52261F1EBAD5841646169F08B0E0D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessageWithLength(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessageWithLength_m4B3CF346CD2353DF8EFF27DF807A26A8CA4A2C3D (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m5413721225D9B516B069CB3126DBE04E4241D3F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int lengthIndex = m_ListOfSerializations.Count;
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_inline(L_0, /*hidden argument*/List_1_get_Count_mCEBCF66B19764A2EFF9F5F81C78323729EC10F60_RuntimeMethod_var);
		V_0 = L_1;
		// m_ListOfSerializations.Add(null);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_2 = __this->get_m_ListOfSerializations_5();
		NullCheck(L_2);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_LengthCorrection += 4;
		int32_t L_3 = __this->get_m_LengthCorrection_4();
		__this->set_m_LengthCorrection_4(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// int preambleLength = Length;
		int32_t L_4;
		L_4 = MessageSerializer_get_Length_mCF0F9ADD5597831A83F9BA96B39B7CBE2CA2E075(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// SerializeMessage(message);
		Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_5 = ___message0;
		MessageSerializer_SerializeMessage_m7BBC6DB8FBEF96C953E4708B5D66D87865C0466E(__this, L_5, /*hidden argument*/NULL);
		// m_ListOfSerializations[lengthIndex] = BitConverter.GetBytes(Length - preambleLength);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = MessageSerializer_get_Length_mCF0F9ADD5597831A83F9BA96B39B7CBE2CA2E075(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = BitConverter_GetBytes_m157697D6F057097D99F94074427624FE09F62769(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_set_Item_m5413721225D9B516B069CB3126DBE04E4241D3F6(L_6, L_7, L_10, /*hidden argument*/List_1_set_Item_m5413721225D9B516B069CB3126DBE04E4241D3F6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SerializeMessage(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SerializeMessage_m7BBC6DB8FBEF96C953E4708B5D66D87865C0466E (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method)
{
	{
		// m_LengthCorrection += m_AlignmentOffset;
		int32_t L_0 = __this->get_m_LengthCorrection_4();
		int32_t L_1 = __this->get_m_AlignmentOffset_3();
		__this->set_m_LengthCorrection_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// m_AlignmentOffset = 0; // header doesn't affect alignment
		__this->set_m_AlignmentOffset_3(0);
		// message.SerializeTo(this);
		Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_2 = ___message0;
		NullCheck(L_2);
		VirtActionInvoker1< MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_2, __this);
		// }
		return;
	}
}
// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* MessageSerializer_GetBytes_m6C939DA0883AD88D4557ECA88BC64F6C64E4EF82 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// byte[] serializedMessage = new byte[Length];
		int32_t L_0;
		L_0 = MessageSerializer_get_Length_mCF0F9ADD5597831A83F9BA96B39B7CBE2CA2E075(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// int writeIndex = 0;
		V_1 = 0;
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_2 = __this->get_m_ListOfSerializations_5();
		NullCheck(L_2);
		Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  L_3;
		L_3 = List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965(L_2, /*hidden argument*/List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_001c:
		{
			// foreach (byte[] statement in m_ListOfSerializations)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_inline((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
			V_3 = L_4;
			// if (statement == null)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_3;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_0027:
		{
			// statement.CopyTo(serializedMessage, writeIndex);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
			int32_t L_8 = V_1;
			NullCheck((RuntimeArray *)(RuntimeArray *)L_6);
			Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
			// writeIndex += statement.Length;
			int32_t L_9 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_3;
			NullCheck(L_10);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))));
		}

IL_0035:
		{
			// foreach (byte[] statement in m_ListOfSerializations)
			bool L_11;
			L_11 = Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_001c;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// return serializedMessage;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		return L_12;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::GetBytesSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * MessageSerializer_GetBytesSequence_mCE5D9AB8C4B6BCB4AA8AA318489A3CAE818FCD87 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<byte[]> result = new List<byte[]>(m_ListOfSerializations);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_1 = (List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE *)il2cpp_codegen_object_new(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE_il2cpp_TypeInfo_var);
		List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3(L_1, L_0, /*hidden argument*/List_1__ctor_m390A2307193B6A62098EE9A3798568873C7D3CF3_RuntimeMethod_var);
		// return result;
		return L_1;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::SendTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_SendTo_m0A6B935BD6F8EDF53EECF3AF2202E7C37317DE8A (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (byte[] statement in m_ListOfSerializations)
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		NullCheck(L_0);
		Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950  L_1;
		L_1 = List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965(L_0, /*hidden argument*/List_1_GetEnumerator_m02C594AD8F27BF8AEC5E1C08B33236E2B0063965_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_000e:
		{
			// foreach (byte[] statement in m_ListOfSerializations)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
			L_2 = Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_inline((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA883043E5D5EF71DBC1CAB582704E6AEE2743609_RuntimeMethod_var);
			V_1 = L_2;
			// stream.Write(statement, 0, statement.Length);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = ___stream0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
			NullCheck(L_5);
			NullCheck(L_3);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))));
		}

IL_0021:
		{
			// foreach (byte[] statement in m_ListOfSerializations)
			bool L_6;
			L_6 = Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD16E9BAB800FEB8A571777E0D1EA77D2ED90B84B_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421((Enumerator_tBFBFA2104410D6AB16DEF09F13D141E5A8AE9950 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC5F7F8487E6B29554657BCBE89090BB8E7A16421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Align(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int32_t ___dataSize0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mD90F2928C36AC738BF4C384854A53D3DAA77F25C (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * ___message0, const RuntimeMethod* method)
{
	{
		// message.SerializeTo(this);
		Message_t3AFD486CF5CA94E238A5E7FC4AE8005B438D393F * L_0 = ___message0;
		NullCheck(L_0);
		VirtActionInvoker1< MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * >::Invoke(4 /* System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer) */, L_0, __this);
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0821E04E0476EF267CD2A19DD72BC4A9F727CBB4 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m8DB2BC34DFFDDAF1CD021D8564B6984692AF399D(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(bool);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m6D3EC2FB38EEE717C2E21D47F08FFC5CED3E7DE4 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { value });
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		uint8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_3);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(byte);
		int32_t L_4 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mB236E0DA81EE9BDABA70E35FD27277D13B604950 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ListOfSerializations.Add(new byte[] { (byte)value });
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		int8_t L_3 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_3)));
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(sbyte);
		int32_t L_4 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m4F6B2E680D5B3D4A3A7C1454F3903D2633B48895 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(short));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 2, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		int16_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m133B5C1B4157300D1DE1C2BCC099013694B1CD47(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(short);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mC518C564B4C5D4CE67D5F99F1F4CBC1DBE0F521C (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 2, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		uint16_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m690AD239C61D25E492EF5E8B2AD503A119A062A8(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ushort);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m5CB9979EBE9A97C850E59C06FFD23BC031475238 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(int));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m157697D6F057097D99F94074427624FE09F62769(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(int);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0377AF891A6F2725E9C13A02A86C75F15BC1A769 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		uint32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_mD9CB5199B04DE2262B92FA1A93B2FF5E27A1D2A6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(uint);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m549205503E270A599E3299733E76D7EFCC9F77FF (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(long));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		int64_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m3522FD50D418F0AA376ECCCE746931A1C92478D1(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(long);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m8C0D148E141752FBDA59B6199C3548E61733076E (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		uint64_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m2A733032C002E4BEE000300B5A7AE6AB928F6752(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(ulong);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m78D86BC9014B9169D0595CC5581C88EBC855F4B7 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(float));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m1D7C383AFC4B6C6D9F3E00B41C1AE7DBA99D3DB1(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(float);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)4)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m5EAEDB0BC84B4CC16356B4520171F06E15988DAD (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Align(sizeof(double));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(BitConverter.GetBytes(value));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_0 = __this->get_m_ListOfSerializations_5();
		double L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_mF54C0E3F1CDE343B487B944FDACC10EED1B12CB6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_0, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += sizeof(double);
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)8)));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m8ED3950C45E131633F60178A1ADD57829712DAA9 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (values.Length == 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// m_ListOfSerializations.Add(values);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_1 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___values0;
		NullCheck(L_1);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_1, L_2, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += values.Length;
		int32_t L_3 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___values0;
		NullCheck(L_4);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mB073245D42C4C1C8D0B7B93A17225D60AFF7F5E3 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// byte[] buffer = new byte[values.Length];
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m786BF12BBDAA3C8BD057CAE93C0C75E2C308C4D4 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(short));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 2, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(short)];
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)2)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m66B9FA2C3A794AC9097990A9406994C2DBA5DD4C (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(ushort));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 2, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ushort)];
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)2)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mDABE7F7E396E2D1971B7862E8F85B42371973BE3 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(int));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(int)];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m89E53097276C34F1E580304B779555943CEEF2A9 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(uint));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(uint)];
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m8399A5BBA41A5C4E4CAAAA68B32CA3DFC1179888 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(float));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 4, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(float)];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)4)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m6355BF7D85AB59AB0FD6912E6F0740127FBEEF24 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(double));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(double)];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m49E3800EE50954E1DC6A59E323CB13F02B1DF217 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(long));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(long)];
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m338572CBACBDBA7C4F83A1FA1C1C77C6541A2A77 (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (values.Length == 0)
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = ___values0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// Align(sizeof(ulong));
		MessageSerializer_Align_m0AC4099B5CB818D3120A144FAAE86BDEAA6CC5D0(__this, 8, /*hidden argument*/NULL);
		// byte[] buffer = new byte[values.Length * sizeof(ulong)];
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_1 = ___values0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)8)));
		V_0 = L_2;
		// Buffer.BlockCopy(values, 0, buffer, 0, buffer.Length);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = ___values0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		// m_ListOfSerializations.Add(buffer);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += buffer.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m0C0CBE16D1D3897C864864D1DA52C0701AF4485D (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, String_t* ___inputString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_3 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = BitConverter_GetBytes_m157697D6F057097D99F94074427624FE09F62769(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_3, L_5, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::WriteUnaligned(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_WriteUnaligned_m695FD911CAAF11A46CF823CFDDE144D39FA1461A (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, String_t* ___inputString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// byte[] encodedString = Encoding.UTF8.GetBytes(inputString);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_1 = ___inputString0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_ListOfSerializations.Add(BitConverter.GetBytes(encodedString.Length));
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_3 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = BitConverter_GetBytes_m157697D6F057097D99F94074427624FE09F62769(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_3, L_5, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_ListOfSerializations.Add(encodedString);
		List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * L_6 = __this->get_m_ListOfSerializations_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904(L_6, L_7, /*hidden argument*/List_1_Add_mE2D42E8F87548101921C1F2DAA810601D3D70904_RuntimeMethod_var);
		// m_AlignmentOffset += 4 + encodedString.Length;
		int32_t L_8 = __this->get_m_AlignmentOffset_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		NullCheck(L_9);
		__this->set_m_AlignmentOffset_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))));
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m9CAAD2775BEC1F68E30D266859B3AB20B7F0EBFD (MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string entry in values)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___values0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		// foreach (string entry in values)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Write(entry);
		String_t* L_5 = V_2;
		MessageSerializer_Write_m0C0CBE16D1D3897C864864D1DA52C0701AF4485D(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0015:
	{
		// foreach (string entry in values)
		int32_t L_7 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer__cctor_m020D0833F9EB581715488BEF242E38E909D8A1F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly byte[] k_Ros2Header = new byte[] { 0, 1, 0, 0 };
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)1);
		((MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_il2cpp_TypeInfo_var))->set_k_Ros2Header_0(L_1);
		// static readonly byte[] k_NullByte = new byte[] { 0 };
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		((MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_il2cpp_TypeInfo_var))->set_k_NullByte_1(L_2);
		// static readonly byte[][] k_PaddingBytes = new byte[][]
		// {
		//     null,
		//     new byte[]{ 0 },
		//     new byte[]{ 0, 0 },
		//     new byte[]{ 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0 },
		//     new byte[]{ 0, 0, 0, 0, 0, 0, 0, 0 },
		// };
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_3 = (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D*)SZArrayNew(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_4 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_5);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_6 = L_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_7);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_8 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)3);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_9);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_10 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_11);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_12 = L_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)5);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_13);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_14 = L_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_15);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_16 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)7);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_17);
		ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_18 = L_16;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_19);
		((MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_StaticFields*)il2cpp_codegen_static_fields_for(MessageSerializer_tDBBA491AC562920AAF083A2BA8AF14F51F98D60A_il2cpp_TypeInfo_var))->set_k_PaddingBytes_2(L_18);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
