#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_SteamIDAndSkin

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"
#include "E_ChoosenChar_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_SteamIDAndSkin.S_SteamIDAndSkin
// 0x0010 (0x0010 - 0x0000)
struct FS_SteamIDAndSkin final
{
public:
	struct FSteamID                               SteamID_7_060198954EDF9A8736364EB4F80B2080;        // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor)
	E_ChoosenChar                                 Skin_6_4CADC57A489960A78292869F19B4F13B;           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_SteamIDAndSkin) == 0x000008, "Wrong alignment on FS_SteamIDAndSkin");
static_assert(sizeof(FS_SteamIDAndSkin) == 0x000010, "Wrong size on FS_SteamIDAndSkin");
static_assert(offsetof(FS_SteamIDAndSkin, SteamID_7_060198954EDF9A8736364EB4F80B2080) == 0x000000, "Member 'FS_SteamIDAndSkin::SteamID_7_060198954EDF9A8736364EB4F80B2080' has a wrong offset!");
static_assert(offsetof(FS_SteamIDAndSkin, Skin_6_4CADC57A489960A78292869F19B4F13B) == 0x000008, "Member 'FS_SteamIDAndSkin::Skin_6_4CADC57A489960A78292869F19B4F13B' has a wrong offset!");

}

