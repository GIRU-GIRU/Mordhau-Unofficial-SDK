// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauAIController.h"
#include "UnrealNetwork.h"

void AMordhauAIController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMordhauAIController, bFirstRun)
	DOREPLIFETIME(AMordhauAIController, RandomFloat)
	DOREPLIFETIME(AMordhauAIController, EnemyScanInterval)
	DOREPLIFETIME(AMordhauAIController, EnemyScanIntervalVariance)
	DOREPLIFETIME(AMordhauAIController, bAutoRespawn)
	DOREPLIFETIME(AMordhauAIController, bWantsRespawn)
	DOREPLIFETIME(AMordhauAIController, NextRespawnTime)
	DOREPLIFETIME(AMordhauAIController, bEnableAnticipateTurns)
	DOREPLIFETIME(AMordhauAIController, bEnableObstacleAvoidance)
	DOREPLIFETIME(AMordhauAIController, bEnableSeparation)
	DOREPLIFETIME(AMordhauAIController, bEnableOptimizeVisibility)
	DOREPLIFETIME(AMordhauAIController, bEnableOptimizeTopology)
	DOREPLIFETIME(AMordhauAIController, bEnablePathOffset)
	DOREPLIFETIME(AMordhauAIController, bEnableSlowdownAtGoal)
	DOREPLIFETIME(AMordhauAIController, SeparationWeight)
	DOREPLIFETIME(AMordhauAIController, CollisionQueryRange)
	DOREPLIFETIME(AMordhauAIController, PathOptimizationRange)
	DOREPLIFETIME(AMordhauAIController, AvoidanceRangeMultiplier)

}
//

void AMordhauAIController::OnAfterUnPossess()
{

}
void AMordhauAIController::OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo)
{

}
void AMordhauAIController::OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, struct FPerceptionInfo PerceptionInfo)
{

}
//TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedEnemies()
//{
//	return array;
//}
//TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedAllies()
//{
//	return array;
//}


float AMordhauAIController::GetMotionBasedRandom()
{
	return 1;
}
void AMordhauAIController::DestroyController()
{
	
}
int AMordhauAIController::GetTeam()
{
	return 1;
}
int AMordhauAIController::GetAllyClearanceSides()
{
	return 1;
}