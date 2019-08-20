#pragma once

#include "CoreMinimal.h"
#include "MovieSceneFloatSection.generated.h"

UCLASS()
class UMovieSceneFloatSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel FloatCurve;


};