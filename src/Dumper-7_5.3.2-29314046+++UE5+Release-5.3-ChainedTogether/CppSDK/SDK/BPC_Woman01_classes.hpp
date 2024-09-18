#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_Woman01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Character_classes.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_Woman01.BPC_Woman01_C
// 0x0000 (0x0ED0 - 0x0ED0)
class ABPC_Woman01_C final : public ABP_Character_C
{
public:
	uint8                                         Pad_EC2[0x6];                                      // 0x0EC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BPC_Woman01_C;                      // 0x0EC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPC_Woman01(int32 EntryPoint);
	void AddClothes();
	void GetCharacter(E_ChoosenChar* Character);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_Woman01_C">();
	}
	static class ABPC_Woman01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPC_Woman01_C>();
	}
};
static_assert(alignof(ABPC_Woman01_C) == 0x000010, "Wrong alignment on ABPC_Woman01_C");
static_assert(sizeof(ABPC_Woman01_C) == 0x000ED0, "Wrong size on ABPC_Woman01_C");
static_assert(offsetof(ABPC_Woman01_C, UberGraphFrame_BPC_Woman01_C) == 0x000EC8, "Member 'ABPC_Woman01_C::UberGraphFrame_BPC_Woman01_C' has a wrong offset!");

}
