#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFloatBase.generated.h"

UCLASS()
class UInterpTrackFloatBase : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveFloat FloatTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurveTension;


};