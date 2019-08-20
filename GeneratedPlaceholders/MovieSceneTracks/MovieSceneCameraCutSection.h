#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraCutSection.generated.h"

UCLASS()
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid CameraGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneObjectBindingID CameraBindingID;


};