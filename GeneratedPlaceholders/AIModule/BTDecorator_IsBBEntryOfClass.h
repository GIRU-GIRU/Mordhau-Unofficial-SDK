#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_IsBBEntryOfClass.generated.h"

UCLASS()
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* TestClass;


};