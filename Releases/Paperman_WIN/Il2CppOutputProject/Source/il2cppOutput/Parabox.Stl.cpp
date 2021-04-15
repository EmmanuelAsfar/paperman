#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>
struct Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650;
// System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>
struct Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`2<UnityEngine.GameObject,UnityEngine.Transform>
struct Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A;
// System.Func`2<UnityEngine.Mesh,System.Int32>
struct Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560;
// System.Func`2<UnityEngine.MeshFilter,System.Boolean>
struct Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Mesh>
struct IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587;
// System.Collections.Generic.IEnumerable`1<UnityEngine.MeshFilter>
struct IEnumerable_1_t36D36000DA049FFB3E4D4373202835671FC2BCDF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792;
// System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>
struct IEnumerable_1_t0896041A5FC3789592EDED8BD46B0B3B2604E3FD;
// System.Collections.Generic.IEqualityComparer`1<Parabox.Stl.StlVector3>
struct IEqualityComparer_1_t225DD5429E837D8BE3A849947FB4DD34A2ACA304;
// System.Collections.Generic.IList`1<UnityEngine.Mesh>
struct IList_1_t0F12BBD3ADB18223C75B9673D75B1B7EA7BD17E8;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t1ECC96E83AB5C400CB3F9083067FC74F19A8CD5C;
// System.Collections.Generic.Dictionary`2/KeyCollection<Parabox.Stl.StlVector3,System.Int32>
struct KeyCollection_t5C55819D8D0F2972E038EA67E059AC397A04903B;
// System.Collections.Generic.Dictionary`2/KeyCollection<Parabox.Stl.StlVector3,UnityEngine.Vector3>
struct KeyCollection_t3EE217FB650A4FCB0D437077B6B1BA034122B4D2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>
struct List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.Dictionary`2/ValueCollection<Parabox.Stl.StlVector3,System.Int32>
struct ValueCollection_tCE615B18359BDE7680BA1E38C438AC682F00D98F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Parabox.Stl.StlVector3,UnityEngine.Vector3>
struct ValueCollection_t154CC8527B18E3D8AAD66C012690F719DD1C5760;
// System.Collections.Generic.Dictionary`2/Entry<Parabox.Stl.StlVector3,System.Int32>[]
struct EntryU5BU5D_t1B8A5DFAD0A950BC41A44DEEE1EA6F0D087176EE;
// System.Collections.Generic.Dictionary`2/Entry<Parabox.Stl.StlVector3,UnityEngine.Vector3>[]
struct EntryU5BU5D_t2C4D2E88A70F84507A9958BA99E89C01A059835C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Parabox.Stl.Importer/Facet[]
struct FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810;
// System.Text.ASCIIEncoding
struct ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.Tasks.BeginEndAwaitableAdapter
struct BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// System.IO.BufferedStream
struct BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileInfo
struct FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Parabox.Stl.Exporter/<>c
struct U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7F769DFF0B3F1FFF0181F521B9ABD47A15E0234F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0896041A5FC3789592EDED8BD46B0B3B2604E3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04C5F5148A2F3C116CAF25F1DBD0CB3D9FC736B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF13734F57A1165E9F09A47296CF97C2F7E6AFD01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0F12BBD3ADB18223C75B9673D75B1B7EA7BD17E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1ECC96E83AB5C400CB3F9083067FC74F19A8CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA78267B9B48D668B1654BA13E4E82784018E59;
IL2CPP_EXTERN_C String_t* _stringLiteral34ED107E760A2C78AB0AC637F155812BC9E59C9A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ACD40A51E7770253C3AEDB5D6E6EF9F6335815B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B8852E8A5D08914DA47D2EA288B25B0A4DF0517;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED138BC333DC09EF25650FCA829DD8502F81B86;
IL2CPP_EXTERN_C String_t* _stringLiteral735D9BB3B699C953C14CC817D3DF0E7A51289C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral79559B627C79A3CC077A3F371BD91BF8AB57ADFF;
IL2CPP_EXTERN_C String_t* _stringLiteral8016E6A911A81C79245D0619A7A2573C4B2329E7;
IL2CPP_EXTERN_C String_t* _stringLiteral80E7F53EFF2BB967F1A8C3D1A0F801B9C14C0F42;
IL2CPP_EXTERN_C String_t* _stringLiteral964F904D325F3CD9E47E19C43C4B1C70C30986C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA71101E76B0125E73A30300A33BD5DFF87DE52DA;
IL2CPP_EXTERN_C String_t* _stringLiteralA835E646C0E93EE1531BA93A51DD16EF3447A87B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1DF9A0AF025F74ADD253B3F9D98E08098430BC2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE53106BF6E2C51430F4A36FF420B6EBBB29ED358;
IL2CPP_EXTERN_C String_t* _stringLiteralE792AD873720398DE82F52D4D925E98489C5EEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralF25D35482268B7A0FB5DEE2B4E37E21A515983E7;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B7B08AE50BD196BA37F420FE6E9E8BD694396B;
IL2CPP_EXTERN_C String_t* _stringLiteralF715474BDA107825474957A63581596443C1FC79;
IL2CPP_EXTERN_C String_t* _stringLiteralFA565D188AFDB12EE2030CD030324B7521A61A71;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC29063FCA72BC1888184A730F75282EF551E9580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m96CF7900E945E5FDE060264FCA16F1B4EFF52815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m410A506E215F5BD6DEE6534232ED136A59218BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m886CC744C1E5EBB2DBD4F3B6303AF01A1977E8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m01F1D3ACD768A305E2B039EB9289434FF70A92D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA117EBD301C8735ADD321E29D877207DAC108744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m166CDC054745BAFB93DA39AF515EE68019E233FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateWorldSpaceMeshesWithTransformsU3Eb__1_0_m7373012E942B15FEA399A27F32AADE9312F03AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExportU3Eb__0_0_m55E2002CA090F01648FF47CED585B324CC385260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWriteFileU3Eb__3_0_mD3E8F25037AB57FBF766718F0E063FA0380AB4CA_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t99C09DDBCE67AF9D0E55FB5106B7F897474ED6C6 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>
struct  Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1B8A5DFAD0A950BC41A44DEEE1EA6F0D087176EE* ___entries_1;
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
	KeyCollection_t5C55819D8D0F2972E038EA67E059AC397A04903B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCE615B18359BDE7680BA1E38C438AC682F00D98F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___entries_1)); }
	inline EntryU5BU5D_t1B8A5DFAD0A950BC41A44DEEE1EA6F0D087176EE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1B8A5DFAD0A950BC41A44DEEE1EA6F0D087176EE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1B8A5DFAD0A950BC41A44DEEE1EA6F0D087176EE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___keys_7)); }
	inline KeyCollection_t5C55819D8D0F2972E038EA67E059AC397A04903B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5C55819D8D0F2972E038EA67E059AC397A04903B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5C55819D8D0F2972E038EA67E059AC397A04903B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ___values_8)); }
	inline ValueCollection_tCE615B18359BDE7680BA1E38C438AC682F00D98F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCE615B18359BDE7680BA1E38C438AC682F00D98F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCE615B18359BDE7680BA1E38C438AC682F00D98F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>
struct  Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2C4D2E88A70F84507A9958BA99E89C01A059835C* ___entries_1;
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
	KeyCollection_t3EE217FB650A4FCB0D437077B6B1BA034122B4D2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t154CC8527B18E3D8AAD66C012690F719DD1C5760 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___entries_1)); }
	inline EntryU5BU5D_t2C4D2E88A70F84507A9958BA99E89C01A059835C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2C4D2E88A70F84507A9958BA99E89C01A059835C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2C4D2E88A70F84507A9958BA99E89C01A059835C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___keys_7)); }
	inline KeyCollection_t3EE217FB650A4FCB0D437077B6B1BA034122B4D2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3EE217FB650A4FCB0D437077B6B1BA034122B4D2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3EE217FB650A4FCB0D437077B6B1BA034122B4D2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ___values_8)); }
	inline ValueCollection_t154CC8527B18E3D8AAD66C012690F719DD1C5760 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t154CC8527B18E3D8AAD66C012690F719DD1C5760 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t154CC8527B18E3D8AAD66C012690F719DD1C5760 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct  List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____items_1)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct  List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E, ____items_1)); }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* get__items_1() const { return ____items_1; }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E_StaticFields, ____emptyArray_5)); }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>
struct  List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E, ____items_1)); }
	inline FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* get__items_1() const { return ____items_1; }
	inline FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E_StaticFields, ____emptyArray_5)); }
	inline FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.IO.BinaryReader
struct  BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_decoder_2)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBytes_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_singleChar_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBuffer_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

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


// Parabox.Stl.Exporter
struct  Exporter_tEF0A07E158E438A162DF66617F67182A351A2AC0  : public RuntimeObject
{
public:

public:
};


// Parabox.Stl.Importer
struct  Importer_tEFDFF34910EABD16DADC5D774041CCEB718DD549  : public RuntimeObject
{
public:

public:
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

// Parabox.Stl.Stl
struct  Stl_t9CDF2278BF0FEDEAB1D6DDA52E313373C9B7C4A0  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
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

// Parabox.Stl.Exporter/<>c
struct  U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields
{
public:
	// Parabox.Stl.Exporter/<>c Parabox.Stl.Exporter/<>c::<>9
	U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,UnityEngine.Transform> Parabox.Stl.Exporter/<>c::<>9__0_0
	Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * ___U3CU3E9__0_0_1;
	// System.Func`2<UnityEngine.MeshFilter,System.Boolean> Parabox.Stl.Exporter/<>c::<>9__1_0
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * ___U3CU3E9__1_0_2;
	// System.Func`2<UnityEngine.Mesh,System.Int32> Parabox.Stl.Exporter/<>c::<>9__3_0
	Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * ___U3CU3E9__3_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields, ___U3CU3E9__1_0_2)); }
	inline Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * get_U3CU3E9__1_0_2() const { return ___U3CU3E9__1_0_2; }
	inline Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 ** get_address_of_U3CU3E9__1_0_2() { return &___U3CU3E9__1_0_2; }
	inline void set_U3CU3E9__1_0_2(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * value)
	{
		___U3CU3E9__1_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields, ___U3CU3E9__3_0_3)); }
	inline Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * get_U3CU3E9__3_0_3() const { return ___U3CU3E9__3_0_3; }
	inline Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 ** get_address_of_U3CU3E9__3_0_3() { return &___U3CU3E9__3_0_3; }
	inline void set_U3CU3E9__3_0_3(Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * value)
	{
		___U3CU3E9__3_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_3), (void*)value);
	}
};


// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:

public:
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// Parabox.Stl.StlVector3
struct  StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 
{
public:
	// System.Single Parabox.Stl.StlVector3::x
	float ___x_0;
	// System.Single Parabox.Stl.StlVector3::y
	float ___y_1;
	// System.Single Parabox.Stl.StlVector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// System.IO.BufferedStream
struct  BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_6;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_7;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_8;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_9;
	// System.Threading.Tasks.BeginEndAwaitableAdapter System.IO.BufferedStream::_beginEndAwaitable
	BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * ____beginEndAwaitable_10;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastSyncCompletedReadTask_11;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_6() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____bufferSize_6)); }
	inline int32_t get__bufferSize_6() const { return ____bufferSize_6; }
	inline int32_t* get_address_of__bufferSize_6() { return &____bufferSize_6; }
	inline void set__bufferSize_6(int32_t value)
	{
		____bufferSize_6 = value;
	}

	inline static int32_t get_offset_of__readPos_7() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readPos_7)); }
	inline int32_t get__readPos_7() const { return ____readPos_7; }
	inline int32_t* get_address_of__readPos_7() { return &____readPos_7; }
	inline void set__readPos_7(int32_t value)
	{
		____readPos_7 = value;
	}

	inline static int32_t get_offset_of__readLen_8() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readLen_8)); }
	inline int32_t get__readLen_8() const { return ____readLen_8; }
	inline int32_t* get_address_of__readLen_8() { return &____readLen_8; }
	inline void set__readLen_8(int32_t value)
	{
		____readLen_8 = value;
	}

	inline static int32_t get_offset_of__writePos_9() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____writePos_9)); }
	inline int32_t get__writePos_9() const { return ____writePos_9; }
	inline int32_t* get_address_of__writePos_9() { return &____writePos_9; }
	inline void set__writePos_9(int32_t value)
	{
		____writePos_9 = value;
	}

	inline static int32_t get_offset_of__beginEndAwaitable_10() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____beginEndAwaitable_10)); }
	inline BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * get__beginEndAwaitable_10() const { return ____beginEndAwaitable_10; }
	inline BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F ** get_address_of__beginEndAwaitable_10() { return &____beginEndAwaitable_10; }
	inline void set__beginEndAwaitable_10(BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * value)
	{
		____beginEndAwaitable_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____beginEndAwaitable_10), (void*)value);
	}

	inline static int32_t get_offset_of__lastSyncCompletedReadTask_11() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____lastSyncCompletedReadTask_11)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastSyncCompletedReadTask_11() const { return ____lastSyncCompletedReadTask_11; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastSyncCompletedReadTask_11() { return &____lastSyncCompletedReadTask_11; }
	inline void set__lastSyncCompletedReadTask_11(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastSyncCompletedReadTask_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSyncCompletedReadTask_11), (void*)value);
	}
};


