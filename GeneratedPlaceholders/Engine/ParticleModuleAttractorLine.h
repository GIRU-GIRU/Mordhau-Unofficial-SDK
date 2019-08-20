#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAttractorLine.generated.h"

UCLASS()
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EndPoint0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EndPoint1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Range;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Strength;


};