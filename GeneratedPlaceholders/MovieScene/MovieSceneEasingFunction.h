#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEasingFunction.generated.h"

UCLASS()
class UMovieSceneEasingFunction : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MovieSceneEasingFunction")
	float OnEvaluate(float Interp);

};