#pragma once

#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.generated.h"

UCLASS()
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};