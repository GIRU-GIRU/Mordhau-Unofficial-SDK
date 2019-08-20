#pragma once

#include "CoreMinimal.h"
#include "AudioVolume.generated.h"

UCLASS()
class AAudioVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FReverbSettings Settings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInteriorSettings AmbientZoneSettings;

	UFUNCTION(BlueprintCallable, Category = "AudioVolume")
	void SetReverbSettings(const struct FReverbSettings& NewReverbSettings);
	UFUNCTION(BlueprintCallable, Category = "AudioVolume")
		void SetPriority(float NewPriority);
	UFUNCTION(BlueprintCallable, Category = "AudioVolume")
		void SetInteriorSettings(const struct FInteriorSettings& NewInteriorSettings);
	UFUNCTION(BlueprintCallable, Category = "AudioVolume")
		void SetEnabled(bool bNewEnabled);
	UFUNCTION(BlueprintCallable, Category = "AudioVolume")
		void OnRep_bEnabled();

};