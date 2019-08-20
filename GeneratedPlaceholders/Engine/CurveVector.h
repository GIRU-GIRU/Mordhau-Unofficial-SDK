#pragma once

#include "CoreMinimal.h"
#include "CurveVector.generated.h"

UCLASS()
class UCurveVector : public UCurveBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRichCurve FloatCurves[0x3];

	UFUNCTION(BlueprintCallable, Category = "CurveVector")
	struct FVector GetVectorValue(float InTime);

};