// Parabox.Stl.CoordinateSpace
struct  CoordinateSpace_tB9A41F2872240241660E4F03FA24D27A147E146C 
{
public:
	// System.Int32 Parabox.Stl.CoordinateSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoordinateSpace_tB9A41F2872240241660E4F03FA24D27A147E146C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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


// Parabox.Stl.FileType
struct  FileType_t06E6BD2AC08DF9A75A95DE951ABE14B1BCBC803C 
{
public:
	// System.Int32 Parabox.Stl.FileType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileType_t06E6BD2AC08DF9A75A95DE951ABE14B1BCBC803C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.IndexFormat
struct  IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.IO.StreamReader
struct  StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.StringSplitOptions
struct  StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Parabox.Stl.UpAxis
struct  UpAxis_tAB75BC2D401DB4D9D1A3C82434515520B3166FBE 
{
public:
	// System.Int32 Parabox.Stl.UpAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpAxis_tAB75BC2D401DB4D9D1A3C82434515520B3166FBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Parabox.Stl.Importer/Facet
struct  Facet_tB2042492243496EA8D91214D9BB5781D810C783D 
{
public:
	// UnityEngine.Vector3 Parabox.Stl.Importer/Facet::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_0;
	// UnityEngine.Vector3 Parabox.Stl.Importer/Facet::a
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a_1;
	// UnityEngine.Vector3 Parabox.Stl.Importer/Facet::b
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b_2;
	// UnityEngine.Vector3 Parabox.Stl.Importer/Facet::c
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c_3;

public:
	inline static int32_t get_offset_of_normal_0() { return static_cast<int32_t>(offsetof(Facet_tB2042492243496EA8D91214D9BB5781D810C783D, ___normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_0() const { return ___normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_0() { return &___normal_0; }
	inline void set_normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_0 = value;
	}

	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(Facet_tB2042492243496EA8D91214D9BB5781D810C783D, ___a_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_a_1() const { return ___a_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___a_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Facet_tB2042492243496EA8D91214D9BB5781D810C783D, ___b_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_b_2() const { return ___b_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_c_3() { return static_cast<int32_t>(offsetof(Facet_tB2042492243496EA8D91214D9BB5781D810C783D, ___c_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_c_3() const { return ___c_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_c_3() { return &___c_3; }
	inline void set_c_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___c_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Func`2<UnityEngine.GameObject,UnityEngine.Transform>
struct  Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Mesh,System.Int32>
struct  Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.MeshFilter,System.Boolean>
struct  Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * m_Items[1];

public:
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * m_Items[1];

public:
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Parabox.Stl.Importer/Facet[]
struct FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Facet_tB2042492243496EA8D91214D9BB5781D810C783D  m_Items[1];

public:
	inline Facet_tB2042492243496EA8D91214D9BB5781D810C783D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Facet_tB2042492243496EA8D91214D9BB5781D810C783D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Facet_tB2042492243496EA8D91214D9BB5781D810C783D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Facet_tB2042492243496EA8D91214D9BB5781D810C783D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Facet_tB2042492243496EA8D91214D9BB5781D810C783D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Facet_tB2042492243496EA8D91214D9BB5781D810C783D  value)
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Sum<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisRuntimeObject_m24A27FD4A550C17E3EE45E6AB01D71656DC5D8D2_gshared (RuntimeObject* ___source0, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E_gshared (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52_gshared (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * __this, Facet_tB2042492243496EA8D91214D9BB5781D810C783D  ___item0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<Parabox.Stl.Importer/Facet>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD_gshared (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_gshared (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_gshared (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_gshared (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_gshared (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9_gshared (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_gshared (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D_gshared (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA_gshared (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, int32_t ___value1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Func`2<UnityEngine.GameObject,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA117EBD301C8735ADD321E29D877207DAC108744 (Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<UnityEngine.GameObject,UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC29063FCA72BC1888184A730F75282EF551E9580 (RuntimeObject* ___source0, Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* Enumerable_ToArray_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m410A506E215F5BD6DEE6534232ED136A59218BD6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// UnityEngine.Mesh[] Parabox.Stl.Exporter::CreateWorldSpaceMeshesWithTransforms(System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Exporter_CreateWorldSpaceMeshesWithTransforms_m43CA66ACCE398520767BDF1FB01E788DAE7E3AB1 (RuntimeObject* ___transforms0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Parabox.Stl.Exporter::WriteFile(System.String,System.Collections.Generic.IList`1<UnityEngine.Mesh>,Parabox.Stl.FileType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exporter_WriteFile_m6B24248DD5E4DBE012E51B64A60AE2E117BD4908 (String_t* ___path0, RuntimeObject* ___meshes1, int32_t ___type2, bool ___convertToRightHandedCoordinates3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.MeshFilter>()
inline MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.MeshFilter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229 (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.MeshFilter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC (RuntimeObject* ___source0, Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.MeshFilter>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * Enumerable_ToList_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m886CC744C1E5EBB2DBD4F3B6303AF01A1977E8ED (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Count()
inline int32_t List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_inline (List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.MeshFilter>::get_Item(System.Int32)
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline (List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Text.ASCIIEncoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASCIIEncoding__ctor_m79C69E6F60AB36F0BD4B252D923415EDE3D960F8 (ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mCA19225B5842FB12C01B5C8F91A3FB3E5CB1F497 (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Mesh,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m01F1D3ACD768A305E2B039EB9289434FF70A92D1 (Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Sum<UnityEngine.Mesh>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Int32>)
inline int32_t Enumerable_Sum_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m96CF7900E945E5FDE060264FCA16F1B4EFF52815 (RuntimeObject* ___source0, Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * ___selector1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 *, const RuntimeMethod*))Enumerable_Sum_TisRuntimeObject_m24A27FD4A550C17E3EE45E6AB01D71656DC5D8D2_gshared)(___source0, ___selector1, method);
}
// UnityEngine.Vector3 Parabox.Stl.Stl::ToCoordinateSpace(UnityEngine.Vector3,Parabox.Stl.CoordinateSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, int32_t ___space1, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D (RuntimeArray * ___array0, const RuntimeMethod* method);
// UnityEngine.Vector3 Parabox.Stl.Exporter::AvgNrm(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Exporter_AvgNrm_m5F5B0F12BD68A2D4A64C6D3101322CBA4D5771A5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c2, const RuntimeMethod* method);
// System.String Parabox.Stl.Exporter::WriteString(System.Collections.Generic.IList`1<UnityEngine.Mesh>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exporter_WriteString_m62AFA47F23AB269F3A5A13FDAAA265DB2BCF686A (RuntimeObject* ___meshes0, bool ___convertToRightHandedCoordinates1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean Parabox.Stl.Importer::IsBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Importer_IsBinary_m2DD607947375C23D9154A91D40E205FD67143808 (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet> Parabox.Stl.Importer::ImportBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Importer_ImportBinary_mDD98853B19EACACAB68B951243147FD085957999 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet> Parabox.Stl.Importer::ImportAscii(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Importer_ImportAscii_mF2E27D7FD512135145D2BF7DE5E6CD64E934E044 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Mesh[] Parabox.Stl.Importer::ImportSmoothNormals(System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>,Parabox.Stl.CoordinateSpace,Parabox.Stl.UpAxis,UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Importer_ImportSmoothNormals_m8294DE6EB6EDDD2FE8D47E7FE7D57E962B43251C (RuntimeObject* ___faces0, int32_t ___modelCoordinateSpace1, int32_t ___modelUpAxis2, int32_t ___indexFormat3, const RuntimeMethod* method);
// UnityEngine.Mesh[] Parabox.Stl.Importer::ImportHardNormals(System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>,Parabox.Stl.CoordinateSpace,Parabox.Stl.UpAxis,UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Importer_ImportHardNormals_m02A6F07648668BF98C4794813E0B5D43AF892CCB (RuntimeObject* ___faces0, int32_t ___modelCoordinateSpace1, int32_t ___modelUpAxis2, int32_t ___indexFormat3, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m0877557BEFE1C22B709C187A077D28CFBC777C76 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// Parabox.Stl.Importer/Facet Parabox.Stl.Importer::GetFacet(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Facet_tB2042492243496EA8D91214D9BB5781D810C783D  Importer_GetFacet_m7A38F550DDFC7531B7E84CC810CBBD46857DCBA9 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___binaryReader0, const RuntimeMethod* method);
// UnityEngine.Vector3 Parabox.Stl.Importer::GetVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___binaryReader0, const RuntimeMethod* method);
// System.Void Parabox.Stl.Importer/Facet::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1 (Facet_tB2042492243496EA8D91214D9BB5781D810C783D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c3, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>::.ctor()
inline void List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E *, const RuntimeMethod*))List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E_gshared)(__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m604C1EB84158CCBED0EE74A1F2C547EC589EBC92 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Int32 Parabox.Stl.Importer::ReadState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Importer_ReadState_m0FA3CAA803FD6ACC89DDF1D3336D08CC074B6FB6 (String_t* ___line0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// UnityEngine.Vector3 Parabox.Stl.Importer::StringToVec3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118 (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Parabox.Stl.Importer/Facet>::Add(!0)
inline void List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52 (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * __this, Facet_tB2042492243496EA8D91214D9BB5781D810C783D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E *, Facet_tB2042492243496EA8D91214D9BB5781D810C783D , const RuntimeMethod*))List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52_gshared)(__this, ___item0, method);
}
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method);
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m1F6FEFCA0E66054B8B7BEEE064EE4297ED606EE5 (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * __this, String_t* ___fileName0, const RuntimeMethod* method);
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_mAB6D9F8C594A3DBA38628D9BA58CBCF846D5781D (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * __this, const RuntimeMethod* method);
// System.IO.FileStream System.IO.FileInfo::OpenRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * FileInfo_OpenRead_m7A064D4B374F1C301C32E5760BBFD7238DCDCDC9 (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * __this, const RuntimeMethod* method);
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedStream__ctor_mA467BF66E11AE1F1B9DCDCFAEB852153948BB010 (BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<Parabox.Stl.Importer/Facet>(System.Collections.Generic.IEnumerable`1<!!0>)
inline FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD_gshared)(__this, ___capacity0, method);
}
// Parabox.Stl.StlVector3 Parabox.Stl.StlVector3::op_Explicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1 (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , const RuntimeMethod*))Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::get_Item(!0)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51 (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , const RuntimeMethod*))Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034 (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,UnityEngine.Vector3>::Add(!0,!1)
inline void Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16 (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::.ctor()
inline void List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98 (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9 (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 *, const RuntimeMethod*))Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
inline void List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Mesh>::Add(!0)
inline void List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73 (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::Clear()
inline void Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 *, const RuntimeMethod*))Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Parabox.Stl.StlVector3,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 *, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 , int32_t, const RuntimeMethod*))Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA_gshared)(__this, ___key0, ___value1, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Mesh>::ToArray()
inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* List_1_ToArray_m166CDC054745BAFB93DA39AF515EE68019E233FD (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * __this, const RuntimeMethod* method)
{
	return ((  MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* (*) (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Parabox.Stl.StlVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlVector3__ctor_mE7102216481DE20677C90FA5B35EA1E9C0704588 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean Parabox.Stl.StlVector3::Equals(Parabox.Stl.StlVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlVector3_Equals_m23FEE6520B02B4203F9B3E02DED572889D4B5F94 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___other0, const RuntimeMethod* method);
// System.Boolean Parabox.Stl.StlVector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlVector3_Equals_m62C3CEC3BAC50427FDD9AFBAC989DBFEAC581D6A (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 Parabox.Stl.StlVector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlVector3_GetHashCode_m0276312EA2AA1755EBB3E1FFCC27BBA4E6ADB994 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, const RuntimeMethod* method);
// System.Void Parabox.Stl.Exporter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D727B4D882A8F2A89FA2B8AA4D8B4F32D5D475E (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String Parabox.Stl.Importer/Facet::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Facet_ToString_m8953EE142185F736ECEC43B06F6A11C944111FEA (Facet_tB2042492243496EA8D91214D9BB5781D810C783D * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Parabox.Stl.Exporter::Export(System.String,UnityEngine.GameObject[],Parabox.Stl.FileType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exporter_Export_mF3FAFD0BB8595C395730ED69753CC4B4A294FA3A (String_t* ___path0, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___gameObjects1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC29063FCA72BC1888184A730F75282EF551E9580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m410A506E215F5BD6DEE6534232ED136A59218BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA117EBD301C8735ADD321E29D877207DAC108744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExportU3Eb__0_0_m55E2002CA090F01648FF47CED585B324CC385260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * G_B2_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* G_B2_1 = NULL;
	Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * G_B1_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* G_B1_1 = NULL;
	{
		// Mesh[] meshes = CreateWorldSpaceMeshesWithTransforms(gameObjects.Select(x => x.transform).ToArray());
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___gameObjects1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * L_1 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * L_3 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * L_4 = (Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A *)il2cpp_codegen_object_new(Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A_il2cpp_TypeInfo_var);
		Func_2__ctor_mA117EBD301C8735ADD321E29D877207DAC108744(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CExportU3Eb__0_0_m55E2002CA090F01648FF47CED585B324CC385260_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA117EBD301C8735ADD321E29D877207DAC108744_RuntimeMethod_var);
		Func_2_tCD9BA41158AE5FB9B1616FFBD2F2BCEEC3D6785A * L_5 = L_4;
		((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC29063FCA72BC1888184A730F75282EF551E9580((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC29063FCA72BC1888184A730F75282EF551E9580_RuntimeMethod_var);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_7;
		L_7 = Enumerable_ToArray_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m410A506E215F5BD6DEE6534232ED136A59218BD6(L_6, /*hidden argument*/Enumerable_ToArray_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m410A506E215F5BD6DEE6534232ED136A59218BD6_RuntimeMethod_var);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_8;
		L_8 = Exporter_CreateWorldSpaceMeshesWithTransforms_m43CA66ACCE398520767BDF1FB01E788DAE7E3AB1((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// bool success = false;
		V_1 = (bool)0;
		// if(meshes != null && meshes.Length > 0)
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_9 = V_0;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_10 = V_0;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_004b;
		}
	}
	{
		// if(!string.IsNullOrEmpty(path))
		String_t* L_11 = ___path0;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		// success = Exporter.WriteFile(path, meshes, type);
		String_t* L_13 = ___path0;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_14 = V_0;
		int32_t L_15 = ___type2;
		bool L_16;
		L_16 = Exporter_WriteFile_m6B24248DD5E4DBE012E51B64A60AE2E117BD4908(L_13, (RuntimeObject*)(RuntimeObject*)L_14, L_15, (bool)1, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_004b:
	{
		// for(int i = 0; meshes != null && i < meshes.Length; i++)
		V_2 = 0;
		goto IL_005b;
	}

IL_004f:
	{
		// Object.DestroyImmediate(meshes[i]);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_20, /*hidden argument*/NULL);
		// for(int i = 0; meshes != null && i < meshes.Length; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_005b:
	{
		// for(int i = 0; meshes != null && i < meshes.Length; i++)
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_22 = V_0;
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_23 = V_2;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_004f;
		}
	}

IL_0064:
	{
		// return success;
		bool L_25 = V_1;
		return L_25;
	}
}
// UnityEngine.Mesh[] Parabox.Stl.Exporter::CreateWorldSpaceMeshesWithTransforms(System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Exporter_CreateWorldSpaceMeshesWithTransforms_m43CA66ACCE398520767BDF1FB01E788DAE7E3AB1 (RuntimeObject* ___transforms0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m886CC744C1E5EBB2DBD4F3B6303AF01A1977E8ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1ECC96E83AB5C400CB3F9083067FC74F19A8CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateWorldSpaceMeshesWithTransformsU3Eb__1_0_m7373012E942B15FEA399A27F32AADE9312F03AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1DF9A0AF025F74ADD253B3F9D98E08098430BC2);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * V_3 = NULL;
	int32_t V_4 = 0;
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_8 = NULL;
	int32_t V_9 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_10 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_11 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_12 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_13 = NULL;
	int32_t V_14 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * G_B16_0 = NULL;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* G_B16_1 = NULL;
	Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * G_B15_0 = NULL;
	MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* G_B15_1 = NULL;
	{
		// if(transforms == null || transforms.Count < 1)
		RuntimeObject* L_0 = ___transforms0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = ___transforms0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Transform>::get_Count() */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		// return null;
		return (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)NULL;
	}

IL_000e:
	{
		// Vector3 p = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_3;
		// for(int i = 0; i < transforms.Count; i++)
		V_6 = 0;
		goto IL_0033;
	}

IL_0019:
	{
		// p += transforms[i].position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		RuntimeObject* L_5 = ___transforms0;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = InterfaceFuncInvoker1< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Transform>::get_Item(System.Int32) */, IList_1_t1ECC96E83AB5C400CB3F9083067FC74F19A8CD5C_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// for(int i = 0; i < transforms.Count; i++)
		int32_t L_10 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		// for(int i = 0; i < transforms.Count; i++)
		int32_t L_11 = V_6;
		RuntimeObject* L_12 = ___transforms0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Transform>::get_Count() */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0019;
		}
	}
	{
		// Vector3 mesh_center = p / (float) transforms.Count;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		RuntimeObject* L_15 = ___transforms0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Transform>::get_Count() */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_14, ((float)((float)L_16)), /*hidden argument*/NULL);
		V_1 = L_17;
		// GameObject root = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_18, /*hidden argument*/NULL);
		V_2 = L_18;
		// root.name = "ROOT";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		NullCheck(L_19);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_19, _stringLiteralB1DF9A0AF025F74ADD253B3F9D98E08098430BC2, /*hidden argument*/NULL);
		// root.transform.position = mesh_center;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_2;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_22, /*hidden argument*/NULL);
		// foreach(Transform t in transforms)
		RuntimeObject* L_23 = ___transforms0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>::GetEnumerator() */, IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var, L_23);
		V_7 = L_24;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ab;
		}

IL_0072:
		{
			// foreach(Transform t in transforms)
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
			L_26 = InterfaceFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>::get_Current() */, IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var, L_25);
			V_8 = L_26;
			// GameObject go = (GameObject) GameObject.Instantiate(t.gameObject);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_8;
			NullCheck(L_27);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
			L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
			L_29 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			// go.transform.SetParent(t.parent, false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29;
			NullCheck(L_30);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
			L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = V_8;
			NullCheck(L_32);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_32, /*hidden argument*/NULL);
			NullCheck(L_31);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_31, L_33, (bool)0, /*hidden argument*/NULL);
			// go.transform.SetParent(root.transform, true);
			NullCheck(L_30);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
			L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_2;
			NullCheck(L_35);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
			L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
			NullCheck(L_34);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_34, L_36, (bool)1, /*hidden argument*/NULL);
		}

IL_00ab:
		{
			// foreach(Transform t in transforms)
			RuntimeObject* L_37 = V_7;
			NullCheck(L_37);
			bool L_38;
			L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_0072;
			}
		}

IL_00b4:
		{
			IL2CPP_LEAVE(0xC2, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_7;
			if (!L_39)
			{
				goto IL_00c1;
			}
		}

IL_00ba:
		{
			RuntimeObject* L_40 = V_7;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_40);
		}

IL_00c1:
		{
			IL2CPP_END_FINALLY(182)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
	}

IL_00c2:
	{
		// root.transform.position = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_2;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_43, /*hidden argument*/NULL);
		// List<MeshFilter> mfs = root.GetComponentsInChildren<MeshFilter>().Where(x => x.sharedMesh != null).ToList();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_2;
		NullCheck(L_44);
		MeshFilterU5BU5D_tE8AA77783A24784C69A8083B4F3E482D866FD503* L_45;
		L_45 = GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638(L_44, /*hidden argument*/GameObject_GetComponentsInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m5F78BACEC3BACF984A2990F0C4D4F05885B4B638_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_46 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_2();
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_47 = L_46;
		G_B15_0 = L_47;
		G_B15_1 = L_45;
		if (L_47)
		{
			G_B16_0 = L_47;
			G_B16_1 = L_45;
			goto IL_00f7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * L_48 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_49 = (Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 *)il2cpp_codegen_object_new(Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351_il2cpp_TypeInfo_var);
		Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229(L_49, L_48, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateWorldSpaceMeshesWithTransformsU3Eb__1_0_m7373012E942B15FEA399A27F32AADE9312F03AAC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEE5387FCFA1D33E7B064E9E3B5F754599986D229_RuntimeMethod_var);
		Func_2_tDA13BFE7A65FB2551A825A13C2B5B061461BA351 * L_50 = L_49;
		((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_2(L_50);
		G_B16_0 = L_50;
		G_B16_1 = G_B15_1;
	}

IL_00f7:
	{
		RuntimeObject* L_51;
		L_51 = Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC((RuntimeObject*)(RuntimeObject*)G_B16_1, G_B16_0, /*hidden argument*/Enumerable_Where_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m0AFE42607F680EDF565C25BBE7837AE2FB9D64DC_RuntimeMethod_var);
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_52;
		L_52 = Enumerable_ToList_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m886CC744C1E5EBB2DBD4F3B6303AF01A1977E8ED(L_51, /*hidden argument*/Enumerable_ToList_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m886CC744C1E5EBB2DBD4F3B6303AF01A1977E8ED_RuntimeMethod_var);
		V_3 = L_52;
		// int meshCount = mfs.Count;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_53 = V_3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_inline(L_53, /*hidden argument*/List_1_get_Count_m5C8DAB8F00A7120F771B8FEF7B9ABF4A79497CB1_RuntimeMethod_var);
		V_4 = L_54;
		// Mesh[] meshes = new Mesh[meshCount];
		int32_t L_55 = V_4;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_56 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)SZArrayNew(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var, (uint32_t)L_55);
		V_5 = L_56;
		// for(int i = 0; i < meshCount; i++)
		V_9 = 0;
		goto IL_01f2;
	}

IL_011b:
	{
		// Transform t = mfs[i].transform;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_57 = V_3;
		int32_t L_58 = V_9;
		NullCheck(L_57);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_59;
		L_59 = List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		V_10 = L_60;
		// Vector3[] v = mfs[i].sharedMesh.vertices;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_61 = V_3;
		int32_t L_62 = V_9;
		NullCheck(L_61);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_63;
		L_63 = List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		NullCheck(L_63);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_64;
		L_64 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_65;
		L_65 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_64, /*hidden argument*/NULL);
		V_11 = L_65;
		// Vector3[] n = mfs[i].sharedMesh.normals;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_66 = V_3;
		int32_t L_67 = V_9;
		NullCheck(L_66);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_68;
		L_68 = List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline(L_66, L_67, /*hidden argument*/List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		NullCheck(L_68);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_69;
		L_69 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70;
		L_70 = Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0(L_69, /*hidden argument*/NULL);
		V_12 = L_70;
		// for(int it = 0; it < v.Length; it++)
		V_14 = 0;
		goto IL_018f;
	}

IL_0157:
	{
		// v[it] = t.TransformPoint(v[it]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = V_11;
		int32_t L_72 = V_14;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = V_11;
		int32_t L_75 = V_14;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_73, L_77, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_78);
		// n[it] = t.TransformDirection(n[it]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_79 = V_12;
		int32_t L_80 = V_14;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81 = V_10;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_82 = V_12;
		int32_t L_83 = V_14;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_81);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_81, L_85, /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_86);
		// for(int it = 0; it < v.Length; it++)
		int32_t L_87 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_018f:
	{
		// for(int it = 0; it < v.Length; it++)
		int32_t L_88 = V_14;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_89 = V_11;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))))))
		{
			goto IL_0157;
		}
	}
	{
		// Mesh m = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_90 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_90, /*hidden argument*/NULL);
		V_13 = L_90;
		// m.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_91 = V_13;
		NullCheck(L_91);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_91, 1, /*hidden argument*/NULL);
		// m.name = mfs[i].name;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_92 = V_13;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_93 = V_3;
		int32_t L_94 = V_9;
		NullCheck(L_93);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_95;
		L_95 = List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline(L_93, L_94, /*hidden argument*/List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		NullCheck(L_95);
		String_t* L_96;
		L_96 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_95, /*hidden argument*/NULL);
		NullCheck(L_92);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_92, L_96, /*hidden argument*/NULL);
		// m.vertices = v;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_97 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_98 = V_11;
		NullCheck(L_97);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_97, L_98, /*hidden argument*/NULL);
		// m.normals = n;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_99 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_100 = V_12;
		NullCheck(L_99);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_99, L_100, /*hidden argument*/NULL);
		// m.triangles = mfs[i].sharedMesh.triangles;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_101 = V_13;
		List_1_tF4FF55D8DD6EFED1BBCBF60B3D5905B0C1CA6C8E * L_102 = V_3;
		int32_t L_103 = V_9;
		NullCheck(L_102);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_104;
		L_104 = List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_inline(L_102, L_103, /*hidden argument*/List_1_get_Item_mF54F5C6AFE7769513271F1EDBF8FB5B2EB37755B_RuntimeMethod_var);
		NullCheck(L_104);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_105;
		L_105 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106;
		L_106 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_105, /*hidden argument*/NULL);
		NullCheck(L_101);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_101, L_106, /*hidden argument*/NULL);
		// meshes[i] = m;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_107 = V_5;
		int32_t L_108 = V_9;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_109 = V_13;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_109);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_109);
		// for(int i = 0; i < meshCount; i++)
		int32_t L_110 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01f2:
	{
		// for(int i = 0; i < meshCount; i++)
		int32_t L_111 = V_9;
		int32_t L_112 = V_4;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_011b;
		}
	}
	{
		// GameObject.DestroyImmediate(root);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_113, /*hidden argument*/NULL);
		// return meshes;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_114 = V_5;
		return L_114;
	}
}
// System.Boolean Parabox.Stl.Exporter::WriteFile(System.String,System.Collections.Generic.IList`1<UnityEngine.Mesh>,Parabox.Stl.FileType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exporter_WriteFile_m6B24248DD5E4DBE012E51B64A60AE2E117BD4908 (String_t* ___path0, RuntimeObject* ___meshes1, int32_t ___type2, bool ___convertToRightHandedCoordinates3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m96CF7900E945E5FDE060264FCA16F1B4EFF52815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m01F1D3ACD768A305E2B039EB9289434FF70A92D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF13734F57A1165E9F09A47296CF97C2F7E6AFD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWriteFileU3Eb__3_0_mD3E8F25037AB57FBF766718F0E063FA0380AB4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * V_1 = NULL;
	uint32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_4 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_5 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_6 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___type2;
			if ((!(((uint32_t)L_0) == ((uint32_t)1))))
			{
				goto IL_0235;
			}
		}

IL_0007:
		{
			// using (BinaryWriter writer = new BinaryWriter(File.Open(path, FileMode.Create), new ASCIIEncoding()))
			String_t* L_1 = ___path0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2;
			L_2 = File_Open_mA9EF74B69D352F396FBD5225BCC3643D8063C002(L_1, 2, /*hidden argument*/NULL);
			ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527 * L_3 = (ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527 *)il2cpp_codegen_object_new(ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527_il2cpp_TypeInfo_var);
			ASCIIEncoding__ctor_m79C69E6F60AB36F0BD4B252D923415EDE3D960F8(L_3, /*hidden argument*/NULL);
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_4 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
			BinaryWriter__ctor_mCA19225B5842FB12C01B5C8F91A3FB3E5CB1F497(L_4, L_2, L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				// writer.Write(new byte[80]);
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_5 = V_1;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
				NullCheck(L_5);
				VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_5, L_6);
				// uint totalTriangleCount = (uint) (meshes.Sum(x => x.triangles.Length) / 3);
				RuntimeObject* L_7 = ___meshes1;
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
				Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * L_8 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_3();
				Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * L_9 = L_8;
				G_B3_0 = L_9;
				G_B3_1 = L_7;
				if (L_9)
				{
					G_B4_0 = L_9;
					G_B4_1 = L_7;
					goto IL_0046;
				}
			}

IL_002f:
			{
				IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
				U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * L_10 = ((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
				Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * L_11 = (Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 *)il2cpp_codegen_object_new(Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560_il2cpp_TypeInfo_var);
				Func_2__ctor_m01F1D3ACD768A305E2B039EB9289434FF70A92D1(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CWriteFileU3Eb__3_0_mD3E8F25037AB57FBF766718F0E063FA0380AB4CA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m01F1D3ACD768A305E2B039EB9289434FF70A92D1_RuntimeMethod_var);
				Func_2_t49651F848DC6DEB232D67522B04CDDDCD03CF560 * L_12 = L_11;
				((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_3(L_12);
				G_B4_0 = L_12;
				G_B4_1 = G_B3_1;
			}

IL_0046:
			{
				int32_t L_13;
				L_13 = Enumerable_Sum_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m96CF7900E945E5FDE060264FCA16F1B4EFF52815(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Sum_TisMesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_m96CF7900E945E5FDE060264FCA16F1B4EFF52815_RuntimeMethod_var);
				V_2 = ((int32_t)((int32_t)L_13/(int32_t)3));
				// writer.Write( totalTriangleCount );
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = V_1;
				uint32_t L_15 = V_2;
				NullCheck(L_14);
				VirtActionInvoker1< uint32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.UInt32) */, L_14, L_15);
				// foreach(Mesh mesh in meshes)
				RuntimeObject* L_16 = ___meshes1;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Mesh>::GetEnumerator() */, IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587_il2cpp_TypeInfo_var, L_16);
				V_3 = L_17;
			}

IL_005c:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0212;
				}

IL_0061:
				{
					// foreach(Mesh mesh in meshes)
					RuntimeObject* L_18 = V_3;
					NullCheck(L_18);
					Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_19;
					L_19 = InterfaceFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Mesh>::get_Current() */, IEnumerator_1_tF13734F57A1165E9F09A47296CF97C2F7E6AFD01_il2cpp_TypeInfo_var, L_18);
					V_4 = L_19;
					// Vector3[] v = mesh.vertices;
					Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_20 = V_4;
					NullCheck(L_20);
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21;
					L_21 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_20, /*hidden argument*/NULL);
					V_5 = L_21;
					// Vector3[] n = mesh.normals;
					Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_22 = V_4;
					NullCheck(L_22);
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23;
					L_23 = Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0(L_22, /*hidden argument*/NULL);
					V_6 = L_23;
					// if(convertToRightHandedCoordinates)
					bool L_24 = ___convertToRightHandedCoordinates3;
					if (!L_24)
					{
						goto IL_00c5;
					}
				}

IL_007e:
				{
					// for(int i = 0, c = v.Length; i < c; i++)
					V_9 = 0;
					// for(int i = 0, c = v.Length; i < c; i++)
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = V_5;
					NullCheck(L_25);
					V_10 = ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)));
					goto IL_00bf;
				}

IL_0089:
				{
					// v[i] = Stl.ToCoordinateSpace(v[i], CoordinateSpace.Right);
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_26 = V_5;
					int32_t L_27 = V_9;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = V_5;
					int32_t L_29 = V_9;
					NullCheck(L_28);
					int32_t L_30 = L_29;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
					L_32 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_31, 1, /*hidden argument*/NULL);
					NullCheck(L_26);
					(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_32);
					// n[i] = Stl.ToCoordinateSpace(n[i], CoordinateSpace.Right);
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_33 = V_6;
					int32_t L_34 = V_9;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_6;
					int32_t L_36 = V_9;
					NullCheck(L_35);
					int32_t L_37 = L_36;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
					L_39 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_38, 1, /*hidden argument*/NULL);
					NullCheck(L_33);
					(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_39);
					// for(int i = 0, c = v.Length; i < c; i++)
					int32_t L_40 = V_9;
					V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
				}

IL_00bf:
				{
					// for(int i = 0, c = v.Length; i < c; i++)
					int32_t L_41 = V_9;
					int32_t L_42 = V_10;
					if ((((int32_t)L_41) < ((int32_t)L_42)))
					{
						goto IL_0089;
					}
				}

IL_00c5:
				{
					// int[] t = mesh.triangles;
					Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_43 = V_4;
					NullCheck(L_43);
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44;
					L_44 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_43, /*hidden argument*/NULL);
					V_7 = L_44;
					// int triangleCount = t.Length;
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = V_7;
					NullCheck(L_45);
					V_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)));
					// if(convertToRightHandedCoordinates)
					bool L_46 = ___convertToRightHandedCoordinates3;
					if (!L_46)
					{
						goto IL_00de;
					}
				}

IL_00d7:
				{
					// System.Array.Reverse(t);
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = V_7;
					Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D((RuntimeArray *)(RuntimeArray *)L_47, /*hidden argument*/NULL);
				}

IL_00de:
				{
					// for(int i = 0; i < triangleCount; i += 3)
					V_11 = 0;
					goto IL_0209;
				}

IL_00e6:
				{
					// int a = t[i], b = t[i+1], c = t[i+2];
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_7;
					int32_t L_49 = V_11;
					NullCheck(L_48);
					int32_t L_50 = L_49;
					int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
					V_12 = L_51;
					// int a = t[i], b = t[i+1], c = t[i+2];
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_7;
					int32_t L_53 = V_11;
					NullCheck(L_52);
					int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
					int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
					V_13 = L_55;
					// int a = t[i], b = t[i+1], c = t[i+2];
					Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = V_7;
					int32_t L_57 = V_11;
					NullCheck(L_56);
					int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2));
					int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
					V_14 = L_59;
					// Vector3 avg = AvgNrm(n[a], n[b], n[c]);
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_60 = V_6;
					int32_t L_61 = V_12;
					NullCheck(L_60);
					int32_t L_62 = L_61;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_64 = V_6;
					int32_t L_65 = V_13;
					NullCheck(L_64);
					int32_t L_66 = L_65;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = V_6;
					int32_t L_69 = V_14;
					NullCheck(L_68);
					int32_t L_70 = L_69;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
					L_72 = Exporter_AvgNrm_m5F5B0F12BD68A2D4A64C6D3101322CBA4D5771A5(L_63, L_67, L_71, /*hidden argument*/NULL);
					V_15 = L_72;
					// writer.Write(avg.x);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_73 = V_1;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_15;
					float L_75 = L_74.get_x_2();
					NullCheck(L_73);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_73, L_75);
					// writer.Write(avg.y);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_76 = V_1;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_15;
					float L_78 = L_77.get_y_3();
					NullCheck(L_76);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_76, L_78);
					// writer.Write(avg.z);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_79 = V_1;
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_15;
					float L_81 = L_80.get_z_4();
					NullCheck(L_79);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_79, L_81);
					// writer.Write(v[a].x);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_82 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = V_5;
					int32_t L_84 = V_12;
					NullCheck(L_83);
					float L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->get_x_2();
					NullCheck(L_82);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_82, L_85);
					// writer.Write(v[a].y);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_86 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_87 = V_5;
					int32_t L_88 = V_12;
					NullCheck(L_87);
					float L_89 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->get_y_3();
					NullCheck(L_86);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_86, L_89);
					// writer.Write(v[a].z);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_90 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_91 = V_5;
					int32_t L_92 = V_12;
					NullCheck(L_91);
					float L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->get_z_4();
					NullCheck(L_90);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_90, L_93);
					// writer.Write(v[b].x);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_94 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_95 = V_5;
					int32_t L_96 = V_13;
					NullCheck(L_95);
					float L_97 = ((L_95)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_96)))->get_x_2();
					NullCheck(L_94);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_94, L_97);
					// writer.Write(v[b].y);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_98 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = V_5;
					int32_t L_100 = V_13;
					NullCheck(L_99);
					float L_101 = ((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_100)))->get_y_3();
					NullCheck(L_98);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_98, L_101);
					// writer.Write(v[b].z);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_102 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_103 = V_5;
					int32_t L_104 = V_13;
					NullCheck(L_103);
					float L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->get_z_4();
					NullCheck(L_102);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_102, L_105);
					// writer.Write(v[c].x);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_106 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_107 = V_5;
					int32_t L_108 = V_14;
					NullCheck(L_107);
					float L_109 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->get_x_2();
					NullCheck(L_106);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_106, L_109);
					// writer.Write(v[c].y);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_110 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = V_5;
					int32_t L_112 = V_14;
					NullCheck(L_111);
					float L_113 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->get_y_3();
					NullCheck(L_110);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_110, L_113);
					// writer.Write(v[c].z);
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_114 = V_1;
					Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_115 = V_5;
					int32_t L_116 = V_14;
					NullCheck(L_115);
					float L_117 = ((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_116)))->get_z_4();
					NullCheck(L_114);
					VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_114, L_117);
					// writer.Write( (ushort)0 );
					BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_118 = V_1;
					NullCheck(L_118);
					VirtActionInvoker1< uint16_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.UInt16) */, L_118, (uint16_t)0);
					// for(int i = 0; i < triangleCount; i += 3)
					int32_t L_119 = V_11;
					V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)3));
				}

