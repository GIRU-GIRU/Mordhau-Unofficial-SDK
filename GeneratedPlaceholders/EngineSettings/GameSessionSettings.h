#pragma once

#include "CoreMinimal.h"
#include "GameSessionSettings.generated.h"

UCLASS()
class UGameSessionSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSpectators;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRequiresPushToTalk : 1;


};