#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "InterchangeCore_structs.hpp"


namespace SDK
{

// Class InterchangeCore.InterchangeFactoryBase
// 0x0008 (0x0030 - 0x0028)
class UInterchangeFactoryBase : public UObject
{
public:
	class UInterchangeResultsContainer*           Results;                                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UClass* GetFactoryClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeFactoryBase">();
	}
	static class UInterchangeFactoryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeFactoryBase>();
	}
};
static_assert(alignof(UInterchangeFactoryBase) == 0x000008, "Wrong alignment on UInterchangeFactoryBase");
static_assert(sizeof(UInterchangeFactoryBase) == 0x000030, "Wrong size on UInterchangeFactoryBase");
static_assert(offsetof(UInterchangeFactoryBase, Results) == 0x000028, "Member 'UInterchangeFactoryBase::Results' has a wrong offset!");

// Class InterchangeCore.InterchangeSourceData
// 0x0028 (0x0050 - 0x0028)
class UInterchangeSourceData final : public UObject
{
public:
	class FString                                 Filename;                                          // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2870[0x18];                                    // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool SetFilename(const class FString& InFilename);

	class FString GetFilename() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeSourceData">();
	}
	static class UInterchangeSourceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeSourceData>();
	}
};
static_assert(alignof(UInterchangeSourceData) == 0x000008, "Wrong alignment on UInterchangeSourceData");
static_assert(sizeof(UInterchangeSourceData) == 0x000050, "Wrong size on UInterchangeSourceData");
static_assert(offsetof(UInterchangeSourceData, Filename) == 0x000028, "Member 'UInterchangeSourceData::Filename' has a wrong offset!");

// Class InterchangeCore.InterchangeWriterBase
// 0x0000 (0x0028 - 0x0028)
class UInterchangeWriterBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeWriterBase">();
	}
	static class UInterchangeWriterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeWriterBase>();
	}
};
static_assert(alignof(UInterchangeWriterBase) == 0x000008, "Wrong alignment on UInterchangeWriterBase");
static_assert(sizeof(UInterchangeWriterBase) == 0x000028, "Wrong size on UInterchangeWriterBase");

// Class InterchangeCore.InterchangePipelineBase
// 0x00C0 (0x00E8 - 0x0028)
class UInterchangePipelineBase : public UObject
{
public:
	uint8                                         Pad_2872[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterchangeResultsContainer*           Results;                                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FInterchangePipelinePropertyStates> PropertiesStates;                                  // 0x0038(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2873[0x60];                                    // 0x0088(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FInterchangePipelinePropertyStates FindOrAddPropertyStates(const class FName PropertyPath);
	bool ScriptedCanExecuteOnAnyThread(EInterchangePipelineTask PipelineTask);
	void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);
	void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<class UInterchangeSourceData*>& SourceDatas);
	void ScriptedExecutePostFactoryPipeline(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
	void ScriptedExecutePostImportPipeline(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const class FString& FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
	void ScriptedExecutePreImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<class UInterchangeSourceData*>& SourceDatas);
	void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, const int32 SourceFileIndex);

	bool DoesPropertyStatesExist(const class FName PropertyPath) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangePipelineBase">();
	}
	static class UInterchangePipelineBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangePipelineBase>();
	}
};
static_assert(alignof(UInterchangePipelineBase) == 0x000008, "Wrong alignment on UInterchangePipelineBase");
static_assert(sizeof(UInterchangePipelineBase) == 0x0000E8, "Wrong size on UInterchangePipelineBase");
static_assert(offsetof(UInterchangePipelineBase, Results) == 0x000030, "Member 'UInterchangePipelineBase::Results' has a wrong offset!");
static_assert(offsetof(UInterchangePipelineBase, PropertiesStates) == 0x000038, "Member 'UInterchangePipelineBase::PropertiesStates' has a wrong offset!");

