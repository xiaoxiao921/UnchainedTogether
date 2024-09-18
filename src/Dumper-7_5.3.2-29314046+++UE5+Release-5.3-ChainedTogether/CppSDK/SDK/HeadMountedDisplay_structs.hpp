#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Enum HeadMountedDisplay.EOrientPositionSelector
// NumValues: 0x0004
enum class EOrientPositionSelector : uint8
{
	Orientation                              = 0,
	Position                                 = 1,
	OrientationAndPosition                   = 2,
	EOrientPositionSelector_MAX              = 3,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
// NumValues: 0x0004
enum class EHMDTrackingOrigin : uint8
{
	Floor                                    = 0,
	Eye                                      = 1,
	Stage                                    = 2,
	EHMDTrackingOrigin_MAX                   = 3,
};

// Enum HeadMountedDisplay.EHMDWornState
// NumValues: 0x0004
enum class EHMDWornState : uint8
{
	Unknown                                  = 0,
	Worn                                     = 1,
	NotWorn                                  = 2,
	EHMDWornState_MAX                        = 3,
};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
// NumValues: 0x0006
enum class EXRDeviceConnectionResult : uint8
{
	NoTrackingSystem                         = 0,
	FeatureNotSupported                      = 1,
	NoValidViewport                          = 2,
	MiscFailure                              = 3,
	Success                                  = 4,
	EXRDeviceConnectionResult_MAX            = 5,
};

// Enum HeadMountedDisplay.EXRSystemFlags
// NumValues: 0x0006
enum class EXRSystemFlags : uint8
{
	NoFlags                                  = 0,
	IsAR                                     = 1,
	IsTablet                                 = 2,
	IsHeadMounted                            = 4,
	SupportsHandTracking                     = 8,
	EXRSystemFlags_MAX                       = 9,
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
// NumValues: 0x0009
enum class ESpectatorScreenMode : uint8
{
	Disabled                                 = 0,
	SingleEyeLetterboxed                     = 1,
	Undistorted                              = 2,
	Distorted                                = 3,
	SingleEye                                = 4,
	SingleEyeCroppedToFill                   = 5,
	Texture                                  = 6,
	TexturePlusEye                           = 7,
	ESpectatorScreenMode_MAX                 = 8,
};

// Enum HeadMountedDisplay.EXRTrackedDeviceType
// NumValues: 0x0008
enum class EXRTrackedDeviceType : uint8
{
	HeadMountedDisplay                       = 0,
	Controller                               = 1,
	TrackingReference                        = 2,
	Tracker                                  = 3,
	Other                                    = 4,
	Invalid                                  = 254,
	Any                                      = 255,
	EXRTrackedDeviceType_MAX                 = 256,
};

// Enum HeadMountedDisplay.EHandKeypoint
// NumValues: 0x001B
enum class EHandKeypoint : uint8
{
	Palm                                     = 0,
	Wrist                                    = 1,
	ThumbMetacarpal                          = 2,
	ThumbProximal                            = 3,
	ThumbDistal                              = 4,
	ThumbTip                                 = 5,
	IndexMetacarpal                          = 6,
	IndexProximal                            = 7,
	IndexIntermediate                        = 8,
	IndexDistal                              = 9,
	IndexTip                                 = 10,
	MiddleMetacarpal                         = 11,
	MiddleProximal                           = 12,
	MiddleIntermediate                       = 13,
	MiddleDistal                             = 14,
	MiddleTip                                = 15,
	RingMetacarpal                           = 16,
	RingProximal                             = 17,
	RingIntermediate                         = 18,
	RingDistal                               = 19,
	RingTip                                  = 20,
	LittleMetacarpal                         = 21,
	LittleProximal                           = 22,
	LittleIntermediate                       = 23,
	LittleDistal                             = 24,
	LittleTip                                = 25,
	EHandKeypoint_MAX                        = 26,
};

// Enum HeadMountedDisplay.EXRVisualType
// NumValues: 0x0003
enum class EXRVisualType : uint8
{
	Controller                               = 0,
	Hand                                     = 1,
	EXRVisualType_MAX                        = 2,
};

// Enum HeadMountedDisplay.ETrackingStatus
// NumValues: 0x0004
enum class ETrackingStatus : uint8
{
	NotTracked                               = 0,
	InertialOnly                             = 1,
	Tracked                                  = 2,
	ETrackingStatus_MAX                      = 3,
};

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
// NumValues: 0x0005
enum class ESpatialInputGestureAxis : uint8
{
	None                                     = 0,
	Manipulation                             = 1,
	Navigation                               = 2,
	NavigationRails                          = 3,
	ESpatialInputGestureAxis_MAX             = 4,
};

// ScriptStruct HeadMountedDisplay.XRHMDData
// 0x0060 (0x0060 - 0x0000)
struct FXRHMDData final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DeviceName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ApplicationInstanceID;                             // 0x000C(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrackingStatus                               TrackingStatus;                                    // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position;                                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0040(0x0020)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FXRHMDData) == 0x000010, "Wrong alignment on FXRHMDData");
static_assert(sizeof(FXRHMDData) == 0x000060, "Wrong size on FXRHMDData");
static_assert(offsetof(FXRHMDData, bValid) == 0x000000, "Member 'FXRHMDData::bValid' has a wrong offset!");
static_assert(offsetof(FXRHMDData, DeviceName) == 0x000004, "Member 'FXRHMDData::DeviceName' has a wrong offset!");
static_assert(offsetof(FXRHMDData, ApplicationInstanceID) == 0x00000C, "Member 'FXRHMDData::ApplicationInstanceID' has a wrong offset!");
static_assert(offsetof(FXRHMDData, TrackingStatus) == 0x00001C, "Member 'FXRHMDData::TrackingStatus' has a wrong offset!");
static_assert(offsetof(FXRHMDData, Position) == 0x000020, "Member 'FXRHMDData::Position' has a wrong offset!");
static_assert(offsetof(FXRHMDData, Rotation) == 0x000040, "Member 'FXRHMDData::Rotation' has a wrong offset!");

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// 0x0120 (0x0120 - 0x0000)
struct FXRMotionControllerData final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DeviceName;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ApplicationInstanceID;                             // 0x000C(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EXRVisualType                                 DeviceVisualType;                                  // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                               HandIndex;                                         // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrackingStatus                               TrackingStatus;                                    // 0x001E(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GripPosition;                                      // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  GripRotation;                                      // 0x0040(0x0020)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AimPosition;                                       // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  AimRotation;                                       // 0x0080(0x0020)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PalmPosition;                                      // 0x00A0(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  PalmRotation;                                      // 0x00C0(0x0020)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        HandKeyPositions;                                  // 0x00E0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                          HandKeyRotations;                                  // 0x00F0(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 HandKeyRadii;                                      // 0x0100(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsGrasped;                                        // 0x0110(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0xF];                                      // 0x0111(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FXRMotionControllerData) == 0x000010, "Wrong alignment on FXRMotionControllerData");
static_assert(sizeof(FXRMotionControllerData) == 0x000120, "Wrong size on FXRMotionControllerData");
static_assert(offsetof(FXRMotionControllerData, bValid) == 0x000000, "Member 'FXRMotionControllerData::bValid' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, DeviceName) == 0x000004, "Member 'FXRMotionControllerData::DeviceName' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, ApplicationInstanceID) == 0x00000C, "Member 'FXRMotionControllerData::ApplicationInstanceID' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, DeviceVisualType) == 0x00001C, "Member 'FXRMotionControllerData::DeviceVisualType' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandIndex) == 0x00001D, "Member 'FXRMotionControllerData::HandIndex' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, TrackingStatus) == 0x00001E, "Member 'FXRMotionControllerData::TrackingStatus' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, GripPosition) == 0x000020, "Member 'FXRMotionControllerData::GripPosition' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, GripRotation) == 0x000040, "Member 'FXRMotionControllerData::GripRotation' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, AimPosition) == 0x000060, "Member 'FXRMotionControllerData::AimPosition' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, AimRotation) == 0x000080, "Member 'FXRMotionControllerData::AimRotation' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, PalmPosition) == 0x0000A0, "Member 'FXRMotionControllerData::PalmPosition' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, PalmRotation) == 0x0000C0, "Member 'FXRMotionControllerData::PalmRotation' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyPositions) == 0x0000E0, "Member 'FXRMotionControllerData::HandKeyPositions' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyRotations) == 0x0000F0, "Member 'FXRMotionControllerData::HandKeyRotations' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, HandKeyRadii) == 0x000100, "Member 'FXRMotionControllerData::HandKeyRadii' has a wrong offset!");
static_assert(offsetof(FXRMotionControllerData, bIsGrasped) == 0x000110, "Member 'FXRMotionControllerData::bIsGrasped' has a wrong offset!");

