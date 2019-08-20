#pragma once

#include "CoreMinimal.h"
#include "TextBinding.generated.h"

UCLASS()
class UTextBinding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TextBinding")
	struct FText GetTextValue();
	UFUNCTION(BlueprintCallable, Category = "TextBinding")
		struct FString GetStringValue();

};