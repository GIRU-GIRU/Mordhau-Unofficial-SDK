#pragma once

#include "CoreMinimal.h"
#include "WindDirectionalSourceComponent.generated.h"

UCLASS()
class UWindDirectionalSourceComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinGustAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxGustAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Radius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPointWind : 1;

	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
	void SetWindType(EWindSourceType InNewType);
	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
		void SetStrength(float InNewStrength);
	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
		void SetSpeed(float InNewSpeed);
	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
		void SetRadius(float InNewRadius);
	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
		void SetMinimumGustAmount(float InNewMinGust);
	UFUNCTION(BlueprintCallable, Category = "WindDirectionalSourceComponent")
		void SetMaximumGustAmount(float InNewMaxGust);

};