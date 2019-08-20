#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_AnyTagsMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer Tags;


};