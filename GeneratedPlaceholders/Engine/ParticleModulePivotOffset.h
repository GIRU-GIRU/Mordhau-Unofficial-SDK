#pragma once

#include "CoreMinimal.h"
#include "ParticleModulePivotOffset.generated.h"

UCLASS()
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D PivotOffset;


};