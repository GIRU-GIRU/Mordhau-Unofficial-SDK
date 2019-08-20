#pragma once

#include "CoreMinimal.h"
#include "VectorFieldVolume.generated.h"

UCLASS()
class AVectorFieldVolume : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UVectorFieldComponent* VectorFieldComponent;


};