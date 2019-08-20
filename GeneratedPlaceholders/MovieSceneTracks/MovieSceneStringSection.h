#pragma once

#include "CoreMinimal.h"
#include "MovieSceneStringSection.generated.h"

UCLASS()
class UMovieSceneStringSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneStringChannel StringCurve;


};