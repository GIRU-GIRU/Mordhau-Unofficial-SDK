#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleKillBox.generated.h"

UCLASS()
class UParticleModuleKillBox : public UParticleModuleKillBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector LowerLeftCorner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector UpperRightCorner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsolute : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bKillInside : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAxisAlignedAndFixedSize : 1;


};