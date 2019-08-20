#pragma once

#include "CoreMinimal.h"
#include "MovieScene3DPathSection.generated.h"

UCLASS()
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel TimingCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovieScene3DPathSection_Axis FrontAxisEnum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovieScene3DPathSection_Axis UpAxisEnum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFollow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReverse : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceUpright : 1;


};