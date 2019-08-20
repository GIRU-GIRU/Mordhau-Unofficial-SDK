#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_CurrentLocation.generated.h"

UCLASS()
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* QueryContext;


};