#pragma once

#include "CoreMinimal.h"
#include "MouseCursorBinding.generated.h"

UCLASS()
class UMouseCursorBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MouseCursorBinding")
	TEnumAsByte<EMouseCursor> GetValue();

};