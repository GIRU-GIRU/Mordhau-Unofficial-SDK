#pragma once

#include "CoreMinimal.h"
#include "BlackboardKeyType_Object.generated.h"

UCLASS()
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BaseClass;


};