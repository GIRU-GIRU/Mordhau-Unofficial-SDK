#pragma once

#include "CoreMinimal.h"
#include "SkyLight.generated.h"

UCLASS()
class ASkyLight : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkyLightComponent* LightComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;

	UFUNCTION(BlueprintCallable, Category = "SkyLight")
	void OnRep_bEnabled();

};