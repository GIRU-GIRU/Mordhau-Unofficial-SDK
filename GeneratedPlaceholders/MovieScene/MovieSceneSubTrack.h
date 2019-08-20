#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSubTrack.generated.h"

UCLASS()
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};