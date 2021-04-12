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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Guid>
struct Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127;
// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3;
// System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry>
struct Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2;
// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs>
struct EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875;
// System.Collections.Generic.IEnumerable`1<System.IO.FileSystemInfo>
struct IEnumerable_1_tECEE70D6790586D2BF000D3BEADDCF95017BF050;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession>
struct List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D;
// System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry>
struct List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0;
// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField>
struct List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry>
struct ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Diagnostics.Tracing.EtwSession[]
struct EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Diagnostics.Tracing.EventSource/EventMetadata[]
struct EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65;
// System.Diagnostics.Tracing.ActivityTracker
struct ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Diagnostics.Tracing.EventCommandEventArgs
struct EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F;
// System.Diagnostics.Tracing.EventDispatcher
struct EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81;
// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
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
// System.IO.Compression.ZipArchive
struct ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F;
// System.IO.Compression.ZipArchiveEntry
struct ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345;
// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tECEE70D6790586D2BF000D3BEADDCF95017BF050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF54FA6FC69623B1826396F692DB2D94D46FD287B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral56F96CA2C7CD86A940882DB30231478A10E0B61F;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralEC39AAB8B28BCEDAFA6F3285CC603CE852769989;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC9E8B98C42A334A651A08D6E809F1DA11B5C1700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m32703942875629F77D7939B1AAD540EB86939515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBE47840DE5F980B73783F7AF7610CCDD42E893E7 
{
public:

public:
};


// System.Object


// System.Buffers.ArrayPool`1<System.Char>
struct  ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3  : public RuntimeObject
{
public:

public:
};

struct ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3_StaticFields
{
public:
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::s_sharedInstance
	ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * ___s_sharedInstance_0;

public:
	inline static int32_t get_offset_of_s_sharedInstance_0() { return static_cast<int32_t>(offsetof(ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3_StaticFields, ___s_sharedInstance_0)); }
	inline ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * get_s_sharedInstance_0() const { return ___s_sharedInstance_0; }
	inline ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 ** get_address_of_s_sharedInstance_0() { return &___s_sharedInstance_0; }
	inline void set_s_sharedInstance_0(ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * value)
	{
		___s_sharedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sharedInstance_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
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


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// System.IO.Path
struct  Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921  : public RuntimeObject
{
public:

public:
};

struct Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsUnix_9;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidPathChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectorySeparatorStr_4), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathSeparatorChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}

	inline static int32_t get_offset_of_trimEndCharsWindows_8() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsWindows_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsWindows_8() const { return ___trimEndCharsWindows_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsWindows_8() { return &___trimEndCharsWindows_8; }
	inline void set_trimEndCharsWindows_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsWindows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsWindows_8), (void*)value);
	}

	inline static int32_t get_offset_of_trimEndCharsUnix_9() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsUnix_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsUnix_9() const { return ___trimEndCharsUnix_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsUnix_9() { return &___trimEndCharsUnix_9; }
	inline void set_trimEndCharsUnix_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsUnix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsUnix_9), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Buffers.Utilities
struct  Utilities_t55A4B9788830B7D5CACD22176387BAB011F2B217  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.IO.Compression.ZipFile
struct  ZipFile_t40BBFE8C4812321EA27B212653C673CB2FB944D4  : public RuntimeObject
{
public:

public:
};


// System.IO.Compression.ZipFileExtensions
struct  ZipFileExtensions_t2909AD89AC35AF88F3E52A8F5765EF129AA0FACE  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Int64>
struct  Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

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

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Diagnostics.Tracing.SessionMask
struct  SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C 
{
public:
	// System.UInt32 System.Diagnostics.Tracing.SessionMask::m_mask
	uint32_t ___m_mask_0;

public:
	inline static int32_t get_offset_of_m_mask_0() { return static_cast<int32_t>(offsetof(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C, ___m_mask_0)); }
	inline uint32_t get_m_mask_0() const { return ___m_mask_0; }
	inline uint32_t* get_address_of_m_mask_0() { return &___m_mask_0; }
	inline void set_m_mask_0(uint32_t value)
	{
		___m_mask_0 = value;
	}
};


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
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


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Diagnostics.Tracing.EventSource/EventData
struct  EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventSource/EventData::m_Ptr
	int64_t ___m_Ptr_0;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::m_Size
	int32_t ___m_Size_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::m_Reserved
	int32_t ___m_Reserved_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D, ___m_Ptr_0)); }
	inline int64_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline int64_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(int64_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Size_1() { return static_cast<int32_t>(offsetof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D, ___m_Size_1)); }
	inline int32_t get_m_Size_1() const { return ___m_Size_1; }
	inline int32_t* get_address_of_m_Size_1() { return &___m_Size_1; }
	inline void set_m_Size_1(int32_t value)
	{
		___m_Size_1 = value;
	}

	inline static int32_t get_offset_of_m_Reserved_2() { return static_cast<int32_t>(offsetof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D, ___m_Reserved_2)); }
	inline int32_t get_m_Reserved_2() const { return ___m_Reserved_2; }
	inline int32_t* get_address_of_m_Reserved_2() { return &___m_Reserved_2; }
	inline void set_m_Reserved_2(int32_t value)
	{
		___m_Reserved_2 = value;
	}
};


// System.IO.Compression.CompressionLevel
struct  CompressionLevel_t2AE1FC3232ACECDC676037FF80CD1679CC0601EF 
{
public:
	// System.Int32 System.IO.Compression.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t2AE1FC3232ACECDC676037FF80CD1679CC0601EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Diagnostics.Tracing.EventKeywords
struct  EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventLevel
struct  EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventSourceSettings
struct  EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventSourceSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.IO.FileAccess
struct  FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileShare
struct  FileShare_t335C3032B91F35BECF45855A61AF9FA5BB9C07BB 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileShare_t335C3032B91F35BECF45855A61AF9FA5BB9C07BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SearchOption
struct  SearchOption_tD088231E1E225D39BB408AEF566091138555C261 
{
public:
	// System.Int32 System.IO.SearchOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SearchOption_tD088231E1E225D39BB408AEF566091138555C261, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveMode
struct  ZipArchiveMode_t86EE6A498CC1EED9FC56F4A6AB15070A1DD37428 
{
public:
	// System.Int32 System.IO.Compression.ZipArchiveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipArchiveMode_t86EE6A498CC1EED9FC56F4A6AB15070A1DD37428, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipVersionMadeByPlatform
struct  ZipVersionMadeByPlatform_t9054373220609B3912303C20801FFF3721F2330F 
{
public:
	// System.Byte System.IO.Compression.ZipVersionMadeByPlatform::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipVersionMadeByPlatform_t9054373220609B3912303C20801FFF3721F2330F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipVersionNeededValues
struct  ZipVersionNeededValues_tEAA82592B634DB47A1E2CBE1E60D66BA19D535E1 
{
public:
	// System.UInt16 System.IO.Compression.ZipVersionNeededValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipVersionNeededValues_tEAA82592B634DB47A1E2CBE1E60D66BA19D535E1, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Buffers.ArrayPoolEventSource/BufferAllocatedReason
struct  BufferAllocatedReason_tADD502602BCE6E94434CA166DEDE3F28404AAF80 
{
public:
	// System.Int32 System.Buffers.ArrayPoolEventSource/BufferAllocatedReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferAllocatedReason_tADD502602BCE6E94434CA166DEDE3F28404AAF80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveEntry/BitFlagValues
struct  BitFlagValues_t1CA42A78F481D34BAC3DCE26396E51ACA586586E 
{
public:
	// System.UInt16 System.IO.Compression.ZipArchiveEntry/BitFlagValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitFlagValues_t1CA42A78F481D34BAC3DCE26396E51ACA586586E, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveEntry/CompressionMethodValues
struct  CompressionMethodValues_t4987D7EB9717BE3B88DADC626C14FBFDC5EA0CC5 
{
public:
	// System.UInt16 System.IO.Compression.ZipArchiveEntry/CompressionMethodValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethodValues_t4987D7EB9717BE3B88DADC626C14FBFDC5EA0CC5, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.IO.Compression.CompressionLevel>
struct  Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Diagnostics.Tracing.EventSource
struct  EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A  : public RuntimeObject
{
public:
	// System.Byte[] System.Diagnostics.Tracing.EventSource::providerMetadata
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___providerMetadata_0;
	// System.String System.Diagnostics.Tracing.EventSource::m_name
	String_t* ___m_name_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource::m_id
	int32_t ___m_id_2;
	// System.Guid System.Diagnostics.Tracing.EventSource::m_guid
	Guid_t  ___m_guid_3;
	// System.Diagnostics.Tracing.EventSource/EventMetadata[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_eventData
	EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* ___m_eventData_4;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_rawManifest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_rawManifest_5;
	// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs> System.Diagnostics.Tracing.EventSource::m_eventCommandExecuted
	EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * ___m_eventCommandExecuted_6;
	// System.Diagnostics.Tracing.EventSourceSettings System.Diagnostics.Tracing.EventSource::m_config
	int32_t ___m_config_7;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_eventSourceEnabled
	bool ___m_eventSourceEnabled_8;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.EventSource::m_level
	int32_t ___m_level_9;
	// System.Diagnostics.Tracing.EventKeywords System.Diagnostics.Tracing.EventSource::m_matchAnyKeyword
	int64_t ___m_matchAnyKeyword_10;
	// System.Diagnostics.Tracing.EventDispatcher modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_Dispatchers
	EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * ___m_Dispatchers_11;
	// System.Diagnostics.Tracing.EventSource/OverideEventProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_provider
	OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * ___m_provider_12;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_completelyInited
	bool ___m_completelyInited_13;
	// System.Exception System.Diagnostics.Tracing.EventSource::m_constructionException
	Exception_t * ___m_constructionException_14;
	// System.Byte System.Diagnostics.Tracing.EventSource::m_outOfBandMessageCount
	uint8_t ___m_outOfBandMessageCount_15;
	// System.Diagnostics.Tracing.EventCommandEventArgs System.Diagnostics.Tracing.EventSource::m_deferredCommands
	EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * ___m_deferredCommands_16;
	// System.String[] System.Diagnostics.Tracing.EventSource::m_traits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_traits_17;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_curLiveSessions
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_curLiveSessions_20;
	// System.Diagnostics.Tracing.EtwSession[] System.Diagnostics.Tracing.EventSource::m_etwSessionIdMap
	EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* ___m_etwSessionIdMap_21;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession> System.Diagnostics.Tracing.EventSource::m_legacySessions
	List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * ___m_legacySessions_22;
	// System.Int64 System.Diagnostics.Tracing.EventSource::m_keywordTriggers
	int64_t ___m_keywordTriggers_23;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_activityFilteringForETWEnabled
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_activityFilteringForETWEnabled_24;
	// System.Diagnostics.Tracing.ActivityTracker System.Diagnostics.Tracing.EventSource::m_activityTracker
	ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * ___m_activityTracker_26;

public:
	inline static int32_t get_offset_of_providerMetadata_0() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___providerMetadata_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_providerMetadata_0() const { return ___providerMetadata_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_providerMetadata_0() { return &___providerMetadata_0; }
	inline void set_providerMetadata_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___providerMetadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerMetadata_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_1() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_name_1)); }
	inline String_t* get_m_name_1() const { return ___m_name_1; }
	inline String_t** get_address_of_m_name_1() { return &___m_name_1; }
	inline void set_m_name_1(String_t* value)
	{
		___m_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_id_2() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_id_2)); }
	inline int32_t get_m_id_2() const { return ___m_id_2; }
	inline int32_t* get_address_of_m_id_2() { return &___m_id_2; }
	inline void set_m_id_2(int32_t value)
	{
		___m_id_2 = value;
	}

