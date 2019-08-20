#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraAnimSection.generated.h"

UCLASS()
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneCameraAnimSectionData AnimData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnim* CameraAnim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLooping;


};