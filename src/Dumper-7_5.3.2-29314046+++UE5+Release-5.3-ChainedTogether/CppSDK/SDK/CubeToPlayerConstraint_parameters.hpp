#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CubeToPlayerConstraint

#include "Basic.hpp"


namespace SDK::Params
{

// Function CubeToPlayerConstraint.CubeToPlayerConstraint_C.ExecuteUbergraph_CubeToPlayerConstraint
// 0x0018 (0x0018 - 0x0000)
struct CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DDF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_Comp1;                                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_Comp2;                                // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint) == 0x000008, "Wrong alignment on CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint");
static_assert(sizeof(CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint) == 0x000018, "Wrong size on CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint");
static_assert(offsetof(CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint, EntryPoint) == 0x000000, "Member 'CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint::EntryPoint' has a wrong offset!");
static_assert(offsetof(CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint, K2Node_Event_Comp1) == 0x000008, "Member 'CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint::K2Node_Event_Comp1' has a wrong offset!");
static_assert(offsetof(CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint, K2Node_Event_Comp2) == 0x000010, "Member 'CubeToPlayerConstraint_C_ExecuteUbergraph_CubeToPlayerConstraint::K2Node_Event_Comp2' has a wrong offset!");

// Function CubeToPlayerConstraint.CubeToPlayerConstraint_C.SetContrainedComps
// 0x0010 (0x0010 - 0x0000)
struct CubeToPlayerConstraint_C_SetContrainedComps final
{
public:
	class UPrimitiveComponent*                    Comp1;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Comp2;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CubeToPlayerConstraint_C_SetContrainedComps) == 0x000008, "Wrong alignment on CubeToPlayerConstraint_C_SetContrainedComps");
static_assert(sizeof(CubeToPlayerConstraint_C_SetContrainedComps) == 0x000010, "Wrong size on CubeToPlayerConstraint_C_SetContrainedComps");
static_assert(offsetof(CubeToPlayerConstraint_C_SetContrainedComps, Comp1) == 0x000000, "Member 'CubeToPlayerConstraint_C_SetContrainedComps::Comp1' has a wrong offset!");
static_assert(offsetof(CubeToPlayerConstraint_C_SetContrainedComps, Comp2) == 0x000008, "Member 'CubeToPlayerConstraint_C_SetContrainedComps::Comp2' has a wrong offset!");

}

