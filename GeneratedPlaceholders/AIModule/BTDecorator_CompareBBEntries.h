#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_CompareBBEntries.generated.h"

UCLASS()
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBlackBoardEntryComparison> Operator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKeyA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKeyB;


};