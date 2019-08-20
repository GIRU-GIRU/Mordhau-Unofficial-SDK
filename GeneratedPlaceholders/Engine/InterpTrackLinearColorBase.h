#pragma once

#include "CoreMinimal.h"
#include "InterpTrackLinearColorBase.generated.h"

UCLASS()
class UInterpTrackLinearColorBase : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveLinearColor LinearColorTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurveTension;


};