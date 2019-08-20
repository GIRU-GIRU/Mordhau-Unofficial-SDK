#pragma once

#include "CoreMinimal.h"
#include "InterpTrackSound.generated.h"

UCLASS()
class UInterpTrackSound : public UInterpTrackVectorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundTrackKey> Sounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlayOnReverse : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bContinueSoundOnMatineeEnd : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSuppressSubtitles : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTreatAsDialogue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAttach : 1;


};