#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InteractableMenu

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_InteractableMenu.BPI_InteractableMenu_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_InteractableMenu_C final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_InteractableMenu_C">();
	}
	static class IBPI_InteractableMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_InteractableMenu_C>();
	}
};
static_assert(alignof(IBPI_InteractableMenu_C) == 0x000008, "Wrong alignment on IBPI_InteractableMenu_C");
static_assert(sizeof(IBPI_InteractableMenu_C) == 0x000028, "Wrong size on IBPI_InteractableMenu_C");

}

