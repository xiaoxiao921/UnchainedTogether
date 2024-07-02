#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetRegistry

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers final : public UObject
{
public:
	static struct FAssetData CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass);
	static class UClass* FindAssetNativeClass(const struct FAssetData& AssetData);
	static class UObject* GetAsset(const struct FAssetData& InAssetData);
	static TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	static void GetBlueprintAssets(const struct FARFilter& InFilter, TArray<struct FAssetData>* OutAssetData);
	static class UClass* GetClass(const struct FAssetData& InAssetData);
	static class FString GetExportTextName(const struct FAssetData& InAssetData);
	static class FString GetFullName(const struct FAssetData& InAssetData);
	static bool GetTagValue(const struct FAssetData& InAssetData, const class FName& InTagName, class FString* OutTagValue);
	static bool IsAssetLoaded(const struct FAssetData& InAssetData);
	static bool IsRedirector(const struct FAssetData& InAssetData);
	static bool IsUAsset(const struct FAssetData& InAssetData);
	static bool IsValid(const struct FAssetData& InAssetData);
	static struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues);
	static struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetRegistryHelpers">();
	}
	static class UAssetRegistryHelpers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetRegistryHelpers>();
	}
};
static_assert(alignof(UAssetRegistryHelpers) == 0x000008, "Wrong alignment on UAssetRegistryHelpers");
static_assert(sizeof(UAssetRegistryHelpers) == 0x000028, "Wrong size on UAssetRegistryHelpers");

// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class IAssetRegistry final : public IInterface
{
public:
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	void ScanFilesSynchronous(const TArray<class FString>& InFilePaths, bool bForceRescan);
	void ScanModifiedAssetFiles(const TArray<class FString>& InFilePaths);
	void ScanPathsSynchronous(const TArray<class FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);
	void SearchAllAssets(bool bSynchronousSearch);
	void WaitForCompletion();
	void WaitForPackage(const class FString& PackageName);

	bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets) const;
	void GetAllCachedPaths(TArray<class FString>* OutPathList) const;
	bool GetAncestorClassNames(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FTopLevelAssetPath>* OutAncestorClassNames) const;
	struct FAssetData GetAssetByObjectPath(const class FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const;
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData, bool bSkipARFilteredAssets) const;
	bool GetAssetsByClass(const struct FTopLevelAssetPath& ClassPathName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses) const;
	bool GetAssetsByPackageName(class FName PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets) const;
	bool GetAssetsByPath(class FName PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const;
	bool GetAssetsByPaths(const TArray<class FName>& PackagePaths, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const;
	void GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames, const TSet<struct FTopLevelAssetPath>& ExcludedClassNames, TSet<struct FTopLevelAssetPath>* OutDerivedClassNames) const;
	void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse) const;
	bool HasAssets(const class FName PackagePath, const bool bRecursive) const;
	bool IsLoadingAssets() const;
	bool IsSearchAllAssets() const;
	bool IsSearchAsync() const;
	struct FAssetData K2_GetAssetByObjectPath(const struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets) const;
	bool K2_GetDependencies(class FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies) const;
	bool K2_GetReferencers(class FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers) const;
	void RunAssetsThroughFilter(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const;
	void UseFilterToExcludeAssets(TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetRegistry">();
	}
	static class IAssetRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAssetRegistry>();
	}
};
static_assert(alignof(IAssetRegistry) == 0x000008, "Wrong alignment on IAssetRegistry");
static_assert(sizeof(IAssetRegistry) == 0x000028, "Wrong size on IAssetRegistry");

// Class AssetRegistry.AssetRegistryImpl
// 0x0D50 (0x0D78 - 0x0028)
class UAssetRegistryImpl final : public UObject
{
public:
	uint8                                         Pad_1E1[0xD50];                                    // 0x0028(0x0D50)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetRegistryImpl">();
	}
	static class UAssetRegistryImpl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetRegistryImpl>();
	}
};
static_assert(alignof(UAssetRegistryImpl) == 0x000008, "Wrong alignment on UAssetRegistryImpl");
static_assert(sizeof(UAssetRegistryImpl) == 0x000D78, "Wrong size on UAssetRegistryImpl");

}

