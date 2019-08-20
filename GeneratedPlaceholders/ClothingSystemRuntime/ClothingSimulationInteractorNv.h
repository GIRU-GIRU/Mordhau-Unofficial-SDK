#pragma once

#include "CoreMinimal.h"
#include "ClothingSimulationInteractorNv.generated.h"

UCLASS()
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractorNv")
	void SetAnimDriveSpringStiffness(float InStiffness);
	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractorNv")
		void SetAnimDriveDamperStiffness(float InStiffness);
	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractorNv")
		void EnableGravityOverride(const struct FVector& InVector);
	UFUNCTION(BlueprintCallable, Category = "ClothingSimulationInteractorNv")
		void DisableGravityOverride();

};