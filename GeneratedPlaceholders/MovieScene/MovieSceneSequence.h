#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSequence.generated.h"

UCLASS()
class UMovieSceneSequence : public UMovieSceneSignedObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovieSceneCompletionMode DefaultCompletionMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bParentContextsAreSignificant;


};