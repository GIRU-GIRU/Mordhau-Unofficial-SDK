#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_AllTagsMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer Tags;


};