#pragma once

#include "CoreMinimal.h"
#include "FloatBinding.generated.h"

UCLASS()
class UFloatBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "FloatBinding")
	float GetValue();

};