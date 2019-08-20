#pragma once

#include "CoreMinimal.h"
#include "MapCameraActor.generated.h"

UCLASS()
class AMapCameraActor : public ACameraActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AtmosphericFogMultiplierOverride;


};