#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowNodes

#include "Basic.hpp"

#include "DataflowCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct DataflowNodes.FloatOverrideDataflowNode
// 0x0018 (0x0100 - 0x00E8)
struct FFloatOverrideDataflowNode final : public FDataflowNode
{
public:
	class FName                                   PropertyName;                                      // 0x00E8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   KeyName;                                           // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ValueOut;                                          // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165B[0x4];                                     // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFloatOverrideDataflowNode) == 0x000008, "Wrong alignment on FFloatOverrideDataflowNode");
static_assert(sizeof(FFloatOverrideDataflowNode) == 0x000100, "Wrong size on FFloatOverrideDataflowNode");
static_assert(offsetof(FFloatOverrideDataflowNode, PropertyName) == 0x0000E8, "Member 'FFloatOverrideDataflowNode::PropertyName' has a wrong offset!");
static_assert(offsetof(FFloatOverrideDataflowNode, KeyName) == 0x0000F0, "Member 'FFloatOverrideDataflowNode::KeyName' has a wrong offset!");
static_assert(offsetof(FFloatOverrideDataflowNode, ValueOut) == 0x0000F8, "Member 'FFloatOverrideDataflowNode::ValueOut' has a wrong offset!");

// ScriptStruct DataflowNodes.SelectionSetDataflowNode
// 0x0020 (0x0108 - 0x00E8)
struct FSelectionSetDataflowNode final : public FDataflowNode
{
public:
	class FString                                 Indices;                                           // 0x00E8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 IndicesOut;                                        // 0x00F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSelectionSetDataflowNode) == 0x000008, "Wrong alignment on FSelectionSetDataflowNode");
static_assert(sizeof(FSelectionSetDataflowNode) == 0x000108, "Wrong size on FSelectionSetDataflowNode");
static_assert(offsetof(FSelectionSetDataflowNode, Indices) == 0x0000E8, "Member 'FSelectionSetDataflowNode::Indices' has a wrong offset!");
static_assert(offsetof(FSelectionSetDataflowNode, IndicesOut) == 0x0000F8, "Member 'FSelectionSetDataflowNode::IndicesOut' has a wrong offset!");

// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
// 0x0010 (0x00F8 - 0x00E8)
struct FGetSkeletalMeshDataflowNode final : public FDataflowNode
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x00E8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetSkeletalMeshDataflowNode) == 0x000008, "Wrong alignment on FGetSkeletalMeshDataflowNode");
static_assert(sizeof(FGetSkeletalMeshDataflowNode) == 0x0000F8, "Wrong size on FGetSkeletalMeshDataflowNode");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, SkeletalMesh) == 0x0000E8, "Member 'FGetSkeletalMeshDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetSkeletalMeshDataflowNode::PropertyName' has a wrong offset!");

// ScriptStruct DataflowNodes.GetSkeletonDataflowNode
// 0x0010 (0x00F8 - 0x00E8)
struct FGetSkeletonDataflowNode final : public FDataflowNode
{
public:
	class USkeleton*                              Skeleton;                                          // 0x00E8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetSkeletonDataflowNode) == 0x000008, "Wrong alignment on FGetSkeletonDataflowNode");
static_assert(sizeof(FGetSkeletonDataflowNode) == 0x0000F8, "Wrong size on FGetSkeletonDataflowNode");
static_assert(offsetof(FGetSkeletonDataflowNode, Skeleton) == 0x0000E8, "Member 'FGetSkeletonDataflowNode::Skeleton' has a wrong offset!");
static_assert(offsetof(FGetSkeletonDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetSkeletonDataflowNode::PropertyName' has a wrong offset!");

// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
// 0x0020 (0x0108 - 0x00E8)
struct FSkeletalMeshBoneDataflowNode final : public FDataflowNode
{
public:
	class FName                                   BoneName;                                          // 0x00E8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoneIndexOut;                                      // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00FC(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165C[0x4];                                     // 0x0104(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSkeletalMeshBoneDataflowNode) == 0x000008, "Wrong alignment on FSkeletalMeshBoneDataflowNode");
static_assert(sizeof(FSkeletalMeshBoneDataflowNode) == 0x000108, "Wrong size on FSkeletalMeshBoneDataflowNode");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneName) == 0x0000E8, "Member 'FSkeletalMeshBoneDataflowNode::BoneName' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, SkeletalMesh) == 0x0000F0, "Member 'FSkeletalMeshBoneDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneIndexOut) == 0x0000F8, "Member 'FSkeletalMeshBoneDataflowNode::BoneIndexOut' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, PropertyName) == 0x0000FC, "Member 'FSkeletalMeshBoneDataflowNode::PropertyName' has a wrong offset!");

// ScriptStruct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
// 0x0078 (0x0160 - 0x00E8)
struct FSkeletalMeshReferenceTransformDataflowNode final : public FDataflowNode
{
public:
	class USkeletalMesh*                          SkeletalMeshIn;                                    // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BoneIndexIn;                                       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165D[0xC];                                     // 0x00F4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             TransformOut;                                      // 0x0100(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSkeletalMeshReferenceTransformDataflowNode) == 0x000010, "Wrong alignment on FSkeletalMeshReferenceTransformDataflowNode");
static_assert(sizeof(FSkeletalMeshReferenceTransformDataflowNode) == 0x000160, "Wrong size on FSkeletalMeshReferenceTransformDataflowNode");
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, SkeletalMeshIn) == 0x0000E8, "Member 'FSkeletalMeshReferenceTransformDataflowNode::SkeletalMeshIn' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, BoneIndexIn) == 0x0000F0, "Member 'FSkeletalMeshReferenceTransformDataflowNode::BoneIndexIn' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, TransformOut) == 0x000100, "Member 'FSkeletalMeshReferenceTransformDataflowNode::TransformOut' has a wrong offset!");

// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
// 0x0010 (0x00F8 - 0x00E8)
struct FGetStaticMeshDataflowNode final : public FDataflowNode
{
public:
	class UStaticMesh*                            StaticMesh;                                        // 0x00E8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetStaticMeshDataflowNode) == 0x000008, "Wrong alignment on FGetStaticMeshDataflowNode");
static_assert(sizeof(FGetStaticMeshDataflowNode) == 0x0000F8, "Wrong size on FGetStaticMeshDataflowNode");
static_assert(offsetof(FGetStaticMeshDataflowNode, StaticMesh) == 0x0000E8, "Member 'FGetStaticMeshDataflowNode::StaticMesh' has a wrong offset!");
static_assert(offsetof(FGetStaticMeshDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetStaticMeshDataflowNode::PropertyName' has a wrong offset!");

}

