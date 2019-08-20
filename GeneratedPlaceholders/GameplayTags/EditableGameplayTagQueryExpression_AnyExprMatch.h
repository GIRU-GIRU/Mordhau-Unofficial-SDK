#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQueryExpression_AnyExprMatch.generated.h"

UCLASS()
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;


};