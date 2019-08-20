#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleCollision.generated.h"

UCLASS()
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector DampingFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector DampingFactorRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat MaxCollisions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EObjectTypeQuery>> CollisionTypes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyPhysics : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreTriggerVolumes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat ParticleMass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirScalar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPawnsDoNotDecrementCount : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlyVerticalNormalsDecrementCount : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VerticalFudgeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat DelayAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDropDetail : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollideOnlyIfVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreSourceActor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxCollisionDistance;


};