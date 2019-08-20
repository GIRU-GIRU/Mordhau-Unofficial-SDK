#pragma once

#include "CoreMinimal.h"
#include "ProceduralFoliageBlockingVolume.generated.h"

UCLASS()
class AProceduralFoliageBlockingVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AProceduralFoliageVolume* ProceduralFoliageVolume;


};