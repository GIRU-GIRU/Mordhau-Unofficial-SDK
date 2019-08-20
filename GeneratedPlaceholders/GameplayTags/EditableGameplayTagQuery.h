#pragma once

#include "CoreMinimal.h"
#include "EditableGameplayTagQuery.generated.h"

UCLASS()
class UEditableGameplayTagQuery : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString UserDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEditableGameplayTagQueryExpression* RootExpression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTagQuery TagQueryExportText_Helper;


};