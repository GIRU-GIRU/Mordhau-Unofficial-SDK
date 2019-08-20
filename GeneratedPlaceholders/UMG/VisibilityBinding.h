#pragma once

#include "CoreMinimal.h"
#include "VisibilityBinding.generated.h"

UCLASS()
class UVisibilityBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VisibilityBinding")
	ESlateVisibility GetValue();

};