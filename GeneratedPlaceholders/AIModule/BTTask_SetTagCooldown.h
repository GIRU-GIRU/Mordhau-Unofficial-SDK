#pragma once

#include "CoreMinimal.h"
#include "BTTask_SetTagCooldown.generated.h"

UCLASS()
class UBTTask_SetTagCooldown : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTag CooldownTag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddToExistingDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CooldownDuration;


};