// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameState.h"


void AMordhauGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);

}

void AMordhauGameState::UpdateCapturePointData()
{

}
bool AMordhauGameState::ShouldTickThisFrame(class AAdvancedCharacter* Character)
{
	return 1;
}
bool AMordhauGameState::ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character)
{
	return 1;
}
bool AMordhauGameState::ShouldPaintGearWithTeamColors()
{
	return 1;
}
bool AMordhauGameState::ShouldBlockPawnInput()
{
	return 1;
}
void AMordhauGameState::ReserveCharacterRagdoll(class AAdvancedCharacter* Character)
{

}
void AMordhauGameState::RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character)
{

}
void AMordhauGameState::LocalPlayerChangedTeam()
{

}
bool AMordhauGameState::IsFriendly(class AActor* ActorA, class AActor* ActorB)
{
	return 1;
}
//TArray<int> AMordhauGameState::GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles)
//{
//	return nonsense;
//}
int AMordhauGameState::GetCurrentFrame()
{
	return 1;
}
//class AAdvancedCharacter* AMordhauGameState::GetCharacterByDistanceRank(int DistanceRank)
//{
//	return;
//}
bool AMordhauGameState::CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team)
{
	return 1;
}
bool AMordhauGameState::CanImmediatelyChangeProfile(class AController* Controller)
{
	return 1;
}
