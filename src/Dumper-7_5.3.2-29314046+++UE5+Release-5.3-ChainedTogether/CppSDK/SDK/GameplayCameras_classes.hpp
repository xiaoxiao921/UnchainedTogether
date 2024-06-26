#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "GameplayCameras_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class GameplayCameras.LegacyCameraShake
// 0x0110 (0x01F0 - 0x00E0)
class ULegacyCameraShake : public UCameraShakeBase
{
public:
	float                                         OscillationDuration;                               // 0x00D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendInTime;                            // 0x00DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OscillationBlendOutTime;                           // 0x00E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                           RotOscillation;                                    // 0x00E4(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                           LocOscillation;                                    // 0x0108(0x0024)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           FOVOscillation;                                    // 0x012C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AnimPlayRate;                                      // 0x0138(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimScale;                                         // 0x013C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendInTime;                                   // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimBlendOutTime;                                  // 0x0144(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomAnimSegmentDuration;                         // 0x0148(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_248E[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequence*               AnimSequence;                                      // 0x0150(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRandomAnimSegment : 1;                            // 0x0158(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_248F[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OscillatorTimeRemaining;                           // 0x015C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2490[0x70];                                    // 0x0160(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	class USequenceCameraShakePattern*            SequenceShakePattern;                              // 0x01D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2491[0x18];                                    // 0x01D8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	static class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);

	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
	void ReceivePlayShake(float Scale);
	void ReceiveStopShake(bool bImmediately);

	bool ReceiveIsFinished() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShake">();
	}
	static class ULegacyCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShake>();
	}
};
static_assert(alignof(ULegacyCameraShake) == 0x000010, "Wrong alignment on ULegacyCameraShake");
static_assert(sizeof(ULegacyCameraShake) == 0x0001F0, "Wrong size on ULegacyCameraShake");
static_assert(offsetof(ULegacyCameraShake, OscillationDuration) == 0x0000D8, "Member 'ULegacyCameraShake::OscillationDuration' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendInTime) == 0x0000DC, "Member 'ULegacyCameraShake::OscillationBlendInTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillationBlendOutTime) == 0x0000E0, "Member 'ULegacyCameraShake::OscillationBlendOutTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, RotOscillation) == 0x0000E4, "Member 'ULegacyCameraShake::RotOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, LocOscillation) == 0x000108, "Member 'ULegacyCameraShake::LocOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, FOVOscillation) == 0x00012C, "Member 'ULegacyCameraShake::FOVOscillation' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimPlayRate) == 0x000138, "Member 'ULegacyCameraShake::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimScale) == 0x00013C, "Member 'ULegacyCameraShake::AnimScale' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimBlendInTime) == 0x000140, "Member 'ULegacyCameraShake::AnimBlendInTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimBlendOutTime) == 0x000144, "Member 'ULegacyCameraShake::AnimBlendOutTime' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, RandomAnimSegmentDuration) == 0x000148, "Member 'ULegacyCameraShake::RandomAnimSegmentDuration' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, AnimSequence) == 0x000150, "Member 'ULegacyCameraShake::AnimSequence' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, OscillatorTimeRemaining) == 0x00015C, "Member 'ULegacyCameraShake::OscillatorTimeRemaining' has a wrong offset!");
static_assert(offsetof(ULegacyCameraShake, SequenceShakePattern) == 0x0001D0, "Member 'ULegacyCameraShake::SequenceShakePattern' has a wrong offset!");

// Class GameplayCameras.LegacyCameraShakePattern
// 0x0000 (0x0028 - 0x0028)
class ULegacyCameraShakePattern final : public UCameraShakePattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakePattern">();
	}
	static class ULegacyCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakePattern>();
	}
};
static_assert(alignof(ULegacyCameraShakePattern) == 0x000008, "Wrong alignment on ULegacyCameraShakePattern");
static_assert(sizeof(ULegacyCameraShakePattern) == 0x000028, "Wrong size on ULegacyCameraShakePattern");

// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULegacyCameraShakeFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LegacyCameraShakeFunctionLibrary">();
	}
	static class ULegacyCameraShakeFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacyCameraShakeFunctionLibrary>();
	}
};
static_assert(alignof(ULegacyCameraShakeFunctionLibrary) == 0x000008, "Wrong alignment on ULegacyCameraShakeFunctionLibrary");
static_assert(sizeof(ULegacyCameraShakeFunctionLibrary) == 0x000028, "Wrong size on ULegacyCameraShakeFunctionLibrary");

