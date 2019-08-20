#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_SetTagCooldown.generated.h"

UCLASS()
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTag CooldownTag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CooldownDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddToExistingDuration;


};