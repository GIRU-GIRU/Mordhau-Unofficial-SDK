#pragma once

#include "CoreMinimal.h"
#include "ProceduralFoliageVolume.generated.h"

UCLASS()
class AProceduralFoliageVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProceduralFoliageComponent* ProceduralComponent;


};