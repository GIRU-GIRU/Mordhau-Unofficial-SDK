#pragma once

#include "CoreMinimal.h"
#include "BTService_DefaultFocus.generated.h"

UCLASS()
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char FocusPriority;


};