#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEnumSection.generated.h"

UCLASS()
class UMovieSceneEnumSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneByteChannel EnumCurve;


};