IL_0209:
				{
					// for(int i = 0; i < triangleCount; i += 3)
					int32_t L_120 = V_11;
					int32_t L_121 = V_8;
					if ((((int32_t)L_120) < ((int32_t)L_121)))
					{
						goto IL_00e6;
					}
				}

IL_0212:
				{
					// foreach(Mesh mesh in meshes)
					RuntimeObject* L_122 = V_3;
					NullCheck(L_122);
					bool L_123;
					L_123 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_122);
					if (L_123)
					{
						goto IL_0061;
					}
				}

IL_021d:
				{
					IL2CPP_LEAVE(0x229, FINALLY_021f);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_021f;
			}

FINALLY_021f:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_124 = V_3;
					if (!L_124)
					{
						goto IL_0228;
					}
				}

IL_0222:
				{
					RuntimeObject* L_125 = V_3;
					NullCheck(L_125);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_125);
				}

IL_0228:
				{
					IL2CPP_END_FINALLY(543)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(543)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x229, IL_0229)
			}

IL_0229:
			{
				// }
				IL2CPP_LEAVE(0x244, FINALLY_022b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_022b;
		}

FINALLY_022b:
		{ // begin finally (depth: 2)
			{
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_126 = V_1;
				if (!L_126)
				{
					goto IL_0234;
				}
			}

IL_022e:
			{
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_127 = V_1;
				NullCheck(L_127);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_127);
			}

IL_0234:
			{
				IL2CPP_END_FINALLY(555)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(555)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x244, IL_0244)
		}

