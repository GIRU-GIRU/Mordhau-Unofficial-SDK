#pragma once

#include "CoreMinimal.h"
#include "MovieSceneBuiltInEasingFunction.generated.h"

UCLASS()
class UMovieSceneBuiltInEasingFunction : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovieSceneBuiltInEasing Type;


};