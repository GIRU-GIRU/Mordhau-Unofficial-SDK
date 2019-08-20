#pragma once

#include "CoreMinimal.h"
#include "ExponentialHeightFog.generated.h"

UCLASS()
class AExponentialHeightFog : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UExponentialHeightFogComponent* Component;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;

	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFog")
	void OnRep_bEnabled();

};