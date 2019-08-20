#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSizeScaleBySpeed.generated.h"

UCLASS()
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SpeedScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D MaxScale;


};