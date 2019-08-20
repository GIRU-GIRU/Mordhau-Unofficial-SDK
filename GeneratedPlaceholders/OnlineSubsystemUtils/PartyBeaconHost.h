#pragma once

#include "CoreMinimal.h"
#include "PartyBeaconHost.generated.h"

UCLASS()
class APartyBeaconHost : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPartyBeaconState* State;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLogoutOnSessionTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SessionTimeoutSecs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TravelSessionTimeoutSecs;


};