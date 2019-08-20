#pragma once

#include "CoreMinimal.h"
#include "MovieSceneMediaTrack.generated.h"

UCLASS()
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> MediaSections;


};