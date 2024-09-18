#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayTags

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);
	static void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	static void BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	static bool DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTag& Tag);
	static bool EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	static class FString GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	static class FString GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	static int32 GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	static class FName GetTagName(const struct FGameplayTag& GameplayTag);
	static bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	static bool HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	static bool IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	static bool IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<struct FGameplayTag>& GameplayTags);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	static struct FGameplayTagQuery MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	static struct FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(const struct FGameplayTagContainer& InTags);
	static struct FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(const struct FGameplayTagContainer& InTags);
	static struct FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(const struct FGameplayTagContainer& InTags);
	static struct FGameplayTag MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	static bool MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	static bool MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	static bool NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	static bool NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	static bool NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
	static bool NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
	static bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintGameplayTagLibrary">();
	}
	static class UBlueprintGameplayTagLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintGameplayTagLibrary>();
	}
};
static_assert(alignof(UBlueprintGameplayTagLibrary) == 0x000008, "Wrong alignment on UBlueprintGameplayTagLibrary");
static_assert(sizeof(UBlueprintGameplayTagLibrary) == 0x000028, "Wrong size on UBlueprintGameplayTagLibrary");

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class IGameplayTagAssetInterface final : public IInterface
{
public:
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer) const;
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer) const;
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer) const;
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagAssetInterface">();
	}
	static class IGameplayTagAssetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTagAssetInterface>();
	}
};
static_assert(alignof(IGameplayTagAssetInterface) == 0x000008, "Wrong alignment on IGameplayTagAssetInterface");
static_assert(sizeof(IGameplayTagAssetInterface) == 0x000028, "Wrong size on IGameplayTagAssetInterface");

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery final : public UObject
{
public:
	class FString                                 UserDescription;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UEditableGameplayTagQueryExpression*    RootExpression;                                    // 0x0048(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      TagQueryExportText_Helper;                         // 0x0050(0x0048)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQuery">();
	}
	static class UEditableGameplayTagQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQuery>();
	}
};
static_assert(alignof(UEditableGameplayTagQuery) == 0x000008, "Wrong alignment on UEditableGameplayTagQuery");
static_assert(sizeof(UEditableGameplayTagQuery) == 0x000098, "Wrong size on UEditableGameplayTagQuery");
static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 0x000028, "Member 'UEditableGameplayTagQuery::UserDescription' has a wrong offset!");
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 0x000048, "Member 'UEditableGameplayTagQuery::RootExpression' has a wrong offset!");
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 0x000050, "Member 'UEditableGameplayTagQuery::TagQueryExportText_Helper' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression">();
	}
	static class UEditableGameplayTagQueryExpression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression");
static_assert(sizeof(UEditableGameplayTagQueryExpression) == 0x000028, "Wrong size on UEditableGameplayTagQueryExpression");

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AnyTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_AnyTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AnyTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AllTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_AllTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AllTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch final : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                  Tags;                                              // 0x0028(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoTagsMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoTagsMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_NoTagsMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x000048, "Wrong size on UEditableGameplayTagQueryExpression_NoTagsMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_NoTagsMatch::Tags' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AnyExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AnyExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AnyExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_AnyExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AnyExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_AllExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_AllExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_AllExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_AllExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_AllExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch final : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EditableGameplayTagQueryExpression_NoExprMatch">();
	}
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEditableGameplayTagQueryExpression_NoExprMatch>();
	}
};
static_assert(alignof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x000008, "Wrong alignment on UEditableGameplayTagQueryExpression_NoExprMatch");
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x000038, "Wrong size on UEditableGameplayTagQueryExpression_NoExprMatch");
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 0x000028, "Member 'UEditableGameplayTagQueryExpression_NoExprMatch::Expressions' has a wrong offset!");

// Class GameplayTags.GameplayTagsManager
// 0x0270 (0x0298 - 0x0028)
class UGameplayTagsManager final : public UObject
{
public:
	uint8                                         Pad_28[0x160];                                     // 0x0028(0x0160)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FGameplayTagSource>  TagSources;                                        // 0x0188(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_1D8[0xB0];                                     // 0x01D8(0x00B0)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDataTable*>                     GameplayTagTables;                                 // 0x0288(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsManager">();
	}
	static class UGameplayTagsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsManager>();
	}
};
static_assert(alignof(UGameplayTagsManager) == 0x000008, "Wrong alignment on UGameplayTagsManager");
static_assert(sizeof(UGameplayTagsManager) == 0x000298, "Wrong size on UGameplayTagsManager");
static_assert(offsetof(UGameplayTagsManager, TagSources) == 0x000188, "Member 'UGameplayTagsManager::TagSources' has a wrong offset!");
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 0x000288, "Member 'UGameplayTagsManager::GameplayTagTables' has a wrong offset!");

// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	class FString                                 ConfigFileName;                                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>           GameplayTagList;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsList">();
	}
	static class UGameplayTagsList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsList>();
	}
};
static_assert(alignof(UGameplayTagsList) == 0x000008, "Wrong alignment on UGameplayTagsList");
static_assert(sizeof(UGameplayTagsList) == 0x000048, "Wrong size on UGameplayTagsList");
static_assert(offsetof(UGameplayTagsList, ConfigFileName) == 0x000028, "Member 'UGameplayTagsList::ConfigFileName' has a wrong offset!");
static_assert(offsetof(UGameplayTagsList, GameplayTagList) == 0x000038, "Member 'UGameplayTagsList::GameplayTagList' has a wrong offset!");

// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class URestrictedGameplayTagsList final : public UObject
{
public:
	class FString                                 ConfigFileName;                                    // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RestrictedGameplayTagsList">();
	}
	static class URestrictedGameplayTagsList* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestrictedGameplayTagsList>();
	}
};
static_assert(alignof(URestrictedGameplayTagsList) == 0x000008, "Wrong alignment on URestrictedGameplayTagsList");
static_assert(sizeof(URestrictedGameplayTagsList) == 0x000048, "Wrong size on URestrictedGameplayTagsList");
static_assert(offsetof(URestrictedGameplayTagsList, ConfigFileName) == 0x000028, "Member 'URestrictedGameplayTagsList::ConfigFileName' has a wrong offset!");
static_assert(offsetof(URestrictedGameplayTagsList, RestrictedGameplayTagList) == 0x000038, "Member 'URestrictedGameplayTagsList::RestrictedGameplayTagList' has a wrong offset!");

// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
class UGameplayTagsSettings final : public UGameplayTagsList
{
public:
	bool                                          ImportTagsFromConfig;                              // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          WarnOnInvalidTags;                                 // 0x0049(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ClearInvalidTags;                                  // 0x004A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AllowEditorTagUnloading;                           // 0x004B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AllowGameTagUnloading;                             // 0x004C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FastReplication;                                   // 0x004D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InvalidTagCharacters;                              // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>      CategoryRemapping;                                 // 0x0060(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                GameplayTagTableList;                              // 0x0070(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>           GameplayTagRedirects;                              // 0x0080(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                           CommonlyReplicatedTags;                            // 0x0090(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                         NumBitsForContainerSize;                           // 0x00A0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NetIndexFirstBitSegment;                           // 0x00A4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>          RestrictedConfigFiles;                             // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsSettings">();
	}
	static class UGameplayTagsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsSettings>();
	}
};
static_assert(alignof(UGameplayTagsSettings) == 0x000008, "Wrong alignment on UGameplayTagsSettings");
static_assert(sizeof(UGameplayTagsSettings) == 0x0000B8, "Wrong size on UGameplayTagsSettings");
static_assert(offsetof(UGameplayTagsSettings, ImportTagsFromConfig) == 0x000048, "Member 'UGameplayTagsSettings::ImportTagsFromConfig' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, WarnOnInvalidTags) == 0x000049, "Member 'UGameplayTagsSettings::WarnOnInvalidTags' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, ClearInvalidTags) == 0x00004A, "Member 'UGameplayTagsSettings::ClearInvalidTags' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, AllowEditorTagUnloading) == 0x00004B, "Member 'UGameplayTagsSettings::AllowEditorTagUnloading' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, AllowGameTagUnloading) == 0x00004C, "Member 'UGameplayTagsSettings::AllowGameTagUnloading' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, FastReplication) == 0x00004D, "Member 'UGameplayTagsSettings::FastReplication' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, InvalidTagCharacters) == 0x000050, "Member 'UGameplayTagsSettings::InvalidTagCharacters' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, CategoryRemapping) == 0x000060, "Member 'UGameplayTagsSettings::CategoryRemapping' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, GameplayTagTableList) == 0x000070, "Member 'UGameplayTagsSettings::GameplayTagTableList' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, GameplayTagRedirects) == 0x000080, "Member 'UGameplayTagsSettings::GameplayTagRedirects' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 0x000090, "Member 'UGameplayTagsSettings::CommonlyReplicatedTags' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, NumBitsForContainerSize) == 0x0000A0, "Member 'UGameplayTagsSettings::NumBitsForContainerSize' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, NetIndexFirstBitSegment) == 0x0000A4, "Member 'UGameplayTagsSettings::NetIndexFirstBitSegment' has a wrong offset!");
static_assert(offsetof(UGameplayTagsSettings, RestrictedConfigFiles) == 0x0000A8, "Member 'UGameplayTagsSettings::RestrictedConfigFiles' has a wrong offset!");

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0018 (0x0050 - 0x0038)
class UGameplayTagsDeveloperSettings final : public UDeveloperSettings
{
public:
	class FString                                 DeveloperConfigName;                               // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FavoriteTagSource;                                 // 0x0048(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagsDeveloperSettings">();
	}
	static class UGameplayTagsDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagsDeveloperSettings>();
	}
};
static_assert(alignof(UGameplayTagsDeveloperSettings) == 0x000008, "Wrong alignment on UGameplayTagsDeveloperSettings");
static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x000050, "Wrong size on UGameplayTagsDeveloperSettings");
static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 0x000038, "Member 'UGameplayTagsDeveloperSettings::DeveloperConfigName' has a wrong offset!");
static_assert(offsetof(UGameplayTagsDeveloperSettings, FavoriteTagSource) == 0x000048, "Member 'UGameplayTagsDeveloperSettings::FavoriteTagSource' has a wrong offset!");

}

