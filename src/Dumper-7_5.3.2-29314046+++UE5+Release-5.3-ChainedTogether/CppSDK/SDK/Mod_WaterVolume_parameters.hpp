#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mod_WaterVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Mod_WaterVolume.Mod_WaterVolume_C.BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Mod_WaterVolume.Mod_WaterVolume_C.BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Mod_WaterVolume_C_BndEvt__BP_WaterVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function Mod_WaterVolume.Mod_WaterVolume_C.ExecuteUbergraph_Mod_WaterVolume
// 0x0190 (0x0190 - 0x0000)
struct Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue_1;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game_1;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue_2;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_2;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGM_Game_C*                             K2Node_DynamicCast_AsGM_Game_2;                    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0088(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume) == 0x000008, "Wrong alignment on Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume");
static_assert(sizeof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume) == 0x000190, "Wrong size on Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, EntryPoint) == 0x000000, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_AsGM_Game) == 0x000018, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_AsGM_Game' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_GetGameMode_ReturnValue_1) == 0x000028, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_GetGameMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_IsServer_ReturnValue_1) == 0x000030, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_AsGM_Game_1) == 0x000038, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_AsGM_Game_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_GetGameMode_ReturnValue_2) == 0x000048, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_GetGameMode_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, CallFunc_IsServer_ReturnValue_2) == 0x000050, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_AsGM_Game_2) == 0x000058, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_AsGM_Game_2' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000068, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000070, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000078, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000080, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_bFromSweep) == 0x000084, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_SweepResult) == 0x000088, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000170, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherActor) == 0x000178, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherComp) == 0x000180, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000188, "Member 'Mod_WaterVolume_C_ExecuteUbergraph_Mod_WaterVolume::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");

// Function Mod_WaterVolume.Mod_WaterVolume_C.OnEndOverlap
// 0x0030 (0x0030 - 0x0000)
struct Mod_WaterVolume_C_OnEndOverlap final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APCM_Game_C*                            K2Node_DynamicCast_AsPCM_Game;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_WaterVolume_C_OnEndOverlap) == 0x000008, "Wrong alignment on Mod_WaterVolume_C_OnEndOverlap");
static_assert(sizeof(Mod_WaterVolume_C_OnEndOverlap) == 0x000030, "Wrong size on Mod_WaterVolume_C_OnEndOverlap");
static_assert(offsetof(Mod_WaterVolume_C_OnEndOverlap, Object) == 0x000000, "Member 'Mod_WaterVolume_C_OnEndOverlap::Object' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnEndOverlap, K2Node_DynamicCast_AsPCM_Game) == 0x000008, "Member 'Mod_WaterVolume_C_OnEndOverlap::K2Node_DynamicCast_AsPCM_Game' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnEndOverlap, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Mod_WaterVolume_C_OnEndOverlap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnEndOverlap, K2Node_DynamicCast_AsBPI_Character) == 0x000018, "Member 'Mod_WaterVolume_C_OnEndOverlap::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnEndOverlap, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'Mod_WaterVolume_C_OnEndOverlap::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function Mod_WaterVolume.Mod_WaterVolume_C.OnOverlap
// 0x0030 (0x0030 - 0x0000)
struct Mod_WaterVolume_C_OnOverlap final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APCM_Game_C*                            K2Node_DynamicCast_AsPCM_Game;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Character_C>      K2Node_DynamicCast_AsBPI_Character;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mod_WaterVolume_C_OnOverlap) == 0x000008, "Wrong alignment on Mod_WaterVolume_C_OnOverlap");
static_assert(sizeof(Mod_WaterVolume_C_OnOverlap) == 0x000030, "Wrong size on Mod_WaterVolume_C_OnOverlap");
static_assert(offsetof(Mod_WaterVolume_C_OnOverlap, Object) == 0x000000, "Member 'Mod_WaterVolume_C_OnOverlap::Object' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnOverlap, K2Node_DynamicCast_AsPCM_Game) == 0x000008, "Member 'Mod_WaterVolume_C_OnOverlap::K2Node_DynamicCast_AsPCM_Game' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnOverlap, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Mod_WaterVolume_C_OnOverlap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnOverlap, K2Node_DynamicCast_AsBPI_Character) == 0x000018, "Member 'Mod_WaterVolume_C_OnOverlap::K2Node_DynamicCast_AsBPI_Character' has a wrong offset!");
static_assert(offsetof(Mod_WaterVolume_C_OnOverlap, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'Mod_WaterVolume_C_OnOverlap::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

