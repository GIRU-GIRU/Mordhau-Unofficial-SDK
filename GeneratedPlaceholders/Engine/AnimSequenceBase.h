#pragma once

#include "CoreMinimal.h"
#include "AnimSequenceBase.generated.h"

UCLASS()
class UAnimSequenceBase : public UAnimationAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimNotifyEvent> Notifies;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SequenceLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RateScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawCurveTracks RawCurveData;

	UFUNCTION(BlueprintCallable, Category = "AnimSequenceBase")
	float GetPlayLength();

};