// Class GameplayCameras.CameraAnimationCameraModifier
// 0x0018 (0x0060 - 0x0048)
class UCameraAnimationCameraModifier final : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>     ActiveAnimations;                                  // 0x0048(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint16                                        NextInstanceSerialNumber;                          // 0x0058(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2495[0x6];                                     // 0x005A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId);
	static class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController);

	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationCameraModifier">();
	}
	static class UCameraAnimationCameraModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationCameraModifier>();
	}
};
static_assert(alignof(UCameraAnimationCameraModifier) == 0x000008, "Wrong alignment on UCameraAnimationCameraModifier");
static_assert(sizeof(UCameraAnimationCameraModifier) == 0x000060, "Wrong size on UCameraAnimationCameraModifier");
static_assert(offsetof(UCameraAnimationCameraModifier, ActiveAnimations) == 0x000048, "Member 'UCameraAnimationCameraModifier::ActiveAnimations' has a wrong offset!");
static_assert(offsetof(UCameraAnimationCameraModifier, NextInstanceSerialNumber) == 0x000058, "Member 'UCameraAnimationCameraModifier::NextInstanceSerialNumber' has a wrong offset!");

// Class GameplayCameras.GameplayCamerasFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayCamerasFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
	static ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
	static ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasFunctionLibrary">();
	}
	static class UGameplayCamerasFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasFunctionLibrary>();
	}
};
static_assert(alignof(UGameplayCamerasFunctionLibrary) == 0x000008, "Wrong alignment on UGameplayCamerasFunctionLibrary");
static_assert(sizeof(UGameplayCamerasFunctionLibrary) == 0x000028, "Wrong size on UGameplayCamerasFunctionLibrary");

// Class GameplayCameras.CompositeCameraShakePattern
// 0x0010 (0x0038 - 0x0028)
class UCompositeCameraShakePattern final : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>            ChildPatterns;                                     // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeCameraShakePattern">();
	}
	static class UCompositeCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCameraShakePattern>();
	}
};
static_assert(alignof(UCompositeCameraShakePattern) == 0x000008, "Wrong alignment on UCompositeCameraShakePattern");
static_assert(sizeof(UCompositeCameraShakePattern) == 0x000038, "Wrong size on UCompositeCameraShakePattern");
static_assert(offsetof(UCompositeCameraShakePattern, ChildPatterns) == 0x000028, "Member 'UCompositeCameraShakePattern::ChildPatterns' has a wrong offset!");

// Class GameplayCameras.DefaultCameraShakeBase
// 0x0000 (0x00E0 - 0x00E0)
class UDefaultCameraShakeBase final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultCameraShakeBase">();
	}
	static class UDefaultCameraShakeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultCameraShakeBase>();
	}
};
static_assert(alignof(UDefaultCameraShakeBase) == 0x000010, "Wrong alignment on UDefaultCameraShakeBase");
static_assert(sizeof(UDefaultCameraShakeBase) == 0x0000E0, "Wrong size on UDefaultCameraShakeBase");

// Class GameplayCameras.GameplayCamerasSubsystem
// 0x0000 (0x0030 - 0x0030)
class UGameplayCamerasSubsystem final : public UWorldSubsystem
{
public:
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params_0);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopCameraAnimation(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle, bool bImmediate);

	bool IsCameraAnimationActive(class APlayerController* PlayerController, const struct FCameraAnimationHandle& Handle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayCamerasSubsystem">();
	}
	static class UGameplayCamerasSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayCamerasSubsystem>();
	}
};
static_assert(alignof(UGameplayCamerasSubsystem) == 0x000008, "Wrong alignment on UGameplayCamerasSubsystem");
static_assert(sizeof(UGameplayCamerasSubsystem) == 0x000030, "Wrong size on UGameplayCamerasSubsystem");

// Class GameplayCameras.SimpleCameraShakePattern
// 0x0030 (0x0058 - 0x0028)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                         Duration;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24A1[0x24];                                    // 0x0034(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SimpleCameraShakePattern">();
	}
	static class USimpleCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleCameraShakePattern>();
	}
};
static_assert(alignof(USimpleCameraShakePattern) == 0x000008, "Wrong alignment on USimpleCameraShakePattern");
static_assert(sizeof(USimpleCameraShakePattern) == 0x000058, "Wrong size on USimpleCameraShakePattern");
static_assert(offsetof(USimpleCameraShakePattern, Duration) == 0x000028, "Member 'USimpleCameraShakePattern::Duration' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, BlendInTime) == 0x00002C, "Member 'USimpleCameraShakePattern::BlendInTime' has a wrong offset!");
static_assert(offsetof(USimpleCameraShakePattern, BlendOutTime) == 0x000030, "Member 'USimpleCameraShakePattern::BlendOutTime' has a wrong offset!");

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// 0x0080 (0x00D8 - 0x0058)
class UPerlinNoiseCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     X;                                                 // 0x0060(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Y;                                                 // 0x0068(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Z;                                                 // 0x0070(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Pitch;                                             // 0x0080(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Yaw;                                               // 0x0088(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     Roll;                                              // 0x0090(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                     FOV;                                               // 0x0098(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_24A2[0x38];                                    // 0x00A0(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PerlinNoiseCameraShakePattern">();
	}
	static class UPerlinNoiseCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerlinNoiseCameraShakePattern>();
	}
};
static_assert(alignof(UPerlinNoiseCameraShakePattern) == 0x000008, "Wrong alignment on UPerlinNoiseCameraShakePattern");
static_assert(sizeof(UPerlinNoiseCameraShakePattern) == 0x0000D8, "Wrong size on UPerlinNoiseCameraShakePattern");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier) == 0x000058, "Member 'UPerlinNoiseCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier) == 0x00005C, "Member 'UPerlinNoiseCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, X) == 0x000060, "Member 'UPerlinNoiseCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Y) == 0x000068, "Member 'UPerlinNoiseCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Z) == 0x000070, "Member 'UPerlinNoiseCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier) == 0x000078, "Member 'UPerlinNoiseCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier) == 0x00007C, "Member 'UPerlinNoiseCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Pitch) == 0x000080, "Member 'UPerlinNoiseCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Yaw) == 0x000088, "Member 'UPerlinNoiseCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, Roll) == 0x000090, "Member 'UPerlinNoiseCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UPerlinNoiseCameraShakePattern, FOV) == 0x000098, "Member 'UPerlinNoiseCameraShakePattern::FOV' has a wrong offset!");

