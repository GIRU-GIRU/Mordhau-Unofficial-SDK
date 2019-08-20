#pragma once

#include "CoreMinimal.h"
#include "AISystem.generated.h"

UCLASS()
class UAISystem : public UAISystemBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath PerceptionSystemClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath HotSpotManagerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AcceptanceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathfollowingRegularPathPointAcceptanceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathfollowingNavLinkAcceptanceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFinishMoveOnGoalOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAcceptPartialPaths;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowStrafing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableBTAITasks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowControllersAsEQSQuerier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableDebuggerPlugin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTreeManager* BehaviorTreeManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnvQueryManager* EnvironmentQueryManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAIPerceptionSystem* PerceptionSystem;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAIHotSpotManager* HotSpotManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavLocalGridManager* NavLocalGrids;

	UFUNCTION(BlueprintCallable, Category = "AISystem")
	void AILoggingVerbose();
	UFUNCTION(BlueprintCallable, Category = "AISystem")
		void AIIgnorePlayers();

};