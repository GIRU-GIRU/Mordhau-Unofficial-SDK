#pragma once

#include "CoreMinimal.h"
#include "EnvQueryNode.generated.h"

UCLASS()
class UEnvQueryNode : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VerNum;


};