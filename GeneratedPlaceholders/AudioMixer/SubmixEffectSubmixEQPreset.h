#pragma once

#include "CoreMinimal.h"
#include "SubmixEffectSubmixEQPreset.generated.h"

UCLASS()
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSubmixEffectSubmixEQSettings Settings;

	UFUNCTION(BlueprintCallable, Category = "SubmixEffectSubmixEQPreset")
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);

};