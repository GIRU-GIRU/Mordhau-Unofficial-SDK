#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSpawnPerUnit.generated.h"

UCLASS()
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UnitScalar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SpawnPerUnit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreSpawnRateWhenMoving : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementTolerance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxFrameDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreMovementAlongX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreMovementAlongY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreMovementAlongZ : 1;


};