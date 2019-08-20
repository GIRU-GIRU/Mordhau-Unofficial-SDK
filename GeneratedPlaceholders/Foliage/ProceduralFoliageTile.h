#pragma once

#include "CoreMinimal.h"
#include "ProceduralFoliageTile.generated.h"

UCLASS()
class UProceduralFoliageTile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProceduralFoliageSpawner* FoliageSpawner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FProceduralFoliageInstance> InstancesArray;


};