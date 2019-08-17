// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MordhauGameState.generated.h"

/**
 * 
 */
USTRUCT()
struct FEmpty_array
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere)
		TArray<int> nonsense;

};
UCLASS()
class MORDHAU_API AMordhauGameState : public AGameState
{
	GENERATED_BODY()
public:
	
	//	unsigned char                                      UnknownData00[0x10];
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      NextBudgetTime;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData01[0x8];
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<class AParticleSystemActor*>                ParticleSystemActors;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData02[0x8];
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AAdvancedCharacter*>                  CharacterDistanceArray;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<class AAdvancedCharacter*, int>               CharacterToDistanceArray;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData03[0x50];
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
//	TArray<TWeakObjectPtr<class AAdvancedCharacter>>   RagdollDistanceArray;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TMap<int64_t, class USkeletalMesh*>                EquipmentMeshCacheMap;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class APreSkinnedPoseOracle*                       PreSkinnedPoseOracle;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData04[0x8];
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//class UClass*                                      MetaData;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableClientStats;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableChat;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableScoreboard;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowHealthRegen;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotLimitPlaceables;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bOverrideArmorSpeedAndAccelerationFactor;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData05[0x2];
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              OverrideArmorSpeedFactor;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              OverrideArmorAccelerationFactor;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAllPlayersHaveMarkers;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData06[0x3];
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                MatchDurationMax;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TMap<int, class AMapCameraActor*>                  MapCameraActors;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DefaultEndMatchMapChangeTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              EndMatchMapChangeEnd;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              PostMatchScreenDelay;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DefaultWarmupTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bSkipWarmupInDevBuild;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bBlockInputInWarmup;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData07[0x2];
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                MinPlayersToStart;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              WarmupEnd;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotGoToNextMapOnMatchEnd;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotShowPostMatchScreen;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowSpawning;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      TeamCount;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      TeamScores;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsTeamMode;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bEnforceTeamColors;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData08[0x6];
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<struct FLinearColor>                        TeamColors;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//TArray<struct FString>                             TeamNames;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor>                        SecondaryTeamColors;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*>                       AllCapturePoints;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                Team1CapturePoints;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                Team2CapturePoints;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              Team1TopologicalProgress;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              Team2TopologicalProgress;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
//	TArray<struct FCapturePointGroup>                  CapturePointTopologicalOrdering;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              LastBotVoiceCommandTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              LastBotEmoteTime;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              LastBotClimbTime;
//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//unsigned char                                      UnknownData09[0x14];


	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void UpdateCapturePointData();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldPaintGearWithTeamColors();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool ShouldBlockPawnInput();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		void LocalPlayerChangedTeam();
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
	//UFUNCTION(BlueprintCallable, Category = "GameStateFns")
	//	TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		int GetCurrentFrame();
	//UFUNCTION(BlueprintCallable, Category = "GameStateFns")
	//	class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
	UFUNCTION(BlueprintCallable, Category = "GameStateFns")
		bool CanImmediatelyChangeProfile(class AController* Controller);

};
