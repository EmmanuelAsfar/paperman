#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.String,PdfSharp.Pdf.KeyDescriptor>
struct Dictionary_2_tD8825FC494FBBB87105F11DE09413BC9D9E05102;
// System.Collections.Generic.Dictionary`2<System.String,PdfSharp.Pdf.PdfItem>
struct Dictionary_2_tE662E8EEB24EE93B56F86B7182EAED72E1CDF52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// PdfSharp.Pdf.DictionaryMeta
struct DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Drawing.Image
struct Image_tE3FA53AAB1092A4E908A0EE58A4E43AB17A5D40D;
// PdfSharp.Drawing.ImportedImage
struct ImportedImage_t46A78FF1AC6ACE835ED3F2C13109B8C79F1571CD;
// PdfSharp.Pdf.IO.Lexer
struct Lexer_t409DE86FD7140E438A98709B4E7CC6BFE0DFCB9B;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// PdfSharp.Pdf.Advanced.PdfCatalog
struct PdfCatalog_t24957A3C08CC2240DA7A29F2579CF37317999253;
// PdfSharp.Pdf.Advanced.PdfContent
struct PdfContent_t545CE310F2C2213751FDEAB10496A4D32D9E3176;
// PdfSharp.Pdf.Advanced.PdfContents
struct PdfContents_t6AA070523236272C00D0559FB64A83D82455AB9D;
// PdfSharp.Pdf.Advanced.PdfCrossReferenceTable
struct PdfCrossReferenceTable_t84C41604E46D9837278063547F2392801F6DD842;
// PdfSharp.Pdf.PdfDictionary
struct PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95;
// PdfSharp.Pdf.PdfDocument
struct PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D;
// PdfSharp.Pdf.PdfDocumentInformation
struct PdfDocumentInformation_t445865D068CA5E80D54889643424AC2F92C3B7B5;
// PdfSharp.Pdf.PdfDocumentOptions
struct PdfDocumentOptions_t1E3D48914CCA0C3245BC0FB26C285C11416C6161;
// PdfSharp.Pdf.PdfDocumentSettings
struct PdfDocumentSettings_t00B7C6354345DB9EA6418E17AB7310204CD15E3B;
// PdfSharp.Pdf.Advanced.PdfExtGStateTable
struct PdfExtGStateTable_tD45AE9797F0F164503A2B974A6808992A2950F7A;
// PdfSharp.Pdf.Advanced.PdfFontTable
struct PdfFontTable_t67488E1626FCDCF9FD96ACB082B7288FC5CA9DAE;
// PdfSharp.Pdf.Advanced.PdfFormXObject
struct PdfFormXObject_t49B2FF2CD1CFA8B3A982BE5696BC5489CB1AC3F7;
// PdfSharp.Pdf.Advanced.PdfFormXObjectTable
struct PdfFormXObjectTable_t51A04A20126CFE8541AD76AC02FE323B53E9CD59;
// PdfSharp.Pdf.Advanced.PdfImageTable
struct PdfImageTable_tDDCB476DD37947493CF53D0EEF9F24B702E18308;
// PdfSharp.Pdf.PdfInteger
struct PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E;
// PdfSharp.Pdf.Advanced.PdfInternals
struct PdfInternals_t7435BEFE7467FF92F46BA8667277B1CA577059A2;
// PdfSharp.Pdf.PdfItem
struct PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28;
// PdfSharp.Pdf.PdfName
struct PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2;
// PdfSharp.Pdf.PdfObject
struct PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1;
// PdfSharp.Pdf.PdfPage
struct PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC;
// PdfSharp.Pdf.PdfPages
struct PdfPages_t91C28A23A483590383E55D884A95A41998C31847;
// PdfSharp.Pdf.PdfRectangle
struct PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63;
// PdfSharp.Pdf.Advanced.PdfReference
struct PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A;
// PdfSharp.Pdf.Advanced.PdfResources
struct PdfResources_t53F1564F4C4EC31771FE564A2F4184CFE447E5BA;
// PdfSharp.Pdf.Security.PdfSecuritySettings
struct PdfSecuritySettings_t3375FA996305690056CB44AE7A37E9F7708C5D37;
// PdfSharp.Pdf.Advanced.PdfTrailer
struct PdfTrailer_tD431F0D691B03642960AD7B4ED7887D790420C90;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// PdfSharp.Pdf.Internal.ThreadLocalStorage
struct ThreadLocalStorage_t5C2A7975D31A0E163C2B5A791BD8B916B1ABA92F;
// PdfSharp.Pdf.TrimMargins
struct TrimMargins_tFF1AFEB4934964E3111F52AC64DE2FD3DFD1A0CF;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// PdfSharp.Drawing.XForm
struct XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D;
// PdfSharp.Drawing.XGraphics
struct XGraphics_tBF7CB4F1992F434852CEA890073CA4F213B1244B;
// PdfSharp.Drawing.Pdf.XGraphicsPdfRenderer
struct XGraphicsPdfRenderer_t4A01D8F80E51E98310F117FAF44E71F0733F745F;
// PdfSharp.Drawing.XImage
struct XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE;
// PdfSharp.Drawing.XImageFormat
struct XImageFormat_t9E234258DA9FA0A11FCFCBA244C63B8B6F106ACD;
// PdfSharp.Pdf.PdfDictionary/DictionaryElements
struct DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525;
// PdfSharp.Pdf.PdfDictionary/PdfStream
struct PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031;
// PdfSharp.Pdf.PdfDocument/DocumentHandle
struct DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF;
// PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector
struct Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D;
// PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector
struct ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571;
// PdfSharp.Pdf.PdfName/PdfXNameComparer
struct PdfXNameComparer_t63D8E1228E5E2C12585F47A630BCB21E90A1D14D;
// PdfSharp.Pdf.Advanced.PdfReference/PdfReferenceComparer
struct PdfReferenceComparer_t412A0366185573BC4617DA01BC7AAC79C85FDAA6;
// PdfSharp.Pdf.IO.PdfWriter/StackItem
struct StackItem_t68161EC950A20469F8CD8B9C2D5D461DF27047CF;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keys_tF26470F6D568A4C986343B899F4790740676DD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral038176EC987B6A0605B4FE220073BEDB26CDDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral510CF541528EEA77325650FA12C3389BFCFBCEF5;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA22D8B04236FC1C52890EB207BCE8454E2F4B2;
IL2CPP_EXTERN_C String_t* _stringLiteral708813B3C67FB3846D4332A2185881B833845CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA15FE9944C1E5DAD0066783E07D56FDECF8088;
IL2CPP_EXTERN_C String_t* _stringLiteralA70D713BE84752F987C7B4B42D1711D33BA352F9;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6054B54A5547D7DE49F656E92A843950AAFD6EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC947565B1C0D0968BC5A6866508089C211FC4412;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C const RuntimeMethod* PdfStream_ToString_mF298A8DDEE8777BD36AA43F952682AE67555B0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PdfStream__ctor_mE8A4C9662F1DC3EAA25C870712A81ECFDD0452C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PdfStream_set_Value_m8AADD403A052D958DD85E348B43447FB0CADCF1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Keys_tF26470F6D568A4C986343B899F4790740676DD7C_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// PdfSharp.Pdf.DictionaryMeta
struct  DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PdfSharp.Pdf.KeyDescriptor> PdfSharp.Pdf.DictionaryMeta::_keyDescriptors
	Dictionary_2_tD8825FC494FBBB87105F11DE09413BC9D9E05102 * ____keyDescriptors_0;

public:
	inline static int32_t get_offset_of__keyDescriptors_0() { return static_cast<int32_t>(offsetof(DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5, ____keyDescriptors_0)); }
	inline Dictionary_2_tD8825FC494FBBB87105F11DE09413BC9D9E05102 * get__keyDescriptors_0() const { return ____keyDescriptors_0; }
	inline Dictionary_2_tD8825FC494FBBB87105F11DE09413BC9D9E05102 ** get_address_of__keyDescriptors_0() { return &____keyDescriptors_0; }
	inline void set__keyDescriptors_0(Dictionary_2_tD8825FC494FBBB87105F11DE09413BC9D9E05102 * value)
	{
		____keyDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyDescriptors_0), (void*)value);
	}
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


// PdfSharp.Pdf.KeysBase
struct  KeysBase_t505D9AB920464CDDC63D0F4475CAD47523CE62AA  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// PdfSharp.Pdf.PdfItem
struct  PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28  : public RuntimeObject
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

// PdfSharp.Pdf.PdfDictionary/DictionaryElements
struct  DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,PdfSharp.Pdf.PdfItem> PdfSharp.Pdf.PdfDictionary/DictionaryElements::_elements
	Dictionary_2_tE662E8EEB24EE93B56F86B7182EAED72E1CDF52A * ____elements_0;
	// PdfSharp.Pdf.PdfDictionary PdfSharp.Pdf.PdfDictionary/DictionaryElements::_ownerDictionary
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ____ownerDictionary_1;

public:
	inline static int32_t get_offset_of__elements_0() { return static_cast<int32_t>(offsetof(DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525, ____elements_0)); }
	inline Dictionary_2_tE662E8EEB24EE93B56F86B7182EAED72E1CDF52A * get__elements_0() const { return ____elements_0; }
	inline Dictionary_2_tE662E8EEB24EE93B56F86B7182EAED72E1CDF52A ** get_address_of__elements_0() { return &____elements_0; }
	inline void set__elements_0(Dictionary_2_tE662E8EEB24EE93B56F86B7182EAED72E1CDF52A * value)
	{
		____elements_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elements_0), (void*)value);
	}

	inline static int32_t get_offset_of__ownerDictionary_1() { return static_cast<int32_t>(offsetof(DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525, ____ownerDictionary_1)); }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * get__ownerDictionary_1() const { return ____ownerDictionary_1; }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 ** get_address_of__ownerDictionary_1() { return &____ownerDictionary_1; }
	inline void set__ownerDictionary_1(PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * value)
	{
		____ownerDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ownerDictionary_1), (void*)value);
	}
};


// PdfSharp.Pdf.PdfDictionary/PdfStream
struct  PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031  : public RuntimeObject
{
public:
	// PdfSharp.Pdf.PdfDictionary PdfSharp.Pdf.PdfDictionary/PdfStream::_ownerDictionary
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ____ownerDictionary_0;
	// System.Byte[] PdfSharp.Pdf.PdfDictionary/PdfStream::_value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value_1;

public:
	inline static int32_t get_offset_of__ownerDictionary_0() { return static_cast<int32_t>(offsetof(PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031, ____ownerDictionary_0)); }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * get__ownerDictionary_0() const { return ____ownerDictionary_0; }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 ** get_address_of__ownerDictionary_0() { return &____ownerDictionary_0; }
	inline void set__ownerDictionary_0(PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * value)
	{
		____ownerDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ownerDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031, ____value_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__value_1() const { return ____value_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};


// PdfSharp.Pdf.PdfDocument/DocumentHandle
struct  DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF  : public RuntimeObject
{
public:
	// System.WeakReference PdfSharp.Pdf.PdfDocument/DocumentHandle::_weakRef
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____weakRef_0;
	// System.String PdfSharp.Pdf.PdfDocument/DocumentHandle::ID
	String_t* ___ID_1;

public:
	inline static int32_t get_offset_of__weakRef_0() { return static_cast<int32_t>(offsetof(DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF, ____weakRef_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__weakRef_0() const { return ____weakRef_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__weakRef_0() { return &____weakRef_0; }
	inline void set__weakRef_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____weakRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weakRef_0), (void*)value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF, ___ID_1)); }
	inline String_t* get_ID_1() const { return ___ID_1; }
	inline String_t** get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(String_t* value)
	{
		___ID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ID_1), (void*)value);
	}
};


// PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector
struct  Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D  : public RuntimeObject
{
public:
	// System.String PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector::_path
	String_t* ____path_0;

public:
	inline static int32_t get_offset_of__path_0() { return static_cast<int32_t>(offsetof(Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D, ____path_0)); }
	inline String_t* get__path_0() const { return ____path_0; }
	inline String_t** get_address_of__path_0() { return &____path_0; }
	inline void set__path_0(String_t* value)
	{
		____path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_0), (void*)value);
	}
};


// PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector
struct  ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571  : public RuntimeObject
{
public:
	// System.String PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector::_path
	String_t* ____path_0;

public:
	inline static int32_t get_offset_of__path_0() { return static_cast<int32_t>(offsetof(ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571, ____path_0)); }
	inline String_t* get__path_0() const { return ____path_0; }
	inline String_t** get_address_of__path_0() { return &____path_0; }
	inline void set__path_0(String_t* value)
	{
		____path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_0), (void*)value);
	}
};


// PdfSharp.Pdf.PdfName/PdfXNameComparer
struct  PdfXNameComparer_t63D8E1228E5E2C12585F47A630BCB21E90A1D14D  : public RuntimeObject
{
public:

public:
};


// PdfSharp.Pdf.Advanced.PdfReference/PdfReferenceComparer
struct  PdfReferenceComparer_t412A0366185573BC4617DA01BC7AAC79C85FDAA6  : public RuntimeObject
{
public:

public:
};


