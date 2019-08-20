#pragma once

#include "CoreMinimal.h"
#include "PrimaryAssetLabel.generated.h"

UCLASS()
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPrimaryAssetRules Rules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLabelAssetsInMyDirectory : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsRuntimeLabel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCollectionReference AssetCollection;


};