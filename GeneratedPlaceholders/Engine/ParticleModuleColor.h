#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleColor.generated.h"

UCLASS()
class UParticleModuleColor : public UParticleModuleColorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector StartColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat StartAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClampAlpha : 1;


};