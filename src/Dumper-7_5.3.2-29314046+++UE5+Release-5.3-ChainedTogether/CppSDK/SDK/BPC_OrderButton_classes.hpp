#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_OrderButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CircleButton_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPC_OrderButton.BPC_OrderButton_C
// 0x0020 (0x0330 - 0x0310)
class ABPC_OrderButton_C final : public ACircleButton_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BPC_OrderButton_C;                  // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Order;                                             // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2B01[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_LaserLauncher_C*                    LaserLauncher;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_ButtonOrderManager_C*               Manager;                                           // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void CheckEvent(bool Push);
	void ExecuteUbergraph_BPC_OrderButton(int32 EntryPoint);
	void ResetOrderButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPC_OrderButton_C">();
	}
	static class ABPC_OrderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABPC_OrderButton_C>();
	}
};
static_assert(alignof(ABPC_OrderButton_C) == 0x000008, "Wrong alignment on ABPC_OrderButton_C");
static_assert(sizeof(ABPC_OrderButton_C) == 0x000330, "Wrong size on ABPC_OrderButton_C");
static_assert(offsetof(ABPC_OrderButton_C, UberGraphFrame_BPC_OrderButton_C) == 0x000310, "Member 'ABPC_OrderButton_C::UberGraphFrame_BPC_OrderButton_C' has a wrong offset!");
static_assert(offsetof(ABPC_OrderButton_C, Order) == 0x000318, "Member 'ABPC_OrderButton_C::Order' has a wrong offset!");
static_assert(offsetof(ABPC_OrderButton_C, LaserLauncher) == 0x000320, "Member 'ABPC_OrderButton_C::LaserLauncher' has a wrong offset!");
static_assert(offsetof(ABPC_OrderButton_C, Manager) == 0x000328, "Member 'ABPC_OrderButton_C::Manager' has a wrong offset!");

}