// PdfSharp.Pdf.IO.PdfWriter/StackItem
struct  StackItem_t68161EC950A20469F8CD8B9C2D5D461DF27047CF  : public RuntimeObject
{
public:
	// PdfSharp.Pdf.PdfObject PdfSharp.Pdf.IO.PdfWriter/StackItem::Object
	PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * ___Object_0;
	// System.Boolean PdfSharp.Pdf.IO.PdfWriter/StackItem::HasStream
	bool ___HasStream_1;

public:
	inline static int32_t get_offset_of_Object_0() { return static_cast<int32_t>(offsetof(StackItem_t68161EC950A20469F8CD8B9C2D5D461DF27047CF, ___Object_0)); }
	inline PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * get_Object_0() const { return ___Object_0; }
	inline PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 ** get_address_of_Object_0() { return &___Object_0; }
	inline void set_Object_0(PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * value)
	{
		___Object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_0), (void*)value);
	}

	inline static int32_t get_offset_of_HasStream_1() { return static_cast<int32_t>(offsetof(StackItem_t68161EC950A20469F8CD8B9C2D5D461DF27047CF, ___HasStream_1)); }
	inline bool get_HasStream_1() const { return ___HasStream_1; }
	inline bool* get_address_of_HasStream_1() { return &___HasStream_1; }
	inline void set_HasStream_1(bool value)
	{
		___HasStream_1 = value;
	}
};


// PdfSharp.Drawing.XMatrix/MatrixHelper
struct  MatrixHelper_t0A3106C7261BD2AA2B47B52B116279A6225BD283  : public RuntimeObject
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


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// PdfSharp.Pdf.PdfName
struct  PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2  : public PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28
{
public:
	// System.String PdfSharp.Pdf.PdfName::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}
};

struct PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_StaticFields
{
public:
	// PdfSharp.Pdf.PdfName PdfSharp.Pdf.PdfName::Empty
	PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_StaticFields, ___Empty_1)); }
	inline PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * get_Empty_1() const { return ___Empty_1; }
	inline PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_1), (void*)value);
	}
};


// PdfSharp.Pdf.PdfNumber
struct  PdfNumber_t42BA997BA6346A40016DE7A76E78A5172EE7F316  : public PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28
{
public:

public:
};


// PdfSharp.Pdf.PdfObject
struct  PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1  : public PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28
{
public:
	// PdfSharp.Pdf.PdfDocument PdfSharp.Pdf.PdfObject::_document
	PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * ____document_0;
	// PdfSharp.Pdf.Advanced.PdfReference PdfSharp.Pdf.PdfObject::_iref
	PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * ____iref_1;

public:
	inline static int32_t get_offset_of__document_0() { return static_cast<int32_t>(offsetof(PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1, ____document_0)); }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * get__document_0() const { return ____document_0; }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D ** get_address_of__document_0() { return &____document_0; }
	inline void set__document_0(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * value)
	{
		____document_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____document_0), (void*)value);
	}

	inline static int32_t get_offset_of__iref_1() { return static_cast<int32_t>(offsetof(PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1, ____iref_1)); }
	inline PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * get__iref_1() const { return ____iref_1; }
	inline PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A ** get_address_of__iref_1() { return &____iref_1; }
	inline void set__iref_1(PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * value)
	{
		____iref_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____iref_1), (void*)value);
	}
};


// PdfSharp.Pdf.PdfObjectID
struct  PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD 
{
public:
	// System.Int32 PdfSharp.Pdf.PdfObjectID::_objectNumber
	int32_t ____objectNumber_0;
	// System.UInt16 PdfSharp.Pdf.PdfObjectID::_generationNumber
	uint16_t ____generationNumber_1;

public:
	inline static int32_t get_offset_of__objectNumber_0() { return static_cast<int32_t>(offsetof(PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD, ____objectNumber_0)); }
	inline int32_t get__objectNumber_0() const { return ____objectNumber_0; }
	inline int32_t* get_address_of__objectNumber_0() { return &____objectNumber_0; }
	inline void set__objectNumber_0(int32_t value)
	{
		____objectNumber_0 = value;
	}

	inline static int32_t get_offset_of__generationNumber_1() { return static_cast<int32_t>(offsetof(PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD, ____generationNumber_1)); }
	inline uint16_t get__generationNumber_1() const { return ____generationNumber_1; }
	inline uint16_t* get_address_of__generationNumber_1() { return &____generationNumber_1; }
	inline void set__generationNumber_1(uint16_t value)
	{
		____generationNumber_1 = value;
	}
};


// PdfSharp.Pdf.PdfRectangle
struct  PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63  : public PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28
{
public:
	// System.Double PdfSharp.Pdf.PdfRectangle::_x1
	double ____x1_0;
	// System.Double PdfSharp.Pdf.PdfRectangle::_y1
	double ____y1_1;
	// System.Double PdfSharp.Pdf.PdfRectangle::_x2
	double ____x2_2;
	// System.Double PdfSharp.Pdf.PdfRectangle::_y2
	double ____y2_3;

public:
	inline static int32_t get_offset_of__x1_0() { return static_cast<int32_t>(offsetof(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63, ____x1_0)); }
	inline double get__x1_0() const { return ____x1_0; }
	inline double* get_address_of__x1_0() { return &____x1_0; }
	inline void set__x1_0(double value)
	{
		____x1_0 = value;
	}

	inline static int32_t get_offset_of__y1_1() { return static_cast<int32_t>(offsetof(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63, ____y1_1)); }
	inline double get__y1_1() const { return ____y1_1; }
	inline double* get_address_of__y1_1() { return &____y1_1; }
	inline void set__y1_1(double value)
	{
		____y1_1 = value;
	}

	inline static int32_t get_offset_of__x2_2() { return static_cast<int32_t>(offsetof(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63, ____x2_2)); }
	inline double get__x2_2() const { return ____x2_2; }
	inline double* get_address_of__x2_2() { return &____x2_2; }
	inline void set__x2_2(double value)
	{
		____x2_2 = value;
	}

	inline static int32_t get_offset_of__y2_3() { return static_cast<int32_t>(offsetof(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63, ____y2_3)); }
	inline double get__y2_3() const { return ____y2_3; }
	inline double* get_address_of__y2_3() { return &____y2_3; }
	inline void set__y2_3(double value)
	{
		____y2_3 = value;
	}
};

struct PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63_StaticFields
{
public:
	// PdfSharp.Pdf.PdfRectangle PdfSharp.Pdf.PdfRectangle::Empty
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63_StaticFields, ___Empty_4)); }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * get_Empty_4() const { return ___Empty_4; }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 ** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_4), (void*)value);
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


// PdfSharp.Drawing.XRect
struct  XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C 
{
public:
	// System.Double PdfSharp.Drawing.XRect::_x
	double ____x_0;
	// System.Double PdfSharp.Drawing.XRect::_y
	double ____y_1;
	// System.Double PdfSharp.Drawing.XRect::_width
	double ____width_2;
	// System.Double PdfSharp.Drawing.XRect::_height
	double ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C, ____x_0)); }
	inline double get__x_0() const { return ____x_0; }
	inline double* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(double value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C, ____y_1)); }
	inline double get__y_1() const { return ____y_1; }
	inline double* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(double value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C, ____width_2)); }
	inline double get__width_2() const { return ____width_2; }
	inline double* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(double value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C, ____height_3)); }
	inline double get__height_3() const { return ____height_3; }
	inline double* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(double value)
	{
		____height_3 = value;
	}
};

struct XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C_StaticFields
{
public:
	// PdfSharp.Drawing.XRect PdfSharp.Drawing.XRect::s_empty
	XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  ___s_empty_4;

public:
	inline static int32_t get_offset_of_s_empty_4() { return static_cast<int32_t>(offsetof(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C_StaticFields, ___s_empty_4)); }
	inline XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  get_s_empty_4() const { return ___s_empty_4; }
	inline XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C * get_address_of_s_empty_4() { return &___s_empty_4; }
	inline void set_s_empty_4(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  value)
	{
		___s_empty_4 = value;
	}
};


// PdfSharp.Pdf.Advanced.PdfExtGState/Keys
struct  Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B  : public KeysBase_t505D9AB920464CDDC63D0F4475CAD47523CE62AA
{
public:

public:
};

struct Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_StaticFields
{
public:
	// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfExtGState/Keys::_meta
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * ____meta_0;

public:
	inline static int32_t get_offset_of__meta_0() { return static_cast<int32_t>(offsetof(Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_StaticFields, ____meta_0)); }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * get__meta_0() const { return ____meta_0; }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 ** get_address_of__meta_0() { return &____meta_0; }
	inline void set__meta_0(DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * value)
	{
		____meta_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meta_0), (void*)value);
	}
};


// PdfSharp.Pdf.PdfPage/InheritablePageKeys
struct  InheritablePageKeys_tB27FAD5518F1D3C09C5AD35782859FA5640998CE  : public KeysBase_t505D9AB920464CDDC63D0F4475CAD47523CE62AA
{
public:

public:
};


// PdfSharp.Pdf.PdfPage/InheritedValues
struct  InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C 
{
public:
	// PdfSharp.Pdf.PdfDictionary PdfSharp.Pdf.PdfPage/InheritedValues::Resources
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___Resources_0;
	// PdfSharp.Pdf.PdfRectangle PdfSharp.Pdf.PdfPage/InheritedValues::MediaBox
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___MediaBox_1;
	// PdfSharp.Pdf.PdfRectangle PdfSharp.Pdf.PdfPage/InheritedValues::CropBox
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___CropBox_2;
	// PdfSharp.Pdf.PdfInteger PdfSharp.Pdf.PdfPage/InheritedValues::Rotate
	PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E * ___Rotate_3;

public:
	inline static int32_t get_offset_of_Resources_0() { return static_cast<int32_t>(offsetof(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C, ___Resources_0)); }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * get_Resources_0() const { return ___Resources_0; }
	inline PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 ** get_address_of_Resources_0() { return &___Resources_0; }
	inline void set_Resources_0(PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * value)
	{
		___Resources_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Resources_0), (void*)value);
	}

	inline static int32_t get_offset_of_MediaBox_1() { return static_cast<int32_t>(offsetof(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C, ___MediaBox_1)); }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * get_MediaBox_1() const { return ___MediaBox_1; }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 ** get_address_of_MediaBox_1() { return &___MediaBox_1; }
	inline void set_MediaBox_1(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * value)
	{
		___MediaBox_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MediaBox_1), (void*)value);
	}

	inline static int32_t get_offset_of_CropBox_2() { return static_cast<int32_t>(offsetof(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C, ___CropBox_2)); }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * get_CropBox_2() const { return ___CropBox_2; }
	inline PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 ** get_address_of_CropBox_2() { return &___CropBox_2; }
	inline void set_CropBox_2(PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * value)
	{
		___CropBox_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CropBox_2), (void*)value);
	}

	inline static int32_t get_offset_of_Rotate_3() { return static_cast<int32_t>(offsetof(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C, ___Rotate_3)); }
	inline PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E * get_Rotate_3() const { return ___Rotate_3; }
	inline PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E ** get_address_of_Rotate_3() { return &___Rotate_3; }
	inline void set_Rotate_3(PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E * value)
	{
		___Rotate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rotate_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of PdfSharp.Pdf.PdfPage/InheritedValues
struct InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_pinvoke
{
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___Resources_0;
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___MediaBox_1;
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___CropBox_2;
	PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E * ___Rotate_3;
};
// Native definition for COM marshalling of PdfSharp.Pdf.PdfPage/InheritedValues
struct InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_com
{
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___Resources_0;
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___MediaBox_1;
	PdfRectangle_t09F1C00A8CB979F08D099B47CFE19A2BF54D3E63 * ___CropBox_2;
	PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E * ___Rotate_3;
};

// PdfSharp.Pdf.Advanced.PdfTrailer/Keys
struct  Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08  : public KeysBase_t505D9AB920464CDDC63D0F4475CAD47523CE62AA
{
public:

public:
};

struct Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_StaticFields
{
public:
	// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfTrailer/Keys::_meta
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * ____meta_0;

public:
	inline static int32_t get_offset_of__meta_0() { return static_cast<int32_t>(offsetof(Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_StaticFields, ____meta_0)); }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * get__meta_0() const { return ____meta_0; }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 ** get_address_of__meta_0() { return &____meta_0; }
	inline void set__meta_0(DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * value)
	{
		____meta_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meta_0), (void*)value);
	}
};


// PdfSharp.Pdf.PdfDictionary/PdfStream/Keys
struct  Keys_tE4590A80E7064EB3265794C3ABB4A529B0A18646  : public KeysBase_t505D9AB920464CDDC63D0F4475CAD47523CE62AA
{
public:

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Pdf.DocumentState
struct  DocumentState_t26C8592DEBCA21BDB372A0604E5D9426867CCBF1 
{
public:
	// System.Int32 PdfSharp.Pdf.DocumentState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DocumentState_t26C8592DEBCA21BDB372A0604E5D9426867CCBF1, ___value___2)); }
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

// PdfSharp.PageOrientation
struct  PageOrientation_tBC026E5FEA0B12D636B24154994BE41A3F2F0616 
{
public:
	// System.Int32 PdfSharp.PageOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PageOrientation_tBC026E5FEA0B12D636B24154994BE41A3F2F0616, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.PageSize
struct  PageSize_tC5DE1C18A2D3BFFAE42EEBAE977333DD2833BC15 
{
public:
	// System.Int32 PdfSharp.PageSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PageSize_tC5DE1C18A2D3BFFAE42EEBAE977333DD2833BC15, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Pdf.PdfDictionary
struct  PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95  : public PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1
{
public:
	// PdfSharp.Pdf.PdfDictionary/DictionaryElements PdfSharp.Pdf.PdfDictionary::_elements
	DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * ____elements_2;
	// PdfSharp.Pdf.PdfDictionary/PdfStream PdfSharp.Pdf.PdfDictionary::_stream
	PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * ____stream_3;

public:
	inline static int32_t get_offset_of__elements_2() { return static_cast<int32_t>(offsetof(PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95, ____elements_2)); }
	inline DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * get__elements_2() const { return ____elements_2; }
	inline DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 ** get_address_of__elements_2() { return &____elements_2; }
	inline void set__elements_2(DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * value)
	{
		____elements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elements_2), (void*)value);
	}

