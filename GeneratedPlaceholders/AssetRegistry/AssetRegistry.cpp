#include "AssetRegistry.h"

void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch) {
}
	void UAssetRegistry::ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan) {
}
	void UAssetRegistry::ScanPaths(TArray<struct FString> InPaths) {
}
	void UAssetRegistry::ScanModifiedAssetFiles(TArray<struct FString> InFilePaths) {
}
	void UAssetRegistry::ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan) {
}
	void UAssetRegistry::RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList) {
}
	void UAssetRegistry::PrioritizeSearchPath(const struct FString& PathToPrioritize) {
}
	bool UAssetRegistry::IsLoadingAssets() {
}
	bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive) {
}
	void UAssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList) {
}
	bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData) {
}
	bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData) {
}
	bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData) {
}
	bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData) {
}
	struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets) {
}
	void UAssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList) {
}
	bool UAssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData) {
}
