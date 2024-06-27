#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SM_Chandelier_01_A

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SM_Chandelier_01_A.SM_Chandelier_01_A_C
// 0x0068 (0x0300 - 0x0298)
class ASM_Chandelier_01_A_C final : public AActor
{
public:
	class UParticleSystemComponent*               FX_Candle_08;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_07;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_06;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_05;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_04;                                      // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_03;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_02;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_Candle_01;                                      // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight3;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SM_Chandelier_01_A_C">();
	}
	static class ASM_Chandelier_01_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASM_Chandelier_01_A_C>();
	}
};
static_assert(alignof(ASM_Chandelier_01_A_C) == 0x000008, "Wrong alignment on ASM_Chandelier_01_A_C");
static_assert(sizeof(ASM_Chandelier_01_A_C) == 0x000300, "Wrong size on ASM_Chandelier_01_A_C");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_08) == 0x000298, "Member 'ASM_Chandelier_01_A_C::FX_Candle_08' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_07) == 0x0002A0, "Member 'ASM_Chandelier_01_A_C::FX_Candle_07' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_06) == 0x0002A8, "Member 'ASM_Chandelier_01_A_C::FX_Candle_06' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_05) == 0x0002B0, "Member 'ASM_Chandelier_01_A_C::FX_Candle_05' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_04) == 0x0002B8, "Member 'ASM_Chandelier_01_A_C::FX_Candle_04' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_03) == 0x0002C0, "Member 'ASM_Chandelier_01_A_C::FX_Candle_03' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_02) == 0x0002C8, "Member 'ASM_Chandelier_01_A_C::FX_Candle_02' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, FX_Candle_01) == 0x0002D0, "Member 'ASM_Chandelier_01_A_C::FX_Candle_01' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, PointLight3) == 0x0002D8, "Member 'ASM_Chandelier_01_A_C::PointLight3' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, PointLight2) == 0x0002E0, "Member 'ASM_Chandelier_01_A_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, PointLight1) == 0x0002E8, "Member 'ASM_Chandelier_01_A_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, PointLight) == 0x0002F0, "Member 'ASM_Chandelier_01_A_C::PointLight' has a wrong offset!");
static_assert(offsetof(ASM_Chandelier_01_A_C, StaticMesh) == 0x0002F8, "Member 'ASM_Chandelier_01_A_C::StaticMesh' has a wrong offset!");

}
