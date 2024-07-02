#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Road_Data

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Road_Data.Road_Data
// 0x0050 (0x0050 - 0x0000)
struct FRoad_Data final
{
public:
	bool                                          Add_Left_Sidewalk_80_082FCAEB4FEFCDD7BFFE5CB13E123209; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Right_Sidewalk_81_D17B8A9E450D78D8E237F3A46B4575F0; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Middle_Sidewalk_82_C20C255B45698FE2BD7100BB90C8C91D; // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Bridge_Support_84_D50700544B4E0B6AB817419901A7B3A7; // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C69[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Left_Sidewalk_Scale_85_B4C750364A0AEA4F2E056F9AF29F0671; // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Right_Sidewalk_Scale_86_AF2FFD2446A35234C3C57BB6A7792093; // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Middle_Sidewalk_Scale_87_ACFBCF8E4782681340C116B5CF3C30B1; // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Bridge_Support_Scale_88_8DDA7F5440B6BCA8012A47A16C723218; // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRoad_Data) == 0x000008, "Wrong alignment on FRoad_Data");
static_assert(sizeof(FRoad_Data) == 0x000050, "Wrong size on FRoad_Data");
static_assert(offsetof(FRoad_Data, Add_Left_Sidewalk_80_082FCAEB4FEFCDD7BFFE5CB13E123209) == 0x000000, "Member 'FRoad_Data::Add_Left_Sidewalk_80_082FCAEB4FEFCDD7BFFE5CB13E123209' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Add_Right_Sidewalk_81_D17B8A9E450D78D8E237F3A46B4575F0) == 0x000001, "Member 'FRoad_Data::Add_Right_Sidewalk_81_D17B8A9E450D78D8E237F3A46B4575F0' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Add_Middle_Sidewalk_82_C20C255B45698FE2BD7100BB90C8C91D) == 0x000002, "Member 'FRoad_Data::Add_Middle_Sidewalk_82_C20C255B45698FE2BD7100BB90C8C91D' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Add_Bridge_Support_84_D50700544B4E0B6AB817419901A7B3A7) == 0x000003, "Member 'FRoad_Data::Add_Bridge_Support_84_D50700544B4E0B6AB817419901A7B3A7' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Left_Sidewalk_Scale_85_B4C750364A0AEA4F2E056F9AF29F0671) == 0x000008, "Member 'FRoad_Data::Left_Sidewalk_Scale_85_B4C750364A0AEA4F2E056F9AF29F0671' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Right_Sidewalk_Scale_86_AF2FFD2446A35234C3C57BB6A7792093) == 0x000018, "Member 'FRoad_Data::Right_Sidewalk_Scale_86_AF2FFD2446A35234C3C57BB6A7792093' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Middle_Sidewalk_Scale_87_ACFBCF8E4782681340C116B5CF3C30B1) == 0x000028, "Member 'FRoad_Data::Middle_Sidewalk_Scale_87_ACFBCF8E4782681340C116B5CF3C30B1' has a wrong offset!");
static_assert(offsetof(FRoad_Data, Bridge_Support_Scale_88_8DDA7F5440B6BCA8012A47A16C723218) == 0x000038, "Member 'FRoad_Data::Bridge_Support_Scale_88_8DDA7F5440B6BCA8012A47A16C723218' has a wrong offset!");

}

