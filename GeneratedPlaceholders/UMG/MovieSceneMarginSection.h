#pragma once

#include "CoreMinimal.h"
#include "MovieSceneMarginSection.generated.h"

UCLASS()
class UMovieSceneMarginSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel TopCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel LeftCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel RightCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel BottomCurve;


};