#pragma once

#include "CoreMinimal.h"
#include "BlueprintAsyncActionBase.generated.h"

UCLASS()
class UBlueprintAsyncActionBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BlueprintAsyncActionBase")
	void Activate();

};