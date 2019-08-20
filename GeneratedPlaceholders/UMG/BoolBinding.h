#pragma once

#include "CoreMinimal.h"
#include "BoolBinding.generated.h"

UCLASS()
class UBoolBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BoolBinding")
	bool GetValue();

};