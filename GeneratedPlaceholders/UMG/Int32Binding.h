#pragma once

#include "CoreMinimal.h"
#include "Int32Binding.generated.h"

UCLASS()
class UInt32Binding : public UPropertyBinding
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Int32Binding")
	int GetValue();

};