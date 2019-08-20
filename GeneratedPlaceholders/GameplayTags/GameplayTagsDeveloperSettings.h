#pragma once

#include "CoreMinimal.h"
#include "GameplayTagsDeveloperSettings.generated.h"

UCLASS()
class UGameplayTagsDeveloperSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DeveloperConfigName;


};