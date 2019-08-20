#pragma once

#include "CoreMinimal.h"
#include "MovieScene3DConstraintSection.generated.h"

UCLASS()
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ConstraintId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneObjectBindingID ConstraintBindingID;


};