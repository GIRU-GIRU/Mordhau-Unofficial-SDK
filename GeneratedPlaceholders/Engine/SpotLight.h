#pragma once

#include "CoreMinimal.h"
#include "SpotLight.generated.h"

UCLASS()
class ASpotLight : public ALight
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USpotLightComponent* SpotLightComponent;

	UFUNCTION(BlueprintCallable, Category = "SpotLight")
	void SetOuterConeAngle(float NewOuterConeAngle);
	UFUNCTION(BlueprintCallable, Category = "SpotLight")
		void SetInnerConeAngle(float NewInnerConeAngle);

};