	inline static int32_t get_offset_of_m_guid_3() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_guid_3)); }
	inline Guid_t  get_m_guid_3() const { return ___m_guid_3; }
	inline Guid_t * get_address_of_m_guid_3() { return &___m_guid_3; }
	inline void set_m_guid_3(Guid_t  value)
	{
		___m_guid_3 = value;
	}

	inline static int32_t get_offset_of_m_eventData_4() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventData_4)); }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* get_m_eventData_4() const { return ___m_eventData_4; }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65** get_address_of_m_eventData_4() { return &___m_eventData_4; }
	inline void set_m_eventData_4(EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* value)
	{
		___m_eventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_rawManifest_5() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_rawManifest_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_rawManifest_5() const { return ___m_rawManifest_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_rawManifest_5() { return &___m_rawManifest_5; }
	inline void set_m_rawManifest_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_rawManifest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rawManifest_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventCommandExecuted_6() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventCommandExecuted_6)); }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * get_m_eventCommandExecuted_6() const { return ___m_eventCommandExecuted_6; }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 ** get_address_of_m_eventCommandExecuted_6() { return &___m_eventCommandExecuted_6; }
	inline void set_m_eventCommandExecuted_6(EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * value)
	{
		___m_eventCommandExecuted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventCommandExecuted_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_config_7() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_config_7)); }
	inline int32_t get_m_config_7() const { return ___m_config_7; }
	inline int32_t* get_address_of_m_config_7() { return &___m_config_7; }
	inline void set_m_config_7(int32_t value)
	{
		___m_config_7 = value;
	}

	inline static int32_t get_offset_of_m_eventSourceEnabled_8() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventSourceEnabled_8)); }
	inline bool get_m_eventSourceEnabled_8() const { return ___m_eventSourceEnabled_8; }
	inline bool* get_address_of_m_eventSourceEnabled_8() { return &___m_eventSourceEnabled_8; }
	inline void set_m_eventSourceEnabled_8(bool value)
	{
		___m_eventSourceEnabled_8 = value;
	}

	inline static int32_t get_offset_of_m_level_9() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_level_9)); }
	inline int32_t get_m_level_9() const { return ___m_level_9; }
	inline int32_t* get_address_of_m_level_9() { return &___m_level_9; }
	inline void set_m_level_9(int32_t value)
	{
		___m_level_9 = value;
	}

	inline static int32_t get_offset_of_m_matchAnyKeyword_10() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_matchAnyKeyword_10)); }
	inline int64_t get_m_matchAnyKeyword_10() const { return ___m_matchAnyKeyword_10; }
	inline int64_t* get_address_of_m_matchAnyKeyword_10() { return &___m_matchAnyKeyword_10; }
	inline void set_m_matchAnyKeyword_10(int64_t value)
	{
		___m_matchAnyKeyword_10 = value;
	}

	inline static int32_t get_offset_of_m_Dispatchers_11() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_Dispatchers_11)); }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * get_m_Dispatchers_11() const { return ___m_Dispatchers_11; }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 ** get_address_of_m_Dispatchers_11() { return &___m_Dispatchers_11; }
	inline void set_m_Dispatchers_11(EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * value)
	{
		___m_Dispatchers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dispatchers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_provider_12() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_provider_12)); }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * get_m_provider_12() const { return ___m_provider_12; }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 ** get_address_of_m_provider_12() { return &___m_provider_12; }
	inline void set_m_provider_12(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * value)
	{
		___m_provider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_provider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_completelyInited_13() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_completelyInited_13)); }
	inline bool get_m_completelyInited_13() const { return ___m_completelyInited_13; }
	inline bool* get_address_of_m_completelyInited_13() { return &___m_completelyInited_13; }
	inline void set_m_completelyInited_13(bool value)
	{
		___m_completelyInited_13 = value;
	}

	inline static int32_t get_offset_of_m_constructionException_14() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_constructionException_14)); }
	inline Exception_t * get_m_constructionException_14() const { return ___m_constructionException_14; }
	inline Exception_t ** get_address_of_m_constructionException_14() { return &___m_constructionException_14; }
	inline void set_m_constructionException_14(Exception_t * value)
	{
		___m_constructionException_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_constructionException_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_outOfBandMessageCount_15() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_outOfBandMessageCount_15)); }
	inline uint8_t get_m_outOfBandMessageCount_15() const { return ___m_outOfBandMessageCount_15; }
	inline uint8_t* get_address_of_m_outOfBandMessageCount_15() { return &___m_outOfBandMessageCount_15; }
	inline void set_m_outOfBandMessageCount_15(uint8_t value)
	{
		___m_outOfBandMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_deferredCommands_16() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_deferredCommands_16)); }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * get_m_deferredCommands_16() const { return ___m_deferredCommands_16; }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F ** get_address_of_m_deferredCommands_16() { return &___m_deferredCommands_16; }
	inline void set_m_deferredCommands_16(EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * value)
	{
		___m_deferredCommands_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_deferredCommands_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_traits_17() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_traits_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_traits_17() const { return ___m_traits_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_traits_17() { return &___m_traits_17; }
	inline void set_m_traits_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_traits_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_traits_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_curLiveSessions_20() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_curLiveSessions_20)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_curLiveSessions_20() const { return ___m_curLiveSessions_20; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_curLiveSessions_20() { return &___m_curLiveSessions_20; }
	inline void set_m_curLiveSessions_20(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_curLiveSessions_20 = value;
	}

	inline static int32_t get_offset_of_m_etwSessionIdMap_21() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_etwSessionIdMap_21)); }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* get_m_etwSessionIdMap_21() const { return ___m_etwSessionIdMap_21; }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281** get_address_of_m_etwSessionIdMap_21() { return &___m_etwSessionIdMap_21; }
	inline void set_m_etwSessionIdMap_21(EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* value)
	{
		___m_etwSessionIdMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwSessionIdMap_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_legacySessions_22() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_legacySessions_22)); }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * get_m_legacySessions_22() const { return ___m_legacySessions_22; }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D ** get_address_of_m_legacySessions_22() { return &___m_legacySessions_22; }
	inline void set_m_legacySessions_22(List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * value)
	{
		___m_legacySessions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_legacySessions_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_keywordTriggers_23() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_keywordTriggers_23)); }
	inline int64_t get_m_keywordTriggers_23() const { return ___m_keywordTriggers_23; }
	inline int64_t* get_address_of_m_keywordTriggers_23() { return &___m_keywordTriggers_23; }
	inline void set_m_keywordTriggers_23(int64_t value)
	{
		___m_keywordTriggers_23 = value;
	}

	inline static int32_t get_offset_of_m_activityFilteringForETWEnabled_24() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityFilteringForETWEnabled_24)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_activityFilteringForETWEnabled_24() const { return ___m_activityFilteringForETWEnabled_24; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_activityFilteringForETWEnabled_24() { return &___m_activityFilteringForETWEnabled_24; }
	inline void set_m_activityFilteringForETWEnabled_24(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_activityFilteringForETWEnabled_24 = value;
	}

	inline static int32_t get_offset_of_m_activityTracker_26() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityTracker_26)); }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * get_m_activityTracker_26() const { return ___m_activityTracker_26; }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 ** get_address_of_m_activityTracker_26() { return &___m_activityTracker_26; }
	inline void set_m_activityTracker_26(ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * value)
	{
		___m_activityTracker_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_activityTracker_26), (void*)value);
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields
{
public:
	// System.UInt32 System.Diagnostics.Tracing.EventSource::s_currentPid
	uint32_t ___s_currentPid_18;
	// System.Action`1<System.Guid> System.Diagnostics.Tracing.EventSource::s_activityDying
	Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * ___s_activityDying_25;
	// System.Byte[] System.Diagnostics.Tracing.EventSource::namespaceBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___namespaceBytes_27;
	// System.Guid System.Diagnostics.Tracing.EventSource::AspNetEventSourceGuid
	Guid_t  ___AspNetEventSourceGuid_28;

public:
	inline static int32_t get_offset_of_s_currentPid_18() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_currentPid_18)); }
	inline uint32_t get_s_currentPid_18() const { return ___s_currentPid_18; }
	inline uint32_t* get_address_of_s_currentPid_18() { return &___s_currentPid_18; }
	inline void set_s_currentPid_18(uint32_t value)
	{
		___s_currentPid_18 = value;
	}

	inline static int32_t get_offset_of_s_activityDying_25() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_activityDying_25)); }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * get_s_activityDying_25() const { return ___s_activityDying_25; }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 ** get_address_of_s_activityDying_25() { return &___s_activityDying_25; }
	inline void set_s_activityDying_25(Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * value)
	{
		___s_activityDying_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activityDying_25), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceBytes_27() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___namespaceBytes_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_namespaceBytes_27() const { return ___namespaceBytes_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_namespaceBytes_27() { return &___namespaceBytes_27; }
	inline void set_namespaceBytes_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___namespaceBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of_AspNetEventSourceGuid_28() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___AspNetEventSourceGuid_28)); }
	inline Guid_t  get_AspNetEventSourceGuid_28() const { return ___AspNetEventSourceGuid_28; }
	inline Guid_t * get_address_of_AspNetEventSourceGuid_28() { return &___AspNetEventSourceGuid_28; }
	inline void set_AspNetEventSourceGuid_28(Guid_t  value)
	{
		___AspNetEventSourceGuid_28 = value;
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields
{
public:
	// System.Byte System.Diagnostics.Tracing.EventSource::m_EventSourceExceptionRecurenceCount
	uint8_t ___m_EventSourceExceptionRecurenceCount_19;

public:
	inline static int32_t get_offset_of_m_EventSourceExceptionRecurenceCount_19() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields, ___m_EventSourceExceptionRecurenceCount_19)); }
	inline uint8_t get_m_EventSourceExceptionRecurenceCount_19() const { return ___m_EventSourceExceptionRecurenceCount_19; }
	inline uint8_t* get_address_of_m_EventSourceExceptionRecurenceCount_19() { return &___m_EventSourceExceptionRecurenceCount_19; }
	inline void set_m_EventSourceExceptionRecurenceCount_19(uint8_t value)
	{
		___m_EventSourceExceptionRecurenceCount_19 = value;
	}
};


