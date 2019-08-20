#pragma once

#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetClass.generated.h"

UCLASS()
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Completed;

	UFUNCTION(BlueprintCallable, Category = "AsyncActionLoadPrimaryAssetClass")
	class UAsyncActionLoadPrimaryAssetClass* STATIC_AsyncLoadPrimaryAssetClass(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, TArray<struct FName> LoadBundles);

};