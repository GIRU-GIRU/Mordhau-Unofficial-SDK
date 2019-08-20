#pragma once

#include "CoreMinimal.h"
#include "GameplayTagsManager.generated.h"

UCLASS()
class UGameplayTagsManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameplayTagSource> TagSources;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UDataTable*> RestrictedGameplayTagTables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UDataTable*> GameplayTagTables;


};