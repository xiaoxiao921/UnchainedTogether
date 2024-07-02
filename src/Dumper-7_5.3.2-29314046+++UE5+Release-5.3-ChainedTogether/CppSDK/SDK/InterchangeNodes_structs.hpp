#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeNodes

#include "Basic.hpp"


namespace SDK
{

// Enum InterchangeNodes.EInterchangeAnimationPayLoadType
// NumValues: 0x0007
enum class EInterchangeAnimationPayLoadType : uint8
{
	NONE                                     = 0,
	CURVE                                    = 1,
	MORPHTARGETCURVE                         = 2,
	STEPCURVE                                = 3,
	BAKED                                    = 4,
	MORPHTARGETCURVEWEIGHTINSTANCE           = 5,
	EInterchangeAnimationPayLoadType_MAX     = 6,
};

// Enum InterchangeNodes.EInterchangeAnimatedProperty
// NumValues: 0x0003
enum class EInterchangeAnimatedProperty : uint8
{
	None                                     = 0,
	Visibility                               = 1,
	MAX                                      = 2,
};

// Enum InterchangeNodes.EInterchangeCameraProjectionType
// NumValues: 0x0003
enum class EInterchangeCameraProjectionType : uint8
{
	Perspective                              = 0,
	Orthographic                             = 1,
	EInterchangeCameraProjectionType_MAX     = 2,
};

// Enum InterchangeNodes.EInterchangeLightUnits
// NumValues: 0x0005
enum class EInterchangeLightUnits : uint8
{
	Unitless                                 = 0,
	Candelas                                 = 1,
	Lumens                                   = 2,
	EV                                       = 3,
	EInterchangeLightUnits_MAX               = 4,
};

// Enum InterchangeNodes.EInterchangeTextureWrapMode
// NumValues: 0x0004
enum class EInterchangeTextureWrapMode : uint8
{
	Wrap                                     = 0,
	Clamp                                    = 1,
	Mirror                                   = 2,
	EInterchangeTextureWrapMode_MAX          = 3,
};

// Enum InterchangeNodes.EInterchangeTextureFilterMode
// NumValues: 0x0005
enum class EInterchangeTextureFilterMode : uint8
{
	Nearest                                  = 0,
	Bilinear                                 = 1,
	Trilinear                                = 2,
	Default                                  = 3,
	EInterchangeTextureFilterMode_MAX        = 4,
};

// Enum InterchangeNodes.EInterchangeMeshPayLoadType
// NumValues: 0x0005
enum class EInterchangeMeshPayLoadType : uint8
{
	NONE                                     = 0,
	STATIC                                   = 1,
	SKELETAL                                 = 2,
	MORPHTARGET                              = 3,
	EInterchangeMeshPayLoadType_MAX          = 4,
};

// ScriptStruct InterchangeNodes.InterchangeAnimationPayLoadKey
// 0x0018 (0x0018 - 0x0000)
struct FInterchangeAnimationPayLoadKey final
{
public:
	class FString                                 UniqueID;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangeAnimationPayLoadType              Type;                                              // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28BE[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInterchangeAnimationPayLoadKey) == 0x000008, "Wrong alignment on FInterchangeAnimationPayLoadKey");
static_assert(sizeof(FInterchangeAnimationPayLoadKey) == 0x000018, "Wrong size on FInterchangeAnimationPayLoadKey");
static_assert(offsetof(FInterchangeAnimationPayLoadKey, UniqueID) == 0x000000, "Member 'FInterchangeAnimationPayLoadKey::UniqueID' has a wrong offset!");
static_assert(offsetof(FInterchangeAnimationPayLoadKey, Type) == 0x000010, "Member 'FInterchangeAnimationPayLoadKey::Type' has a wrong offset!");

// ScriptStruct InterchangeNodes.InterchangeMeshPayLoadKey
// 0x0018 (0x0018 - 0x0000)
struct FInterchangeMeshPayLoadKey final
{
public:
	class FString                                 UniqueID;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangeMeshPayLoadType                   Type;                                              // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28BF[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInterchangeMeshPayLoadKey) == 0x000008, "Wrong alignment on FInterchangeMeshPayLoadKey");
static_assert(sizeof(FInterchangeMeshPayLoadKey) == 0x000018, "Wrong size on FInterchangeMeshPayLoadKey");
static_assert(offsetof(FInterchangeMeshPayLoadKey, UniqueID) == 0x000000, "Member 'FInterchangeMeshPayLoadKey::UniqueID' has a wrong offset!");
static_assert(offsetof(FInterchangeMeshPayLoadKey, Type) == 0x000010, "Member 'FInterchangeMeshPayLoadKey::Type' has a wrong offset!");

}

