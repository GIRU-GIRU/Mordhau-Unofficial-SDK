#pragma once

#include "CoreMinimal.h"
#include "MovieSceneParticleParameterTrack.generated.h"

UCLASS()
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};