#pragma once

#include "CoreMinimal.h"
#include "MediaSoundComponent.generated.h"

UCLASS()
class UMediaSoundComponent : public USynthComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMediaSoundChannels Channels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool DynamicRateAdjustment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RateAdjustmentFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatRange RateAdjustmentRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaPlayer* MediaPlayer;

	UFUNCTION(BlueprintCallable, Category = "MediaSoundComponent")
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	UFUNCTION(BlueprintCallable, Category = "MediaSoundComponent")
		class UMediaPlayer* GetMediaPlayer();
	UFUNCTION(BlueprintCallable, Category = "MediaSoundComponent")
		bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);

};