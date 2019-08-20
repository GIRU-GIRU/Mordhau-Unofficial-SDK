#pragma once

#include "CoreMinimal.h"
#include "MovieSceneParameterSection.generated.h"

UCLASS()
class UMovieSceneParameterSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves;


};