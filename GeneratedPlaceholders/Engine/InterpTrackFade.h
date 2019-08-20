#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFade.generated.h"

UCLASS()
class UInterpTrackFade : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPersistFade : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFadeAudio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor FadeColor;


};