#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovementAction_NotifyState

#include "Basic.hpp"

#include "ALS_Stance_structs.hpp"
#include "Engine_structs.hpp"
#include "ALS_Gait_structs.hpp"
#include "ALS_MovementState_structs.hpp"
#include "ALS_MovementAction_structs.hpp"
#include "ALS_RotationMode_structs.hpp"
#include "ALS_ViewMode_structs.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK::Params
{

// Function MovementAction_NotifyState.MovementAction_NotifyState_C.GetNotifyName
// 0x0030 (0x0030 - 0x0000)
struct MovementAction_NotifyState_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MovementAction_NotifyState_C_GetNotifyName) == 0x000008, "Wrong alignment on MovementAction_NotifyState_C_GetNotifyName");
static_assert(sizeof(MovementAction_NotifyState_C_GetNotifyName) == 0x000030, "Wrong size on MovementAction_NotifyState_C_GetNotifyName");
static_assert(offsetof(MovementAction_NotifyState_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'MovementAction_NotifyState_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_GetNotifyName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'MovementAction_NotifyState_C_GetNotifyName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MovementAction_NotifyState_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyBegin
// 0x0070 (0x0070 - 0x0000)
struct MovementAction_NotifyState_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovementAction_NotifyState_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on MovementAction_NotifyState_C_Received_NotifyBegin");
static_assert(sizeof(MovementAction_NotifyState_C_Received_NotifyBegin) == 0x000070, "Wrong size on MovementAction_NotifyState_C_Received_NotifyBegin");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, ReturnValue) == 0x000048, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, K2Node_DynamicCast_AsALS_Character_BPI) == 0x000058, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MovementAction_NotifyState_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MovementAction_NotifyState.MovementAction_NotifyState_C.Received_NotifyEnd
// 0x0090 (0x0090 - 0x0000)
struct MovementAction_NotifyState_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI;            // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IALS_Character_BPI_C>  K2Node_DynamicCast_AsALS_Character_BPI_1;          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 CallFunc_BPI_Get_CurrentStates_PawnMovementMode;   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_MovementState;      // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            CallFunc_BPI_Get_CurrentStates_PrevMovementState;  // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementAction                           CallFunc_BPI_Get_CurrentStates_MovementAction;     // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             CallFunc_BPI_Get_CurrentStates_RotationMode;       // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     CallFunc_BPI_Get_CurrentStates_ActualGait;         // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   CallFunc_BPI_Get_CurrentStates_ActualStance;       // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_ViewMode                                 CallFunc_BPI_Get_CurrentStates_ViewMode;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_OverlayState                             CallFunc_BPI_Get_CurrentStates_OverlayState;       // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovementAction_NotifyState_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on MovementAction_NotifyState_C_Received_NotifyEnd");
static_assert(sizeof(MovementAction_NotifyState_C_Received_NotifyEnd) == 0x000090, "Wrong size on MovementAction_NotifyState_C_Received_NotifyEnd");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, ReturnValue) == 0x000040, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_AsALS_Character_BPI) == 0x000058, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_AsALS_Character_BPI' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_AsALS_Character_BPI_1) == 0x000070, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_AsALS_Character_BPI_1' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_PawnMovementMode) == 0x000081, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_PawnMovementMode' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_MovementState) == 0x000082, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_MovementState' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_PrevMovementState) == 0x000083, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_PrevMovementState' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_MovementAction) == 0x000084, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_MovementAction' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_RotationMode) == 0x000085, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_RotationMode' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_ActualGait) == 0x000086, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_ActualGait' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_ActualStance) == 0x000087, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_ActualStance' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_ViewMode) == 0x000088, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_ViewMode' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_BPI_Get_CurrentStates_OverlayState) == 0x000089, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_BPI_Get_CurrentStates_OverlayState' has a wrong offset!");
static_assert(offsetof(MovementAction_NotifyState_C_Received_NotifyEnd, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008A, "Member 'MovementAction_NotifyState_C_Received_NotifyEnd::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

