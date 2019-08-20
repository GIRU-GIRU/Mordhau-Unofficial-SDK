#pragma once

#include "CoreMinimal.h"
#include "AISenseConfig_Damage.generated.h"

UCLASS()
class UAISenseConfig_Damage : public UAISenseConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Implementation;


};