// ScriptStruct HeadMountedDisplay.XRGestureConfig
// 0x0006 (0x0006 - 0x0000)
struct FXRGestureConfig final
{
public:
	bool                                          bTap;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHold;                                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESpatialInputGestureAxis                      AxisGesture;                                       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNavigationAxisX;                                  // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNavigationAxisY;                                  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNavigationAxisZ;                                  // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FXRGestureConfig) == 0x000001, "Wrong alignment on FXRGestureConfig");
static_assert(sizeof(FXRGestureConfig) == 0x000006, "Wrong size on FXRGestureConfig");
static_assert(offsetof(FXRGestureConfig, bTap) == 0x000000, "Member 'FXRGestureConfig::bTap' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bHold) == 0x000001, "Member 'FXRGestureConfig::bHold' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, AxisGesture) == 0x000002, "Member 'FXRGestureConfig::AxisGesture' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisX) == 0x000003, "Member 'FXRGestureConfig::bNavigationAxisX' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisY) == 0x000004, "Member 'FXRGestureConfig::bNavigationAxisY' has a wrong offset!");
static_assert(offsetof(FXRGestureConfig, bNavigationAxisZ) == 0x000005, "Member 'FXRGestureConfig::bNavigationAxisZ' has a wrong offset!");

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x000C (0x000C - 0x0000)
struct FXRDeviceId final
{
public:
	class FName                                   SystemName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeviceID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FXRDeviceId) == 0x000004, "Wrong alignment on FXRDeviceId");
static_assert(sizeof(FXRDeviceId) == 0x00000C, "Wrong size on FXRDeviceId");
static_assert(offsetof(FXRDeviceId, SystemName) == 0x000000, "Member 'FXRDeviceId::SystemName' has a wrong offset!");
static_assert(offsetof(FXRDeviceId, DeviceID) == 0x000008, "Member 'FXRDeviceId::DeviceID' has a wrong offset!");

}

