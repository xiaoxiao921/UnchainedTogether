#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TchatElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_TchatElement_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TchatElement.W_TchatElement_C
// 0x0048 (0x0308 - 0x02C0)
class UW_TchatElement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Message;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_W_TchatElement_C;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_TchatElement                        TchatElement;                                      // 0x02D8(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_TchatElement(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TchatElement_C">();
	}
	static class UW_TchatElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TchatElement_C>();
	}
};
static_assert(alignof(UW_TchatElement_C) == 0x000008, "Wrong alignment on UW_TchatElement_C");
static_assert(sizeof(UW_TchatElement_C) == 0x000308, "Wrong size on UW_TchatElement_C");
static_assert(offsetof(UW_TchatElement_C, UberGraphFrame) == 0x0002C0, "Member 'UW_TchatElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_TchatElement_C, Message) == 0x0002C8, "Member 'UW_TchatElement_C::Message' has a wrong offset!");
static_assert(offsetof(UW_TchatElement_C, Name_W_TchatElement_C) == 0x0002D0, "Member 'UW_TchatElement_C::Name_W_TchatElement_C' has a wrong offset!");
static_assert(offsetof(UW_TchatElement_C, TchatElement) == 0x0002D8, "Member 'UW_TchatElement_C::TchatElement' has a wrong offset!");

}

