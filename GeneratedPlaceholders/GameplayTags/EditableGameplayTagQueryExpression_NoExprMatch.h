#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_NoExprMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;


};