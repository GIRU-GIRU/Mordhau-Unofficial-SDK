#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAttractorParticle.generated.h"

UCLASS()
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName EmitterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Range;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStrengthByDistance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Strength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectBaseVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenewSource : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritSourceVel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LastSelIndex;


};