IL_0235:
		{
			// string model = WriteString(meshes);
			RuntimeObject* L_128 = ___meshes1;
			String_t* L_129;
			L_129 = Exporter_WriteString_m62AFA47F23AB269F3A5A13FDAAA265DB2BCF686A(L_128, (bool)1, /*hidden argument*/NULL);
			V_0 = L_129;
			// File.WriteAllText(path, model);
			String_t* L_130 = ___path0;
			String_t* L_131 = V_0;
			File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_130, L_131, /*hidden argument*/NULL);
		}

IL_0244:
		{
			// }
			goto IL_0255;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0246;
		}
		throw e;
	}

CATCH_0246:
	{ // begin catch(System.Exception)
		// UnityEngine.Debug.LogError(e.ToString());
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_132;
		L_132 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_132, /*hidden argument*/NULL);
		// return false;
		V_16 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0257;
	} // end catch (depth: 1)

IL_0255:
	{
		// return true;
		return (bool)1;
	}

IL_0257:
	{
		// }
		bool L_133 = V_16;
		return L_133;
	}
}
// System.String Parabox.Stl.Exporter::WriteString(System.Collections.Generic.IList`1<UnityEngine.Mesh>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exporter_WriteString_m62AFA47F23AB269F3A5A13FDAAA265DB2BCF686A (RuntimeObject* ___meshes0, bool ___convertToRightHandedCoordinates1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7F769DFF0B3F1FFF0181F521B9ABD47A15E0234F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF13734F57A1165E9F09A47296CF97C2F7E6AFD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0F12BBD3ADB18223C75B9673D75B1B7EA7BD17E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA78267B9B48D668B1654BA13E4E82784018E59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B8852E8A5D08914DA47D2EA288B25B0A4DF0517);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED138BC333DC09EF25650FCA829DD8502F81B86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral735D9BB3B699C953C14CC817D3DF0E7A51289C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79559B627C79A3CC077A3F371BD91BF8AB57ADFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8016E6A911A81C79245D0619A7A2573C4B2329E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71101E76B0125E73A30300A33BD5DFF87DE52DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25D35482268B7A0FB5DEE2B4E37E21A515983E7);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_4 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B3_0 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// string name = meshes.Count == 1 ? meshes[0].name : "Composite Mesh";
		RuntimeObject* L_1 = ___meshes0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Mesh>::get_Count() */, ICollection_1_t7F769DFF0B3F1FFF0181F521B9ABD47A15E0234F_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = _stringLiteral735D9BB3B699C953C14CC817D3DF0E7A51289C2F;
		goto IL_0022;
	}

IL_0016:
	{
		RuntimeObject* L_3 = ___meshes0;
		NullCheck(L_3);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4;
		L_4 = InterfaceFuncInvoker1< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.Mesh>::get_Item(System.Int32) */, IList_1_t0F12BBD3ADB18223C75B9673D75B1B7EA7BD17E8_il2cpp_TypeInfo_var, L_3, 0);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0022:
	{
		V_1 = G_B3_0;
		// sb.AppendLine(string.Format("solid {0}", name));
		StringBuilder_t * L_6 = V_0;
		String_t* L_7 = V_1;
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral6ED138BC333DC09EF25650FCA829DD8502F81B86, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_6, L_8, /*hidden argument*/NULL);
		// foreach(Mesh mesh in meshes)
		RuntimeObject* L_10 = ___meshes0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Mesh>::GetEnumerator() */, IEnumerable_1_t35BB7C30D129B44CFC76622A3B7D17CA9132D587_il2cpp_TypeInfo_var, L_10);
		V_2 = L_11;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0231;
		}

IL_0041:
		{
			// foreach(Mesh mesh in meshes)
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_13;
			L_13 = InterfaceFuncInvoker0< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Mesh>::get_Current() */, IEnumerator_1_tF13734F57A1165E9F09A47296CF97C2F7E6AFD01_il2cpp_TypeInfo_var, L_12);
			// Vector3[] v = mesh.vertices;
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_14 = L_13;
			NullCheck(L_14);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15;
			L_15 = Mesh_get_vertices_mB7A79698792B3CBA0E7E6EACDA6C031E496FB595(L_14, /*hidden argument*/NULL);
			V_3 = L_15;
			// Vector3[] n = mesh.normals;
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_16 = L_14;
			NullCheck(L_16);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17;
			L_17 = Mesh_get_normals_m5212279CEF7538618C8BA884C9A7B976B32352B0(L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			// int[] t = mesh.triangles;
			NullCheck(L_16);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18;
			L_18 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_16, /*hidden argument*/NULL);
			V_5 = L_18;
			// if(convertToRightHandedCoordinates)
			bool L_19 = ___convertToRightHandedCoordinates1;
			if (!L_19)
			{
				goto IL_00ab;
			}
		}

IL_0060:
		{
			// for(int i = 0, c = v.Length; i < c; i++)
			V_7 = 0;
			// for(int i = 0, c = v.Length; i < c; i++)
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = V_3;
			NullCheck(L_20);
			V_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)));
			goto IL_009e;
		}

IL_006a:
		{
			// v[i] = Stl.ToCoordinateSpace(v[i], CoordinateSpace.Right);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_21 = V_3;
			int32_t L_22 = V_7;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = V_3;
			int32_t L_24 = V_7;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_26, 1, /*hidden argument*/NULL);
			NullCheck(L_21);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_27);
			// n[i] = Stl.ToCoordinateSpace(n[i], CoordinateSpace.Right);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = V_4;
			int32_t L_29 = V_7;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_30 = V_4;
			int32_t L_31 = V_7;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
			L_34 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_33, 1, /*hidden argument*/NULL);
			NullCheck(L_28);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_34);
			// for(int i = 0, c = v.Length; i < c; i++)
			int32_t L_35 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		}

IL_009e:
		{
			// for(int i = 0, c = v.Length; i < c; i++)
			int32_t L_36 = V_7;
			int32_t L_37 = V_8;
			if ((((int32_t)L_36) < ((int32_t)L_37)))
			{
				goto IL_006a;
			}
		}

IL_00a4:
		{
			// System.Array.Reverse(t);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = V_5;
			Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D((RuntimeArray *)(RuntimeArray *)L_38, /*hidden argument*/NULL);
		}

IL_00ab:
		{
			// int triLen = t.Length;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = V_5;
			NullCheck(L_39);
			V_6 = ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)));
			// for(int i = 0; i < triLen; i+=3)
			V_9 = 0;
			goto IL_0228;
		}

IL_00b9:
		{
			// int a = t[i];
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_5;
			int32_t L_41 = V_9;
			NullCheck(L_40);
			int32_t L_42 = L_41;
			int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			V_10 = L_43;
			// int b = t[i+1];
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_5;
			int32_t L_45 = V_9;
			NullCheck(L_44);
			int32_t L_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
			int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_11 = L_47;
			// int c = t[i+2];
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_5;
			int32_t L_49 = V_9;
			NullCheck(L_48);
			int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
			int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			V_12 = L_51;
			// Vector3 nrm = AvgNrm(n[a], n[b], n[c]);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_52 = V_4;
			int32_t L_53 = V_10;
			NullCheck(L_52);
			int32_t L_54 = L_53;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_56 = V_4;
			int32_t L_57 = V_11;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_60 = V_4;
			int32_t L_61 = V_12;
			NullCheck(L_60);
			int32_t L_62 = L_61;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
			L_64 = Exporter_AvgNrm_m5F5B0F12BD68A2D4A64C6D3101322CBA4D5771A5(L_55, L_59, L_63, /*hidden argument*/NULL);
			V_13 = L_64;
			// sb.AppendLine(string.Format("facet normal {0} {1} {2}", nrm.x, nrm.y, nrm.z));
			StringBuilder_t * L_65 = V_0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_13;
			float L_67 = L_66.get_x_2();
			float L_68 = L_67;
			RuntimeObject * L_69 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_68);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = V_13;
			float L_71 = L_70.get_y_3();
			float L_72 = L_71;
			RuntimeObject * L_73 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_72);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_13;
			float L_75 = L_74.get_z_4();
			float L_76 = L_75;
			RuntimeObject * L_77 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_76);
			String_t* L_78;
			L_78 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralF25D35482268B7A0FB5DEE2B4E37E21A515983E7, L_69, L_73, L_77, /*hidden argument*/NULL);
			NullCheck(L_65);
			StringBuilder_t * L_79;
			L_79 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_65, L_78, /*hidden argument*/NULL);
			// sb.AppendLine("outer loop");
			StringBuilder_t * L_80 = V_0;
			NullCheck(L_80);
			StringBuilder_t * L_81;
			L_81 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_80, _stringLiteral8016E6A911A81C79245D0619A7A2573C4B2329E7, /*hidden argument*/NULL);
			// sb.AppendLine(string.Format("\tvertex {0} {1} {2}", v[a].x, v[a].y, v[a].z));
			StringBuilder_t * L_82 = V_0;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = V_3;
			int32_t L_84 = V_10;
			NullCheck(L_83);
			float L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->get_x_2();
			float L_86 = L_85;
			RuntimeObject * L_87 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_86);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = V_3;
			int32_t L_89 = V_10;
			NullCheck(L_88);
			float L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->get_y_3();
			float L_91 = L_90;
			RuntimeObject * L_92 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_91);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_93 = V_3;
			int32_t L_94 = V_10;
			NullCheck(L_93);
			float L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->get_z_4();
			float L_96 = L_95;
			RuntimeObject * L_97 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_96);
			String_t* L_98;
			L_98 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral5B8852E8A5D08914DA47D2EA288B25B0A4DF0517, L_87, L_92, L_97, /*hidden argument*/NULL);
			NullCheck(L_82);
			StringBuilder_t * L_99;
			L_99 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_82, L_98, /*hidden argument*/NULL);
			// sb.AppendLine(string.Format("\tvertex {0} {1} {2}", v[b].x, v[b].y, v[b].z));
			StringBuilder_t * L_100 = V_0;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_101 = V_3;
			int32_t L_102 = V_11;
			NullCheck(L_101);
			float L_103 = ((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)))->get_x_2();
			float L_104 = L_103;
			RuntimeObject * L_105 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_104);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = V_3;
			int32_t L_107 = V_11;
			NullCheck(L_106);
			float L_108 = ((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_107)))->get_y_3();
			float L_109 = L_108;
			RuntimeObject * L_110 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_109);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = V_3;
			int32_t L_112 = V_11;
			NullCheck(L_111);
			float L_113 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->get_z_4();
			float L_114 = L_113;
			RuntimeObject * L_115 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_114);
			String_t* L_116;
			L_116 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral5B8852E8A5D08914DA47D2EA288B25B0A4DF0517, L_105, L_110, L_115, /*hidden argument*/NULL);
			NullCheck(L_100);
			StringBuilder_t * L_117;
			L_117 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_100, L_116, /*hidden argument*/NULL);
			// sb.AppendLine(string.Format("\tvertex {0} {1} {2}", v[c].x, v[c].y, v[c].z));
			StringBuilder_t * L_118 = V_0;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_119 = V_3;
			int32_t L_120 = V_12;
			NullCheck(L_119);
			float L_121 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_120)))->get_x_2();
			float L_122 = L_121;
			RuntimeObject * L_123 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_122);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_124 = V_3;
			int32_t L_125 = V_12;
			NullCheck(L_124);
			float L_126 = ((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125)))->get_y_3();
			float L_127 = L_126;
			RuntimeObject * L_128 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_127);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_129 = V_3;
			int32_t L_130 = V_12;
			NullCheck(L_129);
			float L_131 = ((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_130)))->get_z_4();
			float L_132 = L_131;
			RuntimeObject * L_133 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_132);
			String_t* L_134;
			L_134 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral5B8852E8A5D08914DA47D2EA288B25B0A4DF0517, L_123, L_128, L_133, /*hidden argument*/NULL);
			NullCheck(L_118);
			StringBuilder_t * L_135;
			L_135 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_118, L_134, /*hidden argument*/NULL);
			// sb.AppendLine("endloop");
			StringBuilder_t * L_136 = V_0;
			NullCheck(L_136);
			StringBuilder_t * L_137;
			L_137 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_136, _stringLiteral1FA78267B9B48D668B1654BA13E4E82784018E59, /*hidden argument*/NULL);
			// sb.AppendLine("endfacet");
			StringBuilder_t * L_138 = V_0;
			NullCheck(L_138);
			StringBuilder_t * L_139;
			L_139 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_138, _stringLiteralA71101E76B0125E73A30300A33BD5DFF87DE52DA, /*hidden argument*/NULL);
			// for(int i = 0; i < triLen; i+=3)
			int32_t L_140 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)3));
		}

