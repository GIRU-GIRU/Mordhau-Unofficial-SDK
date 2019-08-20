#pragma once

#include "CoreMinimal.h"
#include "MordhauAIController.generated.h"

UCLASS()
class AMordhauAIController : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> FacingActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USkeletalMeshComponent> FacingSkelMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName FacingBone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAISenseConfig_Sight* SightConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAISenseConfig_Hearing* HearingConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAISenseConfig_Damage* DamageConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator DesiredControlRotationOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter> ReallyCloseEnemyCached;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter> LastClosestEnemy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFirstRun;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomFloat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBotProfile* BotProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBotBehaviorProfile* BehaviorProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile CharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ACustomizationReplicationActor* CustomizationReplicationActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsePassedCustomizationReplicationActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EnemyScanInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EnemyScanIntervalVariance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoRespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsRespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableAnticipateTurns;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableObstacleAvoidance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableSeparation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableOptimizeVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableOptimizeTopology;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnablePathOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableSlowdownAtGoal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SeparationWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CollisionQueryRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathOptimizationRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceRangeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECrowdAvoidanceQuality> AvoidanceQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ECrowdSimulationState SimulationState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultNavQueryFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Team1NavQueryFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Team2NavQueryFilter;

	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
	void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo* PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void StartFacingMovement(float LocationUpOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void StartFacingLocation(const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void RequestVoiceCommand(unsigned char Command);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void RefreshCharacterProfile();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		bool PerceivesEnemy();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		bool PerceivesAlly();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void OnAfterUnPossess();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		int GetTeam();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		TArray<class AMordhauCharacter*> GetPerceivedEnemies();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		TArray<class AMordhauCharacter*> GetPerceivedAllies();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		float GetMotionBasedRandom();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		class AMordhauCharacter* GetKthClosestOfThree(int Idx);
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		class AActor* GetCurrentlyFacingActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		EAIFacingMode GetCurrentFacingMode();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		class AMordhauCharacter* GetClosestEnemy();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		class AMordhauCharacter* GetClosestAlly();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		int GetAllyClearanceSides();
	UFUNCTION(BlueprintCallable, Category = "MordhauAIController")
		void DestroyController();

};