#pragma once

#include "CoreMinimal.h"
#include "MovieSceneMaterialParameterCollectionTrack.generated.h"

UCLASS()
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialParameterCollection* MPC;


};