IL_0228:
		{
			// for(int i = 0; i < triLen; i+=3)
			int32_t L_141 = V_9;
			int32_t L_142 = V_6;
			if ((((int32_t)L_141) < ((int32_t)L_142)))
			{
				goto IL_00b9;
			}
		}

IL_0231:
		{
			// foreach(Mesh mesh in meshes)
			RuntimeObject* L_143 = V_2;
			NullCheck(L_143);
			bool L_144;
			L_144 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_143);
			if (L_144)
			{
				goto IL_0041;
			}
		}

IL_023c:
		{
			IL2CPP_LEAVE(0x248, FINALLY_023e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_023e;
	}

FINALLY_023e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_145 = V_2;
			if (!L_145)
			{
				goto IL_0247;
			}
		}

IL_0241:
		{
			RuntimeObject* L_146 = V_2;
			NullCheck(L_146);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_146);
		}

IL_0247:
		{
			IL2CPP_END_FINALLY(574)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(574)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x248, IL_0248)
	}

IL_0248:
	{
		// sb.AppendLine(string.Format("endsolid {0}", name));
		StringBuilder_t * L_147 = V_0;
		String_t* L_148 = V_1;
		String_t* L_149;
		L_149 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral79559B627C79A3CC077A3F371BD91BF8AB57ADFF, L_148, /*hidden argument*/NULL);
		NullCheck(L_147);
		StringBuilder_t * L_150;
		L_150 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_147, L_149, /*hidden argument*/NULL);
		// return sb.ToString();
		StringBuilder_t * L_151 = V_0;
		NullCheck(L_151);
		String_t* L_152;
		L_152 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_151);
		return L_152;
	}
}
// UnityEngine.Vector3 Parabox.Stl.Exporter::AvgNrm(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Exporter_AvgNrm_m5F5B0F12BD68A2D4A64C6D3101322CBA4D5771A5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c2, const RuntimeMethod* method)
{
	{
		// return new Vector3(
		//     (a.x + b.x + c.x) / 3f,
		//     (a.y + b.y + c.y) / 3f,
		//     (a.z + b.z + c.z) / 3f );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___c2;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___b1;
		float L_9 = L_8.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___c2;
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___a0;
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___b1;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___c2;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_1, (float)L_3)), (float)L_5))/(float)(3.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_7, (float)L_9)), (float)L_11))/(float)(3.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_15)), (float)L_17))/(float)(3.0f))), /*hidden argument*/NULL);
		return L_18;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Mesh[] Parabox.Stl.Importer::Import(System.String,Parabox.Stl.CoordinateSpace,Parabox.Stl.UpAxis,System.Boolean,UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Importer_Import_mEBEAEAD06DEE22A9B433A0E650FFCED18ABFF513 (String_t* ___path0, int32_t ___space1, int32_t ___axis2, bool ___smooth3, int32_t ___indexFormat4, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	Exception_t * V_1 = NULL;
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// IEnumerable<Facet> facets = null;
		V_0 = (RuntimeObject*)NULL;
		// if( IsBinary(path) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = Importer_IsBinary_m2DD607947375C23D9154A91D40E205FD67143808(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// facets = ImportBinary(path);
		String_t* L_2 = ___path0;
		RuntimeObject* L_3;
		L_3 = Importer_ImportBinary_mDD98853B19EACACAB68B951243147FD085957999(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// }
		goto IL_0035;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		throw e;
	}

CATCH_0013:
	{ // begin catch(System.Exception)
		// catch(System.Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// UnityEngine.Debug.LogWarning(string.Format("Failed importing mesh at path {0}.\n{1}", path, e.ToString()));
		String_t* L_4 = ___path0;
		Exception_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE792AD873720398DE82F52D4D925E98489C5EEFF)), L_4, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_7, /*hidden argument*/NULL);
		// return null;
		V_2 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004e;
	} // end catch (depth: 1)

IL_002e:
	{
		// facets = ImportAscii(path);
		String_t* L_8 = ___path0;
		RuntimeObject* L_9;
		L_9 = Importer_ImportAscii_mF2E27D7FD512135145D2BF7DE5E6CD64E934E044(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0035:
	{
		// if(smooth)
		bool L_10 = ___smooth3;
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// return ImportSmoothNormals(facets, space, axis, indexFormat);
		RuntimeObject* L_11 = V_0;
		int32_t L_12 = ___space1;
		int32_t L_13 = ___axis2;
		int32_t L_14 = ___indexFormat4;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_15;
		L_15 = Importer_ImportSmoothNormals_m8294DE6EB6EDDD2FE8D47E7FE7D57E962B43251C(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0043:
	{
		// return ImportHardNormals(facets, space, axis, indexFormat);
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = ___space1;
		int32_t L_18 = ___axis2;
		int32_t L_19 = ___indexFormat4;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_20;
		L_20 = Importer_ImportHardNormals_m02A6F07648668BF98C4794813E0B5D43AF892CCB(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_004e:
	{
		// }
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_21 = V_2;
		return L_21;
	}
}
// System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet> Parabox.Stl.Importer::ImportBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Importer_ImportBinary_mDD98853B19EACACAB68B951243147FD085957999 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* V_0 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_1 = NULL;
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (FileStream fs = new FileStream(path, FileMode.Open, FileAccess.Read))
		String_t* L_0 = ___path0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D(L_1, L_0, 3, 1, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			// using (BinaryReader br = new BinaryReader(fs, new ASCIIEncoding()))
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = V_1;
			ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527 * L_3 = (ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527 *)il2cpp_codegen_object_new(ASCIIEncoding_t74F7DFFB8BC8B90AC1F688A990EAD43CDE0B2527_il2cpp_TypeInfo_var);
			ASCIIEncoding__ctor_m79C69E6F60AB36F0BD4B252D923415EDE3D960F8(L_3, /*hidden argument*/NULL);
			BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)il2cpp_codegen_object_new(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
			BinaryReader__ctor_m0877557BEFE1C22B709C187A077D28CFBC777C76(L_4, L_2, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
		}

IL_0015:
		try
		{ // begin try (depth: 2)
			{
				// br.ReadBytes(80);
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_5 = V_2;
				NullCheck(L_5);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
				L_6 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_5, ((int32_t)80));
				// uint facetCount = br.ReadUInt32();
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_7 = V_2;
				NullCheck(L_7);
				uint32_t L_8;
				L_8 = VirtFuncInvoker0< uint32_t >::Invoke(16 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_7);
				V_3 = L_8;
				// facets = new Facet[facetCount];
				uint32_t L_9 = V_3;
				FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_10 = (FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810*)(FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810*)SZArrayNew(FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var, (uint32_t)L_9);
				V_0 = L_10;
				// for(uint i = 0; i < facetCount; i++)
				V_4 = 0;
				goto IL_0045;
			}

IL_0031:
			{
				// facets[i] = br.GetFacet();
				FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_11 = V_0;
				uint32_t L_12 = V_4;
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_13 = V_2;
				Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_14;
				L_14 = Importer_GetFacet_m7A38F550DDFC7531B7E84CC810CBBD46857DCBA9(L_13, /*hidden argument*/NULL);
				NullCheck(L_11);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Facet_tB2042492243496EA8D91214D9BB5781D810C783D )L_14);
				// for(uint i = 0; i < facetCount; i++)
				uint32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
			}

IL_0045:
			{
				// for(uint i = 0; i < facetCount; i++)
				uint32_t L_16 = V_4;
				uint32_t L_17 = V_3;
				if ((!(((uint32_t)L_16) >= ((uint32_t)L_17))))
				{
					goto IL_0031;
				}
			}

IL_004a:
			{
				// }
				IL2CPP_LEAVE(0x60, FINALLY_004c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004c;
		}

FINALLY_004c:
		{ // begin finally (depth: 2)
			{
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_18 = V_2;
				if (!L_18)
				{
					goto IL_0055;
				}
			}

IL_004f:
			{
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_19 = V_2;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0055:
			{
				IL2CPP_END_FINALLY(76)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(76)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x60, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_20 = V_1;
			if (!L_20)
			{
				goto IL_005f;
			}
		}

IL_0059:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_21 = V_1;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x60, IL_0060)
	}

IL_0060:
	{
		// return facets;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_22 = V_0;
		return (RuntimeObject*)L_22;
	}
}
// Parabox.Stl.Importer/Facet Parabox.Stl.Importer::GetFacet(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Facet_tB2042492243496EA8D91214D9BB5781D810C783D  Importer_GetFacet_m7A38F550DDFC7531B7E84CC810CBBD46857DCBA9 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___binaryReader0, const RuntimeMethod* method)
{
	{
		// Facet facet = new Facet(
		//     binaryReader.GetVector3(),    // Normal
		//     binaryReader.GetVector3(),    // A
		//     binaryReader.GetVector3(),    // B
		//     binaryReader.GetVector3()    // C
		//     );
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_0 = ___binaryReader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76(L_0, /*hidden argument*/NULL);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_2 = ___binaryReader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76(L_2, /*hidden argument*/NULL);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___binaryReader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76(L_4, /*hidden argument*/NULL);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = ___binaryReader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76(L_6, /*hidden argument*/NULL);
		Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// binaryReader.ReadUInt16(); // padding
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_9 = ___binaryReader0;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = VirtFuncInvoker0< uint16_t >::Invoke(14 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_9);
		// return facet;
		return L_8;
	}
}
// UnityEngine.Vector3 Parabox.Stl.Importer::GetVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Importer_GetVector3_mF1FF5E6DB1B53DF418427777B5E0123C763B0F76 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ___binaryReader0, const RuntimeMethod* method)
{
	{
		// return new Vector3(
		//     binaryReader.ReadSingle(),
		//     binaryReader.ReadSingle(),
		//     binaryReader.ReadSingle() );
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_0 = ___binaryReader0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_2 = ___binaryReader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = ___binaryReader0;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(19 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Parabox.Stl.Importer::ReadState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Importer_ReadState_m0FA3CAA803FD6ACC89DDF1D3336D08CC074B6FB6 (String_t* ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA78267B9B48D668B1654BA13E4E82784018E59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34ED107E760A2C78AB0AC637F155812BC9E59C9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACD40A51E7770253C3AEDB5D6E6EF9F6335815B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E7F53EFF2BB967F1A8C3D1A0F801B9C14C0F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral964F904D325F3CD9E47E19C43C4B1C70C30986C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71101E76B0125E73A30300A33BD5DFF87DE52DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53106BF6E2C51430F4A36FF420B6EBBB29ED358);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(line.StartsWith("solid"))
		String_t* L_0 = ___line0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteral964F904D325F3CD9E47E19C43C4B1C70C30986C0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return SOLID;
		return 1;
	}

IL_000f:
	{
		// else if(line.StartsWith("facet"))
		String_t* L_2 = ___line0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_2, _stringLiteral34ED107E760A2C78AB0AC637F155812BC9E59C9A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return FACET;
		return 2;
	}

IL_001e:
	{
		// else if(line.StartsWith("outer"))
		String_t* L_4 = ___line0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_4, _stringLiteral80E7F53EFF2BB967F1A8C3D1A0F801B9C14C0F42, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return OUTER;
		return 3;
	}

IL_002d:
	{
		// else if(line.StartsWith("vertex"))
		String_t* L_6 = ___line0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_6, _stringLiteralE53106BF6E2C51430F4A36FF420B6EBBB29ED358, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// return VERTEX;
		return 4;
	}

IL_003c:
	{
		// else if(line.StartsWith("endloop"))
		String_t* L_8 = ___line0;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_8, _stringLiteral1FA78267B9B48D668B1654BA13E4E82784018E59, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// return ENDLOOP;
		return 5;
	}

IL_004b:
	{
		// else if(line.StartsWith("endfacet"))
		String_t* L_10 = ___line0;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_10, _stringLiteralA71101E76B0125E73A30300A33BD5DFF87DE52DA, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// return ENDFACET;
		return 6;
	}

IL_005a:
	{
		// else if(line.StartsWith("endsolid"))
		String_t* L_12 = ___line0;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_12, _stringLiteral5ACD40A51E7770253C3AEDB5D6E6EF9F6335815B, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// return ENDSOLID;
		return 7;
	}

IL_0069:
	{
		// return EMPTY;
		return 0;
	}
}
// System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet> Parabox.Stl.Importer::ImportAscii(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Importer_ImportAscii_mF2E27D7FD512135145D2BF7DE5E6CD64E934E044 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA835E646C0E93EE1531BA93A51DD16EF3447A87B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA565D188AFDB12EE2030CD030324B7521A61A71);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * V_0 = NULL;
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<Facet> facets = new List<Facet>();
		List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * L_0 = (List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E *)il2cpp_codegen_object_new(List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E_il2cpp_TypeInfo_var);
		List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E(L_0, /*hidden argument*/List_1__ctor_m2A4A8FD7EDAD2969D2249EF134CB19D707810D9E_RuntimeMethod_var);
		V_0 = L_0;
		// using(StreamReader sr = new StreamReader(path, Encoding.ASCII))
		String_t* L_1 = ___path0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_3 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m604C1EB84158CCBED0EE74A1F2C547EC589EBC92(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			// int state = EMPTY, vertex = 0;
			V_3 = 0;
			// int state = EMPTY, vertex = 0;
			V_4 = 0;
			// Vector3 normal = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
			L_4 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_5 = L_4;
			// Vector3 a = Vector3.zero, b = Vector3.zero, c = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
			L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_6 = L_5;
			// Vector3 a = Vector3.zero, b = Vector3.zero, c = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_7 = L_6;
			// Vector3 a = Vector3.zero, b = Vector3.zero, c = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
			L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_8 = L_7;
			// bool exit = false;
			V_9 = (bool)0;
			goto IL_010e;
		}

IL_003b:
		{
			// line = sr.ReadLine().Trim();
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_8);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			// state = ReadState(line);
			String_t* L_11 = V_2;
			int32_t L_12;
			L_12 = Importer_ReadState_m0FA3CAA803FD6ACC89DDF1D3336D08CC074B6FB6(L_11, /*hidden argument*/NULL);
			V_3 = L_12;
			int32_t L_13 = V_3;
			switch (L_13)
			{
				case 0:
				{
					goto IL_010e;
				}
				case 1:
				{
					goto IL_010e;
				}
				case 2:
				{
					goto IL_0079;
				}
				case 3:
				{
					goto IL_0092;
				}
				case 4:
				{
					goto IL_0097;
				}
				case 5:
				{
					goto IL_010e;
				}
				case 6:
				{
					goto IL_00f6;
				}
				case 7:
				{
					goto IL_010b;
				}
			}
		}

IL_0074:
		{
			goto IL_010e;
		}

IL_0079:
		{
			// normal = StringToVec3(line.Replace("facet normal ", ""));
			String_t* L_14 = V_2;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_14, _stringLiteralFA565D188AFDB12EE2030CD030324B7521A61A71, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118(L_15, /*hidden argument*/NULL);
			V_5 = L_16;
			// break;
			goto IL_010e;
		}

IL_0092:
		{
			// vertex = 0;
			V_4 = 0;
			// break;
			goto IL_010e;
		}

IL_0097:
		{
			// if (vertex == 0)
			int32_t L_17 = V_4;
			if (L_17)
			{
				goto IL_00b4;
			}
		}

IL_009b:
		{
			// a = StringToVec3(line.Replace("vertex ", ""));
			String_t* L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_18, _stringLiteralA835E646C0E93EE1531BA93A51DD16EF3447A87B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118(L_19, /*hidden argument*/NULL);
			V_6 = L_20;
			goto IL_00ee;
		}

IL_00b4:
		{
			// else if(vertex == 2)
			int32_t L_21 = V_4;
			if ((!(((uint32_t)L_21) == ((uint32_t)2))))
			{
				goto IL_00d2;
			}
		}

IL_00b9:
		{
			// c = StringToVec3(line.Replace("vertex ", ""));
			String_t* L_22 = V_2;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_22, _stringLiteralA835E646C0E93EE1531BA93A51DD16EF3447A87B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118(L_23, /*hidden argument*/NULL);
			V_8 = L_24;
			goto IL_00ee;
		}

IL_00d2:
		{
			// else if (vertex == 1)
			int32_t L_25 = V_4;
			if ((!(((uint32_t)L_25) == ((uint32_t)1))))
			{
				goto IL_00ee;
			}
		}

IL_00d7:
		{
			// b = StringToVec3(line.Replace("vertex ", ""));
			String_t* L_26 = V_2;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_26, _stringLiteralA835E646C0E93EE1531BA93A51DD16EF3447A87B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118(L_27, /*hidden argument*/NULL);
			V_7 = L_28;
		}

IL_00ee:
		{
			// vertex++;
			int32_t L_29 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
			// break;
			goto IL_010e;
		}

IL_00f6:
		{
			// facets.Add(new Facet(normal, a, b, c));
			List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * L_30 = V_0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_5;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_6;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_8;
			Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_35;
			memset((&L_35), 0, sizeof(L_35));
			Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1((&L_35), L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
			NullCheck(L_30);
			List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52(L_30, L_35, /*hidden argument*/List_1_Add_m5E3F055D35F0E3C597C80E18B2A29E47D78D9B52_RuntimeMethod_var);
			// break;
			goto IL_010e;
		}

IL_010b:
		{
			// exit = true;
			V_9 = (bool)1;
		}

IL_010e:
		{
			// while(sr.Peek() > 0 && !exit)
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_36 = V_1;
			NullCheck(L_36);
			int32_t L_37;
			L_37 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_36);
			if ((((int32_t)L_37) <= ((int32_t)0)))
			{
				goto IL_011e;
			}
		}

IL_0117:
		{
			bool L_38 = V_9;
			if (!L_38)
			{
				goto IL_003b;
			}
		}

IL_011e:
		{
			// }
			IL2CPP_LEAVE(0x12A, FINALLY_0120);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0120;
	}

FINALLY_0120:
	{ // begin finally (depth: 1)
		{
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_39 = V_1;
			if (!L_39)
			{
				goto IL_0129;
			}
		}

IL_0123:
		{
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_40 = V_1;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_40);
		}

IL_0129:
		{
			IL2CPP_END_FINALLY(288)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(288)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12A, IL_012a)
	}

IL_012a:
	{
		// return facets;
		List_1_tAFBCE775090FAC9F7C25E2A7853A8A60F24DF22E * L_41 = V_0;
		return L_41;
	}
}
// UnityEngine.Vector3 Parabox.Stl.Importer::StringToVec3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Importer_StringToVec3_mB2087BFDBD9C372E1F665BCCE74B97484E313118 (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// string[] split = str.Trim().Split((char[])null, StringSplitOptions.RemoveEmptyEntries);
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_1, (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL, 1, /*hidden argument*/NULL);
		// Vector3 v = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// float.TryParse(split[0], NumberStyles.Any, CultureInfo.InvariantCulture, out v.x);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
		L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float* L_7 = (&V_0)->get_address_of_x_2();
		bool L_8;
		L_8 = Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0(L_5, ((int32_t)511), L_6, (float*)L_7, /*hidden argument*/NULL);
		// float.TryParse(split[1], NumberStyles.Any, CultureInfo.InvariantCulture, out v.y);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_3;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_12;
		L_12 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float* L_13 = (&V_0)->get_address_of_y_3();
		bool L_14;
		L_14 = Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0(L_11, ((int32_t)511), L_12, (float*)L_13, /*hidden argument*/NULL);
		// float.TryParse(split[2], NumberStyles.Any, CultureInfo.InvariantCulture, out v.z);
		NullCheck(L_9);
		int32_t L_15 = 2;
		String_t* L_16 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_17;
		L_17 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		float* L_18 = (&V_0)->get_address_of_z_4();
		bool L_19;
		L_19 = Single_TryParse_m889B15D32988B9193049C9B4CCF25E42B4F000A0(L_16, ((int32_t)511), L_17, (float*)L_18, /*hidden argument*/NULL);
		// return v;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		return L_20;
	}
}
// System.Boolean Parabox.Stl.Importer::IsBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Importer_IsBinary_m2DD607947375C23D9154A91D40E205FD67143808 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF715474BDA107825474957A63581596443C1FC79);
		s_Il2CppMethodInitialized = true;
	}
	FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * V_0 = NULL;
	bool V_1 = false;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_2 = NULL;
	BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * V_3 = NULL;
	int64_t V_4 = 0;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_5 = NULL;
	BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// FileInfo file = new FileInfo(path);
		String_t* L_0 = ___path0;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_1 = (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 *)il2cpp_codegen_object_new(FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9_il2cpp_TypeInfo_var);
		FileInfo__ctor_m1F6FEFCA0E66054B8B7BEEE064EE4297ED606EE5(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if(file.Length < 130)
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_2 = V_0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = FileInfo_get_Length_mAB6D9F8C594A3DBA38628D9BA58CBCF846D5781D(L_2, /*hidden argument*/NULL);
		if ((((int64_t)L_3) >= ((int64_t)((int64_t)((int64_t)((int32_t)130))))))
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// var isBinary = false;
		V_1 = (bool)0;
		// using(FileStream f0 = file.OpenRead())
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_4 = V_0;
		NullCheck(L_4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5;
		L_5 = FileInfo_OpenRead_m7A064D4B374F1C301C32E5760BBFD7238DCDCDC9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			// using(BufferedStream bs0 = new BufferedStream(f0))
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_2;
			BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_7 = (BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF *)il2cpp_codegen_object_new(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var);
			BufferedStream__ctor_mA467BF66E11AE1F1B9DCDCFAEB852153948BB010(L_7, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			{
				// for(long i = 0; i < 80; i++)
				V_4 = ((int64_t)((int64_t)0));
				goto IL_0040;
			}

IL_002d:
			{
				// var readByte = bs0.ReadByte();
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_8);
				// if (readByte == 0x0)
				if (L_9)
				{
					goto IL_0039;
				}
			}

IL_0035:
			{
				// isBinary = true;
				V_1 = (bool)1;
				// break;
				IL2CPP_LEAVE(0x5D, FINALLY_0049);
			}

IL_0039:
			{
				// for(long i = 0; i < 80; i++)
				int64_t L_10 = V_4;
				V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)1))));
			}

