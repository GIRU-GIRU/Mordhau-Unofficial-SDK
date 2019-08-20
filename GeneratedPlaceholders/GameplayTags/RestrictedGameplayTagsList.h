#pragma once

#include "CoreMinimal.h"
#include "RestrictedGameplayTagsList.generated.h"

UCLASS()
class URestrictedGameplayTagsList : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ConfigFileName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;


};