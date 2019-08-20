#pragma once

#include "CoreMinimal.h"
#include "BlackboardKeyType_String.generated.h"

UCLASS()
class UBlackboardKeyType_String : public UBlackboardKeyType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString StringValue;


};