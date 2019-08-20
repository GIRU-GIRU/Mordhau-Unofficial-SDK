#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCinematicShotSection.generated.h"

UCLASS()
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ShotDisplayName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText DisplayName;


};