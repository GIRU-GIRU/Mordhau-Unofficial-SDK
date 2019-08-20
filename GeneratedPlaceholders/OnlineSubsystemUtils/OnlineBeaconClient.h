#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.generated.h"

UCLASS()
class AOnlineBeaconClient : public AOnlineBeacon
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AOnlineBeaconHostObject* BeaconOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* BeaconConnection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EBeaconConnectionState ConnectionState;

	UFUNCTION(BlueprintCallable, Category = "OnlineBeaconClient")
	void ClientOnConnected();

};