IL_0040:
			{
				// for(long i = 0; i < 80; i++)
				int64_t L_11 = V_4;
				if ((((int64_t)L_11) < ((int64_t)((int64_t)((int64_t)((int32_t)80))))))
				{
					goto IL_002d;
				}
			}

IL_0047:
			{
				// }
				IL2CPP_LEAVE(0x5D, FINALLY_0049);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0049;
		}

FINALLY_0049:
		{ // begin finally (depth: 2)
			{
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_12 = V_3;
				if (!L_12)
				{
					goto IL_0052;
				}
			}

IL_004c:
			{
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_13 = V_3;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
			}

IL_0052:
			{
				IL2CPP_END_FINALLY(73)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(73)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_14 = V_2;
			if (!L_14)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// if (!isBinary)
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_00c7;
		}
	}
	{
		// using (FileStream f0 = file.OpenRead())
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_17 = V_0;
		NullCheck(L_17);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_18;
		L_18 = FileInfo_OpenRead_m7A064D4B374F1C301C32E5760BBFD7238DCDCDC9(L_17, /*hidden argument*/NULL);
		V_5 = L_18;
	}

IL_0068:
	try
	{ // begin try (depth: 1)
		{
			// using (BufferedStream bs0 = new BufferedStream(f0))
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_19 = V_5;
			BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_20 = (BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF *)il2cpp_codegen_object_new(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var);
			BufferedStream__ctor_mA467BF66E11AE1F1B9DCDCFAEB852153948BB010(L_20, L_19, /*hidden argument*/NULL);
			V_6 = L_20;
		}

IL_0071:
		try
		{ // begin try (depth: 2)
			{
				// var byteArray = new byte[6];
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)6);
				V_7 = L_21;
				// for (var i = 0; i < 6; i++)
				V_8 = 0;
				goto IL_0091;
			}

IL_007e:
			{
				// byteArray[i] = (byte)bs0.ReadByte();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = V_7;
				int32_t L_23 = V_8;
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_24 = V_6;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::ReadByte() */, L_24);
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)((uint8_t)L_25)));
				// for (var i = 0; i < 6; i++)
				int32_t L_26 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
			}

IL_0091:
			{
				// for (var i = 0; i < 6; i++)
				int32_t L_27 = V_8;
				if ((((int32_t)L_27) < ((int32_t)6)))
				{
					goto IL_007e;
				}
			}

IL_0096:
			{
				// var text = Encoding.UTF8.GetString(byteArray);
				Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_28;
				L_28 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_7;
				NullCheck(L_28);
				String_t* L_30;
				L_30 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_28, L_29);
				// isBinary = text != "solid ";
				bool L_31;
				L_31 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_30, _stringLiteralF715474BDA107825474957A63581596443C1FC79, /*hidden argument*/NULL);
				V_1 = L_31;
				// }
				IL2CPP_LEAVE(0xC7, FINALLY_00af);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00af;
		}

FINALLY_00af:
		{ // begin finally (depth: 2)
			{
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_32 = V_6;
				if (!L_32)
				{
					goto IL_00ba;
				}
			}

IL_00b3:
			{
				BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_33 = V_6;
				NullCheck(L_33);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
			}

IL_00ba:
			{
				IL2CPP_END_FINALLY(175)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(175)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xC7, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_34 = V_5;
			if (!L_34)
			{
				goto IL_00c6;
			}
		}

IL_00bf:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_35 = V_5;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(187)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC7, IL_00c7)
	}

IL_00c7:
	{
		// return isBinary;
		bool L_36 = V_1;
		return L_36;
	}
}
// UnityEngine.Mesh[] Parabox.Stl.Importer::ImportSmoothNormals(System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>,Parabox.Stl.CoordinateSpace,Parabox.Stl.UpAxis,UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Importer_ImportSmoothNormals_m8294DE6EB6EDDD2FE8D47E7FE7D57E962B43251C (RuntimeObject* ___faces0, int32_t ___modelCoordinateSpace1, int32_t ___modelUpAxis2, int32_t ___indexFormat3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0896041A5FC3789592EDED8BD46B0B3B2604E3FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04C5F5148A2F3C116CAF25F1DBD0CB3D9FC736B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m166CDC054745BAFB93DA39AF515EE68019E233FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * V_3 = NULL;
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * V_4 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_5 = NULL;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_6 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_7 = NULL;
	Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * V_8 = NULL;
	int32_t V_9 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  V_12;
	memset((&V_12), 0, sizeof(V_12));
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  V_13;
	memset((&V_13), 0, sizeof(V_13));
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * V_16 = NULL;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  V_17;
	memset((&V_17), 0, sizeof(V_17));
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* V_18 = NULL;
	int32_t V_19 = 0;
	Facet_tB2042492243496EA8D91214D9BB5781D810C783D  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_25;
	memset((&V_25), 0, sizeof(V_25));
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_26 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* G_B2_0 = NULL;
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* G_B1_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		// var facets = faces as Facet[] ?? faces.ToArray();
		RuntimeObject* L_0 = ___faces0;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_1 = ((FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810*)IsInst((RuntimeObject*)L_0, FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_2 = ___faces0;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_3;
		L_3 = Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA(L_2, /*hidden argument*/Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_RuntimeMethod_var);
		G_B2_0 = L_3;
	}

IL_0010:
	{
		V_0 = G_B2_0;
		// int maxVertexCount = indexFormat == IndexFormat.UInt32 ? MaxFacetsPerMesh32 * 3 : MaxFacetsPerMesh16 * 3;
		int32_t L_4 = ___indexFormat3;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((int32_t)65535);
		goto IL_0021;
	}

IL_001c:
	{
		G_B5_0 = ((int32_t)2147483646);
	}

IL_0021:
	{
		V_1 = G_B5_0;
		// int triangleCount = facets.Length * 3;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_5 = V_0;
		NullCheck(L_5);
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)3));
		// Dictionary<StlVector3, Vector3> smoothNormals = new Dictionary<StlVector3, Vector3>(triangleCount / 2);
		int32_t L_6 = V_2;
		Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_7 = (Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 *)il2cpp_codegen_object_new(Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD(L_7, ((int32_t)((int32_t)L_6/(int32_t)2)), /*hidden argument*/Dictionary_2__ctor_m61ED0AEFDFFDB834123362980045C757CEE300CD_RuntimeMethod_var);
		V_3 = L_7;
		// foreach(var face in faces)
		RuntimeObject* L_8 = ___faces0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>::GetEnumerator() */, IEnumerable_1_t0896041A5FC3789592EDED8BD46B0B3B2604E3FD_il2cpp_TypeInfo_var, L_8);
		V_11 = L_9;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0115;
		}

IL_003e:
		{
			// foreach(var face in faces)
			RuntimeObject* L_10 = V_11;
			NullCheck(L_10);
			Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_11;
			L_11 = InterfaceFuncInvoker0< Facet_tB2042492243496EA8D91214D9BB5781D810C783D  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Parabox.Stl.Importer/Facet>::get_Current() */, IEnumerator_1_t04C5F5148A2F3C116CAF25F1DBD0CB3D9FC736B1_il2cpp_TypeInfo_var, L_10);
			// var x = (StlVector3) face.a;
			Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_12 = L_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12.get_a_1();
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_14;
			L_14 = StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3(L_13, /*hidden argument*/NULL);
			V_12 = L_14;
			// var y = (StlVector3) face.b;
			Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_15 = L_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15.get_b_2();
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_17;
			L_17 = StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3(L_16, /*hidden argument*/NULL);
			V_13 = L_17;
			// var z = (StlVector3) face.c;
			Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_18 = L_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18.get_c_3();
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_20;
			L_20 = StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3(L_19, /*hidden argument*/NULL);
			V_14 = L_20;
			// var normal = face.normal;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = L_18.get_normal_0();
			V_15 = L_21;
			// if(smoothNormals.ContainsKey(x))
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_22 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_23 = V_12;
			NullCheck(L_22);
			bool L_24;
			L_24 = Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1(L_22, L_23, /*hidden argument*/Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_RuntimeMethod_var);
			if (!L_24)
			{
				goto IL_009f;
			}
		}

