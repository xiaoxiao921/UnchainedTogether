#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_Character_BPI

#include "Basic.hpp"

#include "ALS_Character_BPI_classes.hpp"
#include "ALS_Character_BPI_parameters.hpp"


namespace SDK
{

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_CurrentStates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode                           PawnMovementMode                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_MovementState                      MovementState                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_MovementState                      PrevMovementState                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_MovementAction                     MovementAction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_RotationMode                       RotationMode                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_Gait                               ActualGait                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_Stance                             ActualStance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_ViewMode                           ViewMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EALS_OverlayState                       OverlayState                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Get_CurrentStates(EMovementMode* PawnMovementMode, EALS_MovementState* MovementState, EALS_MovementState* PrevMovementState, EALS_MovementAction* MovementAction, EALS_RotationMode* RotationMode, EALS_Gait* ActualGait, EALS_Stance* ActualStance, EALS_ViewMode* ViewMode, EALS_OverlayState* OverlayState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Get_CurrentStates");

	Params::ALS_Character_BPI_C_BPI_Get_CurrentStates Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PawnMovementMode != nullptr)
		*PawnMovementMode = Parms.PawnMovementMode;

	if (MovementState != nullptr)
		*MovementState = Parms.MovementState;

	if (PrevMovementState != nullptr)
		*PrevMovementState = Parms.PrevMovementState;

	if (MovementAction != nullptr)
		*MovementAction = Parms.MovementAction;

	if (RotationMode != nullptr)
		*RotationMode = Parms.RotationMode;

	if (ActualGait != nullptr)
		*ActualGait = Parms.ActualGait;

	if (ActualStance != nullptr)
		*ActualStance = Parms.ActualStance;

	if (ViewMode != nullptr)
		*ViewMode = Parms.ViewMode;

	if (OverlayState != nullptr)
		*OverlayState = Parms.OverlayState;
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_EssentialValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Velocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Acceleration                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MovementInput                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMoving                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasMovementInput                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Speed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MovementInputAmount                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         AimingRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  AimYawRate                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           PullCharacter                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Pull                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Climb                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        MoveInput                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SwimOnSurface                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LeftHandLocation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RightHandLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RadialVelocityRight                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  RadialVelocityUp                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Swim                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Bounce                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LookAround                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Balancier                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Get_EssentialValues(struct FVector* Velocity, struct FVector* Acceleration, struct FVector* MovementInput, bool* IsMoving, bool* HasMovementInput, double* Speed, double* MovementInputAmount, struct FRotator* AimingRotation, double* AimYawRate, class AActor** PullCharacter, bool* Pull, bool* Climb, struct FVector2D* MoveInput, bool* SwimOnSurface, struct FVector* LeftHandLocation, struct FVector* RightHandLocation, double* RadialVelocityRight, double* RadialVelocityUp, bool* Swim, bool* Bounce, bool* LookAround, bool* Balancier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Get_EssentialValues");

	Params::ALS_Character_BPI_C_BPI_Get_EssentialValues Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

	if (Acceleration != nullptr)
		*Acceleration = std::move(Parms.Acceleration);

	if (MovementInput != nullptr)
		*MovementInput = std::move(Parms.MovementInput);

	if (IsMoving != nullptr)
		*IsMoving = Parms.IsMoving;

	if (HasMovementInput != nullptr)
		*HasMovementInput = Parms.HasMovementInput;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

	if (MovementInputAmount != nullptr)
		*MovementInputAmount = Parms.MovementInputAmount;

	if (AimingRotation != nullptr)
		*AimingRotation = std::move(Parms.AimingRotation);

	if (AimYawRate != nullptr)
		*AimYawRate = Parms.AimYawRate;

	if (PullCharacter != nullptr)
		*PullCharacter = Parms.PullCharacter;

	if (Pull != nullptr)
		*Pull = Parms.Pull;

	if (Climb != nullptr)
		*Climb = Parms.Climb;

	if (MoveInput != nullptr)
		*MoveInput = std::move(Parms.MoveInput);

	if (SwimOnSurface != nullptr)
		*SwimOnSurface = Parms.SwimOnSurface;

	if (LeftHandLocation != nullptr)
		*LeftHandLocation = std::move(Parms.LeftHandLocation);

	if (RightHandLocation != nullptr)
		*RightHandLocation = std::move(Parms.RightHandLocation);

	if (RadialVelocityRight != nullptr)
		*RadialVelocityRight = Parms.RadialVelocityRight;

	if (RadialVelocityUp != nullptr)
		*RadialVelocityUp = Parms.RadialVelocityUp;

	if (Swim != nullptr)
		*Swim = Parms.Swim;

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (LookAround != nullptr)
		*LookAround = Parms.LookAround;

	if (Balancier != nullptr)
		*Balancier = Parms.Balancier;
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_Gait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_Gait                               NewGait                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_Gait(EALS_Gait NewGait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_Gait");

	Params::ALS_Character_BPI_C_BPI_Set_Gait Parms{};

	Parms.NewGait = NewGait;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_MovementAction                     NewMovementAction                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_MovementAction(EALS_MovementAction NewMovementAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_MovementAction");

	Params::ALS_Character_BPI_C_BPI_Set_MovementAction Parms{};

	Parms.NewMovementAction = NewMovementAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_MovementState                      NewMovementState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_MovementState(EALS_MovementState NewMovementState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_MovementState");

	Params::ALS_Character_BPI_C_BPI_Set_MovementState Parms{};

	Parms.NewMovementState = NewMovementState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_OverlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_OverlayState                       NewOverlayState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_OverlayState(EALS_OverlayState NewOverlayState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_OverlayState");

	Params::ALS_Character_BPI_C_BPI_Set_OverlayState Parms{};

	Parms.NewOverlayState = NewOverlayState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_RotationMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_RotationMode                       NewRotationMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_RotationMode(EALS_RotationMode NewRotationMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_RotationMode");

	Params::ALS_Character_BPI_C_BPI_Set_RotationMode Parms{};

	Parms.NewRotationMode = NewRotationMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_ViewMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_ViewMode                           NewViewMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IALS_Character_BPI_C::BPI_Set_ViewMode(EALS_ViewMode NewViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALS_Character_BPI_C", "BPI_Set_ViewMode");

	Params::ALS_Character_BPI_C_BPI_Set_ViewMode Parms{};

	Parms.NewViewMode = NewViewMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

