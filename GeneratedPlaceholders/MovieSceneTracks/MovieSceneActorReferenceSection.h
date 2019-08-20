#pragma once

#include "CoreMinimal.h"
#include "MovieSceneActorReferenceSection.generated.h"

UCLASS()
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneActorReferenceData ActorReferenceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntegralCurve ActorGuidIndexCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ActorGuidStrings;


};