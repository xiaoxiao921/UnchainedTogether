#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Functions_Collection

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Functions_Collection.Functions_Collection_C.Calculate Actors Meshes Ratio
// 0x0128 (0x0128 - 0x0000)
struct Functions_Collection_C_Calculate_Actors_Meshes_Ratio final
{
public:
	class AStaticMeshActor*                       Source_Mesh;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       Target_Mesh;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_X;                                           // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_Y;                                           // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_Z;                                           // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       Source_Mesh_0;                                     // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       Target_Mesh_0;                                     // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue_1;            // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size_1; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size_1; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size_1; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh_1; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio) == 0x000008, "Wrong alignment on Functions_Collection_C_Calculate_Actors_Meshes_Ratio");
static_assert(sizeof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio) == 0x000128, "Wrong size on Functions_Collection_C_Calculate_Actors_Meshes_Ratio");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Source_Mesh) == 0x000000, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Source_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Target_Mesh) == 0x000008, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Target_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, __WorldContext) == 0x000010, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::__WorldContext' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Ratio_X) == 0x000018, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Ratio_X' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Ratio_Y) == 0x000020, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Ratio_Y' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Ratio_Z) == 0x000028, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Ratio_Z' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Source_Mesh_0) == 0x000030, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Source_Mesh_0' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, Target_Mesh_0) == 0x000038, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::Target_Mesh_0' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_GetActorScale3D_ReturnValue) == 0x000040, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size) == 0x000058, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size) == 0x000060, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size) == 0x000068, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh) == 0x000070, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_X) == 0x000078, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_Y) == 0x000080, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_Z) == 0x000088, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_GetActorScale3D_ReturnValue_1) == 0x000090, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_GetActorScale3D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size_1) == 0x0000A8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size_1) == 0x0000B0, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size_1) == 0x0000B8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh_1) == 0x0000C0, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_X_1) == 0x0000C8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_Y_1) == 0x0000D0, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_BreakVector_Z_1) == 0x0000D8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000E8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000F0, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000100, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000108, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000110, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000118, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Actors_Meshes_Ratio, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000120, "Member 'Functions_Collection_C_Calculate_Actors_Meshes_Ratio::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");

// Function Functions_Collection.Functions_Collection_C.Calculate Meshes Ratio
// 0x0080 (0x0080 - 0x0000)
struct Functions_Collection_C_Calculate_Meshes_Ratio final
{
public:
	class UStaticMesh*                            Source_Mesh;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Target_Mesh;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_X;                                           // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_Y;                                           // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Ratio_Z;                                           // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Source_Mesh_0;                                     // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Target_Mesh_0;                                     // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_Static_Mesh_Size_Mesh_X_size;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_Static_Mesh_Size_Mesh_Y_size;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_Static_Mesh_Size_Mesh_Z_size;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CallFunc_Calculate_Static_Mesh_Size_Static_Mesh;   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Functions_Collection_C_Calculate_Meshes_Ratio) == 0x000008, "Wrong alignment on Functions_Collection_C_Calculate_Meshes_Ratio");
static_assert(sizeof(Functions_Collection_C_Calculate_Meshes_Ratio) == 0x000080, "Wrong size on Functions_Collection_C_Calculate_Meshes_Ratio");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Source_Mesh) == 0x000000, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Source_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Target_Mesh) == 0x000008, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Target_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, __WorldContext) == 0x000010, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::__WorldContext' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Ratio_X) == 0x000018, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Ratio_X' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Ratio_Y) == 0x000020, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Ratio_Y' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Ratio_Z) == 0x000028, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Ratio_Z' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Source_Mesh_0) == 0x000030, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Source_Mesh_0' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, Target_Mesh_0) == 0x000038, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::Target_Mesh_0' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_Static_Mesh_Size_Mesh_X_size) == 0x000040, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_Static_Mesh_Size_Mesh_X_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_Static_Mesh_Size_Mesh_Y_size) == 0x000048, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_Static_Mesh_Size_Mesh_Y_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_Static_Mesh_Size_Mesh_Z_size) == 0x000050, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_Static_Mesh_Size_Mesh_Z_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_Static_Mesh_Size_Static_Mesh) == 0x000058, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_Static_Mesh_Size_Static_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size) == 0x000060, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_X_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size) == 0x000068, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Y_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size) == 0x000070, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Mesh_Z_size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Meshes_Ratio, CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh) == 0x000078, "Member 'Functions_Collection_C_Calculate_Meshes_Ratio::CallFunc_Calculate_static_Mesh_Actor_Size_Static_Mesh' has a wrong offset!");