// System.IO.FileStream
struct  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.IO.Compression.ZipArchive
struct  ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.Compression.ZipArchive::_archiveStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____archiveStream_0;
	// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipArchive::_archiveStreamOwner
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ____archiveStreamOwner_1;
	// System.IO.BinaryReader System.IO.Compression.ZipArchive::_archiveReader
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ____archiveReader_2;
	// System.IO.Compression.ZipArchiveMode System.IO.Compression.ZipArchive::_mode
	int32_t ____mode_3;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entries
	List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * ____entries_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entriesCollection
	ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * ____entriesCollection_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entriesDictionary
	Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * ____entriesDictionary_6;
	// System.Boolean System.IO.Compression.ZipArchive::_readEntries
	bool ____readEntries_7;
	// System.Boolean System.IO.Compression.ZipArchive::_leaveOpen
	bool ____leaveOpen_8;
	// System.Int64 System.IO.Compression.ZipArchive::_centralDirectoryStart
	int64_t ____centralDirectoryStart_9;
	// System.Boolean System.IO.Compression.ZipArchive::_isDisposed
	bool ____isDisposed_10;
	// System.UInt32 System.IO.Compression.ZipArchive::_numberOfThisDisk
	uint32_t ____numberOfThisDisk_11;
	// System.Int64 System.IO.Compression.ZipArchive::_expectedNumberOfEntries
	int64_t ____expectedNumberOfEntries_12;
	// System.IO.Stream System.IO.Compression.ZipArchive::_backingStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____backingStream_13;
	// System.Byte[] System.IO.Compression.ZipArchive::_archiveComment
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____archiveComment_14;
	// System.Text.Encoding System.IO.Compression.ZipArchive::_entryNameEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____entryNameEncoding_15;

