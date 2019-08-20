#include "AssetRegistryHelpers.h"

struct FSoftObjectPath UAssetRegistryHelpers::STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData) {
}
	struct FARFilter UAssetRegistryHelpers::STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues) {
}
	bool UAssetRegistryHelpers::STATIC_IsValid(const struct FAssetData& InAssetData) {
}
	bool UAssetRegistryHelpers::STATIC_IsUAsset(const struct FAssetData& InAssetData) {
}
	bool UAssetRegistryHelpers::STATIC_IsRedirector(const struct FAssetData& InAssetData) {
}
	bool UAssetRegistryHelpers::STATIC_IsAssetLoaded(const struct FAssetData& InAssetData) {
}
	bool UAssetRegistryHelpers::STATIC_GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue) {
}
	struct FString UAssetRegistryHelpers::STATIC_GetFullName(const struct FAssetData& InAssetData) {
}
	struct FString UAssetRegistryHelpers::STATIC_GetExportTextName(const struct FAssetData& InAssetData) {
}
	class UClass* UAssetRegistryHelpers::STATIC_GetClass(const struct FAssetData& InAssetData) {
}
	TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::STATIC_GetAssetRegistry() {
}
	class UObject* UAssetRegistryHelpers::STATIC_GetAsset(const struct FAssetData& InAssetData) {
}
	struct FAssetData UAssetRegistryHelpers::STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass) {
}
