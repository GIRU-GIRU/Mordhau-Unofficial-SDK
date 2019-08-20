#pragma once

#include "CoreMinimal.h"
#include "LevelCapture.generated.h"

UCLASS()
class ULevelCapture : public UMovieSceneCapture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoStartCapture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid PrerequisiteActorId;


};