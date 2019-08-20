#pragma once

#include "CoreMinimal.h"
#include "MovieSceneByteSection.generated.h"

UCLASS()
class UMovieSceneByteSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneByteChannel ByteCurve;


};