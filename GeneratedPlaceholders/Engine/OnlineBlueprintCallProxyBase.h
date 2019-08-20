#pragma once

#include "CoreMinimal.h"
#include "OnlineBlueprintCallProxyBase.generated.h"

UCLASS()
class UOnlineBlueprintCallProxyBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "OnlineBlueprintCallProxyBase")
	void Activate();

};