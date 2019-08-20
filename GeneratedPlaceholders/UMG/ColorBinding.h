#pragma once

#include "CoreMinimal.h"
#include "ColorBinding.generated.h"

UCLASS()
class UColorBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ColorBinding")
	struct FSlateColor GetSlateValue();
	UFUNCTION(BlueprintCallable, Category = "ColorBinding")
		struct FLinearColor GetLinearValue();

};