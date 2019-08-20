#pragma once

#include "CoreMinimal.h"
#include "BrushBinding.generated.h"

UCLASS()
class UBrushBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BrushBinding")
	struct FSlateBrush GetValue();

};