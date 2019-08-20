#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationEmitter.generated.h"

UCLASS()
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName EmitterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char InheritSourceVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InheritSourceVelocityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritSourceRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InheritSourceRotationScale;


};