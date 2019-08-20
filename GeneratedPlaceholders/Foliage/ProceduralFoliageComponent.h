#pragma once

#include "CoreMinimal.h"
#include "ProceduralFoliageComponent.generated.h"

UCLASS()
class UProceduralFoliageComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProceduralFoliageSpawner* FoliageSpawner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AVolume* SpawningVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ProceduralGuid;


};