	inline static int32_t get_offset_of__stream_3() { return static_cast<int32_t>(offsetof(PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95, ____stream_3)); }
	inline PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * get__stream_3() const { return ____stream_3; }
	inline PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 ** get_address_of__stream_3() { return &____stream_3; }
	inline void set__stream_3(PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * value)
	{
		____stream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_3), (void*)value);
	}
};


// PdfSharp.Pdf.IO.PdfDocumentOpenMode
struct  PdfDocumentOpenMode_tB95A2DF73B67CFF34DAC1EACA2FA22DD11A83E4A 
{
public:
	// System.Int32 PdfSharp.Pdf.IO.PdfDocumentOpenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PdfDocumentOpenMode_tB95A2DF73B67CFF34DAC1EACA2FA22DD11A83E4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Pdf.PdfInteger
struct  PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E  : public PdfNumber_t42BA997BA6346A40016DE7A76E78A5172EE7F316
{
public:
	// System.Int32 PdfSharp.Pdf.PdfInteger::_value
	int32_t ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(PdfInteger_t3202E902874D6160A9F1E0F18B07DFCA7A752B5E, ____value_0)); }
	inline int32_t get__value_0() const { return ____value_0; }
	inline int32_t* get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(int32_t value)
	{
		____value_0 = value;
	}
};


// PdfSharp.Pdf.Advanced.PdfReference
struct  PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A  : public PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28
{
public:
	// PdfSharp.Pdf.PdfObjectID PdfSharp.Pdf.Advanced.PdfReference::_objectID
	PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD  ____objectID_0;
	// System.Int32 PdfSharp.Pdf.Advanced.PdfReference::_position
	int32_t ____position_1;
	// PdfSharp.Pdf.PdfObject PdfSharp.Pdf.Advanced.PdfReference::_value
	PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * ____value_2;
	// PdfSharp.Pdf.PdfDocument PdfSharp.Pdf.Advanced.PdfReference::_document
	PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * ____document_3;

public:
	inline static int32_t get_offset_of__objectID_0() { return static_cast<int32_t>(offsetof(PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A, ____objectID_0)); }
	inline PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD  get__objectID_0() const { return ____objectID_0; }
	inline PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD * get_address_of__objectID_0() { return &____objectID_0; }
	inline void set__objectID_0(PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD  value)
	{
		____objectID_0 = value;
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}

	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A, ____value_2)); }
	inline PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * get__value_2() const { return ____value_2; }
	inline PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 ** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_2), (void*)value);
	}

	inline static int32_t get_offset_of__document_3() { return static_cast<int32_t>(offsetof(PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A, ____document_3)); }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * get__document_3() const { return ____document_3; }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D ** get_address_of__document_3() { return &____document_3; }
	inline void set__document_3(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * value)
	{
		____document_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____document_3), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// PdfSharp.Drawing.XImage
struct  XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE  : public RuntimeObject
{
public:
	// System.Boolean PdfSharp.Drawing.XImage::_disposed
	bool ____disposed_0;
	// System.Boolean PdfSharp.Drawing.XImage::_interpolate
	bool ____interpolate_3;
	// PdfSharp.Drawing.XImageFormat PdfSharp.Drawing.XImage::_format
	XImageFormat_t9E234258DA9FA0A11FCFCBA244C63B8B6F106ACD * ____format_4;
	// PdfSharp.Drawing.XGraphics PdfSharp.Drawing.XImage::_associatedGraphics
	XGraphics_tBF7CB4F1992F434852CEA890073CA4F213B1244B * ____associatedGraphics_5;
	// PdfSharp.Drawing.ImportedImage PdfSharp.Drawing.XImage::_importedImage
	ImportedImage_t46A78FF1AC6ACE835ED3F2C13109B8C79F1571CD * ____importedImage_6;
	// System.Drawing.Image PdfSharp.Drawing.XImage::_gdiImage
	Image_tE3FA53AAB1092A4E908A0EE58A4E43AB17A5D40D * ____gdiImage_7;
	// System.String PdfSharp.Drawing.XImage::_path
	String_t* ____path_8;
	// System.IO.Stream PdfSharp.Drawing.XImage::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_9;
	// PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector PdfSharp.Drawing.XImage::_selector
	ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * ____selector_10;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}

	inline static int32_t get_offset_of__interpolate_3() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____interpolate_3)); }
	inline bool get__interpolate_3() const { return ____interpolate_3; }
	inline bool* get_address_of__interpolate_3() { return &____interpolate_3; }
	inline void set__interpolate_3(bool value)
	{
		____interpolate_3 = value;
	}

	inline static int32_t get_offset_of__format_4() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____format_4)); }
	inline XImageFormat_t9E234258DA9FA0A11FCFCBA244C63B8B6F106ACD * get__format_4() const { return ____format_4; }
	inline XImageFormat_t9E234258DA9FA0A11FCFCBA244C63B8B6F106ACD ** get_address_of__format_4() { return &____format_4; }
	inline void set__format_4(XImageFormat_t9E234258DA9FA0A11FCFCBA244C63B8B6F106ACD * value)
	{
		____format_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____format_4), (void*)value);
	}

	inline static int32_t get_offset_of__associatedGraphics_5() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____associatedGraphics_5)); }
	inline XGraphics_tBF7CB4F1992F434852CEA890073CA4F213B1244B * get__associatedGraphics_5() const { return ____associatedGraphics_5; }
	inline XGraphics_tBF7CB4F1992F434852CEA890073CA4F213B1244B ** get_address_of__associatedGraphics_5() { return &____associatedGraphics_5; }
	inline void set__associatedGraphics_5(XGraphics_tBF7CB4F1992F434852CEA890073CA4F213B1244B * value)
	{
		____associatedGraphics_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____associatedGraphics_5), (void*)value);
	}

	inline static int32_t get_offset_of__importedImage_6() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____importedImage_6)); }
	inline ImportedImage_t46A78FF1AC6ACE835ED3F2C13109B8C79F1571CD * get__importedImage_6() const { return ____importedImage_6; }
	inline ImportedImage_t46A78FF1AC6ACE835ED3F2C13109B8C79F1571CD ** get_address_of__importedImage_6() { return &____importedImage_6; }
	inline void set__importedImage_6(ImportedImage_t46A78FF1AC6ACE835ED3F2C13109B8C79F1571CD * value)
	{
		____importedImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____importedImage_6), (void*)value);
	}

	inline static int32_t get_offset_of__gdiImage_7() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____gdiImage_7)); }
	inline Image_tE3FA53AAB1092A4E908A0EE58A4E43AB17A5D40D * get__gdiImage_7() const { return ____gdiImage_7; }
	inline Image_tE3FA53AAB1092A4E908A0EE58A4E43AB17A5D40D ** get_address_of__gdiImage_7() { return &____gdiImage_7; }
	inline void set__gdiImage_7(Image_tE3FA53AAB1092A4E908A0EE58A4E43AB17A5D40D * value)
	{
		____gdiImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gdiImage_7), (void*)value);
	}

	inline static int32_t get_offset_of__path_8() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____path_8)); }
	inline String_t* get__path_8() const { return ____path_8; }
	inline String_t** get_address_of__path_8() { return &____path_8; }
	inline void set__path_8(String_t* value)
	{
		____path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____path_8), (void*)value);
	}

	inline static int32_t get_offset_of__stream_9() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____stream_9)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_9() const { return ____stream_9; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_9() { return &____stream_9; }
	inline void set__stream_9(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_9), (void*)value);
	}

	inline static int32_t get_offset_of__selector_10() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE, ____selector_10)); }
	inline ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * get__selector_10() const { return ____selector_10; }
	inline ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 ** get_address_of__selector_10() { return &____selector_10; }
	inline void set__selector_10(ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * value)
	{
		____selector_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selector_10), (void*)value);
	}
};

