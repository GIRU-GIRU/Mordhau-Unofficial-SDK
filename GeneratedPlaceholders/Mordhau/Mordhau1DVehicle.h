#pragma once

#include "CoreMinimal.h"
#include "Mordhau1DVehicle.generated.h"

UCLASS()
class AMordhau1DVehicle : public AMordhauVehicle
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Mordhau1DVehicle")
	void OnStepChanged();

};