#pragma once

#include "CoreMinimal.h"
#include "PostProcessVolume.generated.h"

UCLASS()
class APostProcessVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPostProcessSettings Settings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUnbound : 1;

	UFUNCTION(BlueprintCallable, Category = "PostProcessVolume")
	void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);

};