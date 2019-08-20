#pragma once

#include "CoreMinimal.h"
#include "MordhauGameState.generated.h"

UCLASS()
class AMordhauGameState : public AGameState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> NextBudgetTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AParticleSystemActor*> ParticleSystemActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AAdvancedCharacter*> CharacterDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<class AAdvancedCharacter*, int> CharacterToDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class AAdvancedCharacter>> RagdollDistanceArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<int64_t, class USkeletalMesh*> EquipmentMeshCacheMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APreSkinnedPoseOracle* PreSkinnedPoseOracle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* MetaData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableClientStats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableChat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableScoreboard;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowHealthRegen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotLimitPlaceables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideArmorSpeedAndAccelerationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OverrideArmorSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OverrideArmorAccelerationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllPlayersHaveMarkers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MatchDurationMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<int, class AMapCameraActor*> MapCameraActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultEndMatchMapChangeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EndMatchMapChangeEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostMatchScreenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultWarmupTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSkipWarmupInDevBuild;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bBlockInputInWarmup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinPlayersToStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WarmupEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotGoToNextMapOnMatchEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotShowPostMatchScreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowSpawning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char TeamCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> TeamScores;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsTeamMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnforceTeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> TeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> TeamNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> SecondaryTeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*> AllCapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team1CapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team2CapturePoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Team1TopologicalProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Team2TopologicalProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCapturePointGroup> CapturePointTopologicalOrdering;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastBotVoiceCommandTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastBotEmoteTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastBotClimbTime;

	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
	void UpdateCapturePointData();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool ShouldPaintGearWithTeamColors();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool ShouldBlockPawnInput();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		void LocalPlayerChangedTeam();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		struct FString GetTeamName(int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		struct FLinearColor GetTeamColor(int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		class USkeletalMesh* GetEquipmentMeshFromCache(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		int64_t GetEquipmentCacheHash(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		int GetCurrentFrame();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		struct FTransform GetBindPoseTransform(class USkeletalMesh* Mesh, const struct FName& SocketName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameState")
		bool CanImmediatelyChangeProfile(class AController* Controller);

};