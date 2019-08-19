// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MordhauCharacter.h"
#include "Mordhau.h"
#include "MordhauAIController.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECrowdAvoidanceQuality : uint8
{
	Low = 0,
	Medium = 1,
	Good = 2,
	High = 3,
	ECrowdAvoidanceQuality_MAX = 4
};
UENUM(BlueprintType)
enum class ECrowdSimulationState : uint8
{
	Enabled = 0,
	ObstacleOnly = 1,
	Disabled = 2,
	ECrowdSimulationState_MAX = 3
};
USTRUCT(Blueprintable)
struct FPerceptionInfo
{
	GENERATED_BODY()
	bool                                               bSight;
	bool                                               bHearing;
	bool                                               bDamage;
	uint8			                                     Team;
	float                                              UpdateTime;
};
UCLASS()
class MORDHAU_API AMordhauAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	/*
	class UAISenseConfig_Sight*                        SightConfig;
	class UAISenseConfig_Hearing*                      HearingConfig;
	class UAISenseConfig_Damage*                       DamageConfig;*/

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            ReallyCloseEnemyCached;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            LastClosestEnemy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bFirstRun;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RandomFloat;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class UBotProfile*                                 BotProfile;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class UBotBehaviorProfile*                         BehaviorProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              EnemyScanInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              EnemyScanIntervalVariance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAutoRespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bWantsRespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              NextRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableAnticipateTurns;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableObstacleAvoidance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableSeparation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableOptimizeVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableOptimizeTopology;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnablePathOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnableSlowdownAtGoal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              SeparationWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              CollisionQueryRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              PathOptimizationRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              AvoidanceRangeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECrowdAvoidanceQuality>                AvoidanceQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      DefaultNavQueryFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      Team1NavQueryFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      Team2NavQueryFilter;

	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void OnAfterUnPossess();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	int GetTeam();
	//UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	TArray<class AMordhauCharacter*> GetPerceivedEnemies();
	//UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	TArray<class AMordhauCharacter*> GetPerceivedAllies();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	float GetMotionBasedRandom();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	int GetAllyClearanceSides();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIControllerFns")
	void DestroyController();




};