#pragma once

#include "CoreMinimal.h"
#include "VOIPStatics.generated.h"

UCLASS()
class UVOIPStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VOIPStatics")
	void STATIC_SetMicThreshold(float InThreshold);

};