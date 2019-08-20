#pragma once

#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetClassList.generated.h"

UCLASS()
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Completed;

	UFUNCTION(BlueprintCallable, Category = "AsyncActionLoadPrimaryAssetClassList")
	class UAsyncActionLoadPrimaryAssetClassList* STATIC_AsyncLoadPrimaryAssetClassList(class UObject* WorldContextObject, TArray<struct FPrimaryAssetId> PrimaryAssetList, TArray<struct FName> LoadBundles);

};