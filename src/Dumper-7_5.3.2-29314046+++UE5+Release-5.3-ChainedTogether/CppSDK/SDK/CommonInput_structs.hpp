#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonInput

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Enum CommonInput.ECommonInputType
// NumValues: 0x0005
enum class ECommonInputType : uint8
{
	MouseAndKeyboard                         = 0,
	Gamepad                                  = 1,
	Touch                                    = 2,
	Count                                    = 3,
	ECommonInputType_MAX                     = 4,
};

// Enum CommonInput.ECommonInputMode
// NumValues: 0x0004
enum class ECommonInputMode : uint8
{
	Menu                                     = 0,
	Game                                     = 1,
	All                                      = 2,
	MAX                                      = 3,
};

// Enum CommonInput.ECommonInputEventFlowBehavior
// NumValues: 0x0004
enum class ECommonInputEventFlowBehavior : uint32
{
	BlockIfActive                            = 0,
	BlockIfHandled                           = 1,
	NeverBlock                               = 2,
	ECommonInputEventFlowBehavior_MAX        = 3,
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// 0x00F0 (0x00F0 - 0x0000)
struct FCommonInputKeyBrushConfiguration final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            KeyBrush;                                          // 0x0020(0x00D0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonInputKeyBrushConfiguration) == 0x000010, "Wrong alignment on FCommonInputKeyBrushConfiguration");
static_assert(sizeof(FCommonInputKeyBrushConfiguration) == 0x0000F0, "Wrong size on FCommonInputKeyBrushConfiguration");
static_assert(offsetof(FCommonInputKeyBrushConfiguration, Key) == 0x000000, "Member 'FCommonInputKeyBrushConfiguration::Key' has a wrong offset!");
static_assert(offsetof(FCommonInputKeyBrushConfiguration, KeyBrush) == 0x000020, "Member 'FCommonInputKeyBrushConfiguration::KeyBrush' has a wrong offset!");

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// 0x00E0 (0x00E0 - 0x0000)
struct FCommonInputKeySetBrushConfiguration final
{
public:
	TArray<struct FKey>                           Keys;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                            KeyBrush;                                          // 0x0010(0x00D0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonInputKeySetBrushConfiguration) == 0x000010, "Wrong alignment on FCommonInputKeySetBrushConfiguration");
static_assert(sizeof(FCommonInputKeySetBrushConfiguration) == 0x0000E0, "Wrong size on FCommonInputKeySetBrushConfiguration");
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, Keys) == 0x000000, "Member 'FCommonInputKeySetBrushConfiguration::Keys' has a wrong offset!");
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, KeyBrush) == 0x000010, "Member 'FCommonInputKeySetBrushConfiguration::KeyBrush' has a wrong offset!");

// ScriptStruct CommonInput.InputDeviceIdentifierPair
// 0x0018 (0x0018 - 0x0000)
struct FInputDeviceIdentifierPair final
{
public:
	class FName                                   InputDeviceName;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 HardwareDeviceIdentifier;                          // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputDeviceIdentifierPair) == 0x000008, "Wrong alignment on FInputDeviceIdentifierPair");
static_assert(sizeof(FInputDeviceIdentifierPair) == 0x000018, "Wrong size on FInputDeviceIdentifierPair");
static_assert(offsetof(FInputDeviceIdentifierPair, InputDeviceName) == 0x000000, "Member 'FInputDeviceIdentifierPair::InputDeviceName' has a wrong offset!");
static_assert(offsetof(FInputDeviceIdentifierPair, HardwareDeviceIdentifier) == 0x000008, "Member 'FInputDeviceIdentifierPair::HardwareDeviceIdentifier' has a wrong offset!");

// ScriptStruct CommonInput.InputHoldData
// 0x0008 (0x0008 - 0x0000)
struct FInputHoldData final
{
public:
	float                                         HoldTime;                                          // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldRollbackTime;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputHoldData) == 0x000004, "Wrong alignment on FInputHoldData");
static_assert(sizeof(FInputHoldData) == 0x000008, "Wrong size on FInputHoldData");
static_assert(offsetof(FInputHoldData, HoldTime) == 0x000000, "Member 'FInputHoldData::HoldTime' has a wrong offset!");
static_assert(offsetof(FInputHoldData, HoldRollbackTime) == 0x000004, "Member 'FInputHoldData::HoldRollbackTime' has a wrong offset!");

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// 0x0038 (0x0038 - 0x0000)
struct FCommonInputPlatformBaseData final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ECommonInputType                              DefaultInputType;                                  // 0x0008(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsMouseAndKeyboard;                         // 0x0009(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsGamepad;                                  // 0x000A(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DefaultGamepadName;                                // 0x000C(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCanChangeGamepadType;                             // 0x0014(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsTouch;                                    // 0x0015(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftClassPtr<class UClass>>           ControllerData;                                    // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x0028(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};
static_assert(alignof(FCommonInputPlatformBaseData) == 0x000008, "Wrong alignment on FCommonInputPlatformBaseData");
static_assert(sizeof(FCommonInputPlatformBaseData) == 0x000038, "Wrong size on FCommonInputPlatformBaseData");
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultInputType) == 0x000008, "Member 'FCommonInputPlatformBaseData::DefaultInputType' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsMouseAndKeyboard) == 0x000009, "Member 'FCommonInputPlatformBaseData::bSupportsMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsGamepad) == 0x00000A, "Member 'FCommonInputPlatformBaseData::bSupportsGamepad' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultGamepadName) == 0x00000C, "Member 'FCommonInputPlatformBaseData::DefaultGamepadName' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bCanChangeGamepadType) == 0x000014, "Member 'FCommonInputPlatformBaseData::bCanChangeGamepadType' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsTouch) == 0x000015, "Member 'FCommonInputPlatformBaseData::bSupportsTouch' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerData) == 0x000018, "Member 'FCommonInputPlatformBaseData::ControllerData' has a wrong offset!");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerDataClasses) == 0x000028, "Member 'FCommonInputPlatformBaseData::ControllerDataClasses' has a wrong offset!");

}

