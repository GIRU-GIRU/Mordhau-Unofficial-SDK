#pragma once

#include "CoreMinimal.h"
#include "SubmixEffectDynamicsProcessorPreset.generated.h"

UCLASS()
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSubmixEffectDynamicsProcessorSettings Settings;

	UFUNCTION(BlueprintCallable, Category = "SubmixEffectDynamicsProcessorPreset")
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);

};