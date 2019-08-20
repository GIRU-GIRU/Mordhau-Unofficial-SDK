#pragma once

#include "CoreMinimal.h"
#include "CurveBase.generated.h"

UCLASS()
class UCurveBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CurveBase")
	void GetValueRange(float* MinValue, float* MaxValue);
	UFUNCTION(BlueprintCallable, Category = "CurveBase")
		void GetTimeRange(float* MinTime, float* MaxTime);

};