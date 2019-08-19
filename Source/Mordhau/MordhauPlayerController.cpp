// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauPlayerController.h"
#include "UnrealNetwork.h"


void AMordhauPlayerController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMordhauPlayerController, bIsInventoryAvailableOnAuthority)
		DOREPLIFETIME(AMordhauPlayerController, bIsAnythingRestockable)
		DOREPLIFETIME(AMordhauPlayerController, SelectedCharacterProfile)
		DOREPLIFETIME(AMordhauPlayerController, SelectedDefaultProfile)
		DOREPLIFETIME(AMordhauPlayerController, bReceivedValidProfileFromClient)
		DOREPLIFETIME(AMordhauPlayerController, LastAskedForSpawnTime)
		DOREPLIFETIME(AMordhauPlayerController, SpawnToken)
		DOREPLIFETIME(AMordhauPlayerController, bSendsDefaultCustomization)
		DOREPLIFETIME(AMordhauPlayerController, LastControlledCharacter)
		DOREPLIFETIME(AMordhauPlayerController, NextRespawnTime)
		DOREPLIFETIME(AMordhauPlayerController, bUseInstancing)
		DOREPLIFETIME(AMordhauPlayerController, MaxAFKTime)
		DOREPLIFETIME(AMordhauPlayerController, bOnlyAFKIfAlive)
		DOREPLIFETIME(AMordhauPlayerController, CurrentAFKTime)
}

void AMordhauPlayerController::Turn(float Value)
{

}
void AMordhauPlayerController::ToggleStamina()
{

}
void AMordhauPlayerController::ToggleDamage()
{

}
void AMordhauPlayerController::StopServerStatsFile()
{

}
void AMordhauPlayerController::StartServerStatsFile()
{

}
void AMordhauPlayerController::Slomo(float Value)
{

}
void AMordhauPlayerController::ShowTips()
{

}
void AMordhauPlayerController::ShowEquipment()
{

}
void AMordhauPlayerController::ShowAuthTraces(bool bValue)
{

}
bool AMordhauPlayerController::SharesInstanceWith(class AActor* OtherActor)
{
	return 1;
}
void AMordhauPlayerController::SetChoiceMenuConsumesInput(bool Value)
{

}
void AMordhauPlayerController::ServerToggleStamina()
{

}
void AMordhauPlayerController::ServerToggleDamage()
{

}
void AMordhauPlayerController::ServerStopServerStatsFile()
{

}
void AMordhauPlayerController::ServerStartServerStatsFile()
{

}
void AMordhauPlayerController::ServerSlomo(float Value)
{

}
void AMordhauPlayerController::ServerSetSpawnToken(int NewToken)
{

}
void AMordhauPlayerController::ServerRequestSetTeam(int NewTeam)
{

}
void AMordhauPlayerController::AdminList()
{

}
void AMordhauPlayerController::AddBotsTeam(int Amount, int Team)
{

}
void AMordhauPlayerController::AddBots(int Amount)
{

}
void AMordhauPlayerController::CancelVoteKick()
{

}
bool AMordhauPlayerController::CanAskForSpawn()
{
	return 1;
}
void AMordhauPlayerController::BanList()
{

}
void AMordhauPlayerController::ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation)
{

}
void AMordhauPlayerController::ClientRequestMatchmakingLobbyID()
{

}
void AMordhauPlayerController::ClientRequestInventoryItems()
{

}
void AMordhauPlayerController::ClientRequestAuthTicket()
{

}
void AMordhauPlayerController::ClientReceiveScoreNoState(uint8 ReasonAndParam, int ScoreAmount)
{

}
void AMordhauPlayerController::ClientReceiveScore(uint8 ReasonAndParam, int ScoreAmount, class AMordhauPlayerState* AssociatedPlayer)
{

}
bool AMordhauPlayerController::IsInventoryAvailable()
{
	return 1;
}
bool AMordhauPlayerController::IsAuthTicketAvailable()
{
	return 1;
}
bool AMordhauPlayerController::IsAdmin()
{
	return 1;
}
void AMordhauPlayerController::ServerRequestRewards()
{

}
void AMordhauPlayerController::ServerRequestAuthTraces(bool bEnabled)
{

}
void AMordhauPlayerController::ServerRemoveBots(int Amount, int Team)
{

}
void AMordhauPlayerController::ServerGetServerStats()
{

}
void AMordhauPlayerController::ServerGetMapVoteMaps()
{

}
void AMordhauPlayerController::ServerGetMapVoteCounts()
{

}
void AMordhauPlayerController::ServerBanList()
{

}
void AMordhauPlayerController::ServerAdminList()
{

}
void AMordhauPlayerController::ServerAddBots(int Amount, int Team)
{

}
void AMordhauPlayerController::SaveCurrentProfilesAsBotProfiles()
{

}
void AMordhauPlayerController::RemoveBotsTeam(int Amount, int Team)
{

}
void AMordhauPlayerController::RemoveBots(int Amount)
{

}
