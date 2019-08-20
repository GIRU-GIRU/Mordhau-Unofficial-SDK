#pragma once

#include "CoreMinimal.h"
#include "AISenseConfig_Blueprint.generated.h"

UCLASS()
class UAISenseConfig_Blueprint : public UAISenseConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Implementation;


};