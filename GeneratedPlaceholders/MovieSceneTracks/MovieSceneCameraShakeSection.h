#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraShakeSection.generated.h"

UCLASS()
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneCameraShakeSectionData ShakeData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ShakeClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECameraAnimPlaySpace> PlaySpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator UserDefinedPlaySpace;


};