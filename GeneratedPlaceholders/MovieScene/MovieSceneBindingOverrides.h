#pragma once

#include "CoreMinimal.h"
#include "MovieSceneBindingOverrides.generated.h"

UCLASS()
class UMovieSceneBindingOverrides : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMovieSceneBindingOverrideData> BindingData;


};