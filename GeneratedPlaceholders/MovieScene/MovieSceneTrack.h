#pragma once

#include "CoreMinimal.h"
#include "MovieSceneTrack.generated.h"

UCLASS()
class UMovieSceneTrack : public UMovieSceneSignedObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneTrackEvalOptions EvalOptions;


};