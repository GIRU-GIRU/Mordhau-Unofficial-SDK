#pragma once

#include "CoreMinimal.h"
#include "PointLightComponent.generated.h"

UCLASS()
class UPointLightComponent : public ULocalLightComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseInverseSquaredFalloff : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightFalloffExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SoftSourceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceLength;

	UFUNCTION(BlueprintCallable, Category = "PointLightComponent")
	void SetSourceRadius(float bNewValue);
	UFUNCTION(BlueprintCallable, Category = "PointLightComponent")
		void SetSourceLength(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "PointLightComponent")
		void SetSoftSourceRadius(float bNewValue);
	UFUNCTION(BlueprintCallable, Category = "PointLightComponent")
		void SetLightFalloffExponent(float NewLightFalloffExponent);

};