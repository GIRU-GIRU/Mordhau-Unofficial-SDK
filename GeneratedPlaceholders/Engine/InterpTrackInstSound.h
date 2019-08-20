#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstSound.generated.h"

UCLASS()
class UInterpTrackInstSound : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* PlayAudioComp;


};