public:
	inline static int32_t get_offset_of__archiveStream_0() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__archiveStream_0() const { return ____archiveStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__archiveStream_0() { return &____archiveStream_0; }
	inline void set__archiveStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____archiveStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__archiveStreamOwner_1() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveStreamOwner_1)); }
	inline ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * get__archiveStreamOwner_1() const { return ____archiveStreamOwner_1; }
	inline ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 ** get_address_of__archiveStreamOwner_1() { return &____archiveStreamOwner_1; }
	inline void set__archiveStreamOwner_1(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * value)
	{
		____archiveStreamOwner_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStreamOwner_1), (void*)value);
	}

	inline static int32_t get_offset_of__archiveReader_2() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveReader_2)); }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * get__archiveReader_2() const { return ____archiveReader_2; }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 ** get_address_of__archiveReader_2() { return &____archiveReader_2; }
	inline void set__archiveReader_2(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * value)
	{
		____archiveReader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveReader_2), (void*)value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}

	inline static int32_t get_offset_of__entries_4() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entries_4)); }
	inline List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * get__entries_4() const { return ____entries_4; }
	inline List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 ** get_address_of__entries_4() { return &____entries_4; }
	inline void set__entries_4(List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * value)
	{
		____entries_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_4), (void*)value);
	}

	inline static int32_t get_offset_of__entriesCollection_5() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entriesCollection_5)); }
	inline ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * get__entriesCollection_5() const { return ____entriesCollection_5; }
	inline ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD ** get_address_of__entriesCollection_5() { return &____entriesCollection_5; }
	inline void set__entriesCollection_5(ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * value)
	{
		____entriesCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of__entriesDictionary_6() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entriesDictionary_6)); }
	inline Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * get__entriesDictionary_6() const { return ____entriesDictionary_6; }
	inline Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 ** get_address_of__entriesDictionary_6() { return &____entriesDictionary_6; }
	inline void set__entriesDictionary_6(Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * value)
	{
		____entriesDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesDictionary_6), (void*)value);
	}

	inline static int32_t get_offset_of__readEntries_7() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____readEntries_7)); }
	inline bool get__readEntries_7() const { return ____readEntries_7; }
	inline bool* get_address_of__readEntries_7() { return &____readEntries_7; }
	inline void set__readEntries_7(bool value)
	{
		____readEntries_7 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_8() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____leaveOpen_8)); }
	inline bool get__leaveOpen_8() const { return ____leaveOpen_8; }
	inline bool* get_address_of__leaveOpen_8() { return &____leaveOpen_8; }
	inline void set__leaveOpen_8(bool value)
	{
		____leaveOpen_8 = value;
	}

	inline static int32_t get_offset_of__centralDirectoryStart_9() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____centralDirectoryStart_9)); }
	inline int64_t get__centralDirectoryStart_9() const { return ____centralDirectoryStart_9; }
	inline int64_t* get_address_of__centralDirectoryStart_9() { return &____centralDirectoryStart_9; }
	inline void set__centralDirectoryStart_9(int64_t value)
	{
		____centralDirectoryStart_9 = value;
	}

	inline static int32_t get_offset_of__isDisposed_10() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____isDisposed_10)); }
	inline bool get__isDisposed_10() const { return ____isDisposed_10; }
	inline bool* get_address_of__isDisposed_10() { return &____isDisposed_10; }
	inline void set__isDisposed_10(bool value)
	{
		____isDisposed_10 = value;
	}

	inline static int32_t get_offset_of__numberOfThisDisk_11() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____numberOfThisDisk_11)); }
	inline uint32_t get__numberOfThisDisk_11() const { return ____numberOfThisDisk_11; }
	inline uint32_t* get_address_of__numberOfThisDisk_11() { return &____numberOfThisDisk_11; }
	inline void set__numberOfThisDisk_11(uint32_t value)
	{
		____numberOfThisDisk_11 = value;
	}

	inline static int32_t get_offset_of__expectedNumberOfEntries_12() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____expectedNumberOfEntries_12)); }
	inline int64_t get__expectedNumberOfEntries_12() const { return ____expectedNumberOfEntries_12; }
	inline int64_t* get_address_of__expectedNumberOfEntries_12() { return &____expectedNumberOfEntries_12; }
	inline void set__expectedNumberOfEntries_12(int64_t value)
	{
		____expectedNumberOfEntries_12 = value;
	}

	inline static int32_t get_offset_of__backingStream_13() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____backingStream_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__backingStream_13() const { return ____backingStream_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__backingStream_13() { return &____backingStream_13; }
	inline void set__backingStream_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____backingStream_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backingStream_13), (void*)value);
	}

	inline static int32_t get_offset_of__archiveComment_14() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveComment_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__archiveComment_14() const { return ____archiveComment_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__archiveComment_14() { return &____archiveComment_14; }
	inline void set__archiveComment_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____archiveComment_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveComment_14), (void*)value);
	}

	inline static int32_t get_offset_of__entryNameEncoding_15() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entryNameEncoding_15)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__entryNameEncoding_15() const { return ____entryNameEncoding_15; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__entryNameEncoding_15() { return &____entryNameEncoding_15; }
	inline void set__entryNameEncoding_15(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____entryNameEncoding_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entryNameEncoding_15), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Buffers.ArrayPoolEventSource
struct  ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D  : public EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A
{
public:

public:
};

struct ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_StaticFields
{
public:
	// System.Buffers.ArrayPoolEventSource System.Buffers.ArrayPoolEventSource::Log
	ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * ___Log_29;

public:
	inline static int32_t get_offset_of_Log_29() { return static_cast<int32_t>(offsetof(ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_StaticFields, ___Log_29)); }
	inline ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * get_Log_29() const { return ___Log_29; }
	inline ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D ** get_address_of_Log_29() { return &___Log_29; }
	inline void set_Log_29(ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * value)
	{
		___Log_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_29), (void*)value);
	}
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.Compression.ZipArchiveEntry
struct  ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345  : public RuntimeObject
{
public:
	// System.IO.Compression.ZipArchive System.IO.Compression.ZipArchiveEntry::_archive
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ____archive_0;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_originallyInArchive
	bool ____originallyInArchive_1;
	// System.Int32 System.IO.Compression.ZipArchiveEntry::_diskNumberStart
	int32_t ____diskNumberStart_2;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::_versionMadeByPlatform
	uint8_t ____versionMadeByPlatform_3;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionMadeBySpecification
	uint16_t ____versionMadeBySpecification_4;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionToExtract
	uint16_t ____versionToExtract_5;
	// System.IO.Compression.ZipArchiveEntry/BitFlagValues System.IO.Compression.ZipArchiveEntry::_generalPurposeBitFlag
	uint16_t ____generalPurposeBitFlag_6;
	// System.IO.Compression.ZipArchiveEntry/CompressionMethodValues System.IO.Compression.ZipArchiveEntry::_storedCompressionMethod
	uint16_t ____storedCompressionMethod_7;
	// System.DateTimeOffset System.IO.Compression.ZipArchiveEntry::_lastModified
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ____lastModified_8;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_compressedSize
	int64_t ____compressedSize_9;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_uncompressedSize
	int64_t ____uncompressedSize_10;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_offsetOfLocalHeader
	int64_t ____offsetOfLocalHeader_11;
	// System.Nullable`1<System.Int64> System.IO.Compression.ZipArchiveEntry::_storedOffsetOfCompressedData
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ____storedOffsetOfCompressedData_12;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_crc32
	uint32_t ____crc32_13;
	// System.Byte[][] System.IO.Compression.ZipArchiveEntry::_compressedBytes
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____compressedBytes_14;
	// System.IO.MemoryStream System.IO.Compression.ZipArchiveEntry::_storedUncompressedData
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ____storedUncompressedData_15;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_currentlyOpenForWrite
	bool ____currentlyOpenForWrite_16;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_everOpenedForWrite
	bool ____everOpenedForWrite_17;
	// System.IO.Stream System.IO.Compression.ZipArchiveEntry::_outstandingWriteStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____outstandingWriteStream_18;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_externalFileAttr
	uint32_t ____externalFileAttr_19;
	// System.String System.IO.Compression.ZipArchiveEntry::_storedEntryName
	String_t* ____storedEntryName_20;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_storedEntryNameBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____storedEntryNameBytes_21;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_cdUnknownExtraFields
	List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * ____cdUnknownExtraFields_22;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_lhUnknownExtraFields
	List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * ____lhUnknownExtraFields_23;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_fileComment
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____fileComment_24;
	// System.Nullable`1<System.IO.Compression.CompressionLevel> System.IO.Compression.ZipArchiveEntry::_compressionLevel
	Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ____compressionLevel_25;

public:
	inline static int32_t get_offset_of__archive_0() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____archive_0)); }
	inline ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * get__archive_0() const { return ____archive_0; }
	inline ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F ** get_address_of__archive_0() { return &____archive_0; }
	inline void set__archive_0(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * value)
	{
		____archive_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archive_0), (void*)value);
	}

	inline static int32_t get_offset_of__originallyInArchive_1() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____originallyInArchive_1)); }
	inline bool get__originallyInArchive_1() const { return ____originallyInArchive_1; }
	inline bool* get_address_of__originallyInArchive_1() { return &____originallyInArchive_1; }
	inline void set__originallyInArchive_1(bool value)
	{
		____originallyInArchive_1 = value;
	}

	inline static int32_t get_offset_of__diskNumberStart_2() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____diskNumberStart_2)); }
	inline int32_t get__diskNumberStart_2() const { return ____diskNumberStart_2; }
	inline int32_t* get_address_of__diskNumberStart_2() { return &____diskNumberStart_2; }
	inline void set__diskNumberStart_2(int32_t value)
	{
		____diskNumberStart_2 = value;
	}

	inline static int32_t get_offset_of__versionMadeByPlatform_3() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionMadeByPlatform_3)); }
	inline uint8_t get__versionMadeByPlatform_3() const { return ____versionMadeByPlatform_3; }
	inline uint8_t* get_address_of__versionMadeByPlatform_3() { return &____versionMadeByPlatform_3; }
	inline void set__versionMadeByPlatform_3(uint8_t value)
	{
		____versionMadeByPlatform_3 = value;
	}

	inline static int32_t get_offset_of__versionMadeBySpecification_4() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionMadeBySpecification_4)); }
	inline uint16_t get__versionMadeBySpecification_4() const { return ____versionMadeBySpecification_4; }
	inline uint16_t* get_address_of__versionMadeBySpecification_4() { return &____versionMadeBySpecification_4; }
	inline void set__versionMadeBySpecification_4(uint16_t value)
	{
		____versionMadeBySpecification_4 = value;
	}

	inline static int32_t get_offset_of__versionToExtract_5() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionToExtract_5)); }
	inline uint16_t get__versionToExtract_5() const { return ____versionToExtract_5; }
	inline uint16_t* get_address_of__versionToExtract_5() { return &____versionToExtract_5; }
	inline void set__versionToExtract_5(uint16_t value)
	{
		____versionToExtract_5 = value;
	}

	inline static int32_t get_offset_of__generalPurposeBitFlag_6() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____generalPurposeBitFlag_6)); }
	inline uint16_t get__generalPurposeBitFlag_6() const { return ____generalPurposeBitFlag_6; }
	inline uint16_t* get_address_of__generalPurposeBitFlag_6() { return &____generalPurposeBitFlag_6; }
	inline void set__generalPurposeBitFlag_6(uint16_t value)
	{
		____generalPurposeBitFlag_6 = value;
	}

	inline static int32_t get_offset_of__storedCompressionMethod_7() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedCompressionMethod_7)); }
	inline uint16_t get__storedCompressionMethod_7() const { return ____storedCompressionMethod_7; }
	inline uint16_t* get_address_of__storedCompressionMethod_7() { return &____storedCompressionMethod_7; }
	inline void set__storedCompressionMethod_7(uint16_t value)
	{
		____storedCompressionMethod_7 = value;
	}

	inline static int32_t get_offset_of__lastModified_8() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____lastModified_8)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get__lastModified_8() const { return ____lastModified_8; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of__lastModified_8() { return &____lastModified_8; }
	inline void set__lastModified_8(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		____lastModified_8 = value;
	}

	inline static int32_t get_offset_of__compressedSize_9() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressedSize_9)); }
	inline int64_t get__compressedSize_9() const { return ____compressedSize_9; }
	inline int64_t* get_address_of__compressedSize_9() { return &____compressedSize_9; }
	inline void set__compressedSize_9(int64_t value)
	{
		____compressedSize_9 = value;
	}

	inline static int32_t get_offset_of__uncompressedSize_10() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____uncompressedSize_10)); }
	inline int64_t get__uncompressedSize_10() const { return ____uncompressedSize_10; }
	inline int64_t* get_address_of__uncompressedSize_10() { return &____uncompressedSize_10; }
	inline void set__uncompressedSize_10(int64_t value)
	{
		____uncompressedSize_10 = value;
	}

	inline static int32_t get_offset_of__offsetOfLocalHeader_11() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____offsetOfLocalHeader_11)); }
	inline int64_t get__offsetOfLocalHeader_11() const { return ____offsetOfLocalHeader_11; }
	inline int64_t* get_address_of__offsetOfLocalHeader_11() { return &____offsetOfLocalHeader_11; }
	inline void set__offsetOfLocalHeader_11(int64_t value)
	{
		____offsetOfLocalHeader_11 = value;
	}

	inline static int32_t get_offset_of__storedOffsetOfCompressedData_12() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedOffsetOfCompressedData_12)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get__storedOffsetOfCompressedData_12() const { return ____storedOffsetOfCompressedData_12; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of__storedOffsetOfCompressedData_12() { return &____storedOffsetOfCompressedData_12; }
	inline void set__storedOffsetOfCompressedData_12(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		____storedOffsetOfCompressedData_12 = value;
	}

	inline static int32_t get_offset_of__crc32_13() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____crc32_13)); }
	inline uint32_t get__crc32_13() const { return ____crc32_13; }
	inline uint32_t* get_address_of__crc32_13() { return &____crc32_13; }
	inline void set__crc32_13(uint32_t value)
	{
		____crc32_13 = value;
	}

	inline static int32_t get_offset_of__compressedBytes_14() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressedBytes_14)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__compressedBytes_14() const { return ____compressedBytes_14; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__compressedBytes_14() { return &____compressedBytes_14; }
	inline void set__compressedBytes_14(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____compressedBytes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____compressedBytes_14), (void*)value);
	}

	inline static int32_t get_offset_of__storedUncompressedData_15() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedUncompressedData_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get__storedUncompressedData_15() const { return ____storedUncompressedData_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of__storedUncompressedData_15() { return &____storedUncompressedData_15; }
	inline void set__storedUncompressedData_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		____storedUncompressedData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedUncompressedData_15), (void*)value);
	}

	inline static int32_t get_offset_of__currentlyOpenForWrite_16() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____currentlyOpenForWrite_16)); }
	inline bool get__currentlyOpenForWrite_16() const { return ____currentlyOpenForWrite_16; }
	inline bool* get_address_of__currentlyOpenForWrite_16() { return &____currentlyOpenForWrite_16; }
	inline void set__currentlyOpenForWrite_16(bool value)
	{
		____currentlyOpenForWrite_16 = value;
	}

	inline static int32_t get_offset_of__everOpenedForWrite_17() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____everOpenedForWrite_17)); }
	inline bool get__everOpenedForWrite_17() const { return ____everOpenedForWrite_17; }
	inline bool* get_address_of__everOpenedForWrite_17() { return &____everOpenedForWrite_17; }
	inline void set__everOpenedForWrite_17(bool value)
	{
		____everOpenedForWrite_17 = value;
	}

	inline static int32_t get_offset_of__outstandingWriteStream_18() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____outstandingWriteStream_18)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__outstandingWriteStream_18() const { return ____outstandingWriteStream_18; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__outstandingWriteStream_18() { return &____outstandingWriteStream_18; }
	inline void set__outstandingWriteStream_18(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____outstandingWriteStream_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outstandingWriteStream_18), (void*)value);
	}

	inline static int32_t get_offset_of__externalFileAttr_19() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____externalFileAttr_19)); }
	inline uint32_t get__externalFileAttr_19() const { return ____externalFileAttr_19; }
	inline uint32_t* get_address_of__externalFileAttr_19() { return &____externalFileAttr_19; }
	inline void set__externalFileAttr_19(uint32_t value)
	{
		____externalFileAttr_19 = value;
	}

	inline static int32_t get_offset_of__storedEntryName_20() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedEntryName_20)); }
	inline String_t* get__storedEntryName_20() const { return ____storedEntryName_20; }
	inline String_t** get_address_of__storedEntryName_20() { return &____storedEntryName_20; }
	inline void set__storedEntryName_20(String_t* value)
	{
		____storedEntryName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedEntryName_20), (void*)value);
	}

	inline static int32_t get_offset_of__storedEntryNameBytes_21() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedEntryNameBytes_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__storedEntryNameBytes_21() const { return ____storedEntryNameBytes_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__storedEntryNameBytes_21() { return &____storedEntryNameBytes_21; }
	inline void set__storedEntryNameBytes_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____storedEntryNameBytes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedEntryNameBytes_21), (void*)value);
	}

	inline static int32_t get_offset_of__cdUnknownExtraFields_22() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____cdUnknownExtraFields_22)); }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * get__cdUnknownExtraFields_22() const { return ____cdUnknownExtraFields_22; }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 ** get_address_of__cdUnknownExtraFields_22() { return &____cdUnknownExtraFields_22; }
	inline void set__cdUnknownExtraFields_22(List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * value)
	{
		____cdUnknownExtraFields_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cdUnknownExtraFields_22), (void*)value);
	}

	inline static int32_t get_offset_of__lhUnknownExtraFields_23() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____lhUnknownExtraFields_23)); }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * get__lhUnknownExtraFields_23() const { return ____lhUnknownExtraFields_23; }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 ** get_address_of__lhUnknownExtraFields_23() { return &____lhUnknownExtraFields_23; }
	inline void set__lhUnknownExtraFields_23(List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * value)
	{
		____lhUnknownExtraFields_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lhUnknownExtraFields_23), (void*)value);
	}

	inline static int32_t get_offset_of__fileComment_24() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____fileComment_24)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__fileComment_24() const { return ____fileComment_24; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__fileComment_24() { return &____fileComment_24; }
	inline void set__fileComment_24(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____fileComment_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileComment_24), (void*)value);
	}

	inline static int32_t get_offset_of__compressionLevel_25() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressionLevel_25)); }
	inline Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  get__compressionLevel_25() const { return ____compressionLevel_25; }
	inline Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 * get_address_of__compressionLevel_25() { return &____compressionLevel_25; }
	inline void set__compressionLevel_25(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  value)
	{
		____compressionLevel_25 = value;
	}
};

