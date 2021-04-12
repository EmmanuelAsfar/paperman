#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::get_Shared()
// 0x00000002 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::EnsureSharedCreated()
// 0x00000003 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create()
// 0x00000004 T[] System.Buffers.ArrayPool`1::Rent(System.Int32)
// 0x00000005 System.Void System.Buffers.ArrayPool`1::Return(T[],System.Boolean)
// 0x00000006 System.Void System.Buffers.ArrayPool`1::.ctor()
// 0x00000007 System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF (void);
// 0x00000008 System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
extern void ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265 (void);
// 0x00000009 System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferReturned_mB4CBB95F5FEE391CA09EC704E6B66C054E5BBAFF (void);
// 0x0000000A System.Void System.Buffers.ArrayPoolEventSource::.ctor()
extern void ArrayPoolEventSource__ctor_m290A417EEE3846B5EECC22205EA8B91BF1525A62 (void);
// 0x0000000B System.Void System.Buffers.ArrayPoolEventSource::.cctor()
extern void ArrayPoolEventSource__cctor_mDF96496AFB88A36BBD7029C8AC89BAED0DB6EA40 (void);
// 0x0000000C System.Void System.Buffers.DefaultArrayPool`1::.ctor()
// 0x0000000D System.Void System.Buffers.DefaultArrayPool`1::.ctor(System.Int32,System.Int32)
// 0x0000000E System.Int32 System.Buffers.DefaultArrayPool`1::get_Id()
// 0x0000000F T[] System.Buffers.DefaultArrayPool`1::Rent(System.Int32)
// 0x00000010 System.Void System.Buffers.DefaultArrayPool`1::Return(T[],System.Boolean)
// 0x00000011 System.Void System.Buffers.DefaultArrayPool`1/Bucket::.ctor(System.Int32,System.Int32,System.Int32)
// 0x00000012 System.Int32 System.Buffers.DefaultArrayPool`1/Bucket::get_Id()
// 0x00000013 T[] System.Buffers.DefaultArrayPool`1/Bucket::Rent()
// 0x00000014 System.Void System.Buffers.DefaultArrayPool`1/Bucket::Return(T[])
// 0x00000015 System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
extern void Utilities_SelectBucketIndex_mA64F7B0231FEBCA7FAE9E4AB31DE69A7514E62BA (void);
// 0x00000016 System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
extern void Utilities_GetMaxSizeForBucket_mEE671E4A29E71381CA912F24E3926CF9AA37DCF4 (void);
// 0x00000017 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
extern void ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3 (void);
// 0x00000018 System.Void System.IO.Compression.ZipFile::CreateFromDirectory(System.String,System.String)
extern void ZipFile_CreateFromDirectory_m3D715E660F210083C4EDAE0FBEA68C57E7372E6D (void);
// 0x00000019 System.Void System.IO.Compression.ZipFile::DoCreateFromDirectory(System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>,System.Boolean,System.Text.Encoding)
extern void ZipFile_DoCreateFromDirectory_m53BB9614F115EBCAC53DAF8E075D95C5DDC8DBB6 (void);
// 0x0000001A System.String System.IO.Compression.ZipFile::EntryFromPath(System.String,System.Int32,System.Int32,System.Char[]&,System.Boolean)
extern void ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A (void);
// 0x0000001B System.Void System.IO.Compression.ZipFile::EnsureCapacity(System.Char[]&,System.Int32)
extern void ZipFile_EnsureCapacity_mED7075772170B76CB06B595E58A2D95D67D08075 (void);
// 0x0000001C System.Boolean System.IO.Compression.ZipFile::IsDirEmpty(System.IO.DirectoryInfo)
extern void ZipFile_IsDirEmpty_m1B83BEA5828004ED3BDB1090DCCD0FC543F6BE76 (void);
// 0x0000001D System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::DoCreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>)
extern void ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB (void);
static Il2CppMethodPointer s_methodPointers[29] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayPoolEventSource_BufferRented_m6DD36A6CB0384D04292EFA86520FF018DB076BDF,
	ArrayPoolEventSource_BufferAllocated_mE157263F06F3955AD912EE248625571512117265,
	ArrayPoolEventSource_BufferReturned_mB4CBB95F5FEE391CA09EC704E6B66C054E5BBAFF,
	ArrayPoolEventSource__ctor_m290A417EEE3846B5EECC22205EA8B91BF1525A62,
	ArrayPoolEventSource__cctor_mDF96496AFB88A36BBD7029C8AC89BAED0DB6EA40,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utilities_SelectBucketIndex_mA64F7B0231FEBCA7FAE9E4AB31DE69A7514E62BA,
	Utilities_GetMaxSizeForBucket_mEE671E4A29E71381CA912F24E3926CF9AA37DCF4,
	ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3,
	ZipFile_CreateFromDirectory_m3D715E660F210083C4EDAE0FBEA68C57E7372E6D,
	ZipFile_DoCreateFromDirectory_m53BB9614F115EBCAC53DAF8E075D95C5DDC8DBB6,
	ZipFile_EntryFromPath_m7F1F7E0FC9E63FF6595081224647DE0013BB9F5A,
	ZipFile_EnsureCapacity_mED7075772170B76CB06B595E58A2D95D67D08075,
	ZipFile_IsDirEmpty_m1B83BEA5828004ED3BDB1090DCCD0FC543F6BE76,
	ZipFileExtensions_DoCreateEntryFromFile_m4082E27AB27DD695F2606990913E215F92ACBFAB,
};
static const int32_t s_InvokerIndices[29] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	810,
	338,
	1213,
	4145,
	5986,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5736,
	5736,
	5032,
	5574,
	4583,
	4513,
	5546,
	5846,
	4761,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000002, { 0, 7 } },
	{ 0x02000005, { 7, 12 } },
	{ 0x02000006, { 19, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[22] = 
{
	{ (Il2CppRGCTXDataType)2, 1765 },
	{ (Il2CppRGCTXDataType)3, 34576 },
	{ (Il2CppRGCTXDataType)3, 534 },
	{ (Il2CppRGCTXDataType)3, 533 },
	{ (Il2CppRGCTXDataType)3, 33779 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)3, 4108 },
	{ (Il2CppRGCTXDataType)3, 4109 },
	{ (Il2CppRGCTXDataType)3, 535 },
	{ (Il2CppRGCTXDataType)2, 1767 },
	{ (Il2CppRGCTXDataType)3, 4110 },
	{ (Il2CppRGCTXDataType)2, 5834 },
	{ (Il2CppRGCTXDataType)2, 1844 },
	{ (Il2CppRGCTXDataType)3, 2353 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)2, 5766 },
	{ (Il2CppRGCTXDataType)3, 2354 },
	{ (Il2CppRGCTXDataType)3, 2356 },
	{ (Il2CppRGCTXDataType)3, 2355 },
	{ (Il2CppRGCTXDataType)2, 5880 },
	{ (Il2CppRGCTXDataType)2, 5809 },
	{ (Il2CppRGCTXDataType)3, 2357 },
};
extern const CustomAttributesCacheGenerator g_System_IO_Compression_FileSystem_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule;
const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule = 
{
	"System.IO.Compression.FileSystem.dll",
	29,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	22,
	s_rgctxValues,
	NULL,
	g_System_IO_Compression_FileSystem_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
