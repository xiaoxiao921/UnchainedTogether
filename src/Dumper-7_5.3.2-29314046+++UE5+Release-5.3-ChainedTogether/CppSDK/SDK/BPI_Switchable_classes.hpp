#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Switchable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Switchable.BPI_Switchable_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Switchable_C final : public IInterface
{
public:
	void Toggle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Switchable_C">();
	}
	static class IBPI_Switchable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Switchable_C>();
	}
};
static_assert(alignof(IBPI_Switchable_C) == 0x000008, "Wrong alignment on IBPI_Switchable_C");
static_assert(sizeof(IBPI_Switchable_C) == 0x000028, "Wrong size on IBPI_Switchable_C");

}
