#pragma once

#include "CoreMinimal.h"
#include "MovieSceneLevelVisibilityTrack.generated.h"

UCLASS()
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};