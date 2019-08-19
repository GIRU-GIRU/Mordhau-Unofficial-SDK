// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauPlayerState.h"
#include "UnrealNetwork.h"

void AMordhauPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AMordhauPlayerState, Kills)
	DOREPLIFETIME(AMordhauPlayerState, Team)
	DOREPLIFETIME(AMordhauPlayerState, Rank)
	DOREPLIFETIME(AMordhauPlayerState, bIsAdmin)
	DOREPLIFETIME(AMordhauPlayerState, bIsMuted)
	DOREPLIFETIME(AMordhauPlayerState, bIsAlive)
	DOREPLIFETIME(AMordhauPlayerState, bIsFriend)

}
void AMordhauPlayerState::OnRep_Team()
{}
void AMordhauPlayerState::OnRep_Kills()
{}
void AMordhauPlayerState::OnRep_DeathsAndFlags()
{}
void AMordhauPlayerState::OnRep_Assists()
{}
void AMordhauPlayerState::AddScore(int Amount)
{}
void AMordhauPlayerState::AddKills(int Amount)
{}
void AMordhauPlayerState::AddDeaths(int Amount)
{}
void AMordhauPlayerState::AddAssists(int Amount)
{}



