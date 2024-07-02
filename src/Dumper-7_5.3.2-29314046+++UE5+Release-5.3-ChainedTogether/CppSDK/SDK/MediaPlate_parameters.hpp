#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaPlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
// 0x0004 (0x0004 - 0x0000)
struct MediaPlateComponent_GetLetterboxAspectRatio final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetLetterboxAspectRatio) == 0x000004, "Wrong alignment on MediaPlateComponent_GetLetterboxAspectRatio");
static_assert(sizeof(MediaPlateComponent_GetLetterboxAspectRatio) == 0x000004, "Wrong size on MediaPlateComponent_GetLetterboxAspectRatio");
static_assert(offsetof(MediaPlateComponent_GetLetterboxAspectRatio, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_GetLetterboxAspectRatio::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.GetLoop
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_GetLoop final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetLoop) == 0x000001, "Wrong alignment on MediaPlateComponent_GetLoop");
static_assert(sizeof(MediaPlateComponent_GetLoop) == 0x000001, "Wrong size on MediaPlateComponent_GetLoop");
static_assert(offsetof(MediaPlateComponent_GetLoop, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_GetLoop::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.GetMediaPlayer
// 0x0008 (0x0008 - 0x0000)
struct MediaPlateComponent_GetMediaPlayer final
{
public:
	class UMediaPlayer*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetMediaPlayer) == 0x000008, "Wrong alignment on MediaPlateComponent_GetMediaPlayer");
static_assert(sizeof(MediaPlateComponent_GetMediaPlayer) == 0x000008, "Wrong size on MediaPlateComponent_GetMediaPlayer");
static_assert(offsetof(MediaPlateComponent_GetMediaPlayer, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_GetMediaPlayer::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.GetMediaTexture
// 0x0010 (0x0010 - 0x0000)
struct MediaPlateComponent_GetMediaTexture final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AFF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaTexture*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetMediaTexture) == 0x000008, "Wrong alignment on MediaPlateComponent_GetMediaTexture");
static_assert(sizeof(MediaPlateComponent_GetMediaTexture) == 0x000010, "Wrong size on MediaPlateComponent_GetMediaTexture");
static_assert(offsetof(MediaPlateComponent_GetMediaTexture, Param_Index) == 0x000000, "Member 'MediaPlateComponent_GetMediaTexture::Param_Index' has a wrong offset!");
static_assert(offsetof(MediaPlateComponent_GetMediaTexture, ReturnValue) == 0x000008, "Member 'MediaPlateComponent_GetMediaTexture::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.OnMediaOpened
// 0x0010 (0x0010 - 0x0000)
struct MediaPlateComponent_OnMediaOpened final
{
public:
	class FString                                 DeviceUrl;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_OnMediaOpened) == 0x000008, "Wrong alignment on MediaPlateComponent_OnMediaOpened");
static_assert(sizeof(MediaPlateComponent_OnMediaOpened) == 0x000010, "Wrong size on MediaPlateComponent_OnMediaOpened");
static_assert(offsetof(MediaPlateComponent_OnMediaOpened, DeviceUrl) == 0x000000, "Member 'MediaPlateComponent_OnMediaOpened::DeviceUrl' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.Rewind
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_Rewind final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_Rewind) == 0x000001, "Wrong alignment on MediaPlateComponent_Rewind");
static_assert(sizeof(MediaPlateComponent_Rewind) == 0x000001, "Wrong size on MediaPlateComponent_Rewind");
static_assert(offsetof(MediaPlateComponent_Rewind, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_Rewind::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.Seek
// 0x0010 (0x0010 - 0x0000)
struct MediaPlateComponent_Seek final
{
public:
	struct FTimespan                              Time;                                              // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B00[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MediaPlateComponent_Seek) == 0x000008, "Wrong alignment on MediaPlateComponent_Seek");
static_assert(sizeof(MediaPlateComponent_Seek) == 0x000010, "Wrong size on MediaPlateComponent_Seek");
static_assert(offsetof(MediaPlateComponent_Seek, Time) == 0x000000, "Member 'MediaPlateComponent_Seek::Time' has a wrong offset!");
static_assert(offsetof(MediaPlateComponent_Seek, ReturnValue) == 0x000008, "Member 'MediaPlateComponent_Seek::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_SetIsAspectRatioAuto final
{
public:
	bool                                          bInIsAspectRatioAuto;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_SetIsAspectRatioAuto) == 0x000001, "Wrong alignment on MediaPlateComponent_SetIsAspectRatioAuto");
static_assert(sizeof(MediaPlateComponent_SetIsAspectRatioAuto) == 0x000001, "Wrong size on MediaPlateComponent_SetIsAspectRatioAuto");
static_assert(offsetof(MediaPlateComponent_SetIsAspectRatioAuto, bInIsAspectRatioAuto) == 0x000000, "Member 'MediaPlateComponent_SetIsAspectRatioAuto::bInIsAspectRatioAuto' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
// 0x0004 (0x0004 - 0x0000)
struct MediaPlateComponent_SetLetterboxAspectRatio final
{
public:
	float                                         AspectRatio;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_SetLetterboxAspectRatio) == 0x000004, "Wrong alignment on MediaPlateComponent_SetLetterboxAspectRatio");
static_assert(sizeof(MediaPlateComponent_SetLetterboxAspectRatio) == 0x000004, "Wrong size on MediaPlateComponent_SetLetterboxAspectRatio");
static_assert(offsetof(MediaPlateComponent_SetLetterboxAspectRatio, AspectRatio) == 0x000000, "Member 'MediaPlateComponent_SetLetterboxAspectRatio::AspectRatio' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.SetLoop
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_SetLoop final
{
public:
	bool                                          bInLoop;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_SetLoop) == 0x000001, "Wrong alignment on MediaPlateComponent_SetLoop");
static_assert(sizeof(MediaPlateComponent_SetLoop) == 0x000001, "Wrong size on MediaPlateComponent_SetLoop");
static_assert(offsetof(MediaPlateComponent_SetLoop, bInLoop) == 0x000000, "Member 'MediaPlateComponent_SetLoop::bInLoop' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.SetMeshRange
// 0x0010 (0x0010 - 0x0000)
struct MediaPlateComponent_SetMeshRange final
{
public:
	struct FVector2D                              InMeshRange;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_SetMeshRange) == 0x000008, "Wrong alignment on MediaPlateComponent_SetMeshRange");
static_assert(sizeof(MediaPlateComponent_SetMeshRange) == 0x000010, "Wrong size on MediaPlateComponent_SetMeshRange");
static_assert(offsetof(MediaPlateComponent_SetMeshRange, InMeshRange) == 0x000000, "Member 'MediaPlateComponent_SetMeshRange::InMeshRange' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_SetPlayOnlyWhenVisible final
{
public:
	bool                                          bInPlayOnlyWhenVisible;                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_SetPlayOnlyWhenVisible) == 0x000001, "Wrong alignment on MediaPlateComponent_SetPlayOnlyWhenVisible");
static_assert(sizeof(MediaPlateComponent_SetPlayOnlyWhenVisible) == 0x000001, "Wrong size on MediaPlateComponent_SetPlayOnlyWhenVisible");
static_assert(offsetof(MediaPlateComponent_SetPlayOnlyWhenVisible, bInPlayOnlyWhenVisible) == 0x000000, "Member 'MediaPlateComponent_SetPlayOnlyWhenVisible::bInPlayOnlyWhenVisible' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_GetIsAspectRatioAuto final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetIsAspectRatioAuto) == 0x000001, "Wrong alignment on MediaPlateComponent_GetIsAspectRatioAuto");
static_assert(sizeof(MediaPlateComponent_GetIsAspectRatioAuto) == 0x000001, "Wrong size on MediaPlateComponent_GetIsAspectRatioAuto");
static_assert(offsetof(MediaPlateComponent_GetIsAspectRatioAuto, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_GetIsAspectRatioAuto::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.GetMeshRange
// 0x0010 (0x0010 - 0x0000)
struct MediaPlateComponent_GetMeshRange final
{
public:
	struct FVector2D                              ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_GetMeshRange) == 0x000008, "Wrong alignment on MediaPlateComponent_GetMeshRange");
static_assert(sizeof(MediaPlateComponent_GetMeshRange) == 0x000010, "Wrong size on MediaPlateComponent_GetMeshRange");
static_assert(offsetof(MediaPlateComponent_GetMeshRange, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_GetMeshRange::ReturnValue' has a wrong offset!");

// Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
// 0x0001 (0x0001 - 0x0000)
struct MediaPlateComponent_IsMediaPlatePlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MediaPlateComponent_IsMediaPlatePlaying) == 0x000001, "Wrong alignment on MediaPlateComponent_IsMediaPlatePlaying");
static_assert(sizeof(MediaPlateComponent_IsMediaPlatePlaying) == 0x000001, "Wrong size on MediaPlateComponent_IsMediaPlatePlaying");
static_assert(offsetof(MediaPlateComponent_IsMediaPlatePlaying, ReturnValue) == 0x000000, "Member 'MediaPlateComponent_IsMediaPlatePlaying::ReturnValue' has a wrong offset!");

}

