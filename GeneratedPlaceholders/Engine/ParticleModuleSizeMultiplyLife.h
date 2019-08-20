#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSizeMultiplyLife.generated.h"

UCLASS()
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector LifeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MultiplyX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MultiplyY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MultiplyZ : 1;


};