struct ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields
{
public:
	// System.Boolean System.IO.Compression.ZipArchiveEntry::s_allowLargeZipArchiveEntriesInUpdateMode
	bool ___s_allowLargeZipArchiveEntriesInUpdateMode_26;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::CurrentZipPlatform
	uint8_t ___CurrentZipPlatform_27;

public:
	inline static int32_t get_offset_of_s_allowLargeZipArchiveEntriesInUpdateMode_26() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields, ___s_allowLargeZipArchiveEntriesInUpdateMode_26)); }
	inline bool get_s_allowLargeZipArchiveEntriesInUpdateMode_26() const { return ___s_allowLargeZipArchiveEntriesInUpdateMode_26; }
	inline bool* get_address_of_s_allowLargeZipArchiveEntriesInUpdateMode_26() { return &___s_allowLargeZipArchiveEntriesInUpdateMode_26; }
	inline void set_s_allowLargeZipArchiveEntriesInUpdateMode_26(bool value)
	{
		___s_allowLargeZipArchiveEntriesInUpdateMode_26 = value;
	}

	inline static int32_t get_offset_of_CurrentZipPlatform_27() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields, ___CurrentZipPlatform_27)); }
	inline uint8_t get_CurrentZipPlatform_27() const { return ___CurrentZipPlatform_27; }
	inline uint8_t* get_address_of_CurrentZipPlatform_27() { return &___CurrentZipPlatform_27; }
	inline void set_CurrentZipPlatform_27(uint8_t value)
	{
		___CurrentZipPlatform_27 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileInfo
struct  FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);

// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Size(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_DataPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763 (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::WriteEventCore(System.Int32,System.Int32,System.Diagnostics.Tracing.EventSource/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEventCore_m4CA96E9E4DBF8E892DBEB9C482CBD60F3D67679A (EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * __this, int32_t ___eventId0, int32_t ___eventDataCount1, EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * ___data2, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m2947281A16FC8E72456A5816E34A7DD8102EF560 (EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * __this, int32_t ___eventId0, int32_t ___arg11, int32_t ___arg22, int32_t ___arg33, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m269E04845C481161A894037B5656C992F0D49021 (EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * __this, const RuntimeMethod* method);
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m290A417EEE3846B5EECC22205EA8B91BF1525A62 (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, bool ___useAsync5, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipArchive::.ctor(System.IO.Stream,System.IO.Compression.ZipArchiveMode,System.Boolean,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchive__ctor_m6CDC7760E095929DC56243D9402EDFEDD707D473 (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding3, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFile::DoCreateFromDirectory(System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>,System.Boolean,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_DoCreateFromDirectory_m53BB9614F115EBCAC53DAF8E075D95C5DDC8DBB6 (String_t* ___sourceDirectoryName0, String_t* ___destinationArchiveFileName1, Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ___compressionLevel2, bool ___includeBaseDirectory3, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding4, const RuntimeMethod* method);
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963 (String_t* ___path0, const RuntimeMethod* method);
// System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3 (String_t* ___archiveFileName0, int32_t ___mode1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method);
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6 (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * DirectoryInfo_get_Parent_m096FC02E11E67D65757D88B40A309FF07778554E (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method);
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
inline ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_gshared_inline)(method);
}
// System.Collections.Generic.IEnumerable`1<System.IO.FileSystemInfo> System.IO.DirectoryInfo::EnumerateFileSystemInfos(System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DirectoryInfo_EnumerateFileSystemInfos_mBAE5481538E12730733DC024A15360FC6B740DBD (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, String_t* ___searchPattern0, int32_t ___searchOption1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.IO.Compression.ZipFile::EntryFromPath(System.String,System.Int32,System.Int32,System.Char[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A (String_t* ___entry0, int32_t ___offset1, int32_t ___length2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** ___buffer3, bool ___appendPathSeparator4, const RuntimeMethod* method);
// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::DoCreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ___destination0, String_t* ___sourceFileName1, String_t* ___entryName2, Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ___compressionLevel3, const RuntimeMethod* method);
// System.Boolean System.IO.Compression.ZipFile::IsDirEmpty(System.IO.DirectoryInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipFile_IsDirEmpty_m1B83BEA5828004ED3BDB1090DCCD0FC543F6BE76 (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * ___possiblyEmptyDir0, const RuntimeMethod* method);
// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipArchive::CreateEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ZipArchive_CreateEntry_mC3E0715B2DCB659CAF7D120C13D5188B03388601 (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * __this, String_t* ___entryName0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFile::EnsureCapacity(System.Char[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_EnsureCapacity_mED7075772170B76CB06B595E58A2D95D67D08075 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** ___buffer0, int32_t ___min1, const RuntimeMethod* method);
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1 (String_t* __this, int32_t ___sourceIndex0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___destination1, int32_t ___destinationIndex2, int32_t ___count3, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> System.IO.Directory::EnumerateFileSystemEntries(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Directory_EnumerateFileSystemEntries_m7C8177928A09C7B4E5123E8DE0213F6D0C2A6EAC (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.IO.Compression.CompressionLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC9E8B98C42A334A651A08D6E809F1DA11B5C1700_inline (Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 *, const RuntimeMethod*))Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.IO.Compression.CompressionLevel>::get_Value()
inline int32_t Nullable_1_get_Value_m32703942875629F77D7939B1AAD540EB86939515 (Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 *, const RuntimeMethod*))Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared)(__this, method);
}
// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipArchive::CreateEntry(System.String,System.IO.Compression.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ZipArchive_CreateEntry_m787AB577E374FEF40FB217E6624EBCA582C1EBA5 (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * __this, String_t* ___entryName0, int32_t ___compressionLevel1, const RuntimeMethod* method);
// System.DateTime System.IO.File::GetLastWriteTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  File_GetLastWriteTime_m7D296576EA8963D3044B663B4A6095D58C6CF9C5 (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_op_Implicit_m868690EC78B30802CD8E0DF10A083312632C0123 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipArchiveEntry::set_LastWriteTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveEntry_set_LastWriteTime_m8CA2A651F4E2EC12DF61352C9C6FF9CCBFEBA43E (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method);
// System.IO.Stream System.IO.Compression.ZipArchiveEntry::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ZipArchiveEntry_Open_m9893B7B85795F12ECFAD160AECBE48D679D0D087 (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___destination0, const RuntimeMethod* method);
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
// System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, int32_t ___bucketId3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_0)));
		V_0 = (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(L_1);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_2 = V_0;
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_2, 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bufferId0)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_5 = V_0;
		uint32_t L_6 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6)), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_7 = V_0;
		uint32_t L_8 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bufferSize1)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)), (intptr_t)L_9, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_10 = V_0;
		uint32_t L_11 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)L_11)))), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_12 = V_0;
		uint32_t L_13 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_14;
		L_14 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___poolId2)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)L_13)))), (intptr_t)L_14, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_15 = V_0;
		uint32_t L_16 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)L_16)))), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_17 = V_0;
		uint32_t L_18 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_19;
		L_19 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bucketId3)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)L_18)))), (intptr_t)L_19, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_20 = V_0;
		EventSource_WriteEventCore_m4CA96E9E4DBF8E892DBEB9C482CBD60F3D67679A(__this, 1, 4, (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265 (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, int32_t ___bucketId3, int32_t ___reason4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		if ((uintptr_t)((uintptr_t)5) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)5), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)5), (int32_t)L_0)));
		V_0 = (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(L_1);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_2 = V_0;
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_2, 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bufferId0)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_5 = V_0;
		uint32_t L_6 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6)), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_7 = V_0;
		uint32_t L_8 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bufferSize1)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)), (intptr_t)L_9, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_10 = V_0;
		uint32_t L_11 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)L_11)))), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_12 = V_0;
		uint32_t L_13 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_14;
		L_14 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___poolId2)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)L_13)))), (intptr_t)L_14, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_15 = V_0;
		uint32_t L_16 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)L_16)))), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_17 = V_0;
		uint32_t L_18 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_19;
		L_19 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___bucketId3)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)L_18)))), (intptr_t)L_19, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_20 = V_0;
		uint32_t L_21 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_20, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)4), (int32_t)L_21)))), 4, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_22 = V_0;
		uint32_t L_23 = sizeof(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D );
		intptr_t L_24;
		L_24 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)((uintptr_t)(&___reason4)), /*hidden argument*/NULL);
		EventData_set_DataPointer_mBB6911A84CC21EF99EFFA90328CE6207975C2763((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)((EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)4), (int32_t)L_23)))), (intptr_t)L_24, /*hidden argument*/NULL);
		EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * L_25 = V_0;
		EventSource_WriteEventCore_m4CA96E9E4DBF8E892DBEB9C482CBD60F3D67679A(__this, 2, 5, (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)(EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D *)L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferReturned_mB4CBB95F5FEE391CA09EC704E6B66C054E5BBAFF (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bufferId0;
		int32_t L_1 = ___bufferSize1;
		int32_t L_2 = ___poolId2;
		EventSource_WriteEvent_m2947281A16FC8E72456A5816E34A7DD8102EF560(__this, 3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m290A417EEE3846B5EECC22205EA8B91BF1525A62 (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var);
		EventSource__ctor_m269E04845C481161A894037B5656C992F0D49021(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__cctor_mDF96496AFB88A36BBD7029C8AC89BAED0DB6EA40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D * L_0 = (ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D *)il2cpp_codegen_object_new(ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_il2cpp_TypeInfo_var);
		ArrayPoolEventSource__ctor_m290A417EEE3846B5EECC22205EA8B91BF1525A62(L_0, /*hidden argument*/NULL);
		((ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_t3E9BC220C1357E8350EB47BAC39528BD3A1FA71D_il2cpp_TypeInfo_var))->set_Log_29(L_0);
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
// System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_SelectBucketIndex_mA64F7B0231FEBCA7FAE9E4AB31DE69A7514E62BA (int32_t ___bufferSize0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bufferSize0;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))>>4));
		V_1 = 0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((uint32_t)L_2>>((int32_t)16)));
		V_1 = ((int32_t)16);
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)8));
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((uint32_t)L_7>>4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)4));
	}

IL_0035:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((uint32_t)L_10>>2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
	}

IL_0041:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((uint32_t)L_13>>1));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
	}
}
// System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetMaxSizeForBucket_mEE671E4A29E71381CA912F24E3926CF9AA37DCF4 (int32_t ___binIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___binIndex0;
		return ((int32_t)((int32_t)((int32_t)16)<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31)))));
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
// System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3 (String_t* ___archiveFileName0, int32_t ___mode1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_3 = NULL;
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = ___mode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		V_0 = 3;
		V_1 = 1;
		V_2 = 1;
		goto IL_0037;
	}

