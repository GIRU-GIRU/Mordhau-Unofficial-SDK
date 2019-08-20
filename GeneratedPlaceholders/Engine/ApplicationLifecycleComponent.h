#pragma once

#include "CoreMinimal.h"
#include "ApplicationLifecycleComponent.generated.h"

UCLASS()
class UApplicationLifecycleComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationWillDeactivateDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationHasReactivatedDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationWillEnterBackgroundDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationHasEnteredForegroundDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationWillTerminateDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationShouldUnloadResourcesDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate ApplicationReceivedStartupArgumentsDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTemperatureChangeDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLowPowerModeDelegate;


};