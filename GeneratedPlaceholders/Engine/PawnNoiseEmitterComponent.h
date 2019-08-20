#pragma once

#include "CoreMinimal.h"
#include "PawnNoiseEmitterComponent.generated.h"

UCLASS()
class UPawnNoiseEmitterComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAIPerceptionSystemCompatibilityMode : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastRemoteNoisePosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseLifetime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRemoteNoiseVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRemoteNoiseTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastLocalNoiseVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastLocalNoiseTime;

	UFUNCTION(BlueprintCallable, Category = "PawnNoiseEmitterComponent")
	void MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);

};