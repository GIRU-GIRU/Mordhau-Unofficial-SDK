#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TagCooldown.generated.h"

UCLASS()
class UBTDecorator_TagCooldown : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTag CooldownTag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CooldownDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddToExistingDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bActivatesCooldown;


};