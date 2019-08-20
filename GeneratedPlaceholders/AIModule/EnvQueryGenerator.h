#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator.generated.h"

UCLASS()
class UEnvQueryGenerator : public UEnvQueryNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString OptionName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ItemType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoSortTests : 1;


};