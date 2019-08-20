#pragma once

#include "CoreMinimal.h"
#include "ClothingSimulationInteractor.generated.h"

UCLASS()
class UClothingSimulationInteractor : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractor")
	void PhysicsAssetUpdated();
	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractor")
		void ClothConfigUpdated();

};