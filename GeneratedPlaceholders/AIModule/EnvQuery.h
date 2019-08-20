#pragma once

#include "CoreMinimal.h"
#include "EnvQuery.generated.h"

UCLASS()
class UEnvQuery : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName QueryName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEnvQueryOption*> Options;


};