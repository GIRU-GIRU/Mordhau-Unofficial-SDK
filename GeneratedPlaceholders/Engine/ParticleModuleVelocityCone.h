#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVelocityCone.generated.h"

UCLASS()
class UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Angle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Velocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Direction;


};