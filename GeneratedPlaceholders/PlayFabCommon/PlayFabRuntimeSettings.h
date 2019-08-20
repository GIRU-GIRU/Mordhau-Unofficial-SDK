#pragma once

#include "CoreMinimal.h"
#include "PlayFabRuntimeSettings.generated.h"

UCLASS()
class UPlayFabRuntimeSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ProductionEnvironmentURL;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TitleId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DeveloperSecretKey;


};