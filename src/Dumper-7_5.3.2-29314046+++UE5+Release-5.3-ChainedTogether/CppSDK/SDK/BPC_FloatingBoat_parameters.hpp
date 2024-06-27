#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_FloatingBoat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPC_FloatingBoat.BPC_FloatingBoat_C.BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B47[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BPC_FloatingBoat.BPC_FloatingBoat_C.BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BPC_FloatingBoat_C_BndEvt__BPC_FloatingBoat_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BPC_FloatingBoat.BPC_FloatingBoat_C.ExecuteUbergraph_BPC_FloatingBoat
// 0x0238 (0x0238 - 0x0000)
struct BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B48[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0038(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B49[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0140(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat) == 0x000008, "Wrong alignment on BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat");
static_assert(sizeof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat) == 0x000238, "Wrong size on BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, EntryPoint) == 0x000000, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_HitComponent) == 0x000008, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000020, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_Hit) == 0x000038, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000120, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OtherActor) == 0x000128, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OtherComp) == 0x000130, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000138, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_bFromSweep) == 0x00013C, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_ComponentBoundEvent_SweepResult) == 0x000140, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_DynamicCast_AsPawn) == 0x000228, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat, K2Node_DynamicCast_bSuccess) == 0x000230, "Member 'BPC_FloatingBoat_C_ExecuteUbergraph_BPC_FloatingBoat::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
