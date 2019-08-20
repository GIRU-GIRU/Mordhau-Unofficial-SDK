#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TimeLimit.generated.h"

UCLASS()
class UBTDecorator_TimeLimit : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeLimit;


};