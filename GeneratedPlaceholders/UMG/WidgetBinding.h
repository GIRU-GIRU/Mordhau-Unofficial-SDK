#pragma once

#include "CoreMinimal.h"
#include "WidgetBinding.generated.h"

UCLASS()
class UWidgetBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "WidgetBinding")
	class UWidget* GetValue();

};