IL_007d:
		{
			// smoothNormals[x] += normal;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_25 = V_3;
			V_16 = L_25;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_26 = V_12;
			V_17 = L_26;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_27 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_28 = V_17;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_29 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_30 = V_17;
			NullCheck(L_29);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51(L_29, L_30, /*hidden argument*/Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_32, /*hidden argument*/NULL);
			NullCheck(L_27);
			Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034(L_27, L_28, L_33, /*hidden argument*/Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_009f:
		{
			// smoothNormals.Add(x, normal);
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_34 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_35 = V_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_15;
			NullCheck(L_34);
			Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16(L_34, L_35, L_36, /*hidden argument*/Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_RuntimeMethod_var);
		}

IL_00a9:
		{
			// if(smoothNormals.ContainsKey(y))
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_37 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_38 = V_13;
			NullCheck(L_37);
			bool L_39;
			L_39 = Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1(L_37, L_38, /*hidden argument*/Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_RuntimeMethod_var);
			if (!L_39)
			{
				goto IL_00d5;
			}
		}

IL_00b3:
		{
			// smoothNormals[y] += normal;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_40 = V_3;
			V_16 = L_40;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_41 = V_13;
			V_17 = L_41;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_42 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_43 = V_17;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_44 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_45 = V_17;
			NullCheck(L_44);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51(L_44, L_45, /*hidden argument*/Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_46, L_47, /*hidden argument*/NULL);
			NullCheck(L_42);
			Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034(L_42, L_43, L_48, /*hidden argument*/Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_RuntimeMethod_var);
			goto IL_00df;
		}

IL_00d5:
		{
			// smoothNormals.Add(y, normal);
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_49 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_50 = V_13;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_15;
			NullCheck(L_49);
			Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16(L_49, L_50, L_51, /*hidden argument*/Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_RuntimeMethod_var);
		}

IL_00df:
		{
			// if(smoothNormals.ContainsKey(z))
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_52 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_53 = V_14;
			NullCheck(L_52);
			bool L_54;
			L_54 = Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1(L_52, L_53, /*hidden argument*/Dictionary_2_ContainsKey_mCE374A5CEDF8D99FC2CEFC9905074E4937006AA1_RuntimeMethod_var);
			if (!L_54)
			{
				goto IL_010b;
			}
		}

IL_00e9:
		{
			// smoothNormals[z] += normal;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_55 = V_3;
			V_16 = L_55;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_56 = V_14;
			V_17 = L_56;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_57 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_58 = V_17;
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_59 = V_16;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_60 = V_17;
			NullCheck(L_59);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
			L_61 = Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51(L_59, L_60, /*hidden argument*/Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
			L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_61, L_62, /*hidden argument*/NULL);
			NullCheck(L_57);
			Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034(L_57, L_58, L_63, /*hidden argument*/Dictionary_2_set_Item_mAE84820D90FE8CB310A7BEEB17900F62F4DDD034_RuntimeMethod_var);
			goto IL_0115;
		}

IL_010b:
		{
			// smoothNormals.Add(z, normal);
			Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_64 = V_3;
			StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_65 = V_14;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_15;
			NullCheck(L_64);
			Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16(L_64, L_65, L_66, /*hidden argument*/Dictionary_2_Add_m127B2F16F79FBBCE2E2E4B2ACDAAEDDAEFC60F16_RuntimeMethod_var);
		}

IL_0115:
		{
			// foreach(var face in faces)
			RuntimeObject* L_67 = V_11;
			NullCheck(L_67);
			bool L_68;
			L_68 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_67);
			if (L_68)
			{
				goto IL_003e;
			}
		}

IL_0121:
		{
			IL2CPP_LEAVE(0x12F, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_69 = V_11;
			if (!L_69)
			{
				goto IL_012e;
			}
		}

IL_0127:
		{
			RuntimeObject* L_70 = V_11;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_70);
		}

IL_012e:
		{
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12F, IL_012f)
	}

IL_012f:
	{
		// List<Mesh> meshes = new List<Mesh>();
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_71 = (List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B *)il2cpp_codegen_object_new(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B_il2cpp_TypeInfo_var);
		List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98(L_71, /*hidden argument*/List_1__ctor_mC231E09D7F26F0B1F61263B105FCD625F94AFB98_RuntimeMethod_var);
		V_4 = L_71;
		// List<Vector3> pos = new List<Vector3>(Math.Min(maxVertexCount, triangleCount));
		int32_t L_72 = V_1;
		int32_t L_73 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_74;
		L_74 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_72, L_73, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_75 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82(L_75, L_74, /*hidden argument*/List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		V_5 = L_75;
		// List<Vector3> nrm = new List<Vector3>(Math.Min(maxVertexCount, triangleCount));
		int32_t L_76 = V_1;
		int32_t L_77 = V_2;
		int32_t L_78;
		L_78 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_76, L_77, /*hidden argument*/NULL);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_79 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82(L_79, L_78, /*hidden argument*/List_1__ctor_mAB5C8082843D5BE306E3B6185D7031436251DB82_RuntimeMethod_var);
		V_6 = L_79;
		// List<int> tri = new List<int>(triangleCount);
		int32_t L_80 = V_2;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_81 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_81, L_80, /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		V_7 = L_81;
		// Dictionary<StlVector3, int> map = new Dictionary<StlVector3, int>();
		Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * L_82 = (Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 *)il2cpp_codegen_object_new(Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9(L_82, /*hidden argument*/Dictionary_2__ctor_m8E949AFC9B7C5F5DA96962E2B37A33BA45FE03D9_RuntimeMethod_var);
		V_8 = L_82;
		// int vertex = 0;
		V_9 = 0;
		// Vector3[] points = new Vector3[3];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		V_10 = L_83;
		// foreach(var face in facets)
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_84 = V_0;
		V_18 = L_84;
		V_19 = 0;
		goto IL_02e1;
	}

IL_0177:
	{
		// foreach(var face in facets)
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_85 = V_18;
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_20 = L_88;
		// if(vertex + 3 > maxVertexCount)
		int32_t L_89 = V_9;
		int32_t L_90 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)3))) <= ((int32_t)L_90)))
		{
			goto IL_01f2;
		}
	}
	{
		// var mesh = new Mesh
		// {
		//     vertices = pos.ToArray(),
		//     normals = nrm.ToArray(),
		//     indexFormat = indexFormat
		// };
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_91 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_91, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_92 = L_91;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_93 = V_5;
		NullCheck(L_93);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_94;
		L_94 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_93, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_92);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_92, L_94, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_95 = L_92;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_96 = V_6;
		NullCheck(L_96);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_97;
		L_97 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_96, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_95);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_95, L_97, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_98 = L_95;
		int32_t L_99 = ___indexFormat3;
		NullCheck(L_98);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_98, L_99, /*hidden argument*/NULL);
		V_21 = L_98;
		// if (modelCoordinateSpace == CoordinateSpace.Right)
		int32_t L_100 = ___modelCoordinateSpace1;
		if ((!(((uint32_t)L_100) == ((uint32_t)1))))
		{
			goto IL_01bc;
		}
	}
	{
		// tri.Reverse();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_101 = V_7;
		NullCheck(L_101);
		List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED(L_101, /*hidden argument*/List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
	}

IL_01bc:
	{
		// mesh.triangles = tri.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_102 = V_21;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_103 = V_7;
		NullCheck(L_103);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104;
		L_104 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_103, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_102);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_102, L_104, /*hidden argument*/NULL);
		// meshes.Add(mesh);
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_105 = V_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_106 = V_21;
		NullCheck(L_105);
		List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73(L_105, L_106, /*hidden argument*/List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
		// vertex = 0;
		V_9 = 0;
		// pos.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_107 = V_5;
		NullCheck(L_107);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_107, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// nrm.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_108 = V_6;
		NullCheck(L_108);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_108, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// tri.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_109 = V_7;
		NullCheck(L_109);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_109, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// map.Clear();
		Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * L_110 = V_8;
		NullCheck(L_110);
		Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF(L_110, /*hidden argument*/Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_RuntimeMethod_var);
	}

IL_01f2:
	{
		// points[0] = face.a;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = V_10;
		Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_112 = V_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = L_112.get_a_1();
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
		// points[1] = face.b;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_114 = V_10;
		Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_115 = V_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116 = L_115.get_b_2();
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_116);
		// points[2] = face.c;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_117 = V_10;
		Facet_tB2042492243496EA8D91214D9BB5781D810C783D  L_118 = V_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119 = L_118.get_c_3();
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_119);
		// for(int i = 0; i < 3; i++)
		V_22 = 0;
		goto IL_02d3;
	}

IL_0227:
	{
		// int index = -1;
		V_23 = (-1);
		// var hash = (StlVector3) points[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_120 = V_10;
		int32_t L_121 = V_22;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_124;
		L_124 = StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3(L_123, /*hidden argument*/NULL);
		V_24 = L_124;
		// if(!map.TryGetValue(hash, out index))
		Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * L_125 = V_8;
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_126 = V_24;
		NullCheck(L_125);
		bool L_127;
		L_127 = Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D(L_125, L_126, (int32_t*)(&V_23), /*hidden argument*/Dictionary_2_TryGetValue_m3B3FEB75F71FADACF1EA03E4E0293EFBD8C3561D_RuntimeMethod_var);
		if (L_127)
		{
			goto IL_02c4;
		}
	}
	{
		// if(modelCoordinateSpace == CoordinateSpace.Right)
		int32_t L_128 = ___modelCoordinateSpace1;
		if ((!(((uint32_t)L_128) == ((uint32_t)1))))
		{
			goto IL_0281;
		}
	}
	{
		// pos.Add(Stl.ToCoordinateSpace(points[i], CoordinateSpace.Left));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_129 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_130 = V_10;
		int32_t L_131 = V_22;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		L_134 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_133, 0, /*hidden argument*/NULL);
		NullCheck(L_129);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_129, L_134, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// nrm.Add(Stl.ToCoordinateSpace(smoothNormals[hash].normalized, CoordinateSpace.Left));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_135 = V_6;
		Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_136 = V_3;
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_137 = V_24;
		NullCheck(L_136);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138;
		L_138 = Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51(L_136, L_137, /*hidden argument*/Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
		V_25 = L_138;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_25), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_139, 0, /*hidden argument*/NULL);
		NullCheck(L_135);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_135, L_140, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// }
		goto IL_02a9;
	}

IL_0281:
	{
		// pos.Add(points[i]);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_141 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_142 = V_10;
		int32_t L_143 = V_22;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_141);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_141, L_145, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// nrm.Add(smoothNormals[hash].normalized);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_146 = V_6;
		Dictionary_2_tBACACDEDFC4CEB9C07E632BEDCAD194067633568 * L_147 = V_3;
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_148 = V_24;
		NullCheck(L_147);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		L_149 = Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51(L_147, L_148, /*hidden argument*/Dictionary_2_get_Item_m833054C57BCBEA494F0D8F0361CC6C37C68BFA51_RuntimeMethod_var);
		V_25 = L_149;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150;
		L_150 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_25), /*hidden argument*/NULL);
		NullCheck(L_146);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_146, L_150, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
	}

IL_02a9:
	{
		// tri.Add(vertex);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_151 = V_7;
		int32_t L_152 = V_9;
		NullCheck(L_151);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_151, L_152, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// map.Add(hash, vertex++);
		Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * L_153 = V_8;
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_154 = V_24;
		int32_t L_155 = V_9;
		int32_t L_156 = L_155;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)1));
		NullCheck(L_153);
		Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA(L_153, L_154, L_156, /*hidden argument*/Dictionary_2_Add_m76A894285196EE4D813003124AF6B232AF87E8CA_RuntimeMethod_var);
		// }
		goto IL_02cd;
	}

IL_02c4:
	{
		// tri.Add(index);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_157 = V_7;
		int32_t L_158 = V_23;
		NullCheck(L_157);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_157, L_158, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_02cd:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_159 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_02d3:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_160 = V_22;
		if ((((int32_t)L_160) < ((int32_t)3)))
		{
			goto IL_0227;
		}
	}
	{
		int32_t L_161 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
	}

IL_02e1:
	{
		// foreach(var face in facets)
		int32_t L_162 = V_19;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_163 = V_18;
		NullCheck(L_163);
		if ((((int32_t)L_162) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_163)->max_length))))))
		{
			goto IL_0177;
		}
	}
	{
		// if(vertex > 0)
		int32_t L_164 = V_9;
		if ((((int32_t)L_164) <= ((int32_t)0)))
		{
			goto IL_035a;
		}
	}
	{
		// var mesh = new Mesh
		// {
		//     vertices = pos.ToArray(),
		//     normals = nrm.ToArray(),
		//     indexFormat = indexFormat
		// };
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_165 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_165, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_166 = L_165;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_167 = V_5;
		NullCheck(L_167);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_168;
		L_168 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_167, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_166);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_166, L_168, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_169 = L_166;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_170 = V_6;
		NullCheck(L_170);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_171;
		L_171 = List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC(L_170, /*hidden argument*/List_1_ToArray_mCFFA6AFA30A20FB2FFC3846AD114DF7BC21BFFBC_RuntimeMethod_var);
		NullCheck(L_169);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_169, L_171, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_172 = L_169;
		int32_t L_173 = ___indexFormat3;
		NullCheck(L_172);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_172, L_173, /*hidden argument*/NULL);
		V_26 = L_172;
		// if (modelCoordinateSpace == CoordinateSpace.Right)
		int32_t L_174 = ___modelCoordinateSpace1;
		if ((!(((uint32_t)L_174) == ((uint32_t)1))))
		{
			goto IL_0324;
		}
	}
	{
		// tri.Reverse();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_175 = V_7;
		NullCheck(L_175);
		List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED(L_175, /*hidden argument*/List_1_Reverse_m37775958EAD7F2378791BFB588459532DA7459ED_RuntimeMethod_var);
	}

IL_0324:
	{
		// mesh.triangles = tri.ToArray();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_176 = V_26;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_177 = V_7;
		NullCheck(L_177);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_178;
		L_178 = List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F(L_177, /*hidden argument*/List_1_ToArray_mDEFFC768D9AAD376D27FC0FC1F7B57EE2E93479F_RuntimeMethod_var);
		NullCheck(L_176);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_176, L_178, /*hidden argument*/NULL);
		// meshes.Add(mesh);
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_179 = V_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_180 = V_26;
		NullCheck(L_179);
		List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73(L_179, L_180, /*hidden argument*/List_1_Add_mC8C3BDDA7361B15E8E1EDFF500B115B272FA0D73_RuntimeMethod_var);
		// vertex = 0;
		V_9 = 0;
		// pos.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_181 = V_5;
		NullCheck(L_181);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_181, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// nrm.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_182 = V_6;
		NullCheck(L_182);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_182, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// tri.Clear();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_183 = V_7;
		NullCheck(L_183);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_183, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// map.Clear();
		Dictionary_2_t7C76929D51438D01EC6AFCC8243E1141AF54A650 * L_184 = V_8;
		NullCheck(L_184);
		Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF(L_184, /*hidden argument*/Dictionary_2_Clear_mF6939ED524E80372159B7D044DCEA38ECB06F9CF_RuntimeMethod_var);
	}

