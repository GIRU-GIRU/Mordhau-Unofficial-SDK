#pragma once

#include "CoreMinimal.h"
#include "DemoNetDriver.generated.h"

UCLASS()
class UDemoNetDriver : public UNetDriver
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CheckpointSaveMaxMSPerFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLocalReplay;


};