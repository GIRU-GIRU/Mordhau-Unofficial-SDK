#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAccelerationDragScaleOverLife.generated.h"

UCLASS()
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloat* DragScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat DragScaleRaw;


};