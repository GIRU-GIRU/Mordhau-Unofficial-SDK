#pragma once

#include "CoreMinimal.h"
#include "PointLight.generated.h"

UCLASS()
class APointLight : public ALight
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPointLightComponent* PointLightComponent;

	UFUNCTION(BlueprintCallable, Category = "PointLight")
	void SetRadius(float NewRadius);
	UFUNCTION(BlueprintCallable, Category = "PointLight")
		void SetLightFalloffExponent(float NewLightFalloffExponent);

};