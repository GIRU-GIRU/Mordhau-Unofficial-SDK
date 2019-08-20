#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEasingExternalCurve.generated.h"

UCLASS()
class UMovieSceneEasingExternalCurve : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* Curve;


};