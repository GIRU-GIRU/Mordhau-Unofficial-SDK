#pragma once

#include "CoreMinimal.h"
#include "CullDistanceVolume.generated.h"

UCLASS()
class ACullDistanceVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCullDistanceSizePair> CullDistances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;


};