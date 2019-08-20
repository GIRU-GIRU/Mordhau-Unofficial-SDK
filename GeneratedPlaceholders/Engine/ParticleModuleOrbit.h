#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleOrbit.generated.h"

UCLASS()
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOrbitChainMode> ChainMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector OffsetAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FOrbitOptions OffsetOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector RotationAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FOrbitOptions RotationOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector RotationRateAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FOrbitOptions RotationRateOptions;


};