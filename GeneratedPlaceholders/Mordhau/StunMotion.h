#pragma once

#include "CoreMinimal.h"
#include "StunMotion.generated.h"

UCLASS()
class UStunMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StunGracePeriodExtraTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StunDuration;


};