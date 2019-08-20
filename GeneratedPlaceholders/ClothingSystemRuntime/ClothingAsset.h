#pragma once

#include "CoreMinimal.h"
#include "ClothingAsset.generated.h"

UCLASS()
class UClothingAsset : public UClothingAssetBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* PhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FClothConfig ClothConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FClothLODData> LODData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> LodMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> UsedBoneNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> UsedBoneIndices;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ReferenceBoneIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClothingAssetCustomData* customData;


};