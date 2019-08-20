#pragma once

#include "CoreMinimal.h"
#include "World.generated.h"

UCLASS()
class UWorld : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* PersistentLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetDriver* NetDriver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULineBatchComponent* LineBatcher;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULineBatchComponent* PersistentLineBatcher;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULineBatchComponent* ForegroundLineBatcher;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameNetworkManager* NetworkManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsCollisionHandler* PhysicsCollisionHandler;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> ExtraReferencedObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> PerModuleDataObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULevelStreaming*> StreamingLevels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString StreamingLevelsPrefix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* CurrentLevelPendingVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* CurrentLevelPendingInvisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDemoNetDriver* DemoNetDriver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AParticleEventManager* MyParticleEventManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APhysicsVolume* DefaultPhysicsVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavigationSystemBase* NavigationSystem;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameModeBase* AuthorityGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AGameStateBase* GameState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAISystemBase* AISystem;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAvoidanceManager* AvoidanceManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULevel*> Levels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLevelCollection> LevelCollections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* CurrentLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameInstance* OwningGameInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialParameterCollectionInstance*> ParameterCollectionInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCanvas* CanvasForRenderingToTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCanvas* CanvasForDrawMaterialToRenderTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorldComposition* WorldComposition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAreConstraintsDirty : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWorldPSCPool PSCPool;

	UFUNCTION(BlueprintCallable, Category = "World")
	void HandleTimelineScrubbed();

};