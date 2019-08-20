#pragma once

#include "CoreMinimal.h"
#include "MovieSceneGeometryCacheSection.generated.h"

UCLASS()
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneGeometryCacheParams Params;


};