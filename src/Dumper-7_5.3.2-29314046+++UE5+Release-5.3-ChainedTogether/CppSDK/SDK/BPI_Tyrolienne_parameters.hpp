#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Tyrolienne

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_Tyrolienne.BPI_Tyrolienne_C.BPI_SetCharacter
// 0x0008 (0x0008 - 0x0000)
struct BPI_Tyrolienne_C_BPI_SetCharacter final
{
public:
	class APawn*                                  Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Tyrolienne_C_BPI_SetCharacter) == 0x000008, "Wrong alignment on BPI_Tyrolienne_C_BPI_SetCharacter");
static_assert(sizeof(BPI_Tyrolienne_C_BPI_SetCharacter) == 0x000008, "Wrong size on BPI_Tyrolienne_C_BPI_SetCharacter");
static_assert(offsetof(BPI_Tyrolienne_C_BPI_SetCharacter, Character) == 0x000000, "Member 'BPI_Tyrolienne_C_BPI_SetCharacter::Character' has a wrong offset!");

// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetAttachSocketArrow
// 0x0008 (0x0008 - 0x0000)
struct BPI_Tyrolienne_C_GetAttachSocketArrow final
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Tyrolienne_C_GetAttachSocketArrow) == 0x000008, "Wrong alignment on BPI_Tyrolienne_C_GetAttachSocketArrow");
static_assert(sizeof(BPI_Tyrolienne_C_GetAttachSocketArrow) == 0x000008, "Wrong size on BPI_Tyrolienne_C_GetAttachSocketArrow");
static_assert(offsetof(BPI_Tyrolienne_C_GetAttachSocketArrow, Arrow) == 0x000000, "Member 'BPI_Tyrolienne_C_GetAttachSocketArrow::Arrow' has a wrong offset!");

// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetHandSocket
// 0x0008 (0x0008 - 0x0000)
struct BPI_Tyrolienne_C_GetHandSocket final
{
public:
	class USphereComponent*                       HandSocket;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Tyrolienne_C_GetHandSocket) == 0x000008, "Wrong alignment on BPI_Tyrolienne_C_GetHandSocket");
static_assert(sizeof(BPI_Tyrolienne_C_GetHandSocket) == 0x000008, "Wrong size on BPI_Tyrolienne_C_GetHandSocket");
static_assert(offsetof(BPI_Tyrolienne_C_GetHandSocket, HandSocket) == 0x000000, "Member 'BPI_Tyrolienne_C_GetHandSocket::HandSocket' has a wrong offset!");

// Function BPI_Tyrolienne.BPI_Tyrolienne_C.GetStaticMeshComp
// 0x0008 (0x0008 - 0x0000)
struct BPI_Tyrolienne_C_GetStaticMeshComp final
{
public:
	class UStaticMeshComponent*                   SM;                                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Tyrolienne_C_GetStaticMeshComp) == 0x000008, "Wrong alignment on BPI_Tyrolienne_C_GetStaticMeshComp");
static_assert(sizeof(BPI_Tyrolienne_C_GetStaticMeshComp) == 0x000008, "Wrong size on BPI_Tyrolienne_C_GetStaticMeshComp");
static_assert(offsetof(BPI_Tyrolienne_C_GetStaticMeshComp, SM) == 0x000000, "Member 'BPI_Tyrolienne_C_GetStaticMeshComp::SM' has a wrong offset!");

}
