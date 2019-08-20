#pragma once

#include "CoreMinimal.h"
#include "CurveFloat.generated.h"

UCLASS()
class UCurveFloat : public UCurveBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRichCurve FloatCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsEventCurve;

	UFUNCTION(BlueprintCallable, Category = "CurveFloat")
	float GetFloatValue(float InTime);

};