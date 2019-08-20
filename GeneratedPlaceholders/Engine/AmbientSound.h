#pragma once

#include "CoreMinimal.h"
#include "AmbientSound.generated.h"

UCLASS()
class AAmbientSound : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* AudioComponent;

	UFUNCTION(BlueprintCallable, Category = "AmbientSound")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "AmbientSound")
		void Play(float StartTime);
	UFUNCTION(BlueprintCallable, Category = "AmbientSound")
		void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	UFUNCTION(BlueprintCallable, Category = "AmbientSound")
		void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	UFUNCTION(BlueprintCallable, Category = "AmbientSound")
		void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);

};