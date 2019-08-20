#pragma once

#include "CoreMinimal.h"
#include "PendingNetGame.generated.h"

UCLASS()
class UPendingNetGame : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetDriver* NetDriver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDemoNetDriver* DemoNetDriver;


};