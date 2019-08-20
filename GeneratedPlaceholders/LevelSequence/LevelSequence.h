#pragma once

#include "CoreMinimal.h"
#include "LevelSequence.generated.h"

UCLASS()
class ULevelSequence : public UMovieSceneSequence
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieScene* MovieScene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLevelSequenceObjectReferenceMap ObjectReferences;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLevelSequenceBindingReferences BindingReferences;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FString, struct FLevelSequenceObject> PossessedObjects;


};