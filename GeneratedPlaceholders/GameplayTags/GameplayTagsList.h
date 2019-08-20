#pragma once

#include "CoreMinimal.h"
#include "GameplayTagsList.generated.h"

UCLASS()
class UGameplayTagsList : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ConfigFileName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameplayTagTableRow> GameplayTagList;


};