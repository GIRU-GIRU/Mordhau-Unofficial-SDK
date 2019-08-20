#pragma once

#include "CoreMinimal.h"
#include "MovieSceneLevelVisibilitySection.generated.h"

UCLASS()
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELevelVisibility Visibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> LevelNames;


};