#pragma once

#include "CoreMinimal.h"
#include "ForceFeedbackComponent.generated.h"

UCLASS()
class UForceFeedbackComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoDestroy : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopWhenOwnerDestroyed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreTimeDilation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideAttenuation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IntensityMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UForceFeedbackAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnForceFeedbackFinished;

	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
		void SetIntensityMultiplier(float NewIntensityMultiplier);
	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
		void SetForceFeedbackEffect(class UForceFeedbackEffect* NewForceFeedbackEffect);
	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
		void Play(float StartTime);
	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
		bool BP_GetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings* OutAttenuationSettings);
	UFUNCTION(BlueprintCallable, Category = "ForceFeedbackComponent")
		void AdjustAttenuation(const struct FForceFeedbackAttenuationSettings& InAttenuationSettings);

};