struct XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE_StaticFields
{
public:
	// System.Decimal PdfSharp.Drawing.XImage::FactorDPM72
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___FactorDPM72_1;
	// System.Decimal PdfSharp.Drawing.XImage::FactorDPM
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___FactorDPM_2;

public:
	inline static int32_t get_offset_of_FactorDPM72_1() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE_StaticFields, ___FactorDPM72_1)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_FactorDPM72_1() const { return ___FactorDPM72_1; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_FactorDPM72_1() { return &___FactorDPM72_1; }
	inline void set_FactorDPM72_1(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___FactorDPM72_1 = value;
	}

	inline static int32_t get_offset_of_FactorDPM_2() { return static_cast<int32_t>(offsetof(XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE_StaticFields, ___FactorDPM_2)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_FactorDPM_2() const { return ___FactorDPM_2; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_FactorDPM_2() { return &___FactorDPM_2; }
	inline void set_FactorDPM_2(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___FactorDPM_2 = value;
	}
};


// PdfSharp.Pdf.PdfPage/Keys
struct  Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1  : public InheritablePageKeys_tB27FAD5518F1D3C09C5AD35782859FA5640998CE
{
public:

public:
};

struct Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_StaticFields
{
public:
	// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.PdfPage/Keys::_meta
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * ____meta_0;

public:
	inline static int32_t get_offset_of__meta_0() { return static_cast<int32_t>(offsetof(Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_StaticFields, ____meta_0)); }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * get__meta_0() const { return ____meta_0; }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 ** get_address_of__meta_0() { return &____meta_0; }
	inline void set__meta_0(DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * value)
	{
		____meta_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meta_0), (void*)value);
	}
};


// PdfSharp.Pdf.IO.PdfWriter/CharCat
struct  CharCat_tDFFEC420C03E650C4C2D79CA0A25763E9B36C177 
{
public:
	// System.Int32 PdfSharp.Pdf.IO.PdfWriter/CharCat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharCat_tDFFEC420C03E650C4C2D79CA0A25763E9B36C177, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Pdf.Advanced.PdfXObject/Keys
struct  Keys_t7E7DDC3F4AA914BEC182CD23814C9E31BC0E2333  : public Keys_tE4590A80E7064EB3265794C3ABB4A529B0A18646
{
public:

public:
};


// PdfSharp.Drawing.XForm/FormState
struct  FormState_t7A44543BBA029D53C114EEB817FD027C8D93F263 
{
public:
	// System.Int32 PdfSharp.Drawing.XForm/FormState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormState_t7A44543BBA029D53C114EEB817FD027C8D93F263, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Drawing.XMatrix/XMatrixTypes
struct  XMatrixTypes_t9F6BF0503BA4C05CF50C8E1466CAD378935ABF05 
{
public:
	// System.Int32 PdfSharp.Drawing.XMatrix/XMatrixTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XMatrixTypes_t9F6BF0503BA4C05CF50C8E1466CAD378935ABF05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PdfSharp.Pdf.PdfDocument
struct  PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D  : public PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1
{
public:
	// PdfSharp.Pdf.DocumentState PdfSharp.Pdf.PdfDocument::_state
	int32_t ____state_2;
	// PdfSharp.Pdf.IO.PdfDocumentOpenMode PdfSharp.Pdf.PdfDocument::_openMode
	int32_t ____openMode_3;
	// System.String PdfSharp.Pdf.PdfDocument::_name
	String_t* ____name_4;
	// PdfSharp.Pdf.PdfDocumentOptions PdfSharp.Pdf.PdfDocument::_options
	PdfDocumentOptions_t1E3D48914CCA0C3245BC0FB26C285C11416C6161 * ____options_6;
	// PdfSharp.Pdf.PdfDocumentSettings PdfSharp.Pdf.PdfDocument::_settings
	PdfDocumentSettings_t00B7C6354345DB9EA6418E17AB7310204CD15E3B * ____settings_7;
	// System.Int32 PdfSharp.Pdf.PdfDocument::_version
	int32_t ____version_8;
	// System.Int64 PdfSharp.Pdf.PdfDocument::_fileSize
	int64_t ____fileSize_9;
	// System.String PdfSharp.Pdf.PdfDocument::_fullPath
	String_t* ____fullPath_10;
	// System.Guid PdfSharp.Pdf.PdfDocument::_guid
	Guid_t  ____guid_11;
	// PdfSharp.Pdf.PdfDocument/DocumentHandle PdfSharp.Pdf.PdfDocument::_handle
	DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * ____handle_12;
	// PdfSharp.Pdf.PdfDocumentInformation PdfSharp.Pdf.PdfDocument::_info
	PdfDocumentInformation_t445865D068CA5E80D54889643424AC2F92C3B7B5 * ____info_13;
	// PdfSharp.Pdf.PdfPages PdfSharp.Pdf.PdfDocument::_pages
	PdfPages_t91C28A23A483590383E55D884A95A41998C31847 * ____pages_14;
	// PdfSharp.Pdf.Security.PdfSecuritySettings PdfSharp.Pdf.PdfDocument::_securitySettings
	PdfSecuritySettings_t3375FA996305690056CB44AE7A37E9F7708C5D37 * ____securitySettings_15;
	// PdfSharp.Pdf.Advanced.PdfFontTable PdfSharp.Pdf.PdfDocument::_fontTable
	PdfFontTable_t67488E1626FCDCF9FD96ACB082B7288FC5CA9DAE * ____fontTable_16;
	// PdfSharp.Pdf.Advanced.PdfImageTable PdfSharp.Pdf.PdfDocument::_imageTable
	PdfImageTable_tDDCB476DD37947493CF53D0EEF9F24B702E18308 * ____imageTable_17;
	// PdfSharp.Pdf.Advanced.PdfFormXObjectTable PdfSharp.Pdf.PdfDocument::_formTable
	PdfFormXObjectTable_t51A04A20126CFE8541AD76AC02FE323B53E9CD59 * ____formTable_18;
	// PdfSharp.Pdf.Advanced.PdfExtGStateTable PdfSharp.Pdf.PdfDocument::_extGStateTable
	PdfExtGStateTable_tD45AE9797F0F164503A2B974A6808992A2950F7A * ____extGStateTable_19;
	// PdfSharp.Pdf.Advanced.PdfCatalog PdfSharp.Pdf.PdfDocument::_catalog
	PdfCatalog_t24957A3C08CC2240DA7A29F2579CF37317999253 * ____catalog_20;
	// PdfSharp.Pdf.Advanced.PdfInternals PdfSharp.Pdf.PdfDocument::_internals
	PdfInternals_t7435BEFE7467FF92F46BA8667277B1CA577059A2 * ____internals_21;
	// PdfSharp.Pdf.Advanced.PdfTrailer PdfSharp.Pdf.PdfDocument::_trailer
	PdfTrailer_tD431F0D691B03642960AD7B4ED7887D790420C90 * ____trailer_22;
	// PdfSharp.Pdf.Advanced.PdfCrossReferenceTable PdfSharp.Pdf.PdfDocument::_irefTable
	PdfCrossReferenceTable_t84C41604E46D9837278063547F2392801F6DD842 * ____irefTable_23;
	// System.IO.Stream PdfSharp.Pdf.PdfDocument::_outStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____outStream_24;
	// PdfSharp.Pdf.IO.Lexer PdfSharp.Pdf.PdfDocument::_lexer
	Lexer_t409DE86FD7140E438A98709B4E7CC6BFE0DFCB9B * ____lexer_25;
	// System.DateTime PdfSharp.Pdf.PdfDocument::_creation
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____creation_26;

public:
	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__openMode_3() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____openMode_3)); }
	inline int32_t get__openMode_3() const { return ____openMode_3; }
	inline int32_t* get_address_of__openMode_3() { return &____openMode_3; }
	inline void set__openMode_3(int32_t value)
	{
		____openMode_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_4), (void*)value);
	}

	inline static int32_t get_offset_of__options_6() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____options_6)); }
	inline PdfDocumentOptions_t1E3D48914CCA0C3245BC0FB26C285C11416C6161 * get__options_6() const { return ____options_6; }
	inline PdfDocumentOptions_t1E3D48914CCA0C3245BC0FB26C285C11416C6161 ** get_address_of__options_6() { return &____options_6; }
	inline void set__options_6(PdfDocumentOptions_t1E3D48914CCA0C3245BC0FB26C285C11416C6161 * value)
	{
		____options_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____options_6), (void*)value);
	}

	inline static int32_t get_offset_of__settings_7() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____settings_7)); }
	inline PdfDocumentSettings_t00B7C6354345DB9EA6418E17AB7310204CD15E3B * get__settings_7() const { return ____settings_7; }
	inline PdfDocumentSettings_t00B7C6354345DB9EA6418E17AB7310204CD15E3B ** get_address_of__settings_7() { return &____settings_7; }
	inline void set__settings_7(PdfDocumentSettings_t00B7C6354345DB9EA6418E17AB7310204CD15E3B * value)
	{
		____settings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settings_7), (void*)value);
	}

	inline static int32_t get_offset_of__version_8() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____version_8)); }
	inline int32_t get__version_8() const { return ____version_8; }
	inline int32_t* get_address_of__version_8() { return &____version_8; }
	inline void set__version_8(int32_t value)
	{
		____version_8 = value;
	}

	inline static int32_t get_offset_of__fileSize_9() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____fileSize_9)); }
	inline int64_t get__fileSize_9() const { return ____fileSize_9; }
	inline int64_t* get_address_of__fileSize_9() { return &____fileSize_9; }
	inline void set__fileSize_9(int64_t value)
	{
		____fileSize_9 = value;
	}

	inline static int32_t get_offset_of__fullPath_10() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____fullPath_10)); }
	inline String_t* get__fullPath_10() const { return ____fullPath_10; }
	inline String_t** get_address_of__fullPath_10() { return &____fullPath_10; }
	inline void set__fullPath_10(String_t* value)
	{
		____fullPath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fullPath_10), (void*)value);
	}

	inline static int32_t get_offset_of__guid_11() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____guid_11)); }
	inline Guid_t  get__guid_11() const { return ____guid_11; }
	inline Guid_t * get_address_of__guid_11() { return &____guid_11; }
	inline void set__guid_11(Guid_t  value)
	{
		____guid_11 = value;
	}

	inline static int32_t get_offset_of__handle_12() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____handle_12)); }
	inline DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * get__handle_12() const { return ____handle_12; }
	inline DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF ** get_address_of__handle_12() { return &____handle_12; }
	inline void set__handle_12(DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * value)
	{
		____handle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handle_12), (void*)value);
	}

	inline static int32_t get_offset_of__info_13() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____info_13)); }
	inline PdfDocumentInformation_t445865D068CA5E80D54889643424AC2F92C3B7B5 * get__info_13() const { return ____info_13; }
	inline PdfDocumentInformation_t445865D068CA5E80D54889643424AC2F92C3B7B5 ** get_address_of__info_13() { return &____info_13; }
	inline void set__info_13(PdfDocumentInformation_t445865D068CA5E80D54889643424AC2F92C3B7B5 * value)
	{
		____info_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____info_13), (void*)value);
	}

	inline static int32_t get_offset_of__pages_14() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____pages_14)); }
	inline PdfPages_t91C28A23A483590383E55D884A95A41998C31847 * get__pages_14() const { return ____pages_14; }
	inline PdfPages_t91C28A23A483590383E55D884A95A41998C31847 ** get_address_of__pages_14() { return &____pages_14; }
	inline void set__pages_14(PdfPages_t91C28A23A483590383E55D884A95A41998C31847 * value)
	{
		____pages_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pages_14), (void*)value);
	}

	inline static int32_t get_offset_of__securitySettings_15() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____securitySettings_15)); }
	inline PdfSecuritySettings_t3375FA996305690056CB44AE7A37E9F7708C5D37 * get__securitySettings_15() const { return ____securitySettings_15; }
	inline PdfSecuritySettings_t3375FA996305690056CB44AE7A37E9F7708C5D37 ** get_address_of__securitySettings_15() { return &____securitySettings_15; }
	inline void set__securitySettings_15(PdfSecuritySettings_t3375FA996305690056CB44AE7A37E9F7708C5D37 * value)
	{
		____securitySettings_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____securitySettings_15), (void*)value);
	}

	inline static int32_t get_offset_of__fontTable_16() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____fontTable_16)); }
	inline PdfFontTable_t67488E1626FCDCF9FD96ACB082B7288FC5CA9DAE * get__fontTable_16() const { return ____fontTable_16; }
	inline PdfFontTable_t67488E1626FCDCF9FD96ACB082B7288FC5CA9DAE ** get_address_of__fontTable_16() { return &____fontTable_16; }
	inline void set__fontTable_16(PdfFontTable_t67488E1626FCDCF9FD96ACB082B7288FC5CA9DAE * value)
	{
		____fontTable_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fontTable_16), (void*)value);
	}

	inline static int32_t get_offset_of__imageTable_17() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____imageTable_17)); }
	inline PdfImageTable_tDDCB476DD37947493CF53D0EEF9F24B702E18308 * get__imageTable_17() const { return ____imageTable_17; }
	inline PdfImageTable_tDDCB476DD37947493CF53D0EEF9F24B702E18308 ** get_address_of__imageTable_17() { return &____imageTable_17; }
	inline void set__imageTable_17(PdfImageTable_tDDCB476DD37947493CF53D0EEF9F24B702E18308 * value)
	{
		____imageTable_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____imageTable_17), (void*)value);
	}

	inline static int32_t get_offset_of__formTable_18() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____formTable_18)); }
	inline PdfFormXObjectTable_t51A04A20126CFE8541AD76AC02FE323B53E9CD59 * get__formTable_18() const { return ____formTable_18; }
	inline PdfFormXObjectTable_t51A04A20126CFE8541AD76AC02FE323B53E9CD59 ** get_address_of__formTable_18() { return &____formTable_18; }
	inline void set__formTable_18(PdfFormXObjectTable_t51A04A20126CFE8541AD76AC02FE323B53E9CD59 * value)
	{
		____formTable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formTable_18), (void*)value);
	}

	inline static int32_t get_offset_of__extGStateTable_19() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____extGStateTable_19)); }
	inline PdfExtGStateTable_tD45AE9797F0F164503A2B974A6808992A2950F7A * get__extGStateTable_19() const { return ____extGStateTable_19; }
	inline PdfExtGStateTable_tD45AE9797F0F164503A2B974A6808992A2950F7A ** get_address_of__extGStateTable_19() { return &____extGStateTable_19; }
	inline void set__extGStateTable_19(PdfExtGStateTable_tD45AE9797F0F164503A2B974A6808992A2950F7A * value)
	{
		____extGStateTable_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extGStateTable_19), (void*)value);
	}

	inline static int32_t get_offset_of__catalog_20() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____catalog_20)); }
	inline PdfCatalog_t24957A3C08CC2240DA7A29F2579CF37317999253 * get__catalog_20() const { return ____catalog_20; }
	inline PdfCatalog_t24957A3C08CC2240DA7A29F2579CF37317999253 ** get_address_of__catalog_20() { return &____catalog_20; }
	inline void set__catalog_20(PdfCatalog_t24957A3C08CC2240DA7A29F2579CF37317999253 * value)
	{
		____catalog_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____catalog_20), (void*)value);
	}

	inline static int32_t get_offset_of__internals_21() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____internals_21)); }
	inline PdfInternals_t7435BEFE7467FF92F46BA8667277B1CA577059A2 * get__internals_21() const { return ____internals_21; }
	inline PdfInternals_t7435BEFE7467FF92F46BA8667277B1CA577059A2 ** get_address_of__internals_21() { return &____internals_21; }
	inline void set__internals_21(PdfInternals_t7435BEFE7467FF92F46BA8667277B1CA577059A2 * value)
	{
		____internals_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internals_21), (void*)value);
	}

	inline static int32_t get_offset_of__trailer_22() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____trailer_22)); }
	inline PdfTrailer_tD431F0D691B03642960AD7B4ED7887D790420C90 * get__trailer_22() const { return ____trailer_22; }
	inline PdfTrailer_tD431F0D691B03642960AD7B4ED7887D790420C90 ** get_address_of__trailer_22() { return &____trailer_22; }
	inline void set__trailer_22(PdfTrailer_tD431F0D691B03642960AD7B4ED7887D790420C90 * value)
	{
		____trailer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trailer_22), (void*)value);
	}

	inline static int32_t get_offset_of__irefTable_23() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____irefTable_23)); }
	inline PdfCrossReferenceTable_t84C41604E46D9837278063547F2392801F6DD842 * get__irefTable_23() const { return ____irefTable_23; }
	inline PdfCrossReferenceTable_t84C41604E46D9837278063547F2392801F6DD842 ** get_address_of__irefTable_23() { return &____irefTable_23; }
	inline void set__irefTable_23(PdfCrossReferenceTable_t84C41604E46D9837278063547F2392801F6DD842 * value)
	{
		____irefTable_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____irefTable_23), (void*)value);
	}

	inline static int32_t get_offset_of__outStream_24() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____outStream_24)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__outStream_24() const { return ____outStream_24; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__outStream_24() { return &____outStream_24; }
	inline void set__outStream_24(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____outStream_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outStream_24), (void*)value);
	}

	inline static int32_t get_offset_of__lexer_25() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____lexer_25)); }
	inline Lexer_t409DE86FD7140E438A98709B4E7CC6BFE0DFCB9B * get__lexer_25() const { return ____lexer_25; }
	inline Lexer_t409DE86FD7140E438A98709B4E7CC6BFE0DFCB9B ** get_address_of__lexer_25() { return &____lexer_25; }
	inline void set__lexer_25(Lexer_t409DE86FD7140E438A98709B4E7CC6BFE0DFCB9B * value)
	{
		____lexer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lexer_25), (void*)value);
	}

	inline static int32_t get_offset_of__creation_26() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D, ____creation_26)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__creation_26() const { return ____creation_26; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__creation_26() { return &____creation_26; }
	inline void set__creation_26(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____creation_26 = value;
	}
};

struct PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_StaticFields
{
public:
	// System.Int32 PdfSharp.Pdf.PdfDocument::_nameCount
	int32_t ____nameCount_5;

public:
	inline static int32_t get_offset_of__nameCount_5() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_StaticFields, ____nameCount_5)); }
	inline int32_t get__nameCount_5() const { return ____nameCount_5; }
	inline int32_t* get_address_of__nameCount_5() { return &____nameCount_5; }
	inline void set__nameCount_5(int32_t value)
	{
		____nameCount_5 = value;
	}
};

struct PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_ThreadStaticFields
{
public:
	// PdfSharp.Pdf.Internal.ThreadLocalStorage PdfSharp.Pdf.PdfDocument::tls
	ThreadLocalStorage_t5C2A7975D31A0E163C2B5A791BD8B916B1ABA92F * ___tls_27;

public:
	inline static int32_t get_offset_of_tls_27() { return static_cast<int32_t>(offsetof(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_ThreadStaticFields, ___tls_27)); }
	inline ThreadLocalStorage_t5C2A7975D31A0E163C2B5A791BD8B916B1ABA92F * get_tls_27() const { return ___tls_27; }
	inline ThreadLocalStorage_t5C2A7975D31A0E163C2B5A791BD8B916B1ABA92F ** get_address_of_tls_27() { return &___tls_27; }
	inline void set_tls_27(ThreadLocalStorage_t5C2A7975D31A0E163C2B5A791BD8B916B1ABA92F * value)
	{
		___tls_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tls_27), (void*)value);
	}
};


