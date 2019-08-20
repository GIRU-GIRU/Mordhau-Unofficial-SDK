#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_Blackboard.generated.h"

UCLASS()
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int IntValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FloatValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString StringValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CachedDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char OperationType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBTBlackboardRestart> NotifyObserver;


};