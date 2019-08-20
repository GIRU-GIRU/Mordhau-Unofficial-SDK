#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshCapturePointBanner.generated.h"

UCLASS()
class ASkeletalMeshCapturePointBanner : public ACapturePointBanner
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* CapturingAudioComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* RaisingSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* LoweringSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddWindActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindDisabledIfLessThanProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindMinGustAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindMaxGustAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentWindSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AWindDirectionalSource* WindActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* WavingAudioComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AudioVolumeByProgressIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AudioVolumeByProgressOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AudioPitchByProgressIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AudioPitchByProgressOut;


};