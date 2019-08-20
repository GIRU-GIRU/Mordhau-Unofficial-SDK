#pragma once

#include "CoreMinimal.h"
#include "MovieSceneWidgetMaterialTrack.generated.h"

UCLASS()
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> BrushPropertyNamePath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TrackName;


};