IL_035a:
	{
		// return meshes.ToArray();
		List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * L_185 = V_4;
		NullCheck(L_185);
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_186;
		L_186 = List_1_ToArray_m166CDC054745BAFB93DA39AF515EE68019E233FD(L_185, /*hidden argument*/List_1_ToArray_m166CDC054745BAFB93DA39AF515EE68019E233FD_RuntimeMethod_var);
		return L_186;
	}
}
// UnityEngine.Mesh[] Parabox.Stl.Importer::ImportHardNormals(System.Collections.Generic.IEnumerable`1<Parabox.Stl.Importer/Facet>,Parabox.Stl.CoordinateSpace,Parabox.Stl.UpAxis,UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* Importer_ImportHardNormals_m02A6F07648668BF98C4794813E0B5D43AF892CCB (RuntimeObject* ___faces0, int32_t ___modelCoordinateSpace1, int32_t ___modelUpAxis2, int32_t ___indexFormat3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_8 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* G_B2_0 = NULL;
	FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* G_B1_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		// var facets = faces as Facet[] ?? faces.ToArray();
		RuntimeObject* L_0 = ___faces0;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_1 = ((FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810*)IsInst((RuntimeObject*)L_0, FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_2 = ___faces0;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_3;
		L_3 = Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA(L_2, /*hidden argument*/Enumerable_ToArray_TisFacet_tB2042492243496EA8D91214D9BB5781D810C783D_m3425161DC57DADC503E2F0959D27DA8BFDBE56DA_RuntimeMethod_var);
		G_B2_0 = L_3;
	}

IL_0010:
	{
		V_0 = G_B2_0;
		// int faceCount = facets.Length, f = 0;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_4 = V_0;
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		// int faceCount = facets.Length, f = 0;
		V_2 = 0;
		// int maxFacetsPerMesh = indexFormat == IndexFormat.UInt32 ? MaxFacetsPerMesh32 : MaxFacetsPerMesh16;
		int32_t L_5 = ___indexFormat3;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		G_B5_0 = ((int32_t)21845);
		goto IL_0027;
	}

IL_0022:
	{
		G_B5_0 = ((int32_t)715827882);
	}

IL_0027:
	{
		V_3 = G_B5_0;
		// int maxVertexCount = maxFacetsPerMesh * 3;
		int32_t L_6 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)3));
		// Mesh[] meshes = new Mesh[faceCount / maxFacetsPerMesh + 1];
		int32_t L_7 = V_1;
		int32_t L_8 = V_3;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_9 = (MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8*)SZArrayNew(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8)), (int32_t)1)));
		V_5 = L_9;
		// for(int meshIndex = 0; meshIndex < meshes.Length; meshIndex++)
		V_6 = 0;
		goto IL_0231;
	}

IL_0041:
	{
		// int len = System.Math.Min(maxVertexCount, (faceCount - f) * 3);
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), (int32_t)3)), /*hidden argument*/NULL);
		V_7 = L_13;
		// Vector3[] v = new Vector3[len];
		int32_t L_14 = V_7;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_8 = L_15;
		// Vector3[] n = new Vector3[len];
		int32_t L_16 = V_7;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_9 = L_17;
		// int[] t = new int[len];
		int32_t L_18 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_10 = L_19;
		// for(int it = 0; it < len; it += 3)
		V_11 = 0;
		goto IL_011f;
	}

IL_0072:
	{
		// v[it  ] = facets[f].a;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = V_8;
		int32_t L_21 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_22 = V_0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_a_1();
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_24);
		// v[it+1] = facets[f].b;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = V_8;
		int32_t L_26 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_b_2();
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_29);
		// v[it+2] = facets[f].c;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_30 = V_8;
		int32_t L_31 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_c_3();
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_34);
		// n[it  ] = facets[f].normal;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = V_9;
		int32_t L_36 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_37 = V_0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->get_normal_0();
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_39);
		// n[it+1] = facets[f].normal;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40 = V_9;
		int32_t L_41 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_42 = V_0;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_normal_0();
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_44);
		// n[it+2] = facets[f].normal;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_45 = V_9;
		int32_t L_46 = V_11;
		FacetU5BU5D_tC06D3E8E3934656CC1AB1541AF783C2487891810* L_47 = V_0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->get_normal_0();
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_49);
		// t[it  ] = it+0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = V_10;
		int32_t L_51 = V_11;
		int32_t L_52 = V_11;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int32_t)L_52);
		// t[it+1] = it+1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_10;
		int32_t L_54 = V_11;
		int32_t L_55 = V_11;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
		// t[it+2] = it+2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = V_10;
		int32_t L_57 = V_11;
		int32_t L_58 = V_11;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)2)));
		// f++;
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		// for(int it = 0; it < len; it += 3)
		int32_t L_60 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)3));
	}

IL_011f:
	{
		// for(int it = 0; it < len; it += 3)
		int32_t L_61 = V_11;
		int32_t L_62 = V_7;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0072;
		}
	}
	{
		// if(modelCoordinateSpace == CoordinateSpace.Right)
		int32_t L_63 = ___modelCoordinateSpace1;
		if ((!(((uint32_t)L_63) == ((uint32_t)1))))
		{
			goto IL_0202;
		}
	}
	{
		// for(int i = 0; i < len; i+=3)
		V_12 = 0;
		goto IL_01f9;
	}

IL_0137:
	{
		// v[i+0] = Stl.ToCoordinateSpace(v[i+0], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_64 = V_8;
		int32_t L_65 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_66 = V_8;
		int32_t L_67 = V_12;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_69, 0, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_70);
		// v[i+1] = Stl.ToCoordinateSpace(v[i+1], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = V_8;
		int32_t L_72 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_73 = V_8;
		int32_t L_74 = V_12;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_76, 0, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_77);
		// v[i+2] = Stl.ToCoordinateSpace(v[i+2], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_78 = V_8;
		int32_t L_79 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = V_8;
		int32_t L_81 = V_12;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_83, 0, /*hidden argument*/NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_84);
		// n[i+0] = Stl.ToCoordinateSpace(n[i+0], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_85 = V_9;
		int32_t L_86 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_87 = V_9;
		int32_t L_88 = V_12;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_90, 0, /*hidden argument*/NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_91);
		// n[i+1] = Stl.ToCoordinateSpace(n[i+1], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_92 = V_9;
		int32_t L_93 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_94 = V_9;
		int32_t L_95 = V_12;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_97, 0, /*hidden argument*/NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_98);
		// n[i+2] = Stl.ToCoordinateSpace(n[i+2], CoordinateSpace.Left);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = V_9;
		int32_t L_100 = V_12;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_101 = V_9;
		int32_t L_102 = V_12;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415(L_104, 0, /*hidden argument*/NULL);
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_105);
		// var a = t[i+2];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106 = V_10;
		int32_t L_107 = V_12;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)2));
		int32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_13 = L_109;
		// t[i+2] = t[i];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = V_10;
		int32_t L_111 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_112 = V_10;
		int32_t L_113 = V_12;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		int32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)2))), (int32_t)L_115);
		// t[i] = a;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_116 = V_10;
		int32_t L_117 = V_12;
		int32_t L_118 = V_13;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (int32_t)L_118);
		// for(int i = 0; i < len; i+=3)
		int32_t L_119 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)3));
	}

IL_01f9:
	{
		// for(int i = 0; i < len; i+=3)
		int32_t L_120 = V_12;
		int32_t L_121 = V_7;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_0137;
		}
	}

IL_0202:
	{
		// meshes[meshIndex] = new Mesh
		// {
		//     vertices = v,
		//     normals = n,
		//     triangles = t,
		//     indexFormat = indexFormat
		// };
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_122 = V_5;
		int32_t L_123 = V_6;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_124 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_124, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_125 = L_124;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_126 = V_8;
		NullCheck(L_125);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_125, L_126, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_127 = L_125;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_128 = V_9;
		NullCheck(L_127);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_127, L_128, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_129 = L_127;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = V_10;
		NullCheck(L_129);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_129, L_130, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_131 = L_129;
		int32_t L_132 = ___indexFormat3;
		NullCheck(L_131);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_131, L_132, /*hidden argument*/NULL);
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, L_131);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)L_131);
		// for(int meshIndex = 0; meshIndex < meshes.Length; meshIndex++)
		int32_t L_133 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
	}

IL_0231:
	{
		// for(int meshIndex = 0; meshIndex < meshes.Length; meshIndex++)
		int32_t L_134 = V_6;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_135 = V_5;
		NullCheck(L_135);
		if ((((int32_t)L_134) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_135)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* L_136 = V_5;
		return L_136;
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
// UnityEngine.Vector3 Parabox.Stl.Stl::ToCoordinateSpace(UnityEngine.Vector3,Parabox.Stl.CoordinateSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Stl_ToCoordinateSpace_mEF91A13A39A7259E9375A28043DB572B9A794415 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, int32_t ___space1, const RuntimeMethod* method)
{
	{
		// if(space == CoordinateSpace.Left)
		int32_t L_0 = ___space1;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// return new Vector3(-point.y, point.z, point.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___point0;
		float L_2 = L_1.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___point0;
		float L_4 = L_3.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___point0;
		float L_6 = L_5.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((-L_2)), L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_001c:
	{
		// return new Vector3(point.z, -point.x, point.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___point0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___point0;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___point0;
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_9, ((-L_11)), L_13, /*hidden argument*/NULL);
		return L_14;
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
// System.Void Parabox.Stl.StlVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlVector3__ctor_mE7102216481DE20677C90FA5B35EA1E9C0704588 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// x = v.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		__this->set_x_0(L_1);
		// y = v.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		__this->set_y_1(L_3);
		// z = v.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___v0;
		float L_5 = L_4.get_z_4();
		__this->set_z_2(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StlVector3__ctor_mE7102216481DE20677C90FA5B35EA1E9C0704588_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * _thisAdjusted = reinterpret_cast<StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *>(__this + _offset);
	StlVector3__ctor_mE7102216481DE20677C90FA5B35EA1E9C0704588(_thisAdjusted, ___v0, method);
}
// Parabox.Stl.StlVector3 Parabox.Stl.StlVector3::op_Explicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  StlVector3_op_Explicit_m194FCD69E5DB8A40737F957FFA123FFF05848DF3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vec0, const RuntimeMethod* method)
{
	{
		// return new StlVector3(vec);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vec0;
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		StlVector3__ctor_mE7102216481DE20677C90FA5B35EA1E9C0704588((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Parabox.Stl.StlVector3::Equals(Parabox.Stl.StlVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlVector3_Equals_m23FEE6520B02B4203F9B3E02DED572889D4B5F94 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___other0, const RuntimeMethod* method)
{
	{
		// return Mathf.Approximately(x, other.x)
		//     && Mathf.Approximately(y, other.y)
		//     && Mathf.Approximately(z, other.z);
		float L_0 = __this->get_x_0();
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		bool L_3;
		L_3 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		float L_4 = __this->get_y_1();
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_5 = ___other0;
		float L_6 = L_5.get_y_1();
		bool L_7;
		L_7 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		float L_8 = __this->get_z_2();
		StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  L_9 = ___other0;
		float L_10 = L_9.get_z_2();
		bool L_11;
		L_11 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StlVector3_Equals_m23FEE6520B02B4203F9B3E02DED572889D4B5F94_AdjustorThunk (RuntimeObject * __this, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * _thisAdjusted = reinterpret_cast<StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StlVector3_Equals_m23FEE6520B02B4203F9B3E02DED572889D4B5F94(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Parabox.Stl.StlVector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlVector3_Equals_m62C3CEC3BAC50427FDD9AFBAC989DBFEAC581D6A (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || !(obj is StlVector3))
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// return Equals((StlVector3) obj);
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = StlVector3_Equals_m23FEE6520B02B4203F9B3E02DED572889D4B5F94((StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *)__this, ((*(StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *)((StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *)UnBox(L_2, StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StlVector3_Equals_m62C3CEC3BAC50427FDD9AFBAC989DBFEAC581D6A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * _thisAdjusted = reinterpret_cast<StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *>(__this + _offset);
	bool _returnValue;
	_returnValue = StlVector3_Equals_m62C3CEC3BAC50427FDD9AFBAC989DBFEAC581D6A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Parabox.Stl.StlVector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlVector3_GetHashCode_m0276312EA2AA1755EBB3E1FFCC27BBA4E6ADB994 (StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int hash = 27;
		V_0 = ((int32_t)27);
		// hash = (13 * hash) + (x * k_Resolution).GetHashCode();
		int32_t L_0 = V_0;
		float L_1 = __this->get_x_0();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(10000.0f)));
		int32_t L_2;
		L_2 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)13), (int32_t)L_0)), (int32_t)L_2));
		// hash = (13 * hash) + (y * k_Resolution).GetHashCode();
		int32_t L_3 = V_0;
		float L_4 = __this->get_y_1();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_4, (float)(10000.0f)));
		int32_t L_5;
		L_5 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)13), (int32_t)L_3)), (int32_t)L_5));
		// hash = (13 * hash) + (z * k_Resolution).GetHashCode();
		int32_t L_6 = V_0;
		float L_7 = __this->get_z_2();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_7, (float)(10000.0f)));
		int32_t L_8;
		L_8 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)13), (int32_t)L_6)), (int32_t)L_8));
		// return hash;
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t StlVector3_GetHashCode_m0276312EA2AA1755EBB3E1FFCC27BBA4E6ADB994_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 * _thisAdjusted = reinterpret_cast<StlVector3_t7E7E0736E072744F66F976FD2972444E4CF445A3 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StlVector3_GetHashCode_m0276312EA2AA1755EBB3E1FFCC27BBA4E6ADB994(_thisAdjusted, method);
	return _returnValue;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Parabox.Stl.Exporter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m584F6E36B90831E7FE76B4C06B71BB635335FC26 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * L_0 = (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 *)il2cpp_codegen_object_new(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0D727B4D882A8F2A89FA2B8AA4D8B4F32D5D475E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Parabox.Stl.Exporter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D727B4D882A8F2A89FA2B8AA4D8B4F32D5D475E (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform Parabox.Stl.Exporter/<>c::<Export>b__0_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CU3Ec_U3CExportU3Eb__0_0_m55E2002CA090F01648FF47CED585B324CC385260 (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	{
		// Mesh[] meshes = CreateWorldSpaceMeshesWithTransforms(gameObjects.Select(x => x.transform).ToArray());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Parabox.Stl.Exporter/<>c::<CreateWorldSpaceMeshesWithTransforms>b__1_0(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateWorldSpaceMeshesWithTransformsU3Eb__1_0_m7373012E942B15FEA399A27F32AADE9312F03AAC (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<MeshFilter> mfs = root.GetComponentsInChildren<MeshFilter>().Where(x => x.sharedMesh != null).ToList();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___x0;
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Parabox.Stl.Exporter/<>c::<WriteFile>b__3_0(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CWriteFileU3Eb__3_0_mD3E8F25037AB57FBF766718F0E063FA0380AB4CA (U3CU3Ec_tAF878E428945302E764458B4210A37D9954EDA97 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___x0, const RuntimeMethod* method)
{
	{
		// uint totalTriangleCount = (uint) (meshes.Sum(x => x.triangles.Length) / 3);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___x0;
		NullCheck(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1;
		L_1 = Mesh_get_triangles_mC599119151146317136B1E4C40A9110373286D5A(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
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
// System.Void Parabox.Stl.Importer/Facet::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1 (Facet_tB2042492243496EA8D91214D9BB5781D810C783D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c3, const RuntimeMethod* method)
{
	{
		// this.normal = normal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___normal0;
		__this->set_normal_0(L_0);
		// this.a = a;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___a1;
		__this->set_a_1(L_1);
		// this.b = b;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b2;
		__this->set_b_2(L_2);
		// this.c = c;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___c3;
		__this->set_c_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___c3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Facet_tB2042492243496EA8D91214D9BB5781D810C783D * _thisAdjusted = reinterpret_cast<Facet_tB2042492243496EA8D91214D9BB5781D810C783D *>(__this + _offset);
	Facet__ctor_m58CDBC3B8D6C13B3738168A7986B994DD9C5EBF1(_thisAdjusted, ___normal0, ___a1, ___b2, ___c3, method);
}
// System.String Parabox.Stl.Importer/Facet::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Facet_ToString_m8953EE142185F736ECEC43B06F6A11C944111FEA (Facet_tB2042492243496EA8D91214D9BB5781D810C783D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B7B08AE50BD196BA37F420FE6E9E8BD694396B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0:F2}: {1:F2}, {2:F2}, {3:F2}", normal, a, b, c);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_normal_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2;
		RuntimeObject * L_4 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_a_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_b_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10;
		RuntimeObject * L_12 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_c_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralF4B7B08AE50BD196BA37F420FE6E9E8BD694396B, L_13, /*hidden argument*/NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* Facet_ToString_m8953EE142185F736ECEC43B06F6A11C944111FEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Facet_tB2042492243496EA8D91214D9BB5781D810C783D * _thisAdjusted = reinterpret_cast<Facet_tB2042492243496EA8D91214D9BB5781D810C783D *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Facet_ToString_m8953EE142185F736ECEC43B06F6A11C944111FEA(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
