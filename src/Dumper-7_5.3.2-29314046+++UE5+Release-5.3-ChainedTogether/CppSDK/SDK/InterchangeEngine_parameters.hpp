#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterchangeEngine

#include "Basic.hpp"

#include "InterchangeCore_structs.hpp"
#include "InterchangeEngine_structs.hpp"


namespace SDK::Params
{

// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
// 0x0050 (0x0050 - 0x0000)
struct InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType final
{
public:
	EInterchangeTranslatorAssetType               TranslatorAssetType;                               // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInterchangeFilePickerParameters       Parameters;                                        // 0x0008(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutFilenames;                                      // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297B[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType) == 0x000008, "Wrong alignment on InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType");
static_assert(sizeof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType) == 0x000050, "Wrong size on InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType, TranslatorAssetType) == 0x000000, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType::TranslatorAssetType' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType, Parameters) == 0x000008, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType::Parameters' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType, OutFilenames) == 0x000038, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType::OutFilenames' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType, ReturnValue) == 0x000048, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorAssetType::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
// 0x0050 (0x0050 - 0x0000)
struct InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType final
{
public:
	EInterchangeTranslatorType                    TranslatorType;                                    // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInterchangeFilePickerParameters       Parameters;                                        // 0x0008(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         OutFilenames;                                      // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297D[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType) == 0x000008, "Wrong alignment on InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType");
static_assert(sizeof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType) == 0x000050, "Wrong size on InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType, TranslatorType) == 0x000000, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType::TranslatorType' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType, Parameters) == 0x000008, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType::Parameters' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType, OutFilenames) == 0x000038, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType::OutFilenames' has a wrong offset!");
static_assert(offsetof(InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType, ReturnValue) == 0x000048, "Member 'InterchangeFilePickerBase_ScriptedFilePickerForTranslatorType::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297E[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog) == 0x000008, "Wrong alignment on InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog");
static_assert(sizeof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog) == 0x000030, "Wrong size on InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog, PipelineStacks) == 0x000000, "Member 'InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog::PipelineStacks' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog, OutPipelines) == 0x000010, "Member 'InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog::OutPipelines' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog, SourceData) == 0x000020, "Member 'InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog::SourceData' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog, ReturnValue) == 0x000028, "Member 'InterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_297F[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog) == 0x000008, "Wrong alignment on InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog");
static_assert(sizeof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog) == 0x000030, "Wrong size on InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog, PipelineStacks) == 0x000000, "Member 'InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog::PipelineStacks' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog, OutPipelines) == 0x000010, "Member 'InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog::OutPipelines' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog, SourceData) == 0x000020, "Member 'InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog::SourceData' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog, ReturnValue) == 0x000028, "Member 'InterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
// 0x0030 (0x0030 - 0x0000)
struct InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog final
{
public:
	TArray<struct FInterchangeStackInfo>          PipelineStacks;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>       OutPipelines;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 SourceData;                                        // 0x0020(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterchangePipelineConfigurationDialogResult ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2980[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog) == 0x000008, "Wrong alignment on InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog");
static_assert(sizeof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog) == 0x000030, "Wrong size on InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog, PipelineStacks) == 0x000000, "Member 'InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog::PipelineStacks' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog, OutPipelines) == 0x000010, "Member 'InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog::OutPipelines' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog, SourceData) == 0x000020, "Member 'InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog::SourceData' has a wrong offset!");
static_assert(offsetof(InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog, ReturnValue) == 0x000028, "Member 'InterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
// 0x0008 (0x0008 - 0x0000)
struct InterchangeAssetImportData_GetNodeContainer final
{
public:
	class UInterchangeBaseNodeContainer*          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_GetNodeContainer) == 0x000008, "Wrong alignment on InterchangeAssetImportData_GetNodeContainer");
