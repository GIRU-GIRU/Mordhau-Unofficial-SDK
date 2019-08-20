#pragma once

#include "CoreMinimal.h"
#include "MovieSceneTransformOrigin.generated.h"

UCLASS()
class UMovieSceneTransformOrigin : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MovieSceneTransformOrigin")
	struct FTransform BP_GetTransformOrigin();

};