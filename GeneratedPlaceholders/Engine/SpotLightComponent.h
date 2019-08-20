#pragma once

#include "CoreMinimal.h"
#include "SpotLightComponent.generated.h"

UCLASS()
class USpotLightComponent : public UPointLightComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightShaftConeAngle;

	UFUNCTION(BlueprintCallable, Category = "SpotLightComponent")
	void SetOuterConeAngle(float NewOuterConeAngle);
	UFUNCTION(BlueprintCallable, Category = "SpotLightComponent")
		void SetInnerConeAngle(float NewInnerConeAngle);

};