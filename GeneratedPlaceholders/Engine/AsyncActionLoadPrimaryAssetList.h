#pragma once

#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetList.generated.h"

UCLASS()
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Completed;

	UFUNCTION(BlueprintCallable, Category = "AsyncActionLoadPrimaryAssetList")
	class UAsyncActionLoadPrimaryAssetList* STATIC_AsyncLoadPrimaryAssetList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> LoadBundles);

};