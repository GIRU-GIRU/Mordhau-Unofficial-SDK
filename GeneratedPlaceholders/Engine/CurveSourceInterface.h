#pragma once

#include "CoreMinimal.h"
#include "CurveSourceInterface.generated.h"

UCLASS()
class UCurveSourceInterface : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CurveSourceInterface")
	float GetCurveValue(const struct FName& CurveName);
	UFUNCTION(BlueprintCallable, Category = "CurveSourceInterface")
		void GetCurves(TArray<struct FNamedCurveValue>* OutValues);
	UFUNCTION(BlueprintCallable, Category = "CurveSourceInterface")
		struct FName GetBindingName();

};