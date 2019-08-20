#pragma once

#include "CoreMinimal.h"
#include "MovieSceneParticleSection.generated.h"

UCLASS()
class UMovieSceneParticleSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneParticleChannel ParticleKeys;


};