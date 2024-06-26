#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharacterConstraint

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_CharacterConstraint.BPI_CharacterConstraint_C.SetContrainedComps
// 0x0010 (0x0010 - 0x0000)
struct BPI_CharacterConstraint_C_SetContrainedComps final
{
public:
	class UPrimitiveComponent*                    Comp1;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Comp2;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharacterConstraint_C_SetContrainedComps) == 0x000008, "Wrong alignment on BPI_CharacterConstraint_C_SetContrainedComps");
static_assert(sizeof(BPI_CharacterConstraint_C_SetContrainedComps) == 0x000010, "Wrong size on BPI_CharacterConstraint_C_SetContrainedComps");
static_assert(offsetof(BPI_CharacterConstraint_C_SetContrainedComps, Comp1) == 0x000000, "Member 'BPI_CharacterConstraint_C_SetContrainedComps::Comp1' has a wrong offset!");
static_assert(offsetof(BPI_CharacterConstraint_C_SetContrainedComps, Comp2) == 0x000008, "Member 'BPI_CharacterConstraint_C_SetContrainedComps::Comp2' has a wrong offset!");

}

