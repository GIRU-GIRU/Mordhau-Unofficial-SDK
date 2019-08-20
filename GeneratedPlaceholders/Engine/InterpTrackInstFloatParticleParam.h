#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstFloatParticleParam.generated.h"

UCLASS()
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ResetFloat;


};