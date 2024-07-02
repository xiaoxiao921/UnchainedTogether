#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StructUtils

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum StructUtils.EPropertyBagPropertyType
// NumValues: 0x0012
enum class EPropertyBagPropertyType : uint8
{
	None                                     = 0,
	Bool                                     = 1,
	Byte                                     = 2,
	Int32                                    = 3,
	Int64                                    = 4,
	Float                                    = 5,
	Double                                   = 6,
	Name                                     = 7,
	String                                   = 8,
	Text                                     = 9,
	Enum                                     = 10,
	Struct                                   = 11,
	Object                                   = 12,
	SoftObject                               = 13,
	Class                                    = 14,
	SoftClass                                = 15,
	Count                                    = 16,
	EPropertyBagPropertyType_MAX             = 17,
};

// Enum StructUtils.EPropertyBagContainerType
// NumValues: 0x0004
enum class EPropertyBagContainerType : uint8
{
	None                                     = 0,
	Array                                    = 1,
	Count                                    = 2,
	EPropertyBagContainerType_MAX            = 3,
};

// Enum StructUtils.EPropertyBagResult
// NumValues: 0x0005
enum class EPropertyBagResult : uint8
{
	Success                                  = 0,
	TypeMismatch                             = 1,
	OutOfBounds                              = 2,
	PropertyNotFound                         = 3,
	EPropertyBagResult_MAX                   = 4,
};

// Enum StructUtils.EPropertyBagMissingEnum
// NumValues: 0x0002
enum class EPropertyBagMissingEnum : uint8
{
	Missing                                  = 0,
	EPropertyBagMissingEnum_MAX              = 1,
};

// ScriptStruct StructUtils.InstancedStruct
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FInstancedStruct final
{
public:
	uint8                                         Pad_2672[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInstancedStruct) == 0x000008, "Wrong alignment on FInstancedStruct");
static_assert(sizeof(FInstancedStruct) == 0x000010, "Wrong size on FInstancedStruct");

// ScriptStruct StructUtils.InstancedStructContainer
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FInstancedStructContainer final
{
public:
	uint8                                         Pad_2673[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInstancedStructContainer) == 0x000008, "Wrong alignment on FInstancedStructContainer");
static_assert(sizeof(FInstancedStructContainer) == 0x000010, "Wrong size on FInstancedStructContainer");

// ScriptStruct StructUtils.PropertyBagContainerTypes
// 0x0003 (0x0003 - 0x0000)
struct FPropertyBagContainerTypes final
{
public:
	uint8                                         Pad_2674[0x3];                                     // 0x0000(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyBagContainerTypes) == 0x000001, "Wrong alignment on FPropertyBagContainerTypes");
static_assert(sizeof(FPropertyBagContainerTypes) == 0x000003, "Wrong size on FPropertyBagContainerTypes");

// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
// 0x0018 (0x0018 - 0x0000)
struct FPropertyBagPropertyDescMetaData final
{
public:
	class FName                                   Key;                                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPropertyBagPropertyDescMetaData) == 0x000008, "Wrong alignment on FPropertyBagPropertyDescMetaData");
static_assert(sizeof(FPropertyBagPropertyDescMetaData) == 0x000018, "Wrong size on FPropertyBagPropertyDescMetaData");
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Key) == 0x000000, "Member 'FPropertyBagPropertyDescMetaData::Key' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDescMetaData, Value) == 0x000008, "Member 'FPropertyBagPropertyDescMetaData::Value' has a wrong offset!");

// ScriptStruct StructUtils.PropertyBagPropertyDesc
// 0x0030 (0x0030 - 0x0000)
struct FPropertyBagPropertyDesc final
{
public:
	class UObject*                                ValueTypeObject;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0008(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyBagPropertyType                      ValueType;                                         // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPropertyBagContainerTypes             ContainerTypes;                                    // 0x0021(0x0003)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2675[0xC];                                     // 0x0024(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyBagPropertyDesc) == 0x000008, "Wrong alignment on FPropertyBagPropertyDesc");
static_assert(sizeof(FPropertyBagPropertyDesc) == 0x000030, "Wrong size on FPropertyBagPropertyDesc");
static_assert(offsetof(FPropertyBagPropertyDesc, ValueTypeObject) == 0x000000, "Member 'FPropertyBagPropertyDesc::ValueTypeObject' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ID) == 0x000008, "Member 'FPropertyBagPropertyDesc::ID' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, Name) == 0x000018, "Member 'FPropertyBagPropertyDesc::Name' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ValueType) == 0x000020, "Member 'FPropertyBagPropertyDesc::ValueType' has a wrong offset!");
static_assert(offsetof(FPropertyBagPropertyDesc, ContainerTypes) == 0x000021, "Member 'FPropertyBagPropertyDesc::ContainerTypes' has a wrong offset!");

// ScriptStruct StructUtils.InstancedPropertyBag
// 0x0010 (0x0010 - 0x0000)
struct FInstancedPropertyBag final
{
public:
	struct FInstancedStruct                       Value;                                             // 0x0000(0x0010)(Edit, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FInstancedPropertyBag) == 0x000008, "Wrong alignment on FInstancedPropertyBag");
static_assert(sizeof(FInstancedPropertyBag) == 0x000010, "Wrong size on FInstancedPropertyBag");
static_assert(offsetof(FInstancedPropertyBag, Value) == 0x000000, "Member 'FInstancedPropertyBag::Value' has a wrong offset!");

// ScriptStruct StructUtils.PropertyBagMissingStruct
// 0x0001 (0x0001 - 0x0000)
struct FPropertyBagMissingStruct final
{
public:
	uint8                                         Pad_2676[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyBagMissingStruct) == 0x000001, "Wrong alignment on FPropertyBagMissingStruct");
static_assert(sizeof(FPropertyBagMissingStruct) == 0x000001, "Wrong size on FPropertyBagMissingStruct");

// ScriptStruct StructUtils.SharedStruct
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FSharedStruct final
{
public:
	uint8                                         Pad_2677[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSharedStruct) == 0x000008, "Wrong alignment on FSharedStruct");
static_assert(sizeof(FSharedStruct) == 0x000010, "Wrong size on FSharedStruct");

// ScriptStruct StructUtils.ConstSharedStruct
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstSharedStruct final
{
public:
	uint8                                         Pad_2678[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FConstSharedStruct) == 0x000008, "Wrong alignment on FConstSharedStruct");
static_assert(sizeof(FConstSharedStruct) == 0x000010, "Wrong size on FConstSharedStruct");

}