// Class InterchangeCore.InterchangeResult
// 0x0038 (0x0060 - 0x0028)
class UInterchangeResult : public UObject
{
public:
	class FString                                 SourceAssetName;                                   // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DestinationAssetName;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                    AssetType;                                         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InterchangeKey;                                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResult">();
	}
	static class UInterchangeResult* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResult>();
	}
};
static_assert(alignof(UInterchangeResult) == 0x000008, "Wrong alignment on UInterchangeResult");
static_assert(sizeof(UInterchangeResult) == 0x000060, "Wrong size on UInterchangeResult");
static_assert(offsetof(UInterchangeResult, SourceAssetName) == 0x000028, "Member 'UInterchangeResult::SourceAssetName' has a wrong offset!");
static_assert(offsetof(UInterchangeResult, DestinationAssetName) == 0x000038, "Member 'UInterchangeResult::DestinationAssetName' has a wrong offset!");
static_assert(offsetof(UInterchangeResult, AssetType) == 0x000048, "Member 'UInterchangeResult::AssetType' has a wrong offset!");
static_assert(offsetof(UInterchangeResult, InterchangeKey) == 0x000050, "Member 'UInterchangeResult::InterchangeKey' has a wrong offset!");

// Class InterchangeCore.InterchangeResultSuccess
// 0x0000 (0x0060 - 0x0060)
class UInterchangeResultSuccess : public UInterchangeResult
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultSuccess">();
	}
	static class UInterchangeResultSuccess* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultSuccess>();
	}
};
static_assert(alignof(UInterchangeResultSuccess) == 0x000008, "Wrong alignment on UInterchangeResultSuccess");
static_assert(sizeof(UInterchangeResultSuccess) == 0x000060, "Wrong size on UInterchangeResultSuccess");

// Class InterchangeCore.InterchangeResultWarning
// 0x0000 (0x0060 - 0x0060)
class UInterchangeResultWarning : public UInterchangeResult
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultWarning">();
	}
	static class UInterchangeResultWarning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultWarning>();
	}
};
static_assert(alignof(UInterchangeResultWarning) == 0x000008, "Wrong alignment on UInterchangeResultWarning");
static_assert(sizeof(UInterchangeResultWarning) == 0x000060, "Wrong size on UInterchangeResultWarning");

// Class InterchangeCore.InterchangeResultError
// 0x0000 (0x0060 - 0x0060)
class UInterchangeResultError : public UInterchangeResult
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultError">();
	}
	static class UInterchangeResultError* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultError>();
	}
};
static_assert(alignof(UInterchangeResultError) == 0x000008, "Wrong alignment on UInterchangeResultError");
static_assert(sizeof(UInterchangeResultError) == 0x000060, "Wrong size on UInterchangeResultError");

// Class InterchangeCore.InterchangeResultWarning_Generic
// 0x0018 (0x0078 - 0x0060)
class UInterchangeResultWarning_Generic final : public UInterchangeResultWarning
{
public:
	class FText                                   Text;                                              // 0x0060(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultWarning_Generic">();
	}
	static class UInterchangeResultWarning_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultWarning_Generic>();
	}
};
static_assert(alignof(UInterchangeResultWarning_Generic) == 0x000008, "Wrong alignment on UInterchangeResultWarning_Generic");
static_assert(sizeof(UInterchangeResultWarning_Generic) == 0x000078, "Wrong size on UInterchangeResultWarning_Generic");
static_assert(offsetof(UInterchangeResultWarning_Generic, Text) == 0x000060, "Member 'UInterchangeResultWarning_Generic::Text' has a wrong offset!");

// Class InterchangeCore.InterchangeResultError_Generic
// 0x0018 (0x0078 - 0x0060)
class UInterchangeResultError_Generic final : public UInterchangeResultError
{
public:
	class FText                                   Text;                                              // 0x0060(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultError_Generic">();
	}
	static class UInterchangeResultError_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultError_Generic>();
	}
};
static_assert(alignof(UInterchangeResultError_Generic) == 0x000008, "Wrong alignment on UInterchangeResultError_Generic");
static_assert(sizeof(UInterchangeResultError_Generic) == 0x000078, "Wrong size on UInterchangeResultError_Generic");
static_assert(offsetof(UInterchangeResultError_Generic, Text) == 0x000060, "Member 'UInterchangeResultError_Generic::Text' has a wrong offset!");

// Class InterchangeCore.InterchangeResultError_ReimportFail
// 0x0000 (0x0060 - 0x0060)
class UInterchangeResultError_ReimportFail final : public UInterchangeResultError
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultError_ReimportFail">();
	}
	static class UInterchangeResultError_ReimportFail* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultError_ReimportFail>();
	}
};
static_assert(alignof(UInterchangeResultError_ReimportFail) == 0x000008, "Wrong alignment on UInterchangeResultError_ReimportFail");
static_assert(sizeof(UInterchangeResultError_ReimportFail) == 0x000060, "Wrong size on UInterchangeResultError_ReimportFail");

