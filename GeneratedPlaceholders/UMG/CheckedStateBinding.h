#pragma once

#include "CoreMinimal.h"
#include "CheckedStateBinding.generated.h"

UCLASS()
class UCheckedStateBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CheckedStateBinding")
	ECheckBoxState GetValue();

};