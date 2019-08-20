#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleBeamTarget.generated.h"

UCLASS()
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeam2SourceTargetMethod> TargetMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TargetName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Target;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTargetAbsolute : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockTarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeam2SourceTargetTangentMethod> TargetTangentMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector TargetTangent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockTargetTangent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat TargetStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockTargetStength : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LockRadius;


};