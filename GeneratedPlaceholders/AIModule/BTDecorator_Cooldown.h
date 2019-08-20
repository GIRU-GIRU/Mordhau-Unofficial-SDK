#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_Cooldown.generated.h"

UCLASS()
class UBTDecorator_Cooldown : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CoolDownTime;


};