#pragma once

#include "CoreMinimal.h"
#include "LobbyBeaconHost.generated.h"

UCLASS()
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x28];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ALobbyBeaconState* LobbyState;


};