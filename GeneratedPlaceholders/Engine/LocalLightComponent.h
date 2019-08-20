#pragma once

#include "CoreMinimal.h"
#include "LocalLightComponent.generated.h"

UCLASS()
class ULocalLightComponent : public ULightComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttenuationRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassPointLightSettings LightmassSettings;

	UFUNCTION(BlueprintCallable, Category = "LocalLightComponent")
	void SetAttenuationRadius(float NewRadius);
	UFUNCTION(BlueprintCallable, Category = "LocalLightComponent")
		float STATIC_GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);

};