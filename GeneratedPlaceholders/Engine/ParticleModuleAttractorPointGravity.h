#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAttractorPointGravity.generated.h"

UCLASS()
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Radius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloat* Strength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat StrengthRaw;


};