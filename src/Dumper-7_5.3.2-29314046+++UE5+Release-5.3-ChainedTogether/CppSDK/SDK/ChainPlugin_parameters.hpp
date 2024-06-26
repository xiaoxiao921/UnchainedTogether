#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChainPlugin

#include "Basic.hpp"

#include "ChainPlugin_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChainPlugin.ChainComponent.ApplyForce
// 0x0048 (0x0048 - 0x0000)
struct ChainComponent_ApplyForce final
{
public:
	struct FVector                                InPosition;                                        // 0x0000(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InRadius;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1669[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InForce;                                           // 0x0020(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ReturnValue;                                       // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChainComponent_ApplyForce) == 0x000008, "Wrong alignment on ChainComponent_ApplyForce");
static_assert(sizeof(ChainComponent_ApplyForce) == 0x000048, "Wrong size on ChainComponent_ApplyForce");
static_assert(offsetof(ChainComponent_ApplyForce, InPosition) == 0x000000, "Member 'ChainComponent_ApplyForce::InPosition' has a wrong offset!");
static_assert(offsetof(ChainComponent_ApplyForce, InRadius) == 0x000018, "Member 'ChainComponent_ApplyForce::InRadius' has a wrong offset!");
static_assert(offsetof(ChainComponent_ApplyForce, InForce) == 0x000020, "Member 'ChainComponent_ApplyForce::InForce' has a wrong offset!");
static_assert(offsetof(ChainComponent_ApplyForce, ReturnValue) == 0x000038, "Member 'ChainComponent_ApplyForce::ReturnValue' has a wrong offset!");

// Function ChainPlugin.ChainComponent.AttachEndToActor
// 0x0030 (0x0030 - 0x0000)
struct ChainComponent_AttachEndToActor final
{
public:
	struct FComponentReference                    ComponentReference;                                // 0x0000(0x0028)(Parm, NativeAccessSpecifierPublic)
	class FName                                   Socket;                                            // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChainComponent_AttachEndToActor) == 0x000008, "Wrong alignment on ChainComponent_AttachEndToActor");
static_assert(sizeof(ChainComponent_AttachEndToActor) == 0x000030, "Wrong size on ChainComponent_AttachEndToActor");
static_assert(offsetof(ChainComponent_AttachEndToActor, ComponentReference) == 0x000000, "Member 'ChainComponent_AttachEndToActor::ComponentReference' has a wrong offset!");
static_assert(offsetof(ChainComponent_AttachEndToActor, Socket) == 0x000028, "Member 'ChainComponent_AttachEndToActor::Socket' has a wrong offset!");

// Function ChainPlugin.ChainComponent.AttachStartToActor
// 0x0030 (0x0030 - 0x0000)
struct ChainComponent_AttachStartToActor final
{
public:
	struct FComponentReference                    ComponentReference;                                // 0x0000(0x0028)(Parm, NativeAccessSpecifierPublic)
	class FName                                   Socket;                                            // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChainComponent_AttachStartToActor) == 0x000008, "Wrong alignment on ChainComponent_AttachStartToActor");
static_assert(sizeof(ChainComponent_AttachStartToActor) == 0x000030, "Wrong size on ChainComponent_AttachStartToActor");
static_assert(offsetof(ChainComponent_AttachStartToActor, ComponentReference) == 0x000000, "Member 'ChainComponent_AttachStartToActor::ComponentReference' has a wrong offset!");
static_assert(offsetof(ChainComponent_AttachStartToActor, Socket) == 0x000028, "Member 'ChainComponent_AttachStartToActor::Socket' has a wrong offset!");

// Function ChainPlugin.ChainComponent.getChainPoint
// 0x0020 (0x0020 - 0x0000)
struct ChainComponent_GetChainPoint final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_166A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChainComponent_GetChainPoint) == 0x000008, "Wrong alignment on ChainComponent_GetChainPoint");
static_assert(sizeof(ChainComponent_GetChainPoint) == 0x000020, "Wrong size on ChainComponent_GetChainPoint");
static_assert(offsetof(ChainComponent_GetChainPoint, Param_Index) == 0x000000, "Member 'ChainComponent_GetChainPoint::Param_Index' has a wrong offset!");
static_assert(offsetof(ChainComponent_GetChainPoint, ReturnValue) == 0x000008, "Member 'ChainComponent_GetChainPoint::ReturnValue' has a wrong offset!");

// Function ChainPlugin.ChainComponent.GetChainPoints
// 0x0010 (0x0010 - 0x0000)
struct ChainComponent_GetChainPoints final
{
public:
	TArray<struct FChainPoint>                    ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChainComponent_GetChainPoints) == 0x000008, "Wrong alignment on ChainComponent_GetChainPoints");
static_assert(sizeof(ChainComponent_GetChainPoints) == 0x000010, "Wrong size on ChainComponent_GetChainPoints");
static_assert(offsetof(ChainComponent_GetChainPoints, ReturnValue) == 0x000000, "Member 'ChainComponent_GetChainPoints::ReturnValue' has a wrong offset!");

}

