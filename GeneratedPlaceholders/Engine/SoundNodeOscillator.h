#pragma once

#include "CoreMinimal.h"
#include "SoundNodeOscillator.generated.h"

UCLASS()
class USoundNodeOscillator : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bModulateVolume : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bModulatePitch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AmplitudeMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AmplitudeMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrequencyMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrequencyMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffsetMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffsetMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CenterMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CenterMax;


};