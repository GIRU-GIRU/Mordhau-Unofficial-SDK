#pragma once

#include "CoreMinimal.h"
#include "MovieSceneParticleTrack.generated.h"

UCLASS()
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> ParticleSections;


};