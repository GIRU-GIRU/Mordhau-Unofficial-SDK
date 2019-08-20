#pragma once

#include "CoreMinimal.h"
#include "AISystemBase.generated.h"

UCLASS()
class UAISystemBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath AISystemClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AISystemModuleName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInstantiateAISystemOnClient;


};