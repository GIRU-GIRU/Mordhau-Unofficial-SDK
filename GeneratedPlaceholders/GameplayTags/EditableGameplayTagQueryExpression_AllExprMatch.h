#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_AllExprMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;


};