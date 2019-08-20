#pragma once

#include "CoreMinimal.h"
#include "AsyncActionChangePrimaryAssetBundles.generated.h"

UCLASS()
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Completed;

	UFUNCTION(BlueprintCallable, Category = "AsyncActionChangePrimaryAssetBundles")
	class UAsyncActionChangePrimaryAssetBundles* STATIC_AsyncChangeBundleStateForPrimaryAssetList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> AddBundles, TArray<struct FName> RemoveBundles);
	UFUNCTION(BlueprintCallable, Category = "AsyncActionChangePrimaryAssetBundles")
		class UAsyncActionChangePrimaryAssetBundles* STATIC_AsyncChangeBundleStateForMatchingPrimaryAssets(class UObject* WorldContextObject, TArray<struct FName> NewBundles, TArray<struct FName> OldBundles);

};