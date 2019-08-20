#pragma once

#include "CoreMinimal.h"
#include "MovieSceneBoolSection.generated.h"

UCLASS()
class UMovieSceneBoolSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool DefaultValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneBoolChannel BoolCurve;


};