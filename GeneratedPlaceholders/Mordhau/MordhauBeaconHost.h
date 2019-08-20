#pragma once

#include "CoreMinimal.h"
#include "MordhauBeaconHost.generated.h"

UCLASS()
class AMordhauBeaconHost : public AOnlineBeaconHostObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OpenSlots;


};