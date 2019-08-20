#pragma once

#include "CoreMinimal.h"
#include "SubmixEffectReverbPreset.generated.h"

UCLASS()
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSubmixEffectReverbSettings Settings;

	UFUNCTION(BlueprintCallable, Category = "SubmixEffectReverbPreset")
	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
	UFUNCTION(BlueprintCallable, Category = "SubmixEffectReverbPreset")
		void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);

};