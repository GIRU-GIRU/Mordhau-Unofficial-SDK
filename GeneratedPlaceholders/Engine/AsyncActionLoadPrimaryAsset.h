#pragma once

#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAsset.generated.h"

UCLASS()
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Completed;

	UFUNCTION(BlueprintCallable, Category = "AsyncActionLoadPrimaryAsset")
	class UAsyncActionLoadPrimaryAsset* STATIC_AsyncLoadPrimaryAsset(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, TArray<struct FName> LoadBundles);

};