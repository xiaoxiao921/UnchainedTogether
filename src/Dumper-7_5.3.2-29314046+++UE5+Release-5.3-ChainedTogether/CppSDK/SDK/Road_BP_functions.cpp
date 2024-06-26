#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Road_BP

#include "Basic.hpp"

#include "Road_BP_classes.hpp"
#include "Road_BP_parameters.hpp"


namespace SDK
{

// Function Road_BP.Road_BP_C.Adjust Landscape To Road
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Adjust_Landscape_To_Road()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Adjust Landscape To Road");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Align Road To Landscape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Align_Road_To_Landscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Align Road To Landscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Align Road To Landscape 
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Align_Road_To_Landscape_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Align Road To Landscape ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.BuildRoadMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Loop_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      RoadElementMesh                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        SidesWalkStartScale                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        SidesWalkLocationOffset                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        SidesWalkEndScale                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material_s_Slot_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material_s_Slot_1_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material_s_Slot_2                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material_s_Slot_3                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material_s_Slot_4                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Cast_Shadow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Maximum_Draw_Distance                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Can_Override_Material                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::BuildRoadMesh(int32 Loop_Index, class UStaticMesh* RoadElementMesh, const struct FVector2D& SidesWalkStartScale, const struct FVector2D& SidesWalkLocationOffset, const struct FVector2D& SidesWalkEndScale, class UMaterialInstance* Material_s_Slot_0, class UMaterialInstance* Material_s_Slot_1_, class UMaterialInstance* Material_s_Slot_2, class UMaterialInstance* Material_s_Slot_3, class UMaterialInstance* Material_s_Slot_4, bool Cast_Shadow, double Maximum_Draw_Distance, bool Can_Override_Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "BuildRoadMesh");

	Params::Road_BP_C_BuildRoadMesh Parms{};

	Parms.Loop_Index = Loop_Index;
	Parms.RoadElementMesh = RoadElementMesh;
	Parms.SidesWalkStartScale = std::move(SidesWalkStartScale);
	Parms.SidesWalkLocationOffset = std::move(SidesWalkLocationOffset);
	Parms.SidesWalkEndScale = std::move(SidesWalkEndScale);
	Parms.Material_s_Slot_0 = Material_s_Slot_0;
	Parms.Material_s_Slot_1_ = Material_s_Slot_1_;
	Parms.Material_s_Slot_2 = Material_s_Slot_2;
	Parms.Material_s_Slot_3 = Material_s_Slot_3;
	Parms.Material_s_Slot_4 = Material_s_Slot_4;
	Parms.Cast_Shadow = Cast_Shadow;
	Parms.Maximum_Draw_Distance = Maximum_Draw_Distance;
	Parms.Can_Override_Material = Can_Override_Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.BuildSideGuardMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Right_or_Middle_or_Left                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Mesh_Y_Z_Scale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  X_Scale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Param_Location_Offset                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Number_Of_Meshes                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    MakeStraight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Add_Lights                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Double_lights_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Use_Spacing_Method                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Culling_Distance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Cast_Shadow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Remove_first_mesh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Remove_last_mesh                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::BuildSideGuardMesh(class UStaticMesh* Mesh, int32 Right_or_Middle_or_Left, const struct FVector2D& Mesh_Y_Z_Scale, double X_Scale, const struct FVector2D& Param_Location_Offset, int32 Number_Of_Meshes, bool MakeStraight, bool Add_Lights, bool Is_Double_lights_, bool Use_Spacing_Method, double Spacing, double Culling_Distance, bool Cast_Shadow, bool Remove_first_mesh, bool Remove_last_mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "BuildSideGuardMesh");

	Params::Road_BP_C_BuildSideGuardMesh Parms{};

