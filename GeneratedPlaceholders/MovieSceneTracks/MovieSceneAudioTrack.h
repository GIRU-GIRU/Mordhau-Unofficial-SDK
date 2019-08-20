#pragma once

#include "CoreMinimal.h"
#include "MovieSceneAudioTrack.generated.h"

UCLASS()
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> AudioSections;


};