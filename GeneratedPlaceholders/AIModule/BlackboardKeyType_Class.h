#pragma once

#include "CoreMinimal.h"
#include "BlackboardKeyType_Class.generated.h"

UCLASS()
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BaseClass;


};