#pragma once

#include "CoreMinimal.h"
#include "AnimNotify_PlaySound.generated.h"

UCLASS()
class UAnimNotify_PlaySound : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundBase* Sound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFollow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachName;


};