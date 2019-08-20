#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleCollisionGPU.generated.h"

UCLASS()
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Resilience;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat ResilienceScaleOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Friction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomSpread;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomDistribution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RadiusScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RadiusBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleCollisionResponse> response;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleCollisionMode> CollisionMode;


};