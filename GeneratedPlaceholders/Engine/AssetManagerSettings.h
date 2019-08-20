#pragma once

#include "CoreMinimal.h"
#include "AssetManagerSettings.generated.h"

UCLASS()
class UAssetManagerSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDirectoryPath> DirectoriesToExclude;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyCookProductionAssets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldManagerDetermineTypeAndName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldGuessTypeAndNameInEditor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldAcquireMissingChunksOnLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAssetManagerRedirect> AssetPathRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x50];


};