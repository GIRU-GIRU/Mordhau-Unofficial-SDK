// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauAIController.h"

void AMordhauAIController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


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