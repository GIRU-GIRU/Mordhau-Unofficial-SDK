#pragma once

#include "CoreMinimal.h"
#include "AssetRegistryHelpers.generated.h"

UCLASS()
class UAssetRegistryHelpers : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
	struct FSoftObjectPath STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		struct FARFilter STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		bool STATIC_IsValid(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		bool STATIC_IsUAsset(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		bool STATIC_IsRedirector(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		bool STATIC_IsAssetLoaded(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		bool STATIC_GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		struct FString STATIC_GetFullName(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		struct FString STATIC_GetExportTextName(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		class UClass* STATIC_GetClass(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		TScriptInterface<class UAssetRegistry> STATIC_GetAssetRegistry();
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		class UObject* STATIC_GetAsset(const struct FAssetData& InAssetData);
	UFUNCTION(BlueprintCallable, Category = "AssetRegistryHelpers")
		struct FAssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);

};