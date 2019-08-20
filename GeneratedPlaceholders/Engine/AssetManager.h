#pragma once

#include "CoreMinimal.h"
#include "AssetManager.generated.h"

UCLASS()
class UAssetManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> ObjectReferenceList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsGlobalAsyncScanEnvironment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldGuessTypeAndName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldUseSynchronousLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLoadingFromPakFiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldAcquireMissingChunksOnLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyCookProductionAssets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsBulkScanning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsManagementDatabaseCurrent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUpdateManagementDatabaseAfterScan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIncludeOnlyOnDiskAssets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumberOfSpawnedNotifications;


};