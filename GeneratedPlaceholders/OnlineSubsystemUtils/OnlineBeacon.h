#pragma once

#include "CoreMinimal.h"
#include "OnlineBeacon.generated.h"

UCLASS()
class AOnlineBeacon : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BeaconConnectionInitialTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BeaconConnectionTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetDriver* NetDriver;


};