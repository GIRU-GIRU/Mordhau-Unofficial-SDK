#pragma once

#include "CoreMinimal.h"
#include "ActorSequence.generated.h"

UCLASS()
class UActorSequence : public UMovieSceneSequence
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieScene* MovieScene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorSequenceObjectReferenceMap ObjectReferences;


};