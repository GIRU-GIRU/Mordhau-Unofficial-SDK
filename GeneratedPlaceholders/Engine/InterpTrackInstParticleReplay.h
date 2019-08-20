#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstParticleReplay.generated.h"

UCLASS()
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;


};