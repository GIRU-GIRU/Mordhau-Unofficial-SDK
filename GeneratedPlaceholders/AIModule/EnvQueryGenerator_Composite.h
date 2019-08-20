#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_Composite.generated.h"

UCLASS()
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEnvQueryGenerator*> Generators;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowDifferentItemTypes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasMatchingItemType : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ForcedItemType;


};