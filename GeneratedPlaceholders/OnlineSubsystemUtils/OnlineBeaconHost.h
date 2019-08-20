#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHost.generated.h"

UCLASS()
class AOnlineBeaconHost : public AOnlineBeacon
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ListenPort;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AOnlineBeaconClient*> ClientActors;


};