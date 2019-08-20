#pragma once

#include "CoreMinimal.h"
#include "SoundBase.generated.h"

UCLASS()
class USoundBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundClass* SoundClassObject;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDebug : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideConcurrency : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOutputToBusOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreFocus : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasDelayNode : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasConcatenatorNode : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasVirtualizeWhenSilent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBypassVolumeScaleForPriority : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundConcurrency* SoundConcurrencySettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundConcurrencySettings ConcurrencyOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TotalSamples;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* SoundSubmixObject;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSubmixSendInfo> SoundSubmixSends;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundEffectSourcePresetChain* SourceEffectChain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSourceBusSendInfo> BusSends;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends;


};