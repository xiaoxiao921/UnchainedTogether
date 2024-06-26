#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWriteQueue

#include "Basic.hpp"

#include "ImageWriteQueue_structs.hpp"


namespace SDK::Params
{

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// 0x0080 (0x0080 - 0x0000)
struct ImageWriteBlueprintLibrary_ExportToDisk final
{
public:
	class UTexture*                               Texture;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Filename;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B3[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FImageWriteOptions                     Options;                                           // 0x0020(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ImageWriteBlueprintLibrary_ExportToDisk) == 0x000010, "Wrong alignment on ImageWriteBlueprintLibrary_ExportToDisk");
static_assert(sizeof(ImageWriteBlueprintLibrary_ExportToDisk) == 0x000080, "Wrong size on ImageWriteBlueprintLibrary_ExportToDisk");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Texture) == 0x000000, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Texture' has a wrong offset!");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Filename) == 0x000008, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Filename' has a wrong offset!");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Options) == 0x000020, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Options' has a wrong offset!");

}

