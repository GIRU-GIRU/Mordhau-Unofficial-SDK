// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameMode.h"
void AMordhauGameMode::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);

}







void AMordhauGameMode::SetTeamScore(int Team, float Amount)
{
}
void AMordhauGameMode::RequestedAssignTeam(class AController* Controller, int Team)
{
}

void AMordhauGameMode::RemoveBots(int Amount, int Team)
{
}
void AMordhauGameMode::OnTeamScoreChanged(int Team, float OldValue)
{
}
void AMordhauGameMode::OnScoreChanged(class APlayerState* Mode, float OldValue)
{
}
void AMordhauGameMode::OnKillsChanged(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::OnDeathsChanged(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::OnAssistsChanged(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::MatchTimeRanOut()
{

}
bool AMordhauGameMode::IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player)
{
	return 1;
}
float AMordhauGameMode::GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player)
{
	return 2;
}

float AMordhauGameMode::GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget)
{
	return 2;
}
bool AMordhauGameMode::ControllerCanRestart(class AController* Controller)
{
	return 1;
}
bool AMordhauGameMode::CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget)
{
	return 1;
}
bool AMordhauGameMode::CanClash(class APawn* Source, class APawn* Target)
{
	return 1;
}
bool AMordhauGameMode::CanChamber(class APawn* Source, class APawn* Target)
{
	return 1;
}
//void AMordhauGameMode::Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type)
//{

//}
void AMordhauGameMode::AddTeamScore(int Team, float Amount)
{

}
void AMordhauGameMode::AddBots(int Amount, int Team)
{}






