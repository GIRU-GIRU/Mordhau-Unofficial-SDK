#pragma once

#include "CoreMinimal.h"
#include "InterpTrackParticleReplay.generated.h"

UCLASS()
class UInterpTrackParticleReplay : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleReplayTrackKey> TrackKeys;


};