// Class GameplayCameras.TestCameraShake
// 0x0000 (0x00E0 - 0x00E0)
class UTestCameraShake final : public UCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestCameraShake">();
	}
	static class UTestCameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestCameraShake>();
	}
};
static_assert(alignof(UTestCameraShake) == 0x000010, "Wrong alignment on UTestCameraShake");
static_assert(sizeof(UTestCameraShake) == 0x0000E0, "Wrong size on UTestCameraShake");

// Class GameplayCameras.ConstantCameraShakePattern
// 0x0030 (0x0088 - 0x0058)
class UConstantCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	struct FVector                                LocationOffset;                                    // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantCameraShakePattern">();
	}
	static class UConstantCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantCameraShakePattern>();
	}
};
static_assert(alignof(UConstantCameraShakePattern) == 0x000008, "Wrong alignment on UConstantCameraShakePattern");
static_assert(sizeof(UConstantCameraShakePattern) == 0x000088, "Wrong size on UConstantCameraShakePattern");
static_assert(offsetof(UConstantCameraShakePattern, LocationOffset) == 0x000058, "Member 'UConstantCameraShakePattern::LocationOffset' has a wrong offset!");
static_assert(offsetof(UConstantCameraShakePattern, RotationOffset) == 0x000070, "Member 'UConstantCameraShakePattern::RotationOffset' has a wrong offset!");

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// 0x00A0 (0x00F8 - 0x0058)
class UWaveOscillatorCameraShakePattern final : public USimpleCameraShakePattern
{
public:
	float                                         LocationAmplitudeMultiplier;                       // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocationFrequencyMultiplier;                       // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        X;                                                 // 0x0060(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Y;                                                 // 0x006C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Z;                                                 // 0x0078(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         RotationAmplitudeMultiplier;                       // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationFrequencyMultiplier;                       // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Pitch;                                             // 0x008C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Yaw;                                               // 0x0098(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        Roll;                                              // 0x00A4(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                        FOV;                                               // 0x00B0(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_24A3[0x3C];                                    // 0x00BC(0x003C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveOscillatorCameraShakePattern">();
	}
	static class UWaveOscillatorCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveOscillatorCameraShakePattern>();
	}
};
static_assert(alignof(UWaveOscillatorCameraShakePattern) == 0x000008, "Wrong alignment on UWaveOscillatorCameraShakePattern");
static_assert(sizeof(UWaveOscillatorCameraShakePattern) == 0x0000F8, "Wrong size on UWaveOscillatorCameraShakePattern");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier) == 0x000058, "Member 'UWaveOscillatorCameraShakePattern::LocationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier) == 0x00005C, "Member 'UWaveOscillatorCameraShakePattern::LocationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, X) == 0x000060, "Member 'UWaveOscillatorCameraShakePattern::X' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Y) == 0x00006C, "Member 'UWaveOscillatorCameraShakePattern::Y' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Z) == 0x000078, "Member 'UWaveOscillatorCameraShakePattern::Z' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier) == 0x000084, "Member 'UWaveOscillatorCameraShakePattern::RotationAmplitudeMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier) == 0x000088, "Member 'UWaveOscillatorCameraShakePattern::RotationFrequencyMultiplier' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Pitch) == 0x00008C, "Member 'UWaveOscillatorCameraShakePattern::Pitch' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Yaw) == 0x000098, "Member 'UWaveOscillatorCameraShakePattern::Yaw' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, Roll) == 0x0000A4, "Member 'UWaveOscillatorCameraShakePattern::Roll' has a wrong offset!");
static_assert(offsetof(UWaveOscillatorCameraShakePattern, FOV) == 0x0000B0, "Member 'UWaveOscillatorCameraShakePattern::FOV' has a wrong offset!");

}

