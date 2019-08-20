#pragma once

#include "CoreMinimal.h"
#include "ProceduralFoliageSpawner.generated.h"

UCLASS()
class UProceduralFoliageSpawner : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RandomSeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumUniqueTiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumQuadTreeSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFoliageTypeObject> FoliageTypes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bNeedsSimulation;

	UFUNCTION(BlueprintCallable, Category = "ProceduralFoliageSpawner")
	void Simulate(int NumSteps);

};