// PdfSharp.Pdf.PdfPage
struct  PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC  : public PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95
{
public:
	// PdfSharp.PageOrientation PdfSharp.Pdf.PdfPage::_orientation
	int32_t ____orientation_4;
	// System.Boolean PdfSharp.Pdf.PdfPage::_orientationSetByCodeForRotatedDocument
	bool ____orientationSetByCodeForRotatedDocument_5;
	// PdfSharp.PageSize PdfSharp.Pdf.PdfPage::_pageSize
	int32_t ____pageSize_6;
	// PdfSharp.Pdf.TrimMargins PdfSharp.Pdf.PdfPage::_trimMargins
	TrimMargins_tFF1AFEB4934964E3111F52AC64DE2FD3DFD1A0CF * ____trimMargins_7;
	// PdfSharp.Pdf.Advanced.PdfContent PdfSharp.Pdf.PdfPage::RenderContent
	PdfContent_t545CE310F2C2213751FDEAB10496A4D32D9E3176 * ___RenderContent_8;
	// PdfSharp.Pdf.Advanced.PdfContents PdfSharp.Pdf.PdfPage::_contents
	PdfContents_t6AA070523236272C00D0559FB64A83D82455AB9D * ____contents_9;
	// PdfSharp.Pdf.Advanced.PdfResources PdfSharp.Pdf.PdfPage::_resources
	PdfResources_t53F1564F4C4EC31771FE564A2F4184CFE447E5BA * ____resources_10;
	// System.Boolean PdfSharp.Pdf.PdfPage::TransparencyUsed
	bool ___TransparencyUsed_11;

public:
	inline static int32_t get_offset_of__orientation_4() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____orientation_4)); }
	inline int32_t get__orientation_4() const { return ____orientation_4; }
	inline int32_t* get_address_of__orientation_4() { return &____orientation_4; }
	inline void set__orientation_4(int32_t value)
	{
		____orientation_4 = value;
	}

	inline static int32_t get_offset_of__orientationSetByCodeForRotatedDocument_5() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____orientationSetByCodeForRotatedDocument_5)); }
	inline bool get__orientationSetByCodeForRotatedDocument_5() const { return ____orientationSetByCodeForRotatedDocument_5; }
	inline bool* get_address_of__orientationSetByCodeForRotatedDocument_5() { return &____orientationSetByCodeForRotatedDocument_5; }
	inline void set__orientationSetByCodeForRotatedDocument_5(bool value)
	{
		____orientationSetByCodeForRotatedDocument_5 = value;
	}

	inline static int32_t get_offset_of__pageSize_6() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____pageSize_6)); }
	inline int32_t get__pageSize_6() const { return ____pageSize_6; }
	inline int32_t* get_address_of__pageSize_6() { return &____pageSize_6; }
	inline void set__pageSize_6(int32_t value)
	{
		____pageSize_6 = value;
	}

	inline static int32_t get_offset_of__trimMargins_7() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____trimMargins_7)); }
	inline TrimMargins_tFF1AFEB4934964E3111F52AC64DE2FD3DFD1A0CF * get__trimMargins_7() const { return ____trimMargins_7; }
	inline TrimMargins_tFF1AFEB4934964E3111F52AC64DE2FD3DFD1A0CF ** get_address_of__trimMargins_7() { return &____trimMargins_7; }
	inline void set__trimMargins_7(TrimMargins_tFF1AFEB4934964E3111F52AC64DE2FD3DFD1A0CF * value)
	{
		____trimMargins_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trimMargins_7), (void*)value);
	}

	inline static int32_t get_offset_of_RenderContent_8() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ___RenderContent_8)); }
	inline PdfContent_t545CE310F2C2213751FDEAB10496A4D32D9E3176 * get_RenderContent_8() const { return ___RenderContent_8; }
	inline PdfContent_t545CE310F2C2213751FDEAB10496A4D32D9E3176 ** get_address_of_RenderContent_8() { return &___RenderContent_8; }
	inline void set_RenderContent_8(PdfContent_t545CE310F2C2213751FDEAB10496A4D32D9E3176 * value)
	{
		___RenderContent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderContent_8), (void*)value);
	}

	inline static int32_t get_offset_of__contents_9() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____contents_9)); }
	inline PdfContents_t6AA070523236272C00D0559FB64A83D82455AB9D * get__contents_9() const { return ____contents_9; }
	inline PdfContents_t6AA070523236272C00D0559FB64A83D82455AB9D ** get_address_of__contents_9() { return &____contents_9; }
	inline void set__contents_9(PdfContents_t6AA070523236272C00D0559FB64A83D82455AB9D * value)
	{
		____contents_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contents_9), (void*)value);
	}

	inline static int32_t get_offset_of__resources_10() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ____resources_10)); }
	inline PdfResources_t53F1564F4C4EC31771FE564A2F4184CFE447E5BA * get__resources_10() const { return ____resources_10; }
	inline PdfResources_t53F1564F4C4EC31771FE564A2F4184CFE447E5BA ** get_address_of__resources_10() { return &____resources_10; }
	inline void set__resources_10(PdfResources_t53F1564F4C4EC31771FE564A2F4184CFE447E5BA * value)
	{
		____resources_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resources_10), (void*)value);
	}

	inline static int32_t get_offset_of_TransparencyUsed_11() { return static_cast<int32_t>(offsetof(PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC, ___TransparencyUsed_11)); }
	inline bool get_TransparencyUsed_11() const { return ___TransparencyUsed_11; }
	inline bool* get_address_of_TransparencyUsed_11() { return &___TransparencyUsed_11; }
	inline void set_TransparencyUsed_11(bool value)
	{
		___TransparencyUsed_11 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// PdfSharp.Drawing.XForm
struct  XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D  : public XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE
{
public:
	// PdfSharp.Pdf.PdfDocument PdfSharp.Drawing.XForm::_document
	PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * ____document_11;
	// PdfSharp.Drawing.XForm/FormState PdfSharp.Drawing.XForm::_formState
	int32_t ____formState_12;
	// PdfSharp.Drawing.XRect PdfSharp.Drawing.XForm::_viewBox
	XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  ____viewBox_13;
	// PdfSharp.Pdf.Advanced.PdfFormXObject PdfSharp.Drawing.XForm::_pdfForm
	PdfFormXObject_t49B2FF2CD1CFA8B3A982BE5696BC5489CB1AC3F7 * ____pdfForm_14;
	// PdfSharp.Drawing.Pdf.XGraphicsPdfRenderer PdfSharp.Drawing.XForm::PdfRenderer
	XGraphicsPdfRenderer_t4A01D8F80E51E98310F117FAF44E71F0733F745F * ___PdfRenderer_15;

public:
	inline static int32_t get_offset_of__document_11() { return static_cast<int32_t>(offsetof(XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D, ____document_11)); }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * get__document_11() const { return ____document_11; }
	inline PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D ** get_address_of__document_11() { return &____document_11; }
	inline void set__document_11(PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * value)
	{
		____document_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____document_11), (void*)value);
	}

	inline static int32_t get_offset_of__formState_12() { return static_cast<int32_t>(offsetof(XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D, ____formState_12)); }
	inline int32_t get__formState_12() const { return ____formState_12; }
	inline int32_t* get_address_of__formState_12() { return &____formState_12; }
	inline void set__formState_12(int32_t value)
	{
		____formState_12 = value;
	}

	inline static int32_t get_offset_of__viewBox_13() { return static_cast<int32_t>(offsetof(XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D, ____viewBox_13)); }
	inline XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  get__viewBox_13() const { return ____viewBox_13; }
	inline XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C * get_address_of__viewBox_13() { return &____viewBox_13; }
	inline void set__viewBox_13(XRect_t4EF3D4AC07B8CEEE0AED91A73DF54F3ECB65301C  value)
	{
		____viewBox_13 = value;
	}

	inline static int32_t get_offset_of__pdfForm_14() { return static_cast<int32_t>(offsetof(XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D, ____pdfForm_14)); }
	inline PdfFormXObject_t49B2FF2CD1CFA8B3A982BE5696BC5489CB1AC3F7 * get__pdfForm_14() const { return ____pdfForm_14; }
	inline PdfFormXObject_t49B2FF2CD1CFA8B3A982BE5696BC5489CB1AC3F7 ** get_address_of__pdfForm_14() { return &____pdfForm_14; }
	inline void set__pdfForm_14(PdfFormXObject_t49B2FF2CD1CFA8B3A982BE5696BC5489CB1AC3F7 * value)
	{
		____pdfForm_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pdfForm_14), (void*)value);
	}

	inline static int32_t get_offset_of_PdfRenderer_15() { return static_cast<int32_t>(offsetof(XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D, ___PdfRenderer_15)); }
	inline XGraphicsPdfRenderer_t4A01D8F80E51E98310F117FAF44E71F0733F745F * get_PdfRenderer_15() const { return ___PdfRenderer_15; }
	inline XGraphicsPdfRenderer_t4A01D8F80E51E98310F117FAF44E71F0733F745F ** get_address_of_PdfRenderer_15() { return &___PdfRenderer_15; }
	inline void set_PdfRenderer_15(XGraphicsPdfRenderer_t4A01D8F80E51E98310F117FAF44E71F0733F745F * value)
	{
		___PdfRenderer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PdfRenderer_15), (void*)value);
	}
};


// PdfSharp.Drawing.XMatrix
struct  XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 
{
public:
	// System.Double PdfSharp.Drawing.XMatrix::_m11
	double ____m11_0;
	// System.Double PdfSharp.Drawing.XMatrix::_m12
	double ____m12_1;
	// System.Double PdfSharp.Drawing.XMatrix::_m21
	double ____m21_2;
	// System.Double PdfSharp.Drawing.XMatrix::_m22
	double ____m22_3;
	// System.Double PdfSharp.Drawing.XMatrix::_offsetX
	double ____offsetX_4;
	// System.Double PdfSharp.Drawing.XMatrix::_offsetY
	double ____offsetY_5;
	// PdfSharp.Drawing.XMatrix/XMatrixTypes PdfSharp.Drawing.XMatrix::_type
	int32_t ____type_6;

public:
	inline static int32_t get_offset_of__m11_0() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____m11_0)); }
	inline double get__m11_0() const { return ____m11_0; }
	inline double* get_address_of__m11_0() { return &____m11_0; }
	inline void set__m11_0(double value)
	{
		____m11_0 = value;
	}

	inline static int32_t get_offset_of__m12_1() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____m12_1)); }
	inline double get__m12_1() const { return ____m12_1; }
	inline double* get_address_of__m12_1() { return &____m12_1; }
	inline void set__m12_1(double value)
	{
		____m12_1 = value;
	}

	inline static int32_t get_offset_of__m21_2() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____m21_2)); }
	inline double get__m21_2() const { return ____m21_2; }
	inline double* get_address_of__m21_2() { return &____m21_2; }
	inline void set__m21_2(double value)
	{
		____m21_2 = value;
	}

	inline static int32_t get_offset_of__m22_3() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____m22_3)); }
	inline double get__m22_3() const { return ____m22_3; }
	inline double* get_address_of__m22_3() { return &____m22_3; }
	inline void set__m22_3(double value)
	{
		____m22_3 = value;
	}

	inline static int32_t get_offset_of__offsetX_4() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____offsetX_4)); }
	inline double get__offsetX_4() const { return ____offsetX_4; }
	inline double* get_address_of__offsetX_4() { return &____offsetX_4; }
	inline void set__offsetX_4(double value)
	{
		____offsetX_4 = value;
	}

	inline static int32_t get_offset_of__offsetY_5() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____offsetY_5)); }
	inline double get__offsetY_5() const { return ____offsetY_5; }
	inline double* get_address_of__offsetY_5() { return &____offsetY_5; }
	inline void set__offsetY_5(double value)
	{
		____offsetY_5 = value;
	}

	inline static int32_t get_offset_of__type_6() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398, ____type_6)); }
	inline int32_t get__type_6() const { return ____type_6; }
	inline int32_t* get_address_of__type_6() { return &____type_6; }
	inline void set__type_6(int32_t value)
	{
		____type_6 = value;
	}
};

struct XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398_StaticFields
{
public:
	// PdfSharp.Drawing.XMatrix PdfSharp.Drawing.XMatrix::s_identity
	XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  ___s_identity_7;

public:
	inline static int32_t get_offset_of_s_identity_7() { return static_cast<int32_t>(offsetof(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398_StaticFields, ___s_identity_7)); }
	inline XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  get_s_identity_7() const { return ___s_identity_7; }
	inline XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * get_address_of_s_identity_7() { return &___s_identity_7; }
	inline void set_s_identity_7(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  value)
	{
		___s_identity_7 = value;
	}
};


// PdfSharp.Pdf.Advanced.PdfFormXObject/Keys
struct  Keys_tF26470F6D568A4C986343B899F4790740676DD7C  : public Keys_t7E7DDC3F4AA914BEC182CD23814C9E31BC0E2333
{
public:

public:
};

struct Keys_tF26470F6D568A4C986343B899F4790740676DD7C_StaticFields
{
public:
	// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfFormXObject/Keys::_meta
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * ____meta_0;

public:
	inline static int32_t get_offset_of__meta_0() { return static_cast<int32_t>(offsetof(Keys_tF26470F6D568A4C986343B899F4790740676DD7C_StaticFields, ____meta_0)); }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * get__meta_0() const { return ____meta_0; }
	inline DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 ** get_address_of__meta_0() { return &____meta_0; }
	inline void set__meta_0(DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * value)
	{
		____meta_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meta_0), (void*)value);
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