	Parms.Mesh = Mesh;
	Parms.Right_or_Middle_or_Left = Right_or_Middle_or_Left;
	Parms.Mesh_Y_Z_Scale = std::move(Mesh_Y_Z_Scale);
	Parms.X_Scale = X_Scale;
	Parms.Param_Location_Offset = std::move(Param_Location_Offset);
	Parms.Number_Of_Meshes = Number_Of_Meshes;
	Parms.MakeStraight = MakeStraight;
	Parms.Add_Lights = Add_Lights;
	Parms.Is_Double_lights_ = Is_Double_lights_;
	Parms.Use_Spacing_Method = Use_Spacing_Method;
	Parms.Spacing = Spacing;
	Parms.Culling_Distance = Culling_Distance;
	Parms.Cast_Shadow = Cast_Shadow;
	Parms.Remove_first_mesh = Remove_first_mesh;
	Parms.Remove_last_mesh = Remove_last_mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.Calculate Mesh Size
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMesh*                      StaticMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_X_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Y_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Mesh_Z_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Static_Mesh                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::Calculate_Mesh_Size(class UStaticMesh* StaticMesh, double* Mesh_X_Size, double* Mesh_Y_Size, double* Mesh_Z_Size, class UStaticMesh** Static_Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Calculate Mesh Size");

	Params::Road_BP_C_Calculate_Mesh_Size Parms{};

	Parms.StaticMesh = StaticMesh;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh_X_Size != nullptr)
		*Mesh_X_Size = Parms.Mesh_X_Size;

	if (Mesh_Y_Size != nullptr)
		*Mesh_Y_Size = Parms.Mesh_Y_Size;

	if (Mesh_Z_Size != nullptr)
		*Mesh_Z_Size = Parms.Mesh_Z_Size;

	if (Static_Mesh != nullptr)
		*Static_Mesh = Parms.Static_Mesh;
}


// Function Road_BP.Road_BP_C.Connect Road 
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Connect_Road_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Connect Road ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.ConnectRoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_Conection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Index_Rotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Index_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::ConnectRoad(int32 Index_Conection, const struct FRotator& Index_Rotation, const struct FVector& Index_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "ConnectRoad");

	Params::Road_BP_C_ConnectRoad Parms{};

	Parms.Index_Conection = Index_Conection;
	Parms.Index_Rotation = std::move(Index_Rotation);
	Parms.Index_Location = std::move(Index_Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.DrawBridgeSupport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Cast_Shadow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Culling_Distance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_RemoveFirstSupport                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_RemoveLastSupport                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::DrawBridgeSupport(bool Cast_Shadow, double Culling_Distance, bool Param_RemoveFirstSupport, bool Param_RemoveLastSupport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "DrawBridgeSupport");

	Params::Road_BP_C_DrawBridgeSupport Parms{};

	Parms.Cast_Shadow = Cast_Shadow;
	Parms.Culling_Distance = Culling_Distance;
	Parms.Param_RemoveFirstSupport = Param_RemoveFirstSupport;
	Parms.Param_RemoveLastSupport = Param_RemoveLastSupport;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.ExecuteUbergraph_Road_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoad_BP_C::ExecuteUbergraph_Road_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "ExecuteUbergraph_Road_BP");

	Params::Road_BP_C_ExecuteUbergraph_Road_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.Move Road At Index Location
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Move_Road_At_Index_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Move Road At Index Location");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Perform Landscape Adjustation
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Perform_Landscape_Adjustation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Perform Landscape Adjustation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.SetRoadLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Hit_Actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARoad_BP_C::SetRoadLocation(class AActor* Hit_Actor, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "SetRoadLocation");

	Params::Road_BP_C_SetRoadLocation Parms{};

	Parms.Hit_Actor = Hit_Actor;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Road_BP.Road_BP_C.Spawn  Actor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Spawn__Actor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Spawn  Actor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Spawn Blueprint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Spawn_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Spawn Blueprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Spawn Blueprint 
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Spawn_Blueprint_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Spawn Blueprint ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Spawn Road Intersection
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Spawn_Road_Intersection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Spawn Road Intersection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Update Spline 
// (Public, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Update_Spline_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Update Spline ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.Update Spline  
// (BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::Update_Spline__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "Update Spline  ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Road_BP.Road_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARoad_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Road_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

