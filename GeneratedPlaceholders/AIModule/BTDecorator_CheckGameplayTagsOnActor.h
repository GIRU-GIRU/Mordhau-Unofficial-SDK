#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_CheckGameplayTagsOnActor.generated.h"

UCLASS()
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector ActorToCheck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EGameplayContainerMatchType TagsToMatch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer GameplayTags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CachedDescription;


};