IL_001c:
	{
		V_0 = 1;
		V_1 = 2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0024:
	{
		V_0 = 4;
		V_1 = 3;
		V_2 = 0;
		goto IL_0037;
	}

IL_002c:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_2 = ___archiveFileName0;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA(L_6, L_2, L_3, L_4, L_5, ((int32_t)4096), (bool)0, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = V_3;
		int32_t L_8 = ___mode1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9 = ___entryNameEncoding2;
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_10 = (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F *)il2cpp_codegen_object_new(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var);
		ZipArchive__ctor_m6CDC7760E095929DC56243D9402EDFEDD707D473(L_10, L_7, L_8, (bool)0, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Object)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_11 = V_3;
		NullCheck(L_11);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_005d:
	{
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_12 = V_4;
		return L_12;
	}
}
// System.Void System.IO.Compression.ZipFile::CreateFromDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_CreateFromDirectory_m3D715E660F210083C4EDAE0FBEA68C57E7372E6D (String_t* ___sourceDirectoryName0, String_t* ___destinationArchiveFileName1, const RuntimeMethod* method)
{
	Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___sourceDirectoryName0;
		String_t* L_1 = ___destinationArchiveFileName1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 ));
		Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  L_2 = V_0;
		ZipFile_DoCreateFromDirectory_m53BB9614F115EBCAC53DAF8E075D95C5DDC8DBB6(L_0, L_1, L_2, (bool)0, (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.Compression.ZipFile::DoCreateFromDirectory(System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>,System.Boolean,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_DoCreateFromDirectory_m53BB9614F115EBCAC53DAF8E075D95C5DDC8DBB6 (String_t* ___sourceDirectoryName0, String_t* ___destinationArchiveFileName1, Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ___compressionLevel2, bool ___includeBaseDirectory3, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tECEE70D6790586D2BF000D3BEADDCF95017BF050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF54FA6FC69623B1826396F692DB2D94D46FD287B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * V_0 = NULL;
	bool V_1 = false;
	DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * V_2 = NULL;
	String_t* V_3 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * V_9 = NULL;
	String_t* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		String_t* L_0 = ___sourceDirectoryName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963(L_0, /*hidden argument*/NULL);
		___sourceDirectoryName0 = L_1;
		String_t* L_2 = ___destinationArchiveFileName1;
		String_t* L_3;
		L_3 = Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963(L_2, /*hidden argument*/NULL);
		___destinationArchiveFileName1 = L_3;
		String_t* L_4 = ___destinationArchiveFileName1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5 = ___entryNameEncoding4;
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_6;
		L_6 = ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3(L_4, 1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (bool)1;
			String_t* L_7 = ___sourceDirectoryName0;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_8 = (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)il2cpp_codegen_object_new(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
			DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6(L_8, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_9);
			V_3 = L_10;
			bool L_11 = ___includeBaseDirectory3;
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_002d:
		{
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_12 = V_2;
			NullCheck(L_12);
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_13;
			L_13 = DirectoryInfo_get_Parent_m096FC02E11E67D65757D88B40A309FF07778554E(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0041;
			}
		}

IL_0035:
		{
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_14 = V_2;
			NullCheck(L_14);
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_15;
			L_15 = DirectoryInfo_get_Parent_m096FC02E11E67D65757D88B40A309FF07778554E(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_15);
			V_3 = L_16;
		}

IL_0041:
		{
			ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_17;
			L_17 = ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_inline(/*hidden argument*/ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
			NullCheck(L_17);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18;
			L_18 = VirtFuncInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_17, ((int32_t)260));
			V_4 = L_18;
		}

IL_0052:
		try
		{ // begin try (depth: 2)
			{
				DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_19 = V_2;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = DirectoryInfo_EnumerateFileSystemInfos_mBAE5481538E12730733DC024A15360FC6B740DBD(L_19, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, 1, /*hidden argument*/NULL);
				NullCheck(L_20);
				RuntimeObject* L_21;
				L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.IO.FileSystemInfo>::GetEnumerator() */, IEnumerable_1_tECEE70D6790586D2BF000D3BEADDCF95017BF050_il2cpp_TypeInfo_var, L_20);
				V_5 = L_21;
			}

IL_0065:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00f7;
				}

IL_006a:
				{
					RuntimeObject* L_22 = V_5;
					NullCheck(L_22);
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_23;
					L_23 = InterfaceFuncInvoker0< FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.IO.FileSystemInfo>::get_Current() */, IEnumerator_1_tF54FA6FC69623B1826396F692DB2D94D46FD287B_il2cpp_TypeInfo_var, L_22);
					V_6 = L_23;
					V_1 = (bool)0;
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_24 = V_6;
					NullCheck(L_24);
					String_t* L_25;
					L_25 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_24);
					NullCheck(L_25);
					int32_t L_26;
					L_26 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_25, /*hidden argument*/NULL);
					String_t* L_27 = V_3;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
					V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_28));
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_29 = V_6;
					if (!((FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 *)IsInstSealed((RuntimeObject*)L_29, FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var)))
					{
						goto IL_00bf;
					}
				}

IL_0093:
				{
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_30 = V_6;
					NullCheck(L_30);
					String_t* L_31;
					L_31 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_30);
					String_t* L_32 = V_3;
					NullCheck(L_32);
					int32_t L_33;
					L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
					int32_t L_34 = V_7;
					String_t* L_35;
					L_35 = ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A(L_31, L_33, L_34, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)(&V_4), (bool)0, /*hidden argument*/NULL);
					V_8 = L_35;
					ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_36 = V_0;
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_37 = V_6;
					NullCheck(L_37);
					String_t* L_38;
					L_38 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_37);
					String_t* L_39 = V_8;
					Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  L_40 = ___compressionLevel2;
					ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_41;
					L_41 = ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB(L_36, L_38, L_39, L_40, /*hidden argument*/NULL);
					goto IL_00f7;
				}

IL_00bf:
				{
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_42 = V_6;
					V_9 = ((DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)IsInstSealed((RuntimeObject*)L_42, DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var));
					DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_43 = V_9;
					if (!L_43)
					{
						goto IL_00f7;
					}
				}

IL_00cc:
				{
					DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_44 = V_9;
					bool L_45;
					L_45 = ZipFile_IsDirEmpty_m1B83BEA5828004ED3BDB1090DCCD0FC543F6BE76(L_44, /*hidden argument*/NULL);
					if (!L_45)
					{
						goto IL_00f7;
					}
				}

IL_00d5:
				{
					FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * L_46 = V_6;
					NullCheck(L_46);
					String_t* L_47;
					L_47 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_46);
					String_t* L_48 = V_3;
					NullCheck(L_48);
					int32_t L_49;
					L_49 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_48, /*hidden argument*/NULL);
					int32_t L_50 = V_7;
					String_t* L_51;
					L_51 = ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A(L_47, L_49, L_50, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)(&V_4), (bool)1, /*hidden argument*/NULL);
					V_10 = L_51;
					ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_52 = V_0;
					String_t* L_53 = V_10;
					NullCheck(L_52);
					ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_54;
					L_54 = ZipArchive_CreateEntry_mC3E0715B2DCB659CAF7D120C13D5188B03388601(L_52, L_53, /*hidden argument*/NULL);
				}

IL_00f7:
				{
					RuntimeObject* L_55 = V_5;
					NullCheck(L_55);
					bool L_56;
					L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_55);
					if (L_56)
					{
						goto IL_006a;
					}
				}

IL_0103:
				{
					IL2CPP_LEAVE(0x111, FINALLY_0105);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0105;
			}

FINALLY_0105:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_57 = V_5;
					if (!L_57)
					{
						goto IL_0110;
					}
				}

IL_0109:
				{
					RuntimeObject* L_58 = V_5;
					NullCheck(L_58);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_58);
				}

IL_0110:
				{
					IL2CPP_END_FINALLY(261)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(261)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x111, IL_0111)
			}

IL_0111:
			{
				bool L_59 = ___includeBaseDirectory3;
				bool L_60 = V_1;
				if (!((int32_t)((int32_t)L_59&(int32_t)L_60)))
				{
					goto IL_0137;
				}
			}

IL_0116:
			{
				ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_61 = V_0;
				DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_62 = V_2;
				NullCheck(L_62);
				String_t* L_63;
				L_63 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_Name() */, L_62);
				DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_64 = V_2;
				NullCheck(L_64);
				String_t* L_65;
				L_65 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_Name() */, L_64);
				NullCheck(L_65);
				int32_t L_66;
				L_66 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_65, /*hidden argument*/NULL);
				String_t* L_67;
				L_67 = ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A(L_63, 0, L_66, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)(&V_4), (bool)1, /*hidden argument*/NULL);
				NullCheck(L_61);
				ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_68;
				L_68 = ZipArchive_CreateEntry_mC3E0715B2DCB659CAF7D120C13D5188B03388601(L_61, L_67, /*hidden argument*/NULL);
			}

IL_0137:
			{
				IL2CPP_LEAVE(0x151, FINALLY_0139);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0139;
		}

FINALLY_0139:
		{ // begin finally (depth: 2)
			ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_69;
			L_69 = ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_inline(/*hidden argument*/ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_70 = V_4;
			NullCheck(L_69);
			VirtActionInvoker2< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_69, L_70, (bool)0);
			IL2CPP_END_FINALLY(313)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(313)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x151, FINALLY_0147);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0147;
	}

FINALLY_0147:
	{ // begin finally (depth: 1)
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_71 = V_0;
			if (!L_71)
			{
				goto IL_0150;
			}
		}

IL_014a:
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_72 = V_0;
			NullCheck(L_72);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_72);
		}

IL_0150:
		{
			IL2CPP_END_FINALLY(327)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(327)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x151, IL_0151)
	}

IL_0151:
	{
		return;
	}
}
// System.String System.IO.Compression.ZipFile::EntryFromPath(System.String,System.Int32,System.Int32,System.Char[]&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A (String_t* ___entry0, int32_t ___offset1, int32_t ___length2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** ___buffer3, bool ___appendPathSeparator4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t G_B12_0 = 0;
	{
		goto IL_0028;
	}

IL_0002:
	{
		String_t* L_0 = ___entry0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_3 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = ___entry0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_7 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_AltDirectorySeparatorChar_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002c;
		}
	}

IL_001e:
	{
		int32_t L_8 = ___offset1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}

IL_002c:
	{
		int32_t L_11 = ___length2;
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		bool L_12 = ___appendPathSeparator4;
		if (L_12)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_13;
	}

