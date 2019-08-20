#pragma once

#include "CoreMinimal.h"
#include "MovieSceneColorSection.generated.h"

UCLASS()
class UMovieSceneColorSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel RedCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel GreenCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel BlueCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel AlphaCurve;


};