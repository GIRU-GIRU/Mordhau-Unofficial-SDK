#pragma once

#include "CoreMinimal.h"
#include "QosBeaconClient.generated.h"

UCLASS()
class AQosBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "QosBeaconClient")
	void ServerQosRequest(const struct FString& InSessionId);
	UFUNCTION(BlueprintCallable, Category = "QosBeaconClient")
		void ClientQosResponse(EQosResponseType response);

};