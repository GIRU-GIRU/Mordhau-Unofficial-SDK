#pragma once

#include "CoreMinimal.h"
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS()
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaterialIndex;


};