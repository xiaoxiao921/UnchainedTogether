#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Vehicle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_Vehicle.BPI_Vehicle_C.AddImpulseToVehicle
// 0x0018 (0x0018 - 0x0000)
struct BPI_Vehicle_C_AddImpulseToVehicle final
{
public:
	struct FVector                                Impulse;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_AddImpulseToVehicle) == 0x000008, "Wrong alignment on BPI_Vehicle_C_AddImpulseToVehicle");
static_assert(sizeof(BPI_Vehicle_C_AddImpulseToVehicle) == 0x000018, "Wrong size on BPI_Vehicle_C_AddImpulseToVehicle");
static_assert(offsetof(BPI_Vehicle_C_AddImpulseToVehicle, Impulse) == 0x000000, "Member 'BPI_Vehicle_C_AddImpulseToVehicle::Impulse' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.GetDriverSocket
// 0x0008 (0x0008 - 0x0000)
struct BPI_Vehicle_C_GetDriverSocket final
{
public:
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_GetDriverSocket) == 0x000008, "Wrong alignment on BPI_Vehicle_C_GetDriverSocket");
static_assert(sizeof(BPI_Vehicle_C_GetDriverSocket) == 0x000008, "Wrong size on BPI_Vehicle_C_GetDriverSocket");
static_assert(offsetof(BPI_Vehicle_C_GetDriverSocket, ReturnValue) == 0x000000, "Member 'BPI_Vehicle_C_GetDriverSocket::ReturnValue' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.GetForwardRotation
// 0x0018 (0x0018 - 0x0000)
struct BPI_Vehicle_C_GetForwardRotation final
{
public:
	struct FRotator                               Rot;                                               // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Vehicle_C_GetForwardRotation) == 0x000008, "Wrong alignment on BPI_Vehicle_C_GetForwardRotation");
static_assert(sizeof(BPI_Vehicle_C_GetForwardRotation) == 0x000018, "Wrong size on BPI_Vehicle_C_GetForwardRotation");
static_assert(offsetof(BPI_Vehicle_C_GetForwardRotation, Rot) == 0x000000, "Member 'BPI_Vehicle_C_GetForwardRotation::Rot' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.GetForwardSpeed
// 0x0008 (0x0008 - 0x0000)
struct BPI_Vehicle_C_GetForwardSpeed final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_GetForwardSpeed) == 0x000008, "Wrong alignment on BPI_Vehicle_C_GetForwardSpeed");
static_assert(sizeof(BPI_Vehicle_C_GetForwardSpeed) == 0x000008, "Wrong size on BPI_Vehicle_C_GetForwardSpeed");
static_assert(offsetof(BPI_Vehicle_C_GetForwardSpeed, Speed) == 0x000000, "Member 'BPI_Vehicle_C_GetForwardSpeed::Speed' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.GetRadialVelocityZ
// 0x0008 (0x0008 - 0x0000)
struct BPI_Vehicle_C_GetRadialVelocityZ final
{
public:
	double                                        Vel;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_GetRadialVelocityZ) == 0x000008, "Wrong alignment on BPI_Vehicle_C_GetRadialVelocityZ");
static_assert(sizeof(BPI_Vehicle_C_GetRadialVelocityZ) == 0x000008, "Wrong size on BPI_Vehicle_C_GetRadialVelocityZ");
static_assert(offsetof(BPI_Vehicle_C_GetRadialVelocityZ, Vel) == 0x000000, "Member 'BPI_Vehicle_C_GetRadialVelocityZ::Vel' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.GetRootMesh
// 0x0008 (0x0008 - 0x0000)
struct BPI_Vehicle_C_GetRootMesh final
{
public:
	class UPrimitiveComponent*                    Mesh;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_GetRootMesh) == 0x000008, "Wrong alignment on BPI_Vehicle_C_GetRootMesh");
static_assert(sizeof(BPI_Vehicle_C_GetRootMesh) == 0x000008, "Wrong size on BPI_Vehicle_C_GetRootMesh");
static_assert(offsetof(BPI_Vehicle_C_GetRootMesh, Mesh) == 0x000000, "Member 'BPI_Vehicle_C_GetRootMesh::Mesh' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.HorseGrounded
// 0x0001 (0x0001 - 0x0000)
struct BPI_Vehicle_C_HorseGrounded final
{
public:
	bool                                          Grounded;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_HorseGrounded) == 0x000001, "Wrong alignment on BPI_Vehicle_C_HorseGrounded");
static_assert(sizeof(BPI_Vehicle_C_HorseGrounded) == 0x000001, "Wrong size on BPI_Vehicle_C_HorseGrounded");
static_assert(offsetof(BPI_Vehicle_C_HorseGrounded, Grounded) == 0x000000, "Member 'BPI_Vehicle_C_HorseGrounded::Grounded' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.IsCarosse
// 0x0001 (0x0001 - 0x0000)
struct BPI_Vehicle_C_IsCarosse final
{
public:
	bool                                          Carosse;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_IsCarosse) == 0x000001, "Wrong alignment on BPI_Vehicle_C_IsCarosse");
static_assert(sizeof(BPI_Vehicle_C_IsCarosse) == 0x000001, "Wrong size on BPI_Vehicle_C_IsCarosse");
static_assert(offsetof(BPI_Vehicle_C_IsCarosse, Carosse) == 0x000000, "Member 'BPI_Vehicle_C_IsCarosse::Carosse' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.IsCarVisible
// 0x0001 (0x0001 - 0x0000)
struct BPI_Vehicle_C_IsCarVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_IsCarVisible) == 0x000001, "Wrong alignment on BPI_Vehicle_C_IsCarVisible");
static_assert(sizeof(BPI_Vehicle_C_IsCarVisible) == 0x000001, "Wrong size on BPI_Vehicle_C_IsCarVisible");
static_assert(offsetof(BPI_Vehicle_C_IsCarVisible, Visible) == 0x000000, "Member 'BPI_Vehicle_C_IsCarVisible::Visible' has a wrong offset!");

// Function BPI_Vehicle.BPI_Vehicle_C.IsPossessed
// 0x0001 (0x0001 - 0x0000)
struct BPI_Vehicle_C_IsPossessed final
{
public:
	bool                                          Possessed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Vehicle_C_IsPossessed) == 0x000001, "Wrong alignment on BPI_Vehicle_C_IsPossessed");
static_assert(sizeof(BPI_Vehicle_C_IsPossessed) == 0x000001, "Wrong size on BPI_Vehicle_C_IsPossessed");
static_assert(offsetof(BPI_Vehicle_C_IsPossessed, Possessed) == 0x000000, "Member 'BPI_Vehicle_C_IsPossessed::Possessed' has a wrong offset!");

}