// Class InterchangeCore.InterchangeResultDisplay_Generic
// 0x0018 (0x0078 - 0x0060)
class UInterchangeResultDisplay_Generic final : public UInterchangeResultSuccess
{
public:
	class FText                                   Text;                                              // 0x0060(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultDisplay_Generic">();
	}
	static class UInterchangeResultDisplay_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultDisplay_Generic>();
	}
};
static_assert(alignof(UInterchangeResultDisplay_Generic) == 0x000008, "Wrong alignment on UInterchangeResultDisplay_Generic");
static_assert(sizeof(UInterchangeResultDisplay_Generic) == 0x000078, "Wrong size on UInterchangeResultDisplay_Generic");
static_assert(offsetof(UInterchangeResultDisplay_Generic, Text) == 0x000060, "Member 'UInterchangeResultDisplay_Generic::Text' has a wrong offset!");

// Class InterchangeCore.InterchangeResultsContainer
// 0x0038 (0x0060 - 0x0028)
class UInterchangeResultsContainer final : public UObject
{
public:
	uint8                                         Pad_2879[0x28];                                    // 0x0028(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInterchangeResult*>             Results;                                           // 0x0050(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultsContainer">();
	}
	static class UInterchangeResultsContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultsContainer>();
	}
};
static_assert(alignof(UInterchangeResultsContainer) == 0x000008, "Wrong alignment on UInterchangeResultsContainer");
static_assert(sizeof(UInterchangeResultsContainer) == 0x000060, "Wrong size on UInterchangeResultsContainer");
static_assert(offsetof(UInterchangeResultsContainer, Results) == 0x000050, "Member 'UInterchangeResultsContainer::Results' has a wrong offset!");

// Class InterchangeCore.InterchangeTranslatorBase
// 0x0010 (0x0038 - 0x0028)
class UInterchangeTranslatorBase : public UObject
{
public:
	class UInterchangeResultsContainer*           Results;                                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeTranslatorBase">();
	}
	static class UInterchangeTranslatorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeTranslatorBase>();
	}
};
static_assert(alignof(UInterchangeTranslatorBase) == 0x000008, "Wrong alignment on UInterchangeTranslatorBase");
static_assert(sizeof(UInterchangeTranslatorBase) == 0x000038, "Wrong size on UInterchangeTranslatorBase");
static_assert(offsetof(UInterchangeTranslatorBase, Results) == 0x000028, "Member 'UInterchangeTranslatorBase::Results' has a wrong offset!");
static_assert(offsetof(UInterchangeTranslatorBase, SourceData) == 0x000030, "Member 'UInterchangeTranslatorBase::SourceData' has a wrong offset!");

// Class InterchangeCore.InterchangeBaseNode
// 0x0038 (0x0060 - 0x0028)
class UInterchangeBaseNode : public UObject
{
public:
	uint8                                         Pad_287A[0x38];                                    // 0x0028(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AddBooleanAttribute(const class FString& NodeAttributeKey, const bool& Value);
	bool AddDoubleAttribute(const class FString& NodeAttributeKey, const double& Value);
	bool AddFloatAttribute(const class FString& NodeAttributeKey, const float& Value);
	bool AddGuidAttribute(const class FString& NodeAttributeKey, const struct FGuid& Value);
	bool AddInt32Attribute(const class FString& NodeAttributeKey, const int32& Value);
	bool AddLinearColorAttribute(const class FString& NodeAttributeKey, const struct FLinearColor& Value);
	bool AddStringAttribute(const class FString& NodeAttributeKey, const class FString& Value);
	bool AddVector2Attribute(const class FString& NodeAttributeKey, const struct FVector2f& Value);
	void InitializeNode(const class FString& UniqueID, const class FString& DisplayLabel, const EInterchangeNodeContainerType NodeContainerType);
	bool RemoveAttribute(const class FString& NodeAttributeKey);
	bool SetAssetName(const class FString& AssetName);
	bool SetDisplayLabel(const class FString& DisplayName);
	bool SetEnabled(const bool bIsEnabled);
	bool SetParentUid(const class FString& ParentUid);

