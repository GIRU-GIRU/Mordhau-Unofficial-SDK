#pragma once

#include "CoreMinimal.h"
#include "CameraModifier_CameraShake.generated.h"

UCLASS()
class UCameraModifier_CameraShake : public UCameraModifier
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UCameraShake*> ActiveShakes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SplitScreenShakeScale;


};