IL_0039:
	{
		V_1 = ((int32_t)47);
		String_t* L_14;
		L_14 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		return L_14;
	}

IL_0044:
	{
		bool L_15 = ___appendPathSeparator4;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_16 = ___length2;
		G_B12_0 = L_16;
		goto IL_004e;
	}

IL_004b:
	{
		int32_t L_17 = ___length2;
		G_B12_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_004e:
	{
		V_0 = G_B12_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_18 = ___buffer3;
		int32_t L_19 = V_0;
		ZipFile_EnsureCapacity_mED7075772170B76CB06B595E58A2D95D67D08075((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_18, L_19, /*hidden argument*/NULL);
		String_t* L_20 = ___entry0;
		int32_t L_21 = ___offset1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_22 = ___buffer3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_22);
		int32_t L_24 = ___length2;
		NullCheck(L_20);
		String_CopyTo_mF77EF8D4E5ABBD2AB7F509FFE9C0C70DC15A27E1(L_20, L_21, L_23, 0, L_24, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0084;
	}

IL_0065:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_25 = ___buffer3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_25);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_3 = L_29;
		Il2CppChar L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_31 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}
	{
		Il2CppChar L_32 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_33 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_AltDirectorySeparatorChar_1();
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_0080;
		}
	}

IL_007a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_34 = ___buffer3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_34);
		int32_t L_36 = V_2;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppChar)((int32_t)47));
	}

IL_0080:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0084:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = ___length2;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0065;
		}
	}
	{
		bool L_40 = ___appendPathSeparator4;
		if (!L_40)
		{
			goto IL_0092;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_41 = ___buffer3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_41);
		int32_t L_43 = ___length2;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Il2CppChar)((int32_t)47));
	}

IL_0092:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_44 = ___buffer3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_45 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_44);
		int32_t L_46 = V_0;
		String_t* L_47;
		L_47 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_45, 0, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void System.IO.Compression.ZipFile::EnsureCapacity(System.Char[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_EnsureCapacity_mED7075772170B76CB06B595E58A2D95D67D08075 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** ___buffer0, int32_t ___min1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_0 = ___buffer0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___min1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) >= ((int32_t)L_2)))
		{
			goto IL_002e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_3 = ___buffer0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)2));
		int32_t L_5 = V_0;
		int32_t L_6 = ___min1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_7 = ___min1;
		V_0 = L_7;
	}

IL_0014:
	{
		ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_8;
		L_8 = ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_inline(/*hidden argument*/ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_9 = ___buffer0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = *((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34**)L_9);
		NullCheck(L_8);
		VirtActionInvoker2< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_8, L_10, (bool)0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** L_11 = ___buffer0;
		ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_12;
		L_12 = ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_inline(/*hidden argument*/ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_RuntimeMethod_var);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14;
		L_14 = VirtFuncInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_12, L_13);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_14);
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean System.IO.Compression.ZipFile::IsDirEmpty(System.IO.DirectoryInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipFile_IsDirEmpty_m1B83BEA5828004ED3BDB1090DCCD0FC543F6BE76 (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * ___possiblyEmptyDir0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_0 = ___possiblyEmptyDir0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_0);
		RuntimeObject* L_2;
		L_2 = Directory_EnumerateFileSystemEntries_m7C8177928A09C7B4E5123E8DE0213F6D0C2A6EAC(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		IL2CPP_LEAVE(0x27, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0026:
		{
			IL2CPP_END_FINALLY(29)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27, IL_0027)
	}

IL_0027:
	{
		bool L_8 = V_1;
		return L_8;
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
// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::DoCreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ___destination0, String_t* ___sourceFileName1, String_t* ___entryName2, Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ___compressionLevel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC9E8B98C42A334A651A08D6E809F1DA11B5C1700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m32703942875629F77D7939B1AAD540EB86939515_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_0 = NULL;
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_3 = NULL;
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * G_B10_0 = NULL;
	{
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_0 = ___destination0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___sourceFileName1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56F96CA2C7CD86A940882DB30231478A10E0B61F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___entryName2;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC39AAB8B28BCEDAFA6F3285CC603CE852769989)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB_RuntimeMethod_var)));
	}

IL_002a:
	{
		String_t* L_6 = ___sourceFileName1;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA(L_7, L_6, 3, 1, 1, ((int32_t)4096), (bool)0, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			bool L_8;
			L_8 = Nullable_1_get_HasValue_mC9E8B98C42A334A651A08D6E809F1DA11B5C1700_inline((Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 *)(&___compressionLevel3), /*hidden argument*/Nullable_1_get_HasValue_mC9E8B98C42A334A651A08D6E809F1DA11B5C1700_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_004c;
			}
		}

IL_0043:
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_9 = ___destination0;
			String_t* L_10 = ___entryName2;
			NullCheck(L_9);
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_11;
			L_11 = ZipArchive_CreateEntry_mC3E0715B2DCB659CAF7D120C13D5188B03388601(L_9, L_10, /*hidden argument*/NULL);
			G_B10_0 = L_11;
			goto IL_005a;
		}

IL_004c:
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_12 = ___destination0;
			String_t* L_13 = ___entryName2;
			int32_t L_14;
			L_14 = Nullable_1_get_Value_m32703942875629F77D7939B1AAD540EB86939515((Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 *)(&___compressionLevel3), /*hidden argument*/Nullable_1_get_Value_m32703942875629F77D7939B1AAD540EB86939515_RuntimeMethod_var);
			NullCheck(L_12);
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_15;
			L_15 = ZipArchive_CreateEntry_m787AB577E374FEF40FB217E6624EBCA582C1EBA5(L_12, L_13, L_14, /*hidden argument*/NULL);
			G_B10_0 = L_15;
		}

IL_005a:
		{
			V_1 = G_B10_0;
			String_t* L_16 = ___sourceFileName1;
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_17;
			L_17 = File_GetLastWriteTime_m7D296576EA8963D3044B663B4A6095D58C6CF9C5(L_16, /*hidden argument*/NULL);
			V_2 = L_17;
			int32_t L_18;
			L_18 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			if ((((int32_t)L_18) < ((int32_t)((int32_t)1980))))
			{
				goto IL_007e;
			}
		}

IL_0070:
		{
			int32_t L_19;
			L_19 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			if ((((int32_t)L_19) <= ((int32_t)((int32_t)2107))))
			{
				goto IL_008f;
			}
		}

IL_007e:
		{
			DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), ((int32_t)1980), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		}

IL_008f:
		{
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_20 = V_1;
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_21 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
			DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_22;
			L_22 = DateTimeOffset_op_Implicit_m868690EC78B30802CD8E0DF10A083312632C0123(L_21, /*hidden argument*/NULL);
			NullCheck(L_20);
			ZipArchiveEntry_set_LastWriteTime_m8CA2A651F4E2EC12DF61352C9C6FF9CCBFEBA43E(L_20, L_22, /*hidden argument*/NULL);
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_23 = V_1;
			NullCheck(L_23);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_24;
			L_24 = ZipArchiveEntry_Open_m9893B7B85795F12ECFAD160AECBE48D679D0D087(L_23, /*hidden argument*/NULL);
			V_3 = L_24;
		}

IL_00a2:
		try
		{ // begin try (depth: 2)
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_25 = V_0;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_26 = V_3;
			NullCheck(L_25);
			Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421(L_25, L_26, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xB5, FINALLY_00ab);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ab;
		}

FINALLY_00ab:
		{ // begin finally (depth: 2)
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_27 = V_3;
				if (!L_27)
				{
					goto IL_00b4;
				}
			}

IL_00ae:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_28 = V_3;
				NullCheck(L_28);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
			}

IL_00b4:
			{
				IL2CPP_END_FINALLY(171)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(171)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		}

IL_00b5:
		{
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_29 = V_1;
			V_4 = L_29;
			IL2CPP_LEAVE(0xC4, FINALLY_00ba);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ba;
	}

FINALLY_00ba:
	{ // begin finally (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_30 = V_0;
			if (!L_30)
			{
				goto IL_00c3;
			}
		}

IL_00bd:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31 = V_0;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_31);
		}

IL_00c3:
		{
			IL2CPP_END_FINALLY(186)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(186)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
	}

IL_00c4:
	{
		ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_32 = V_4;
		return L_32;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_mCB219B5FC18DE9210FD02E9C81EF5A8D00A655A4_inline (EventData_t3EA107931A53A664692B94A1F12FFE1081534A5D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Size_1(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * ArrayPool_1_get_Shared_m479A055D738D032A6F090981132395B6ABC10600_gshared_inline (const RuntimeMethod* method)
{
	ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * G_B2_0 = NULL;
	ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * G_B1_0 = NULL;
	{
		ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_0;
		L_0 = VolatileRead((ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 **)(ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 **)(((ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_address_of_s_sharedInstance_0()));
		ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_1 = (ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 *)L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * L_2;
		L_2 = ((  ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		G_B2_0 = L_2;
	}

IL_0013:
	{
		return (ArrayPool_1_t58CAD22ED9598EF1CEB24FA065BB9ED06CFB03A3 *)G_B2_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
