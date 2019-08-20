#pragma once

#include "CoreMinimal.h"
#include "MoviePlayerSettings.generated.h"

UCLASS()
class UMoviePlayerSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWaitForMoviesToComplete;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMoviesAreSkippable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> StartupMovies;


};