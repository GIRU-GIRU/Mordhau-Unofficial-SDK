#pragma once

#include "CoreMinimal.h"
#include "CapsuleComponent.generated.h"

UCLASS()
class UCapsuleComponent : public UShapeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CapsuleHalfHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CapsuleRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CapsuleHeight;

	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void GetUnscaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void GetUnscaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetUnscaledCapsuleRadius();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetUnscaledCapsuleHalfHeight();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetShapeScale();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void GetScaledCapsuleSize_WithoutHemisphere(float* OutRadius, float* OutHalfHeightWithoutHemisphere);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		void GetScaledCapsuleSize(float* OutRadius, float* OutHalfHeight);
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetScaledCapsuleRadius();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetScaledCapsuleHalfHeight_WithoutHemisphere();
	UFUNCTION(BlueprintCallable, Category = "CapsuleComponent")
		float GetScaledCapsuleHalfHeight();

};