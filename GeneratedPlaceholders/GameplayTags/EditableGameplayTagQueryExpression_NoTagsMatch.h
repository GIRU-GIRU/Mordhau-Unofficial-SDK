#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_NoTagsMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagContainer Tags;


};