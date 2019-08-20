#pragma once

#include "CoreMinimal.h"
#include "WidgetAnimation.generated.h"

UCLASS()
class UWidgetAnimation : public UMovieSceneSequence
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAnimationStarted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAnimationFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieScene* MovieScene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FWidgetAnimationBinding> AnimationBindings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLegacyFinishOnStop;

	UFUNCTION(BlueprintCallable, Category = "WidgetAnimation")
	float GetStartTime();
	UFUNCTION(BlueprintCallable, Category = "WidgetAnimation")
		float GetEndTime();

};