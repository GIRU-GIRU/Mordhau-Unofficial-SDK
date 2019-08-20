#pragma once

#include "CoreMinimal.h"
#include "SphereComponent.generated.h"

UCLASS()
class USphereComponent : public UShapeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SphereRadius;

	UFUNCTION(BlueprintCallable, Category = "SphereComponent")
	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	UFUNCTION(BlueprintCallable, Category = "SphereComponent")
		float GetUnscaledSphereRadius();
	UFUNCTION(BlueprintCallable, Category = "SphereComponent")
		float GetShapeScale();
	UFUNCTION(BlueprintCallable, Category = "SphereComponent")
		float GetScaledSphereRadius();

};