	bool AddTargetNodeUid(const class FString& AssetUid) const;
	class FString GetAssetName() const;
	bool GetBooleanAttribute(const class FString& NodeAttributeKey, bool* OutValue) const;
	class FString GetDisplayLabel() const;
	bool GetDoubleAttribute(const class FString& NodeAttributeKey, double* OutValue) const;
	bool GetFloatAttribute(const class FString& NodeAttributeKey, float* OutValue) const;
	bool GetGuidAttribute(const class FString& NodeAttributeKey, struct FGuid* OutValue) const;
	bool GetInt32Attribute(const class FString& NodeAttributeKey, int32* OutValue) const;
	bool GetLinearColorAttribute(const class FString& NodeAttributeKey, struct FLinearColor* OutValue) const;
	EInterchangeNodeContainerType GetNodeContainerType() const;
	class FString GetParentUid() const;
	bool GetStringAttribute(const class FString& NodeAttributeKey, class FString* OutValue) const;
	int32 GetTargetNodeCount() const;
	void GetTargetNodeUids(TArray<class FString>* OutTargetAssets) const;
	class FString GetUniqueID() const;
	bool GetVector2Attribute(const class FString& NodeAttributeKey, struct FVector2f* OutValue) const;
	bool IsEnabled() const;
	bool RemoveTargetNodeUid(const class FString& AssetUid) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeBaseNode">();
	}
	static class UInterchangeBaseNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeBaseNode>();
	}
};
static_assert(alignof(UInterchangeBaseNode) == 0x000008, "Wrong alignment on UInterchangeBaseNode");
static_assert(sizeof(UInterchangeBaseNode) == 0x000060, "Wrong size on UInterchangeBaseNode");

// Class InterchangeCore.InterchangeBaseNodeContainer
// 0x00A0 (0x00C8 - 0x0028)
class UInterchangeBaseNodeContainer final : public UObject
{
public:
	TMap<class FString, class UInterchangeBaseNode*> Nodes;                                             // 0x0028(0x0050)(Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2892[0x50];                                    // 0x0078(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString AddNode(class UInterchangeBaseNode* Node);
	void ComputeChildrenCache();
	class UInterchangeBaseNode* GetNodeChildren(const class FString& NodeUniqueID, int32 ChildIndex);
	void LoadFromFile(const class FString& Filename);
	void ReplaceNode(const class FString& NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);
	void ResetChildrenCache();
	void SaveToFile(const class FString& Filename);
	bool SetNodeParentUid(const class FString& NodeUniqueID, const class FString& NewParentNodeUid);

	class UInterchangeFactoryBaseNode* GetFactoryNode(const class FString& NodeUniqueID) const;
	const class UInterchangeBaseNode* GetNode(const class FString& NodeUniqueID) const;
	int32 GetNodeChildrenCount(const class FString& NodeUniqueID) const;
	TArray<class FString> GetNodeChildrenUids(const class FString& NodeUniqueID) const;
	void GetNodes(const class UClass* ClassNode, TArray<class FString>* OutNodes) const;
	void GetRoots(TArray<class FString>* RootNodes) const;
	bool IsNodeUidValid(const class FString& NodeUniqueID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeBaseNodeContainer">();
	}
	static class UInterchangeBaseNodeContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeBaseNodeContainer>();
	}
};
static_assert(alignof(UInterchangeBaseNodeContainer) == 0x000008, "Wrong alignment on UInterchangeBaseNodeContainer");
static_assert(sizeof(UInterchangeBaseNodeContainer) == 0x0000C8, "Wrong size on UInterchangeBaseNodeContainer");
static_assert(offsetof(UInterchangeBaseNodeContainer, Nodes) == 0x000028, "Member 'UInterchangeBaseNodeContainer::Nodes' has a wrong offset!");

// Class InterchangeCore.InterchangeFactoryBaseNode
// 0x00E0 (0x0140 - 0x0060)
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{
public:
	uint8                                         Pad_2897[0xE0];                                    // 0x0060(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool AddFactoryDependencyUid(const class FString& DependencyUid);
	bool RemoveFactoryDependencyUid(const class FString& DependencyUid);
	bool SetCustomReferenceObject(const struct FSoftObjectPath& AttributeValue);
	bool SetCustomSubPath(const class FString& AttributeValue);
	bool SetForceNodeReimport();
	bool SetReimportStrategyFlags(const EReimportStrategyFlags& ReimportStrategyFlags);
	bool SetSkipNodeImport();
	bool UnsetForceNodeReimport();
	bool UnsetSkipNodeImport();

	bool GetCustomReferenceObject(struct FSoftObjectPath* AttributeValue) const;
	bool GetCustomSubPath(class FString* AttributeValue) const;
	void GetFactoryDependencies(TArray<class FString>* OutDependencies) const;
	int32 GetFactoryDependenciesCount() const;
	void GetFactoryDependency(const int32 Param_Index, class FString* OutDependency) const;
	EReimportStrategyFlags GetReimportStrategyFlags() const;
	bool ShouldForceNodeReimport() const;
	bool ShouldSkipNodeImport() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeFactoryBaseNode">();
	}
	static class UInterchangeFactoryBaseNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeFactoryBaseNode>();
	}
};
static_assert(alignof(UInterchangeFactoryBaseNode) == 0x000008, "Wrong alignment on UInterchangeFactoryBaseNode");
static_assert(sizeof(UInterchangeFactoryBaseNode) == 0x000140, "Wrong size on UInterchangeFactoryBaseNode");

