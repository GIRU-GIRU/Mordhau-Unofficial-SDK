#pragma once

#include "CoreMinimal.h"
#include "TestBeaconClient.generated.h"

UCLASS()
class ATestBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TestBeaconClient")
	void ServerPong();
	UFUNCTION(BlueprintCallable, Category = "TestBeaconClient")
		void ClientPing();

};