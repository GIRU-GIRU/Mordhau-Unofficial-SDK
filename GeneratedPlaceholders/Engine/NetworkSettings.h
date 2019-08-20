#pragma once

#include "CoreMinimal.h"
#include "NetworkSettings.generated.h"

UCLASS()
class UNetworkSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVerifyPeer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableMultiplayerWorldOriginRebasing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxRepArraySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxRepArrayMemory;


};