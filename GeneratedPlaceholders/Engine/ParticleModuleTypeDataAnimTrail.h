#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTypeDataAnimTrail.generated.h"

UCLASS()
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeadTrailsOnDeactivate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnablePreviousTangentRecalculation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTangentRecalculationEveryFrame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TilingDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceTessellationStepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TangentTessellationStepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WidthTessellationStepSize;


};