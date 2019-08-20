#pragma once

#include "CoreMinimal.h"
#include "MovieSceneGeometryCacheTrack.generated.h"

UCLASS()
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> AnimationSections;


};