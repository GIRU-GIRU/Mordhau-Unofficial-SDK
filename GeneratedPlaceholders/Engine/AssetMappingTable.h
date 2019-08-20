#pragma once

#include "CoreMinimal.h"
#include "AssetMappingTable.generated.h"

UCLASS()
class UAssetMappingTable : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAssetMapping> MappedAssets;


};