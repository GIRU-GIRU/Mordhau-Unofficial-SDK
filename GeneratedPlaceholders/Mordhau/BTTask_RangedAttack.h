#pragma once

#include "CoreMinimal.h"
#include "BTTask_RangedAttack.generated.h"

UCLASS()
class UBTTask_RangedAttack : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxProjectileFlightTime;


};