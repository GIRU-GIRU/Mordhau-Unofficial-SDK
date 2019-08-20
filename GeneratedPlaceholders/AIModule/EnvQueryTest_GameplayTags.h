#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_GameplayTags.generated.h"

UCLASS()
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagQuery TagQueryToMatch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUpdatedToUseQuery;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EGameplayContainerMatchType TagsToMatch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer GameplayTags;


};