// System.NotImplementedException
struct  NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::.ctor(PdfSharp.Pdf.PdfDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream__ctor_mE8A4C9662F1DC3EAA25C870712A81ECFDD0452C0 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___ownerDictionary0, const RuntimeMethod* method);
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// PdfSharp.Pdf.PdfDictionary/DictionaryElements PdfSharp.Pdf.PdfDictionary::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22 (PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * __this, const RuntimeMethod* method);
// PdfSharp.Pdf.PdfDictionary PdfSharp.Pdf.PdfDictionary/DictionaryElements::GetDictionary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * DictionaryElements_GetDictionary_mF27CBD98E59F1E741DCF30C2896D4A8934A8E8CD (DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Int32 PdfSharp.Pdf.PdfDictionary/DictionaryElements::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryElements_GetInteger_mE2404200F6318422FDE08F8151E6F74841281C0A (DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void PdfSharp.Pdf.PdfDictionary/DictionaryElements::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryElements_SetInteger_m0CF7CAEC585274099D936684BA1635C6AC6720AF (DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// PdfSharp.Pdf.PdfItem PdfSharp.Pdf.PdfDictionary/DictionaryElements::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * DictionaryElements_get_Item_mE04EBDF73D915625D06FBAD4D60D09C8965C437D (DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Byte[] PdfSharp.Pdf.Filters.Filtering::Decode(System.Byte[],PdfSharp.Pdf.PdfItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Filtering_Decode_m4E741E84E95301A1A878F253A2B25CF46BE0D9D2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * ___filterItem1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.Encoding PdfSharp.Pdf.Internal.PdfEncoders::get_RawEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * PdfEncoders_get_RawEncoding_m1EE9B7D35A0E0A29C1BE9EDC607BE36DB58A08AA (const RuntimeMethod* method);
// System.Boolean PdfSharp.Pdf.PdfDictionary/DictionaryElements::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryElements_Remove_m48CC84A464CABE1E9E9F76CC4A7417537CEA3CD2 (DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream_set_Value_m8AADD403A052D958DD85E348B43447FB0CADCF1F (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB (Guid_t * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.KeysBase::CreateMeta(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * KeysBase_CreateMeta_mCB515555DCE37F7154585FBDFF40C858E9E589EA (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Guid PdfSharp.Pdf.PdfDocument::get_Guid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  PdfDocument_get_Guid_m7B825F3C524F4A4EAF1FC8F5DE8814ED4B06D9CB_inline (PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.Boolean PdfSharp.Pdf.PdfName::op_Inequality(PdfSharp.Pdf.PdfName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PdfName_op_Inequality_m6091AAA9D1FB1E424E5DD2E79F4C9C2170CDC5A1 (PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * ___name0, String_t* ___str1, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Int32 PdfSharp.Pdf.PdfObjectID::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfObjectID_CompareTo_mF66E2473C084CCCD8816B4A299FFFBE64C60A70B (PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void PdfSharp.Drawing.XMatrix::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMatrix__ctor_m4483580005EE0F303ED3144EB7B8AC555C4B101A (XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * __this, double ___m110, double ___m121, double ___m212, double ___m223, double ___offsetX4, double ___offsetY5, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::.ctor(PdfSharp.Pdf.PdfDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream__ctor_mE8A4C9662F1DC3EAA25C870712A81ECFDD0452C0 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___ownerDictionary0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = ___ownerDictionary0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AA15FE9944C1E5DAD0066783E07D56FDECF8088)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PdfStream__ctor_mE8A4C9662F1DC3EAA25C870712A81ECFDD0452C0_RuntimeMethod_var)));
	}

IL_0014:
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_2 = ___ownerDictionary0;
		__this->set__ownerDictionary_0(L_2);
		return;
	}
}
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::.ctor(System.Byte[],PdfSharp.Pdf.PdfDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream__ctor_mE0642D464831EF3ECC405D5E89EC6DC024279824 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___owner1, const RuntimeMethod* method)
{
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = ___owner1;
		PdfStream__ctor_mE8A4C9662F1DC3EAA25C870712A81ECFDD0452C0(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		__this->set__value_1(L_1);
		return;
	}
}
// PdfSharp.Pdf.PdfDictionary/PdfStream PdfSharp.Pdf.PdfDictionary/PdfStream::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * PdfStream_Clone_m7A67F40DF5070CE0F250749597CC48B5BAC26EF8 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * V_0 = NULL;
	{
		RuntimeObject * L_0;
		L_0 = Object_MemberwiseClone_m0AEE84C38E9A87C372139B4C342454553F0F6392(__this, /*hidden argument*/NULL);
		V_0 = ((PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 *)CastclassSealed((RuntimeObject*)L_0, PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031_il2cpp_TypeInfo_var));
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set__ownerDictionary_0((PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 *)NULL);
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get__value_1();
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_4 = V_0;
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get__value_1();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		NullCheck(L_4);
		L_4->set__value_1(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get__value_1();
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = L_9->get__value_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_8);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_8, (RuntimeArray *)(RuntimeArray *)L_10, 0, /*hidden argument*/NULL);
	}

IL_0040:
	{
		PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * L_11 = V_0;
		return L_11;
	}
}
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::ChangeOwner(PdfSharp.Pdf.PdfDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream_ChangeOwner_mD508AA1CFFBB9DC728CA5764F0DF21FC284C8885 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * ___dict0, const RuntimeMethod* method)
{
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = __this->get__ownerDictionary_0();
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_1 = ___dict0;
		__this->set__ownerDictionary_0(L_1);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_2 = __this->get__ownerDictionary_0();
		NullCheck(L_2);
		L_2->set__stream_3(__this);
		return;
	}
}
// System.Int32 PdfSharp.Pdf.PdfDictionary/PdfStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfStream_get_Length_mFCBE810EAA6C1B83DE5EACA0C328A954E40A6346 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__value_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__value_1();
		NullCheck(L_1);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
	}
}
// System.Boolean PdfSharp.Pdf.PdfDictionary/PdfStream::get_HasDecodeParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PdfStream_get_HasDecodeParams_m847A0AEE4DB2BB2C5F35692909CA1ACF9EBAF752 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = __this->get__ownerDictionary_0();
		NullCheck(L_0);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_1;
		L_1 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_2;
		L_2 = DictionaryElements_GetDictionary_mF27CBD98E59F1E741DCF30C2896D4A8934A8E8CD(L_1, _stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Int32 PdfSharp.Pdf.PdfDictionary/PdfStream::get_DecodePredictor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfStream_get_DecodePredictor_m497A9E0D1323A09D54335F2EBFE72C2AE1ABCE36 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6054B54A5547D7DE49F656E92A843950AAFD6EE);
		s_Il2CppMethodInitialized = true;
	}
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * V_0 = NULL;
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = __this->get__ownerDictionary_0();
		NullCheck(L_0);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_1;
		L_1 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_2;
		L_2 = DictionaryElements_GetDictionary_mF27CBD98E59F1E741DCF30C2896D4A8934A8E8CD(L_1, _stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8, /*hidden argument*/NULL);
		V_0 = L_2;
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_4 = V_0;
		NullCheck(L_4);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_5;
		L_5 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DictionaryElements_GetInteger_mE2404200F6318422FDE08F8151E6F74841281C0A(L_5, _stringLiteralB6054B54A5547D7DE49F656E92A843950AAFD6EE, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		return 0;
	}
}
// System.Int32 PdfSharp.Pdf.PdfDictionary/PdfStream::get_DecodeColumns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfStream_get_DecodeColumns_mC3670551956EFB1105573C63EE140144E89CA2C2 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA70D713BE84752F987C7B4B42D1711D33BA352F9);
		s_Il2CppMethodInitialized = true;
	}
	PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * V_0 = NULL;
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_0 = __this->get__ownerDictionary_0();
		NullCheck(L_0);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_1;
		L_1 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_2;
		L_2 = DictionaryElements_GetDictionary_mF27CBD98E59F1E741DCF30C2896D4A8934A8E8CD(L_1, _stringLiteral1CF7EA714A437FF5F1D071B02D2240EFD8A9A8F8, /*hidden argument*/NULL);
		V_0 = L_2;
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_4 = V_0;
		NullCheck(L_4);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_5;
		L_5 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DictionaryElements_GetInteger_mE2404200F6318422FDE08F8151E6F74841281C0A(L_5, _stringLiteralA70D713BE84752F987C7B4B42D1711D33BA352F9, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		return 0;
	}
}
// System.Byte[] PdfSharp.Pdf.PdfDictionary/PdfStream::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PdfStream_get_Value_m5143A82D89284541C965E75BF7F64470E0C46C02 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__value_1();
		return L_0;
	}
}
// System.Void PdfSharp.Pdf.PdfDictionary/PdfStream::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfStream_set_Value_m8AADD403A052D958DD85E348B43447FB0CADCF1F (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral510CF541528EEA77325650FA12C3389BFCFBCEF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PdfStream_set_Value_m8AADD403A052D958DD85E348B43447FB0CADCF1F_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___value0;
		__this->set__value_1(L_2);
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_3 = __this->get__ownerDictionary_0();
		NullCheck(L_3);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_4;
		L_4 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___value0;
		NullCheck(L_5);
		NullCheck(L_4);
		DictionaryElements_SetInteger_m0CF7CAEC585274099D936684BA1635C6AC6720AF(L_4, _stringLiteral510CF541528EEA77325650FA12C3389BFCFBCEF5, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] PdfSharp.Pdf.PdfDictionary/PdfStream::get_UnfilteredValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PdfStream_get_UnfilteredValue_m773606A1A7F01285A55BB73806E900C054FF1705 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral708813B3C67FB3846D4332A2185881B833845CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC947565B1C0D0968BC5A6866508089C211FC4412);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B7_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B6_0 = NULL;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__value_1();
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_1 = __this->get__ownerDictionary_0();
		NullCheck(L_1);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_2;
		L_2 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_3;
		L_3 = DictionaryElements_get_Item_mE04EBDF73D915625D06FBAD4D60D09C8965C437D(L_2, _stringLiteral708813B3C67FB3846D4332A2185881B833845CE3, /*hidden argument*/NULL);
		V_1 = L_3;
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__value_1();
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Filtering_Decode_m4E741E84E95301A1A878F253A2B25CF46BE0D9D2(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		if (L_8)
		{
			goto IL_0068;
		}
	}
	{
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_9 = V_1;
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC947565B1C0D0968BC5A6866508089C211FC4412, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11;
		L_11 = PdfEncoders_get_RawEncoding_m1EE9B7D35A0E0A29C1BE9EDC607BE36DB58A08AA(/*hidden argument*/NULL);
		String_t* L_12 = V_2;
		NullCheck(L_11);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_12);
		V_0 = L_13;
		goto IL_0068;
	}

IL_004d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get__value_1();
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))));
		V_0 = L_15;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get__value_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_16);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_16, (RuntimeArray *)(RuntimeArray *)L_17, 0, /*hidden argument*/NULL);
	}

IL_0068:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = L_18;
		G_B6_0 = L_19;
		if (L_19)
		{
			G_B7_0 = L_19;
			goto IL_0073;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B7_0 = L_20;
	}

IL_0073:
	{
		return G_B7_0;
	}
}
// System.Boolean PdfSharp.Pdf.PdfDictionary/PdfStream::TryUnfilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PdfStream_TryUnfilter_m4AD94E58021B573A6CD19C6935E9C3EA98281750 (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral708813B3C67FB3846D4332A2185881B833845CE3);
		s_Il2CppMethodInitialized = true;
	}
	PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__value_1();
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_1 = __this->get__ownerDictionary_0();
		NullCheck(L_1);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_2;
		L_2 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_3;
		L_3 = DictionaryElements_get_Item_mE04EBDF73D915625D06FBAD4D60D09C8965C437D(L_2, _stringLiteral708813B3C67FB3846D4332A2185881B833845CE3, /*hidden argument*/NULL);
		V_0 = L_3;
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__value_1();
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Filtering_Decode_m4E741E84E95301A1A878F253A2B25CF46BE0D9D2(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_9 = __this->get__ownerDictionary_0();
		NullCheck(L_9);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_10;
		L_10 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = DictionaryElements_Remove_m48CC84A464CABE1E9E9F76CC4A7417537CEA3CD2(L_10, _stringLiteral708813B3C67FB3846D4332A2185881B833845CE3, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		PdfStream_set_Value_m8AADD403A052D958DD85E348B43447FB0CADCF1F(__this, L_12, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0050:
	{
		return (bool)0;
	}

IL_0052:
	{
		return (bool)1;
	}
}
// System.String PdfSharp.Pdf.PdfDictionary/PdfStream::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PdfStream_ToString_mF298A8DDEE8777BD36AA43F952682AE67555B0CF (PdfStream_tB421C43C8D4D7571DF16002783244A76B90AD031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038176EC987B6A0605B4FE220073BEDB26CDDAB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral708813B3C67FB3846D4332A2185881B833845CE3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__value_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral038176EC987B6A0605B4FE220073BEDB26CDDAB6;
	}

IL_000e:
	{
		PdfDictionary_tE8D71BFEF1FCF03FB23F45EB659B675309DC4B95 * L_1 = __this->get__ownerDictionary_0();
		NullCheck(L_1);
		DictionaryElements_tBE6FC64F1182D74EE2EC685783D8ED3BDEA4F525 * L_2;
		L_2 = PdfDictionary_get_Elements_m67ACD8DED0643817A588FEC367B65511E291BB22(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_3;
		L_3 = DictionaryElements_get_Item_mE04EBDF73D915625D06FBAD4D60D09C8965C437D(L_2, _stringLiteral708813B3C67FB3846D4332A2185881B833845CE3, /*hidden argument*/NULL);
		V_1 = L_3;
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__value_1();
		PdfItem_t6E134597FF6F4F0E867031BBFED04A8AA9D51B28 * L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Filtering_Decode_m4E741E84E95301A1A878F253A2B25CF46BE0D9D2(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9;
		L_9 = PdfEncoders_get_RawEncoding_m1EE9B7D35A0E0A29C1BE9EDC607BE36DB58A08AA(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_2;
		NullCheck(L_11);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		V_0 = L_12;
		goto IL_006e;
	}

IL_0049:
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_13 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BA22D8B04236FC1C52890EB207BCE8454E2F4B2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PdfStream_ToString_mF298A8DDEE8777BD36AA43F952682AE67555B0CF_RuntimeMethod_var)));
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PdfEncoders_tC0AC900AF5BC09B4D289A9F8CFB12F0952BDCA3B_il2cpp_TypeInfo_var);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_14;
		L_14 = PdfEncoders_get_RawEncoding_m1EE9B7D35A0E0A29C1BE9EDC607BE36DB58A08AA(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get__value_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get__value_1();
		NullCheck(L_16);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		V_0 = L_17;
	}

