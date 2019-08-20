#pragma once

#include "CoreMinimal.h"
#include "ActorSequenceComponent.generated.h"

UCLASS()
class UActorSequenceComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UActorSequence* Sequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UActorSequencePlayer* SequencePlayer;


};