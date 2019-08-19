// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MordhauPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsInventoryAvailableOnAuthority;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAnythingRestockable;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                SelectedCharacterProfile;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                SelectedDefaultProfile;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FCharacterProfile                           CharacterProfile;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bReceivedValidProfileFromClient;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              LastAskedForSpawnTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                SpawnToken;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FCharacterProfile                           LastSentCharacterProfile;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class ACustomizationReplicationActor*              CustomizationReplicationActor;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bSendsDefaultCustomization;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FCharacterProfile                           PendingCharacterProfile;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            LastControlledCharacter;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              NextRespawnTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bUseInstancing;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MaxAFKTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bOnlyAFKIfAlive;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              CurrentAFKTime;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FVector                                     LastAFKCheckCameraLocation;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FString                                     AuthTicket;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FServerStats                                ServerStats;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<struct FString>                             MapVoteMaps;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<unsigned char>                              MapVoteCounts;

UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
void Turn(float Value);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ToggleStamina();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ToggleDamage();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void StopServerStatsFile();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void StartServerStatsFile();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void Slomo(float Value);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ShowTips();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ShowEquipment();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ShowAuthTraces(bool bValue);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
bool SharesInstanceWith(class AActor* OtherActor);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void SetChoiceMenuConsumesInput(bool Value);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerToggleStamina();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerToggleDamage();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerStopServerStatsFile();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerStartServerStatsFile();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerSlomo(float Value);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerSetSpawnToken(int NewToken);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerRequestSetTeam(int NewTeam);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void AdminList();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void AddBotsTeam(int Amount, int Team);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void AddBots(int Amount);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void CancelVoteKick();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
bool CanAskForSpawn();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void BanList();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
void ClientRequestMatchmakingLobbyID();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ClientRequestInventoryItems();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ClientRequestAuthTicket();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ClientReceiveScoreNoState(uint8 ReasonAndParam, int ScoreAmount);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ClientReceiveScore(uint8 ReasonAndParam, int ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
bool IsInventoryAvailable();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
bool IsAuthTicketAvailable();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
bool IsAdmin();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerRequestRewards();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerRequestAuthTraces(bool bEnabled);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerRemoveBots(int Amount, int Team);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerGetServerStats();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerGetMapVoteMaps();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerGetMapVoteCounts();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerBanList();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerAdminList();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void ServerAddBots(int Amount, int Team);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void SaveCurrentProfilesAsBotProfiles();
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void RemoveBotsTeam(int Amount, int Team);
UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
void RemoveBots(int Amount);
//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
//void RemoveAdmin(const struct FString& PlayerNameOrSteamID);
//void ClientReceiveScoreBP(EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
//void ServerRemoveAdmin(uint64_t SteamID);
//void ServerChangeLevel(const struct FString& LevelName);
//void ServerBanPlayer(uint64_t SteamID, int BanDuration, const struct FString& BanReason);
//void ServerAdminLogin(const struct FString& Password);
//void ServerAddAdmin(uint64_t SteamID);

};
