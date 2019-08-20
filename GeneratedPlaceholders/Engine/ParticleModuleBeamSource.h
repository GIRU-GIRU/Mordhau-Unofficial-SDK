#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleBeamSource.generated.h"

UCLASS()
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeam2SourceTargetMethod> SourceMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SourceName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSourceAbsolute : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Source;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockSource : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeam2SourceTargetTangentMethod> SourceTangentMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector SourceTangent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockSourceTangent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SourceStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockSourceStength : 1;


};