// Class InterchangeCore.InterchangeSourceNode
// 0x0070 (0x00D0 - 0x0060)
class UInterchangeSourceNode final : public UInterchangeBaseNode
{
public:
	uint8                                         Pad_289F[0x70];                                    // 0x0060(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InitializeSourceNode(const class FString& UniqueID, const class FString& DisplayLabel);
	bool SetCustomAnimatedTimeEnd(const double& AttributeValue);
	bool SetCustomAnimatedTimeStart(const double& AttributeValue);
	bool SetCustomImportUnusedMaterial(const bool& AttributeValue);
	bool SetCustomSourceFrameRateDenominator(const int32& AttributeValue);
	bool SetCustomSourceFrameRateNumerator(const int32& AttributeValue);
	bool SetCustomSourceTimelineEnd(const double& AttributeValue);
	bool SetCustomSourceTimelineStart(const double& AttributeValue);

	bool GetCustomAnimatedTimeEnd(double* AttributeValue) const;
	bool GetCustomAnimatedTimeStart(double* AttributeValue) const;
	bool GetCustomImportUnusedMaterial(bool* AttributeValue) const;
	bool GetCustomSourceFrameRateDenominator(int32* AttributeValue) const;
	bool GetCustomSourceFrameRateNumerator(int32* AttributeValue) const;
	bool GetCustomSourceTimelineEnd(double* AttributeValue) const;
	bool GetCustomSourceTimelineStart(double* AttributeValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeSourceNode">();
	}
	static class UInterchangeSourceNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeSourceNode>();
	}
};
static_assert(alignof(UInterchangeSourceNode) == 0x000008, "Wrong alignment on UInterchangeSourceNode");
static_assert(sizeof(UInterchangeSourceNode) == 0x0000D0, "Wrong size on UInterchangeSourceNode");

// Class InterchangeCore.InterchangeUserDefinedAttributesAPI
// 0x0000 (0x0028 - 0x0028)
class UInterchangeUserDefinedAttributesAPI final : public UObject
{
public:
	static bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const bool& Value, const class FString& PayloadKey);
	static bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const double& Value, const class FString& PayloadKey);
	static bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const float& Value, const class FString& PayloadKey);
	static bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const class FString& Value, const class FString& PayloadKey);
	static bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, const int32& Value, const class FString& PayloadKey);
	static void DuplicateAllUserDefinedAttribute(const class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName);
	static bool GetUserDefinedAttribute_Boolean(const class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, bool* OutValue, class FString* OutPayloadKey);
	static bool GetUserDefinedAttribute_Double(const class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, double* OutValue, class FString* OutPayloadKey);
	static bool GetUserDefinedAttribute_Float(const class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, float* OutValue, class FString* OutPayloadKey);
	static bool GetUserDefinedAttribute_FString(const class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, class FString* OutValue, class FString* OutPayloadKey);
	static bool GetUserDefinedAttribute_Int32(const class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName, int32* OutValue, class FString* OutPayloadKey);
	static void GetUserDefinedAttributeInfos(const class UInterchangeBaseNode* InterchangeNode, TArray<struct FInterchangeUserDefinedAttributeInfo>* UserDefinedAttributeInfos);
	static bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, const class FString& UserDefinedAttributeName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeUserDefinedAttributesAPI">();
	}
	static class UInterchangeUserDefinedAttributesAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeUserDefinedAttributesAPI>();
	}
};
static_assert(alignof(UInterchangeUserDefinedAttributesAPI) == 0x000008, "Wrong alignment on UInterchangeUserDefinedAttributesAPI");
static_assert(sizeof(UInterchangeUserDefinedAttributesAPI) == 0x000028, "Wrong size on UInterchangeUserDefinedAttributesAPI");

}

