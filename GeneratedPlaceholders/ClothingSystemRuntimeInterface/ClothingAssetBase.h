#pragma once

#include "CoreMinimal.h"
#include "ClothingAssetBase.generated.h"

UCLASS()
class UClothingAssetBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ImportedFilePath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid AssetGuid;


};