// Function Functions_Collection.Functions_Collection_C.Calculate static Mesh Actor Size
// 0x00A8 (0x00A8 - 0x0000)
struct Functions_Collection_C_Calculate_static_Mesh_Actor_Size final
{
public:
	class AStaticMeshActor*                       Static_Mesh;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_X_Size;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_Y_Size;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_Z_Size;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       Static_Mesh_0;                                     // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocalBounds_Min;                       // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocalBounds_Max;                       // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size) == 0x000008, "Wrong alignment on Functions_Collection_C_Calculate_static_Mesh_Actor_Size");
static_assert(sizeof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size) == 0x0000A8, "Wrong size on Functions_Collection_C_Calculate_static_Mesh_Actor_Size");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, Static_Mesh) == 0x000000, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::Static_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, __WorldContext) == 0x000008, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::__WorldContext' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, Mesh_X_Size) == 0x000010, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::Mesh_X_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, Mesh_Y_Size) == 0x000018, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::Mesh_Y_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, Mesh_Z_Size) == 0x000020, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::Mesh_Z_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, Static_Mesh_0) == 0x000028, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::Static_Mesh_0' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_GetLocalBounds_Min) == 0x000030, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_GetLocalBounds_Min' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_GetLocalBounds_Max) == 0x000048, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_GetLocalBounds_Max' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_Multiply_VectorInt_ReturnValue) == 0x000060, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_BreakVector_X) == 0x000090, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_BreakVector_Y) == 0x000098, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_static_Mesh_Actor_Size, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'Functions_Collection_C_Calculate_static_Mesh_Actor_Size::CallFunc_BreakVector_Z' has a wrong offset!");

// Function Functions_Collection.Functions_Collection_C.Calculate Static Mesh Size
// 0x00B0 (0x00B0 - 0x0000)
struct Functions_Collection_C_Calculate_Static_Mesh_Size final
{
public:
	class UStaticMesh*                            Static_Meshe;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_X_Size;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_Y_Size;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Mesh_Z_Size;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Static_Mesh;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBox                                   CallFunc_GetBoundingBox_ReturnValue;               // 0x0030(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Functions_Collection_C_Calculate_Static_Mesh_Size) == 0x000008, "Wrong alignment on Functions_Collection_C_Calculate_Static_Mesh_Size");
static_assert(sizeof(Functions_Collection_C_Calculate_Static_Mesh_Size) == 0x0000B0, "Wrong size on Functions_Collection_C_Calculate_Static_Mesh_Size");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, Static_Meshe) == 0x000000, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::Static_Meshe' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, __WorldContext) == 0x000008, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::__WorldContext' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, Mesh_X_Size) == 0x000010, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::Mesh_X_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, Mesh_Y_Size) == 0x000018, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::Mesh_Y_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, Mesh_Z_Size) == 0x000020, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::Mesh_Z_Size' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, Static_Mesh) == 0x000028, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::Static_Mesh' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_GetBoundingBox_ReturnValue) == 0x000030, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_GetBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_Multiply_VectorInt_ReturnValue) == 0x000068, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_BreakVector_X) == 0x000098, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Functions_Collection_C_Calculate_Static_Mesh_Size, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'Functions_Collection_C_Calculate_Static_Mesh_Size::CallFunc_BreakVector_Z' has a wrong offset!");

}