IL_006e:
	{
		String_t* L_18 = V_0;
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
// System.Void PdfSharp.Pdf.PdfDocument/DocumentHandle::.ctor(PdfSharp.Pdf.PdfDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentHandle__ctor_m24FD96A8E124F951B7D3AE13AA38BE6C1C0F6F53 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * __this, PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * L_0 = ___document0;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_1, L_0, /*hidden argument*/NULL);
		__this->set__weakRef_0(L_1);
		PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * L_2 = ___document0;
		NullCheck(L_2);
		Guid_t * L_3 = L_2->get_address_of__guid_11();
		String_t* L_4;
		L_4 = Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB((Guid_t *)L_3, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToUpper_m4BC629F8059C3E0C4E3F7C7E04DB50EBB0C1A05A(L_4, /*hidden argument*/NULL);
		__this->set_ID_1(L_5);
		return;
	}
}
// System.Boolean PdfSharp.Pdf.PdfDocument/DocumentHandle::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DocumentHandle_get_IsAlive_m0D6F1CE309DA586DDF3C2FD17D61BCD1C987D209 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * __this, const RuntimeMethod* method)
{
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = __this->get__weakRef_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_0);
		return L_1;
	}
}
// PdfSharp.Pdf.PdfDocument PdfSharp.Pdf.PdfDocument/DocumentHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * DocumentHandle_get_Target_m484733638AE7E3749763D4860DABA7720B4D1009 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = __this->get__weakRef_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D *)IsInstSealed((RuntimeObject*)L_1, PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D_il2cpp_TypeInfo_var));
	}
}
// System.Boolean PdfSharp.Pdf.PdfDocument/DocumentHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DocumentHandle_Equals_m01C38C49D50819620014B546BE5569454FABCA39 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF *)IsInstClass((RuntimeObject*)L_0, DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF_il2cpp_TypeInfo_var));
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = __this->get_ID_1();
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_ID_1();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 PdfSharp.Pdf.PdfDocument/DocumentHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DocumentHandle_GetHashCode_m8EEAB0C60E61083879DE7ABA34314EB6266E7361 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ID_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean PdfSharp.Pdf.PdfDocument/DocumentHandle::op_Equality(PdfSharp.Pdf.PdfDocument/DocumentHandle,PdfSharp.Pdf.PdfDocument/DocumentHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DocumentHandle_op_Equality_m001A481DC2E031EA72DB84CDB606656FD1E8FAC4 (DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * ___left0, DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * ___right1, const RuntimeMethod* method)
{
	{
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_0 = ___left0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_2 = ___left0;
		DocumentHandle_t47024A1F0B53F09AAD1DBC9C14B61945B28235EF * L_3 = ___right1;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_3);
		return L_4;
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
// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfExtGState/Keys::get_Meta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * Keys_get_Meta_mDC12A0A7340F3DFDD7CA1ABB687D26E7ECAA7B51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B2_0 = NULL;
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B1_0 = NULL;
	{
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_0 = ((Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_StaticFields*)il2cpp_codegen_static_fields_for(Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_il2cpp_TypeInfo_var))->get__meta_0();
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_4;
		L_4 = KeysBase_CreateMeta_mCB515555DCE37F7154585FBDFF40C858E9E589EA(L_3, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_5 = L_4;
		((Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_StaticFields*)il2cpp_codegen_static_fields_for(Keys_t27D963F25BFA68A3153C94A005A355F0FBC2786B_il2cpp_TypeInfo_var))->set__meta_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
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
// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfFormXObject/Keys::get_Meta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * Keys_get_Meta_m4ED055681A1C9A673C4327B058DC0F078C7F225B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_tF26470F6D568A4C986343B899F4790740676DD7C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_tF26470F6D568A4C986343B899F4790740676DD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B2_0 = NULL;
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B1_0 = NULL;
	{
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_0 = ((Keys_tF26470F6D568A4C986343B899F4790740676DD7C_StaticFields*)il2cpp_codegen_static_fields_for(Keys_tF26470F6D568A4C986343B899F4790740676DD7C_il2cpp_TypeInfo_var))->get__meta_0();
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Keys_tF26470F6D568A4C986343B899F4790740676DD7C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_4;
		L_4 = KeysBase_CreateMeta_mCB515555DCE37F7154585FBDFF40C858E9E589EA(L_3, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_5 = L_4;
		((Keys_tF26470F6D568A4C986343B899F4790740676DD7C_StaticFields*)il2cpp_codegen_static_fields_for(Keys_tF26470F6D568A4C986343B899F4790740676DD7C_il2cpp_TypeInfo_var))->set__meta_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
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
// System.Void PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector::.ctor(PdfSharp.Drawing.XForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector__ctor_mDF7C3479F7A86CE244B603AE669E5860BF1B1E96 (Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * __this, XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D * ___form0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XForm_tE672FA16C9C54BB8811F6F8AED726A81CD65459D * L_0 = ___form0;
		NullCheck(L_0);
		String_t* L_1 = ((XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE *)L_0)->get__path_8();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_1, /*hidden argument*/NULL);
		__this->set__path_0(L_2);
		return;
	}
}
// System.Void PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector::.ctor(PdfSharp.Pdf.PdfPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selector__ctor_mFBA72769183D33A8252FFC4558B2B7EA78209F5B (Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * __this, PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC * ___page0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PdfPage_t4D63FB2B94E55D7CDC046F8740E004FAD2B574DC * L_0 = ___page0;
		NullCheck(L_0);
		PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * L_1;
		L_1 = VirtFuncInvoker0< PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * >::Invoke(7 /* PdfSharp.Pdf.PdfDocument PdfSharp.Pdf.PdfObject::get_Owner() */, L_0);
		V_0 = L_1;
		PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * L_2 = V_0;
		NullCheck(L_2);
		Guid_t  L_3;
		L_3 = PdfDocument_get_Guid_m7B825F3C524F4A4EAF1FC8F5DE8814ED4B06D9CB_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB((Guid_t *)(&V_1), _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, L_4, /*hidden argument*/NULL);
		__this->set__path_0(L_5);
		String_t* L_6 = __this->get__path_0();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_6, /*hidden argument*/NULL);
		__this->set__path_0(L_7);
		return;
	}
}
// System.Boolean PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selector_Equals_mD22C2188061FED39BAB5CBD5719335725CC0F747 (Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D *)IsInstClass((RuntimeObject*)L_0, Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D_il2cpp_TypeInfo_var));
		Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2 = __this->get__path_0();
		Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get__path_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 PdfSharp.Pdf.Advanced.PdfFormXObjectTable/Selector::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Selector_GetHashCode_m489C38B9E634D4012588C308A4DB6621A24C1E44 (Selector_tBC95EF89FE5B1C0599A226C06DC08D5ADA899D1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__path_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
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
// System.Void PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector::.ctor(PdfSharp.Drawing.XImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageSelector__ctor_mA2E67787454179FC2C0A934673631A912D87391A (ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * __this, XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE * L_0 = ___image0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get__path_8();
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE * L_2 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_3;
		L_3 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB((Guid_t *)(&V_0), _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set__path_8(L_5);
	}

IL_0030:
	{
		XImage_t433C287DEAC63E6595655CA823750FECD8DF3AEE * L_6 = ___image0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get__path_8();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_7, /*hidden argument*/NULL);
		__this->set__path_0(L_8);
		return;
	}
}
// System.Boolean PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageSelector_Equals_m51F4CA09FD395682487D571E4593E92AAC30519A (ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 *)IsInstClass((RuntimeObject*)L_0, ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571_il2cpp_TypeInfo_var));
		ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2 = __this->get__path_0();
		ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get__path_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 PdfSharp.Pdf.Advanced.PdfImageTable/ImageSelector::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageSelector_GetHashCode_m40151C38B9A0E91AB0D19F6C88D46F4813D4A740 (ImageSelector_t304E5C12F54777BB8FC14AB943A86B4714B56571 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__path_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
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
// System.Int32 PdfSharp.Pdf.PdfName/PdfXNameComparer::Compare(PdfSharp.Pdf.PdfName,PdfSharp.Pdf.PdfName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfXNameComparer_Compare_mDC38A3E3E85BAEC585E386EC44C7CF17EA354D43 (PdfXNameComparer_t63D8E1228E5E2C12585F47A630BCB21E90A1D14D * __this, PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * ___l0, PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * L_0 = ___l0;
		IL2CPP_RUNTIME_CLASS_INIT(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PdfName_op_Inequality_m6091AAA9D1FB1E424E5DD2E79F4C9C2170CDC5A1(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * L_2 = ___r1;
		IL2CPP_RUNTIME_CLASS_INIT(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = PdfName_op_Inequality_m6091AAA9D1FB1E424E5DD2E79F4C9C2170CDC5A1(L_2, (String_t*)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * L_4 = ___l0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get__value_0();
		PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * L_6 = ___r1;
		NullCheck(L_6);
		String_t* L_7 = L_6->get__value_0();
		int32_t L_8;
		L_8 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_5, L_7, 4, /*hidden argument*/NULL);
		return L_8;
	}

IL_0025:
	{
		return (-1);
	}

IL_0027:
	{
		PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2 * L_9 = ___r1;
		IL2CPP_RUNTIME_CLASS_INIT(PdfName_tF5F1D32178AF1978F473CC60E4D4F1B3BEA492B2_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = PdfName_op_Inequality_m6091AAA9D1FB1E424E5DD2E79F4C9C2170CDC5A1(L_9, (String_t*)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Void PdfSharp.Pdf.PdfName/PdfXNameComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfXNameComparer__ctor_m225F47514A2370EBB4523BBBC865103D79801313 (PdfXNameComparer_t63D8E1228E5E2C12585F47A630BCB21E90A1D14D * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: PdfSharp.Pdf.PdfPage/InheritedValues
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_pinvoke(const InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C& unmarshaled, InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Resources_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Resources' of type 'InheritedValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Resources_0Exception, NULL);
}
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_pinvoke_back(const InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_pinvoke& marshaled, InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C& unmarshaled)
{
	Exception_t* ___Resources_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Resources' of type 'InheritedValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Resources_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PdfSharp.Pdf.PdfPage/InheritedValues
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_pinvoke_cleanup(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PdfSharp.Pdf.PdfPage/InheritedValues
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_com(const InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C& unmarshaled, InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_com& marshaled)
{
	Exception_t* ___Resources_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Resources' of type 'InheritedValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Resources_0Exception, NULL);
}
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_com_back(const InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_com& marshaled, InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C& unmarshaled)
{
	Exception_t* ___Resources_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Resources' of type 'InheritedValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Resources_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PdfSharp.Pdf.PdfPage/InheritedValues
IL2CPP_EXTERN_C void InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshal_com_cleanup(InheritedValues_t07A257FF75C8ED8597CC0AED386DA7D0FD545A1C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.PdfPage/Keys::get_Meta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * Keys_get_Meta_m475D2358A61F7A48A6E957D2B1E00EBBC71FC1C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B2_0 = NULL;
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B1_0 = NULL;
	{
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_0 = ((Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_StaticFields*)il2cpp_codegen_static_fields_for(Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_il2cpp_TypeInfo_var))->get__meta_0();
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_4;
		L_4 = KeysBase_CreateMeta_mCB515555DCE37F7154585FBDFF40C858E9E589EA(L_3, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_5 = L_4;
		((Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_StaticFields*)il2cpp_codegen_static_fields_for(Keys_t364545D8BB7119F97A2695D347E98617B6C4F1D1_il2cpp_TypeInfo_var))->set__meta_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
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
// System.Int32 PdfSharp.Pdf.Advanced.PdfReference/PdfReferenceComparer::Compare(PdfSharp.Pdf.Advanced.PdfReference,PdfSharp.Pdf.Advanced.PdfReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PdfReferenceComparer_Compare_mDA100A097A8BECF3438FF91BDF4C000BF0DD73C3 (PdfReferenceComparer_t412A0366185573BC4617DA01BC7AAC79C85FDAA6 * __this, PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * ___x0, PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * V_0 = NULL;
	PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * V_1 = NULL;
	{
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_0 = ___x0;
		V_0 = L_0;
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_1 = ___y1;
		V_1 = L_1;
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_4 = V_0;
		NullCheck(L_4);
		PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD * L_5 = L_4->get_address_of__objectID_0();
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_6 = V_1;
		NullCheck(L_6);
		PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD  L_7 = L_6->get__objectID_0();
		PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD  L_8 = L_7;
		RuntimeObject * L_9 = Box(PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10;
		L_10 = PdfObjectID_CompareTo_mF66E2473C084CCCD8816B4A299FFFBE64C60A70B((PdfObjectID_tD0FFF0CD8853C92E659A39215C650ACB290D61FD *)L_5, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0021:
	{
		return (-1);
	}

IL_0023:
	{
		PdfReference_t5FD2A2083F08F36AAC95D15EA38D3A95AC2A449A * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0028;
		}
	}
	{
		return 1;
	}

IL_0028:
	{
		return 0;
	}
}
// System.Void PdfSharp.Pdf.Advanced.PdfReference/PdfReferenceComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PdfReferenceComparer__ctor_m489FBFADDEE284BE2B3BA5013FE60A186FE22185 (PdfReferenceComparer_t412A0366185573BC4617DA01BC7AAC79C85FDAA6 * __this, const RuntimeMethod* method)
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
// PdfSharp.Pdf.DictionaryMeta PdfSharp.Pdf.Advanced.PdfTrailer/Keys::get_Meta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * Keys_get_Meta_m4DBE59804114FA59456C8CC98C16FCC39E791FEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B2_0 = NULL;
	DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * G_B1_0 = NULL;
	{
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_0 = ((Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_StaticFields*)il2cpp_codegen_static_fields_for(Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_il2cpp_TypeInfo_var))->get__meta_0();
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_4;
		L_4 = KeysBase_CreateMeta_mCB515555DCE37F7154585FBDFF40C858E9E589EA(L_3, /*hidden argument*/NULL);
		DictionaryMeta_tA04458707DDDF726D9A87315EA4C388561EE11F5 * L_5 = L_4;
		((Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_StaticFields*)il2cpp_codegen_static_fields_for(Keys_tC03A7C8E177DEFFDC2C1D4157BC5CEC970B7FB08_il2cpp_TypeInfo_var))->set__meta_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
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
// System.Void PdfSharp.Pdf.IO.PdfWriter/StackItem::.ctor(PdfSharp.Pdf.PdfObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackItem__ctor_m1DFFB1BD7A1622E5F312DF3A4FD2AE2F353A20A8 (StackItem_t68161EC950A20469F8CD8B9C2D5D461DF27047CF * __this, PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		PdfObject_tECB948F2C22EAE45DB9FCB204EB0ACDDFF2EEBC1 * L_0 = ___value0;
		__this->set_Object_0(L_0);
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
// System.Void PdfSharp.Drawing.XMatrix/MatrixHelper::MultiplyMatrix(PdfSharp.Drawing.XMatrix&,PdfSharp.Drawing.XMatrix&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixHelper_MultiplyMatrix_mF8F6756F83677E2189800EB53474EE4E44034B30 (XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * ___matrix10, XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * ___matrix21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_0 = ___matrix10;
		int32_t L_1 = L_0->get__type_6();
		V_0 = L_1;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_2 = ___matrix21;
		int32_t L_3 = L_2->get__type_6();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_02c6;
		}
	}
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_6 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_7 = ___matrix21;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  L_8 = (*(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 *)L_7);
		*(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 *)L_6 = L_8;
		return;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_10 = ___matrix10;
		double* L_11 = L_10->get_address_of__offsetX_4();
		double* L_12 = L_11;
		double L_13 = *((double*)L_12);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_14 = ___matrix21;
		double L_15 = L_14->get__offsetX_4();
		*((double*)L_12) = (double)((double)il2cpp_codegen_add((double)L_13, (double)L_15));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_16 = ___matrix10;
		double* L_17 = L_16->get_address_of__offsetY_5();
		double* L_18 = L_17;
		double L_19 = *((double*)L_18);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_20 = ___matrix21;
		double L_21 = L_20->get__offsetY_5();
		*((double*)L_18) = (double)((double)il2cpp_codegen_add((double)L_19, (double)L_21));
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)4)))
		{
			goto IL_02c6;
		}
	}
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_23 = ___matrix10;
		int32_t* L_24 = L_23->get_address_of__type_6();
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)((int32_t)L_26|(int32_t)1));
		return;
	}

IL_005b:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_00c9;
		}
	}
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_28 = ___matrix10;
		double L_29 = L_28->get__offsetX_4();
		V_2 = L_29;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_30 = ___matrix10;
		double L_31 = L_30->get__offsetY_5();
		V_3 = L_31;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_32 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_33 = ___matrix21;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  L_34 = (*(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 *)L_33);
		*(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 *)L_32 = L_34;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_35 = ___matrix10;
		double L_36 = V_2;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_37 = ___matrix21;
		double L_38 = L_37->get__m11_0();
		double L_39 = V_3;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_40 = ___matrix21;
		double L_41 = L_40->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_42 = ___matrix21;
		double L_43 = L_42->get__offsetX_4();
		L_35->set__offsetX_4(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_36, (double)L_38)), (double)((double)il2cpp_codegen_multiply((double)L_39, (double)L_41)))), (double)L_43)));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_44 = ___matrix10;
		double L_45 = V_2;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_46 = ___matrix21;
		double L_47 = L_46->get__m12_1();
		double L_48 = V_3;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_49 = ___matrix21;
		double L_50 = L_49->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_51 = ___matrix21;
		double L_52 = L_51->get__offsetY_5();
		L_44->set__offsetY_5(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_45, (double)L_47)), (double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_50)))), (double)L_52)));
		int32_t L_53 = V_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)4))))
		{
			goto IL_00c1;
		}
	}
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_54 = ___matrix10;
		L_54->set__type_6(4);
		return;
	}

