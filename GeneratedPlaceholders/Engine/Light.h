#pragma once

#include "CoreMinimal.h"
#include "Light.generated.h"

UCLASS()
class ALight : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULightComponent* LightComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;

	UFUNCTION(BlueprintCallable, Category = "Light")
	void ToggleEnabled();
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetLightColor(const struct FLinearColor& NewLightColor);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetEnabled(bool bSetEnabled);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetCastShadows(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetBrightness(float NewBrightness);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void SetAffectTranslucentLighting(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "Light")
		void OnRep_bEnabled();
	UFUNCTION(BlueprintCallable, Category = "Light")
		bool IsEnabled();
	UFUNCTION(BlueprintCallable, Category = "Light")
		struct FLinearColor GetLightColor();
	UFUNCTION(BlueprintCallable, Category = "Light")
		float GetBrightness();

};