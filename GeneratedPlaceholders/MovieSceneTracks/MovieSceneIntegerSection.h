#pragma once

#include "CoreMinimal.h"
#include "MovieSceneIntegerSection.generated.h"

UCLASS()
class UMovieSceneIntegerSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneIntegerChannel IntegerCurve;


};