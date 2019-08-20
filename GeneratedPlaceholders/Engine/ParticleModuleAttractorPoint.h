#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAttractorPoint.generated.h"

UCLASS()
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Range;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Strength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char StrengthByDistance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectBaseVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseWorldSpacePosition : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Positive_X : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Positive_Y : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Positive_Z : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Negative_X : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Negative_Y : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Negative_Z : 1;


};