static_assert(sizeof(InterchangeAssetImportData_GetNodeContainer) == 0x000008, "Wrong size on InterchangeAssetImportData_GetNodeContainer");
static_assert(offsetof(InterchangeAssetImportData_GetNodeContainer, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_GetNodeContainer::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
// 0x0004 (0x0004 - 0x0000)
struct InterchangeAssetImportData_GetNumberOfPipelines final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_GetNumberOfPipelines) == 0x000004, "Wrong alignment on InterchangeAssetImportData_GetNumberOfPipelines");
static_assert(sizeof(InterchangeAssetImportData_GetNumberOfPipelines) == 0x000004, "Wrong size on InterchangeAssetImportData_GetNumberOfPipelines");
static_assert(offsetof(InterchangeAssetImportData_GetNumberOfPipelines, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_GetNumberOfPipelines::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.GetPipelines
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_GetPipelines final
{
public:
	TArray<class UObject*>                        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_GetPipelines) == 0x000008, "Wrong alignment on InterchangeAssetImportData_GetPipelines");
static_assert(sizeof(InterchangeAssetImportData_GetPipelines) == 0x000010, "Wrong size on InterchangeAssetImportData_GetPipelines");
static_assert(offsetof(InterchangeAssetImportData_GetPipelines, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_GetPipelines::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
// 0x0018 (0x0018 - 0x0000)
struct InterchangeAssetImportData_GetStoredFactoryNode final
{
public:
	class FString                                 InNodeUniqueId;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeFactoryBaseNode*            ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_GetStoredFactoryNode) == 0x000008, "Wrong alignment on InterchangeAssetImportData_GetStoredFactoryNode");
static_assert(sizeof(InterchangeAssetImportData_GetStoredFactoryNode) == 0x000018, "Wrong size on InterchangeAssetImportData_GetStoredFactoryNode");
static_assert(offsetof(InterchangeAssetImportData_GetStoredFactoryNode, InNodeUniqueId) == 0x000000, "Member 'InterchangeAssetImportData_GetStoredFactoryNode::InNodeUniqueId' has a wrong offset!");
static_assert(offsetof(InterchangeAssetImportData_GetStoredFactoryNode, ReturnValue) == 0x000010, "Member 'InterchangeAssetImportData_GetStoredFactoryNode::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.GetStoredNode
// 0x0018 (0x0018 - 0x0000)
struct InterchangeAssetImportData_GetStoredNode final
{
public:
	class FString                                 InNodeUniqueId;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UInterchangeBaseNode*             ReturnValue;                                       // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_GetStoredNode) == 0x000008, "Wrong alignment on InterchangeAssetImportData_GetStoredNode");
static_assert(sizeof(InterchangeAssetImportData_GetStoredNode) == 0x000018, "Wrong size on InterchangeAssetImportData_GetStoredNode");
static_assert(offsetof(InterchangeAssetImportData_GetStoredNode, InNodeUniqueId) == 0x000000, "Member 'InterchangeAssetImportData_GetStoredNode::InNodeUniqueId' has a wrong offset!");
static_assert(offsetof(InterchangeAssetImportData_GetStoredNode, ReturnValue) == 0x000010, "Member 'InterchangeAssetImportData_GetStoredNode::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptExtractDisplayLabels final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_ScriptExtractDisplayLabels) == 0x000008, "Wrong alignment on InterchangeAssetImportData_ScriptExtractDisplayLabels");
static_assert(sizeof(InterchangeAssetImportData_ScriptExtractDisplayLabels) == 0x000010, "Wrong size on InterchangeAssetImportData_ScriptExtractDisplayLabels");
static_assert(offsetof(InterchangeAssetImportData_ScriptExtractDisplayLabels, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_ScriptExtractDisplayLabels::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptExtractFilenames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_ScriptExtractFilenames) == 0x000008, "Wrong alignment on InterchangeAssetImportData_ScriptExtractFilenames");
static_assert(sizeof(InterchangeAssetImportData_ScriptExtractFilenames) == 0x000010, "Wrong size on InterchangeAssetImportData_ScriptExtractFilenames");
static_assert(offsetof(InterchangeAssetImportData_ScriptExtractFilenames, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_ScriptExtractFilenames::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_ScriptGetFirstFilename final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_ScriptGetFirstFilename) == 0x000008, "Wrong alignment on InterchangeAssetImportData_ScriptGetFirstFilename");
static_assert(sizeof(InterchangeAssetImportData_ScriptGetFirstFilename) == 0x000010, "Wrong size on InterchangeAssetImportData_ScriptGetFirstFilename");
static_assert(offsetof(InterchangeAssetImportData_ScriptGetFirstFilename, ReturnValue) == 0x000000, "Member 'InterchangeAssetImportData_ScriptGetFirstFilename::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
// 0x0008 (0x0008 - 0x0000)
struct InterchangeAssetImportData_SetNodeContainer final
{
public:
	class UInterchangeBaseNodeContainer*          InNodeContainer;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_SetNodeContainer) == 0x000008, "Wrong alignment on InterchangeAssetImportData_SetNodeContainer");
static_assert(sizeof(InterchangeAssetImportData_SetNodeContainer) == 0x000008, "Wrong size on InterchangeAssetImportData_SetNodeContainer");
static_assert(offsetof(InterchangeAssetImportData_SetNodeContainer, InNodeContainer) == 0x000000, "Member 'InterchangeAssetImportData_SetNodeContainer::InNodeContainer' has a wrong offset!");

// Function InterchangeEngine.InterchangeAssetImportData.SetPipelines
// 0x0010 (0x0010 - 0x0000)
struct InterchangeAssetImportData_SetPipelines final
{
public:
	TArray<class UObject*>                        InPipelines;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeAssetImportData_SetPipelines) == 0x000008, "Wrong alignment on InterchangeAssetImportData_SetPipelines");
static_assert(sizeof(InterchangeAssetImportData_SetPipelines) == 0x000010, "Wrong size on InterchangeAssetImportData_SetPipelines");
static_assert(offsetof(InterchangeAssetImportData_SetPipelines, InPipelines) == 0x000000, "Member 'InterchangeAssetImportData_SetPipelines::InPipelines' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
// 0x0008 (0x0008 - 0x0000)
struct InterchangePipelineStackOverride_AddBlueprintPipeline final
{
public:
	class UInterchangeBlueprintPipelineBase*      PipelineBase;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineStackOverride_AddBlueprintPipeline) == 0x000008, "Wrong alignment on InterchangePipelineStackOverride_AddBlueprintPipeline");
static_assert(sizeof(InterchangePipelineStackOverride_AddBlueprintPipeline) == 0x000008, "Wrong size on InterchangePipelineStackOverride_AddBlueprintPipeline");
static_assert(offsetof(InterchangePipelineStackOverride_AddBlueprintPipeline, PipelineBase) == 0x000000, "Member 'InterchangePipelineStackOverride_AddBlueprintPipeline::PipelineBase' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
// 0x0008 (0x0008 - 0x0000)
struct InterchangePipelineStackOverride_AddPipeline final
{
public:
	class UInterchangePipelineBase*               PipelineBase;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineStackOverride_AddPipeline) == 0x000008, "Wrong alignment on InterchangePipelineStackOverride_AddPipeline");
static_assert(sizeof(InterchangePipelineStackOverride_AddPipeline) == 0x000008, "Wrong size on InterchangePipelineStackOverride_AddPipeline");
static_assert(offsetof(InterchangePipelineStackOverride_AddPipeline, PipelineBase) == 0x000000, "Member 'InterchangePipelineStackOverride_AddPipeline::PipelineBase' has a wrong offset!");

// Function InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
// 0x0008 (0x0008 - 0x0000)
struct InterchangePipelineStackOverride_AddPythonPipeline final
{
public:
	class UInterchangePythonPipelineBase*         PipelineBase;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangePipelineStackOverride_AddPythonPipeline) == 0x000008, "Wrong alignment on InterchangePipelineStackOverride_AddPythonPipeline");
static_assert(sizeof(InterchangePipelineStackOverride_AddPythonPipeline) == 0x000008, "Wrong size on InterchangePipelineStackOverride_AddPythonPipeline");
static_assert(offsetof(InterchangePipelineStackOverride_AddPythonPipeline, PipelineBase) == 0x000000, "Member 'InterchangePipelineStackOverride_AddPythonPipeline::PipelineBase' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.CreateSourceData
// 0x0018 (0x0018 - 0x0000)
struct InterchangeManager_CreateSourceData final
{
public:
	class FString                                 InFilename;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeSourceData*                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeManager_CreateSourceData) == 0x000008, "Wrong alignment on InterchangeManager_CreateSourceData");
static_assert(sizeof(InterchangeManager_CreateSourceData) == 0x000018, "Wrong size on InterchangeManager_CreateSourceData");
static_assert(offsetof(InterchangeManager_CreateSourceData, InFilename) == 0x000000, "Member 'InterchangeManager_CreateSourceData::InFilename' has a wrong offset!");
static_assert(offsetof(InterchangeManager_CreateSourceData, ReturnValue) == 0x000010, "Member 'InterchangeManager_CreateSourceData::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
// 0x0008 (0x0008 - 0x0000)
struct InterchangeManager_GetInterchangeManagerScripted final
{
public:
	class UInterchangeManager*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeManager_GetInterchangeManagerScripted) == 0x000008, "Wrong alignment on InterchangeManager_GetInterchangeManagerScripted");
static_assert(sizeof(InterchangeManager_GetInterchangeManagerScripted) == 0x000008, "Wrong size on InterchangeManager_GetInterchangeManagerScripted");
static_assert(offsetof(InterchangeManager_GetInterchangeManagerScripted, ReturnValue) == 0x000000, "Member 'InterchangeManager_GetInterchangeManagerScripted::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.ExportAsset
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_ExportAsset final
{
public:
	const class UObject*                          Asset;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAutomated;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2986[0x6];                                     // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeManager_ExportAsset) == 0x000008, "Wrong alignment on InterchangeManager_ExportAsset");
static_assert(sizeof(InterchangeManager_ExportAsset) == 0x000010, "Wrong size on InterchangeManager_ExportAsset");
static_assert(offsetof(InterchangeManager_ExportAsset, Asset) == 0x000000, "Member 'InterchangeManager_ExportAsset::Asset' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ExportAsset, bIsAutomated) == 0x000008, "Member 'InterchangeManager_ExportAsset::bIsAutomated' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ExportAsset, ReturnValue) == 0x000009, "Member 'InterchangeManager_ExportAsset::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.ExportScene
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_ExportScene final
{
public:
	const class UObject*                          World;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAutomated;                                      // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2987[0x6];                                     // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeManager_ExportScene) == 0x000008, "Wrong alignment on InterchangeManager_ExportScene");
static_assert(sizeof(InterchangeManager_ExportScene) == 0x000010, "Wrong size on InterchangeManager_ExportScene");
static_assert(offsetof(InterchangeManager_ExportScene, World) == 0x000000, "Member 'InterchangeManager_ExportScene::World' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ExportScene, bIsAutomated) == 0x000008, "Member 'InterchangeManager_ExportScene::bIsAutomated' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ExportScene, ReturnValue) == 0x000009, "Member 'InterchangeManager_ExportScene::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.ImportAsset
// 0x00C0 (0x00C0 - 0x0000)
struct InterchangeManager_ImportAsset final
{
public:
	class FString                                 ContentPath;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UInterchangeSourceData*           SourceData;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                 ImportAssetParameters;                             // 0x0018(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2988[0x7];                                     // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeManager_ImportAsset) == 0x000008, "Wrong alignment on InterchangeManager_ImportAsset");
static_assert(sizeof(InterchangeManager_ImportAsset) == 0x0000C0, "Wrong size on InterchangeManager_ImportAsset");
static_assert(offsetof(InterchangeManager_ImportAsset, ContentPath) == 0x000000, "Member 'InterchangeManager_ImportAsset::ContentPath' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportAsset, SourceData) == 0x000010, "Member 'InterchangeManager_ImportAsset::SourceData' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportAsset, ImportAssetParameters) == 0x000018, "Member 'InterchangeManager_ImportAsset::ImportAssetParameters' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportAsset, ReturnValue) == 0x0000B8, "Member 'InterchangeManager_ImportAsset::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.ImportScene
// 0x00C0 (0x00C0 - 0x0000)
struct InterchangeManager_ImportScene final
{
public:
	class FString                                 ContentPath;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UInterchangeSourceData*           SourceData;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImportAssetParameters                 ImportAssetParameters;                             // 0x0018(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2989[0x7];                                     // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(InterchangeManager_ImportScene) == 0x000008, "Wrong alignment on InterchangeManager_ImportScene");
static_assert(sizeof(InterchangeManager_ImportScene) == 0x0000C0, "Wrong size on InterchangeManager_ImportScene");
static_assert(offsetof(InterchangeManager_ImportScene, ContentPath) == 0x000000, "Member 'InterchangeManager_ImportScene::ContentPath' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportScene, SourceData) == 0x000010, "Member 'InterchangeManager_ImportScene::SourceData' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportScene, ImportAssetParameters) == 0x000018, "Member 'InterchangeManager_ImportScene::ImportAssetParameters' has a wrong offset!");
static_assert(offsetof(InterchangeManager_ImportScene, ReturnValue) == 0x0000B8, "Member 'InterchangeManager_ImportScene::ReturnValue' has a wrong offset!");

// Function InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
// 0x0010 (0x0010 - 0x0000)
struct InterchangeManager_GetRegisteredFactoryClass final
{
public:
	const class UClass*                           ClassToMake;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UClass*                           ReturnValue;                                       // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(InterchangeManager_GetRegisteredFactoryClass) == 0x000008, "Wrong alignment on InterchangeManager_GetRegisteredFactoryClass");
static_assert(sizeof(InterchangeManager_GetRegisteredFactoryClass) == 0x000010, "Wrong size on InterchangeManager_GetRegisteredFactoryClass");
static_assert(offsetof(InterchangeManager_GetRegisteredFactoryClass, ClassToMake) == 0x000000, "Member 'InterchangeManager_GetRegisteredFactoryClass::ClassToMake' has a wrong offset!");
static_assert(offsetof(InterchangeManager_GetRegisteredFactoryClass, ReturnValue) == 0x000008, "Member 'InterchangeManager_GetRegisteredFactoryClass::ReturnValue' has a wrong offset!");

}

