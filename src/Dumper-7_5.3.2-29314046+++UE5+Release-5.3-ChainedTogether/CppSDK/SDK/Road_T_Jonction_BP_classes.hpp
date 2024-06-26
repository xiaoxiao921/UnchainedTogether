#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Road_T_Jonction_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Road_T_JonctionType_structs.hpp"
#include "ConnectorsNum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Road_T_Jonction_BP.Road_T_Jonction_BP_C
// 0x0208 (0x04A0 - 0x0298)
class ARoad_T_Jonction_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Traffic_Light_2;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Traffic_Light_1;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SideWalk;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Center;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Con_3;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Con_2;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   Con_1;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Central_Mesh;                                      // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Road_to_Connect;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_sidewalk;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Traffic_Light_Meshes;                          // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Con_Text_Visibility;                               // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Connect_Road_At_Con_Location;                      // 0x02FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_Road_At_Con_Location;                         // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERoad_T_JonctionType                          Select_Jonction_Type;                              // 0x02FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConnectorsNum                                Choose_Connector;                                  // 0x02FE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B89[0x1];                                     // 0x02FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Con_1_Location;                                    // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Can_2_Location;                                    // 0x0318(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Can_3_Location;                                    // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARoad_BP_C*                             HitActor;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Con_3_Rot;                                         // 0x0350(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Con_1_Rot;                                         // 0x0368(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Can_Override__Material;                            // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8A[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Road_Material_0;                                   // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Road_Material_1;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Sides_Walk_Material_0;                             // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Splines_Index_To_Connect;                          // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8B[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Con_2_Rot;                                         // 0x03A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        Trace_Radius;                                      // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Spline_Tangent_Lenght_At_Con_Location;             // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALandscapeProxy*                        Landscape;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Num_Of_Iteration;                                  // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Layer_To_Apply;                                    // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_of_Subdivisions_to_be_added;                // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lower_Terrain;                                     // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Raise_Terrain;                                     // 0x03E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8C[0x2];                                     // 0x03E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Side_Falloff;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Sides_Walk_Material_1;                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Add_Lights;                                        // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dynamic_Indirect_Lighting;                         // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Shadows;                                      // 0x03FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8D[0x1];                                     // 0x03FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Light_Color;                                       // 0x03FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B8E[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Traffic_Lights_XY_Offset;                          // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Right_Light_XY_Offset;                             // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Right_Light_Z_Offset;                              // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Left_Light_X_Offset;                               // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Left_Light_Y_Offset;                               // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Left_Light_Z_Offset;                               // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Intensity;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Attenuation_Radius;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Outer_Conne_Angle;                                 // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Inner_Conne_Angle;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Source_Radius;                                     // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Source_Lenght;                                     // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Indirect_Lighting_Intensity;                       // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Falloff_Exponent_;                           // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Function_Fade_Distance;                      // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Culling_Distance_;                                 // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Culling_Distance__Traffic_Lights_;                 // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Shadow_;                                      // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Shadow__Traffic_Lights_;                      // 0x0499(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cast_Shadow__Sidewalk_;                            // 0x049A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Road_At_End();
	void Add_Road_At_End_();
	void Adjust_Landscape();
	void Connect_Road_To_(const struct FVector& Location, const struct FRotator& Con_Rotation);
	void ExecuteUbergraph_Road_T_Jonction_BP(int32 EntryPoint);
	void Perform_Landscape_Adjustation();
	void ReceiveBeginPlay();
	void Set_Road_Location(const struct FVector& Location, class AActor* Param_HitActor, const struct FRotator& Rotation);
	void Spawn_Road_At_this_Con();
	void Spawn_Road_At_this_Con_();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Road_T_Jonction_BP_C">();
	}
	static class ARoad_T_Jonction_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARoad_T_Jonction_BP_C>();
	}
};
static_assert(alignof(ARoad_T_Jonction_BP_C) == 0x000008, "Wrong alignment on ARoad_T_Jonction_BP_C");
static_assert(sizeof(ARoad_T_Jonction_BP_C) == 0x0004A0, "Wrong size on ARoad_T_Jonction_BP_C");
static_assert(offsetof(ARoad_T_Jonction_BP_C, UberGraphFrame) == 0x000298, "Member 'ARoad_T_Jonction_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Traffic_Light_2) == 0x0002A0, "Member 'ARoad_T_Jonction_BP_C::Traffic_Light_2' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Traffic_Light_1) == 0x0002A8, "Member 'ARoad_T_Jonction_BP_C::Traffic_Light_1' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, SideWalk) == 0x0002B0, "Member 'ARoad_T_Jonction_BP_C::SideWalk' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Spline) == 0x0002B8, "Member 'ARoad_T_Jonction_BP_C::Spline' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Center) == 0x0002C0, "Member 'ARoad_T_Jonction_BP_C::Center' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_3) == 0x0002C8, "Member 'ARoad_T_Jonction_BP_C::Con_3' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_2) == 0x0002D0, "Member 'ARoad_T_Jonction_BP_C::Con_2' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_1) == 0x0002D8, "Member 'ARoad_T_Jonction_BP_C::Con_1' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Central_Mesh) == 0x0002E0, "Member 'ARoad_T_Jonction_BP_C::Central_Mesh' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, DefaultSceneRoot) == 0x0002E8, "Member 'ARoad_T_Jonction_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Road_to_Connect) == 0x0002F0, "Member 'ARoad_T_Jonction_BP_C::Road_to_Connect' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Add_sidewalk) == 0x0002F8, "Member 'ARoad_T_Jonction_BP_C::Add_sidewalk' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Add_Traffic_Light_Meshes) == 0x0002F9, "Member 'ARoad_T_Jonction_BP_C::Add_Traffic_Light_Meshes' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_Text_Visibility) == 0x0002FA, "Member 'ARoad_T_Jonction_BP_C::Con_Text_Visibility' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Connect_Road_At_Con_Location) == 0x0002FB, "Member 'ARoad_T_Jonction_BP_C::Connect_Road_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Move_Road_At_Con_Location) == 0x0002FC, "Member 'ARoad_T_Jonction_BP_C::Move_Road_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Select_Jonction_Type) == 0x0002FD, "Member 'ARoad_T_Jonction_BP_C::Select_Jonction_Type' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Choose_Connector) == 0x0002FE, "Member 'ARoad_T_Jonction_BP_C::Choose_Connector' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_1_Location) == 0x000300, "Member 'ARoad_T_Jonction_BP_C::Con_1_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Can_2_Location) == 0x000318, "Member 'ARoad_T_Jonction_BP_C::Can_2_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Can_3_Location) == 0x000330, "Member 'ARoad_T_Jonction_BP_C::Can_3_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, HitActor) == 0x000348, "Member 'ARoad_T_Jonction_BP_C::HitActor' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_3_Rot) == 0x000350, "Member 'ARoad_T_Jonction_BP_C::Con_3_Rot' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_1_Rot) == 0x000368, "Member 'ARoad_T_Jonction_BP_C::Con_1_Rot' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Can_Override__Material) == 0x000380, "Member 'ARoad_T_Jonction_BP_C::Can_Override__Material' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Road_Material_0) == 0x000388, "Member 'ARoad_T_Jonction_BP_C::Road_Material_0' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Road_Material_1) == 0x000390, "Member 'ARoad_T_Jonction_BP_C::Road_Material_1' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Sides_Walk_Material_0) == 0x000398, "Member 'ARoad_T_Jonction_BP_C::Sides_Walk_Material_0' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Splines_Index_To_Connect) == 0x0003A0, "Member 'ARoad_T_Jonction_BP_C::Splines_Index_To_Connect' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Con_2_Rot) == 0x0003A8, "Member 'ARoad_T_Jonction_BP_C::Con_2_Rot' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Trace_Radius) == 0x0003C0, "Member 'ARoad_T_Jonction_BP_C::Trace_Radius' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Spline_Tangent_Lenght_At_Con_Location) == 0x0003C8, "Member 'ARoad_T_Jonction_BP_C::Spline_Tangent_Lenght_At_Con_Location' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Landscape) == 0x0003D0, "Member 'ARoad_T_Jonction_BP_C::Landscape' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Num_Of_Iteration) == 0x0003D8, "Member 'ARoad_T_Jonction_BP_C::Num_Of_Iteration' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Layer_To_Apply) == 0x0003DC, "Member 'ARoad_T_Jonction_BP_C::Layer_To_Apply' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Number_of_Subdivisions_to_be_added) == 0x0003E0, "Member 'ARoad_T_Jonction_BP_C::Number_of_Subdivisions_to_be_added' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Lower_Terrain) == 0x0003E4, "Member 'ARoad_T_Jonction_BP_C::Lower_Terrain' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Raise_Terrain) == 0x0003E5, "Member 'ARoad_T_Jonction_BP_C::Raise_Terrain' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Side_Falloff) == 0x0003E8, "Member 'ARoad_T_Jonction_BP_C::Side_Falloff' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Sides_Walk_Material_1) == 0x0003F0, "Member 'ARoad_T_Jonction_BP_C::Sides_Walk_Material_1' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Add_Lights) == 0x0003F8, "Member 'ARoad_T_Jonction_BP_C::Add_Lights' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Dynamic_Indirect_Lighting) == 0x0003F9, "Member 'ARoad_T_Jonction_BP_C::Dynamic_Indirect_Lighting' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Cast_Shadows) == 0x0003FA, "Member 'ARoad_T_Jonction_BP_C::Cast_Shadows' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Light_Color) == 0x0003FC, "Member 'ARoad_T_Jonction_BP_C::Light_Color' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Traffic_Lights_XY_Offset) == 0x000410, "Member 'ARoad_T_Jonction_BP_C::Traffic_Lights_XY_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Right_Light_XY_Offset) == 0x000418, "Member 'ARoad_T_Jonction_BP_C::Right_Light_XY_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Right_Light_Z_Offset) == 0x000420, "Member 'ARoad_T_Jonction_BP_C::Right_Light_Z_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Left_Light_X_Offset) == 0x000428, "Member 'ARoad_T_Jonction_BP_C::Left_Light_X_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Left_Light_Y_Offset) == 0x000430, "Member 'ARoad_T_Jonction_BP_C::Left_Light_Y_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Left_Light_Z_Offset) == 0x000438, "Member 'ARoad_T_Jonction_BP_C::Left_Light_Z_Offset' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Light_Intensity) == 0x000440, "Member 'ARoad_T_Jonction_BP_C::Light_Intensity' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Attenuation_Radius) == 0x000448, "Member 'ARoad_T_Jonction_BP_C::Attenuation_Radius' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Outer_Conne_Angle) == 0x000450, "Member 'ARoad_T_Jonction_BP_C::Outer_Conne_Angle' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Inner_Conne_Angle) == 0x000458, "Member 'ARoad_T_Jonction_BP_C::Inner_Conne_Angle' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Source_Radius) == 0x000460, "Member 'ARoad_T_Jonction_BP_C::Source_Radius' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Source_Lenght) == 0x000468, "Member 'ARoad_T_Jonction_BP_C::Source_Lenght' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Indirect_Lighting_Intensity) == 0x000470, "Member 'ARoad_T_Jonction_BP_C::Indirect_Lighting_Intensity' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Light_Falloff_Exponent_) == 0x000478, "Member 'ARoad_T_Jonction_BP_C::Light_Falloff_Exponent_' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Light_Function_Fade_Distance) == 0x000480, "Member 'ARoad_T_Jonction_BP_C::Light_Function_Fade_Distance' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Culling_Distance_) == 0x000488, "Member 'ARoad_T_Jonction_BP_C::Culling_Distance_' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Culling_Distance__Traffic_Lights_) == 0x000490, "Member 'ARoad_T_Jonction_BP_C::Culling_Distance__Traffic_Lights_' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Cast_Shadow_) == 0x000498, "Member 'ARoad_T_Jonction_BP_C::Cast_Shadow_' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Cast_Shadow__Traffic_Lights_) == 0x000499, "Member 'ARoad_T_Jonction_BP_C::Cast_Shadow__Traffic_Lights_' has a wrong offset!");
static_assert(offsetof(ARoad_T_Jonction_BP_C, Cast_Shadow__Sidewalk_) == 0x00049A, "Member 'ARoad_T_Jonction_BP_C::Cast_Shadow__Sidewalk_' has a wrong offset!");

}

