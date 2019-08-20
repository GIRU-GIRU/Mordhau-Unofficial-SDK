#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAccelerationDrag.generated.h"

UCLASS()
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloat* DragCoefficient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat DragCoefficientRaw;


};