#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPerson_AnimBP_Torch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ThirdPerson_AnimBP_Torch.ThirdPerson_AnimBP_Torch_C.AnimBlueprintGeneratedConstantData
// 0x016F (0x0170 - 0x0001)
struct ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_3684[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_144;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_145;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_146;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_147;                               // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_148;                                // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_149;                                 // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_150;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_151;                                 // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3685[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_152;                                // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_153;                                  // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_154;                                // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_155;                                // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3686[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_156;                               // 0x0050(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_157;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_158;                                 // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3687[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_159;                              // 0x0070(0x0020)(BlueprintVisible, NoDestructor)
	bool                                          __BoolProperty_160;                                // 0x0090(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3688[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_161;                               // 0x0094(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_162;                              // 0x0098(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_163;                               // 0x00C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_164;                                // 0x00C8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_165;                                // 0x00C9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_166;                                // 0x00CA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3689[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_167;                                // 0x00CC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_368A[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00D8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0158(0x0018)()
};
static_assert(alignof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData) == 0x000170, "Wrong size on ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x000004, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_145) == 0x00000C, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_145' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __IntProperty_146) == 0x000014, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__IntProperty_146' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __FloatProperty_147) == 0x000018, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__FloatProperty_147' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_148) == 0x00001C, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_148' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __IntProperty_149) == 0x000024, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__IntProperty_149' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_150) == 0x000028, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_150' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __IntProperty_151) == 0x000030, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__IntProperty_151' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __BlendProfile_152) == 0x000038, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__BlendProfile_152' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __CurveFloat_153) == 0x000040, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__CurveFloat_153' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __EnumProperty_154) == 0x000048, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__EnumProperty_154' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __EnumProperty_155) == 0x000049, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__EnumProperty_155' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __ArrayProperty_156) == 0x000050, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__ArrayProperty_156' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_157) == 0x000060, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_157' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __IntProperty_158) == 0x000068, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__IntProperty_158' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __StructProperty_159) == 0x000070, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__StructProperty_159' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __BoolProperty_160) == 0x000090, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__BoolProperty_160' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __FloatProperty_161) == 0x000094, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__FloatProperty_161' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __StructProperty_162) == 0x000098, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__StructProperty_162' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __FloatProperty_163) == 0x0000C4, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__FloatProperty_163' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __BoolProperty_164) == 0x0000C8, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__BoolProperty_164' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __EnumProperty_165) == 0x0000C9, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__EnumProperty_165' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __ByteProperty_166) == 0x0000CA, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__ByteProperty_166' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, __NameProperty_167) == 0x0000CC, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::__NameProperty_167' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000D8, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000158, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ThirdPerson_AnimBP_Torch.ThirdPerson_AnimBP_Torch_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_368B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_0;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_1;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000004, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000008, "Member 'ThirdPerson_AnimBP_Torch::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");

}

