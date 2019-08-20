#pragma once

#include "CoreMinimal.h"
#include "FlinchMotion.generated.h"

UCLASS()
class UFlinchMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasDoneFlinchEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryLockOutTime;


};