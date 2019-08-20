#pragma once

#include "CoreMinimal.h"
#include "InterpTrackVectorBase.generated.h"

UCLASS()
class UInterpTrackVectorBase : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector VectorTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurveTension;


};