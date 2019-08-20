#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.generated.h"

UCLASS()
class AOnlineBeaconHostObject : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString BeaconTypeName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ClientBeaconActorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AOnlineBeaconClient*> ClientActors;


};