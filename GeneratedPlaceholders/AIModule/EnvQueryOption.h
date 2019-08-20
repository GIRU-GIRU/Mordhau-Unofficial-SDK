#pragma once

#include "CoreMinimal.h"
#include "EnvQueryOption.generated.h"

UCLASS()
class UEnvQueryOption : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnvQueryGenerator* Generator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEnvQueryTest*> Tests;


};