IL_00c1:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_55 = ___matrix10;
		L_55->set__type_6(3);
		return;
	}

IL_00c9:
	{
		int32_t L_56 = V_0;
		int32_t L_57 = V_1;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_56<<(int32_t)4))|(int32_t)L_57));
		int32_t L_58 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_0113;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_0174;
			}
		}
	}
	{
		int32_t L_59 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)((int32_t)50))))
		{
			case 0:
			{
				goto IL_0230;
			}
			case 1:
			{
				goto IL_0271;
			}
			case 2:
			{
				goto IL_0174;
			}
		}
	}
	{
		int32_t L_60 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_0174;
			}
			case 1:
			{
				goto IL_0174;
			}
			case 2:
			{
				goto IL_0174;
			}
		}
	}
	{
		return;
	}

IL_0113:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_61 = ___matrix10;
		double* L_62 = L_61->get_address_of__m11_0();
		double* L_63 = L_62;
		double L_64 = *((double*)L_63);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_65 = ___matrix21;
		double L_66 = L_65->get__m11_0();
		*((double*)L_63) = (double)((double)il2cpp_codegen_multiply((double)L_64, (double)L_66));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_67 = ___matrix10;
		double* L_68 = L_67->get_address_of__m22_3();
		double* L_69 = L_68;
		double L_70 = *((double*)L_69);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_71 = ___matrix21;
		double L_72 = L_71->get__m22_3();
		*((double*)L_69) = (double)((double)il2cpp_codegen_multiply((double)L_70, (double)L_72));
		return;
	}

IL_0134:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_73 = ___matrix10;
		double* L_74 = L_73->get_address_of__m11_0();
		double* L_75 = L_74;
		double L_76 = *((double*)L_75);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_77 = ___matrix21;
		double L_78 = L_77->get__m11_0();
		*((double*)L_75) = (double)((double)il2cpp_codegen_multiply((double)L_76, (double)L_78));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_79 = ___matrix10;
		double* L_80 = L_79->get_address_of__m22_3();
		double* L_81 = L_80;
		double L_82 = *((double*)L_81);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_83 = ___matrix21;
		double L_84 = L_83->get__m22_3();
		*((double*)L_81) = (double)((double)il2cpp_codegen_multiply((double)L_82, (double)L_84));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_85 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_86 = ___matrix21;
		double L_87 = L_86->get__offsetX_4();
		L_85->set__offsetX_4(L_87);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_88 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_89 = ___matrix21;
		double L_90 = L_89->get__offsetY_5();
		L_88->set__offsetY_5(L_90);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_91 = ___matrix10;
		L_91->set__type_6(3);
		return;
	}

IL_0174:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_92 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_93 = ___matrix10;
		double L_94 = L_93->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_95 = ___matrix21;
		double L_96 = L_95->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_97 = ___matrix10;
		double L_98 = L_97->get__m12_1();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_99 = ___matrix21;
		double L_100 = L_99->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_101 = ___matrix10;
		double L_102 = L_101->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_103 = ___matrix21;
		double L_104 = L_103->get__m12_1();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_105 = ___matrix10;
		double L_106 = L_105->get__m12_1();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_107 = ___matrix21;
		double L_108 = L_107->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_109 = ___matrix10;
		double L_110 = L_109->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_111 = ___matrix21;
		double L_112 = L_111->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_113 = ___matrix10;
		double L_114 = L_113->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_115 = ___matrix21;
		double L_116 = L_115->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_117 = ___matrix10;
		double L_118 = L_117->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_119 = ___matrix21;
		double L_120 = L_119->get__m12_1();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_121 = ___matrix10;
		double L_122 = L_121->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_123 = ___matrix21;
		double L_124 = L_123->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_125 = ___matrix10;
		double L_126 = L_125->get__offsetX_4();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_127 = ___matrix21;
		double L_128 = L_127->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_129 = ___matrix10;
		double L_130 = L_129->get__offsetY_5();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_131 = ___matrix21;
		double L_132 = L_131->get__m21_2();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_133 = ___matrix21;
		double L_134 = L_133->get__offsetX_4();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_135 = ___matrix10;
		double L_136 = L_135->get__offsetX_4();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_137 = ___matrix21;
		double L_138 = L_137->get__m12_1();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_139 = ___matrix10;
		double L_140 = L_139->get__offsetY_5();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_141 = ___matrix21;
		double L_142 = L_141->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_143 = ___matrix21;
		double L_144 = L_143->get__offsetY_5();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398  L_145;
		memset((&L_145), 0, sizeof(L_145));
		XMatrix__ctor_m4483580005EE0F303ED3144EB7B8AC555C4B101A((&L_145), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_94, (double)L_96)), (double)((double)il2cpp_codegen_multiply((double)L_98, (double)L_100)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_102, (double)L_104)), (double)((double)il2cpp_codegen_multiply((double)L_106, (double)L_108)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_110, (double)L_112)), (double)((double)il2cpp_codegen_multiply((double)L_114, (double)L_116)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_118, (double)L_120)), (double)((double)il2cpp_codegen_multiply((double)L_122, (double)L_124)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_126, (double)L_128)), (double)((double)il2cpp_codegen_multiply((double)L_130, (double)L_132)))), (double)L_134)), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_136, (double)L_138)), (double)((double)il2cpp_codegen_multiply((double)L_140, (double)L_142)))), (double)L_144)), /*hidden argument*/NULL);
		*(XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 *)L_92 = L_145;
		return;
	}

IL_0230:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_146 = ___matrix10;
		double* L_147 = L_146->get_address_of__m11_0();
		double* L_148 = L_147;
		double L_149 = *((double*)L_148);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_150 = ___matrix21;
		double L_151 = L_150->get__m11_0();
		*((double*)L_148) = (double)((double)il2cpp_codegen_multiply((double)L_149, (double)L_151));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_152 = ___matrix10;
		double* L_153 = L_152->get_address_of__m22_3();
		double* L_154 = L_153;
		double L_155 = *((double*)L_154);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_156 = ___matrix21;
		double L_157 = L_156->get__m22_3();
		*((double*)L_154) = (double)((double)il2cpp_codegen_multiply((double)L_155, (double)L_157));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_158 = ___matrix10;
		double* L_159 = L_158->get_address_of__offsetX_4();
		double* L_160 = L_159;
		double L_161 = *((double*)L_160);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_162 = ___matrix21;
		double L_163 = L_162->get__m11_0();
		*((double*)L_160) = (double)((double)il2cpp_codegen_multiply((double)L_161, (double)L_163));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_164 = ___matrix10;
		double* L_165 = L_164->get_address_of__offsetY_5();
		double* L_166 = L_165;
		double L_167 = *((double*)L_166);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_168 = ___matrix21;
		double L_169 = L_168->get__m22_3();
		*((double*)L_166) = (double)((double)il2cpp_codegen_multiply((double)L_167, (double)L_169));
		return;
	}

IL_0271:
	{
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_170 = ___matrix10;
		double* L_171 = L_170->get_address_of__m11_0();
		double* L_172 = L_171;
		double L_173 = *((double*)L_172);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_174 = ___matrix21;
		double L_175 = L_174->get__m11_0();
		*((double*)L_172) = (double)((double)il2cpp_codegen_multiply((double)L_173, (double)L_175));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_176 = ___matrix10;
		double* L_177 = L_176->get_address_of__m22_3();
		double* L_178 = L_177;
		double L_179 = *((double*)L_178);
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_180 = ___matrix21;
		double L_181 = L_180->get__m22_3();
		*((double*)L_178) = (double)((double)il2cpp_codegen_multiply((double)L_179, (double)L_181));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_182 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_183 = ___matrix21;
		double L_184 = L_183->get__m11_0();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_185 = ___matrix10;
		double L_186 = L_185->get__offsetX_4();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_187 = ___matrix21;
		double L_188 = L_187->get__offsetX_4();
		L_182->set__offsetX_4(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_184, (double)L_186)), (double)L_188)));
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_189 = ___matrix10;
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_190 = ___matrix21;
		double L_191 = L_190->get__m22_3();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_192 = ___matrix10;
		double L_193 = L_192->get__offsetY_5();
		XMatrix_t5D69A5722048645C5D749DB3FA92BA0ADE4D3398 * L_194 = ___matrix21;
		double L_195 = L_194->get__offsetY_5();
		L_189->set__offsetY_5(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_191, (double)L_193)), (double)L_195)));
		return;
	}

IL_02c6:
	{
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  PdfDocument_get_Guid_m7B825F3C524F4A4EAF1FC8F5DE8814ED4B06D9CB_inline (PdfDocument_t1D41A4070275E6CA5BF988C5F86A4FF33D11C60D * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = __this->get__guid_11();
		return L_0;
	}
}
