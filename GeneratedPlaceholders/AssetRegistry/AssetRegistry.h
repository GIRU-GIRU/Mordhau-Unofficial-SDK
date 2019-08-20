#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry.generated.h"

UCLASS()
class UAssetRegistry : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
	void SearchAllAssets(bool bSynchronousSearch);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void ScanPaths(TArray<struct FString> InPaths);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void PrioritizeSearchPath(const struct FString& PathToPrioritize);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool IsLoadingAssets();
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool HasAssets(const struct FName& PackagePath, bool bRecursive);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistry")
		bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);

};