#pragma once

#include "CoreMinimal.h"
#include "WorldSettings.generated.h"

UCLASS()
class AWorldSettings : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableWorldBoundsChecks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableNavigationSystem : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableAISystem : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableWorldComposition : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseClientSideLevelStreamingVolumes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableWorldOriginRebasing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWorldGravitySet : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGlobalGravitySet : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavigationSystemConfig* NavigationSystemConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KillZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* KillZDamageType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WorldGravityZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalGravityZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultPhysicsVolumeClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PhysicsCollisionHandlerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameNetworkManagerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PackedLightAndShadowMapTextureSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMinimizeBSPSections : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DefaultColorScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultMaxDistanceFieldOcclusionDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalDistanceFieldViewDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DynamicIndirectShadowsSelfShadowingIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPrecomputeVisibility : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlaceCellsOnlyAlongCameraTracks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VisibilityCellSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceNoPrecomputedLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassWorldInfoSettings LightmassSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FReverbSettings DefaultReverbSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInteriorSettings DefaultAmbientZoneSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundMix* DefaultBaseSoundMix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WorldToMeters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MonoCullingDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBookMark* BookMarks[0xA];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MatineeTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DemoPlayTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinGlobalTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxGlobalTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinUndilatedFrameTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxUndilatedFrameTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerState* Pauser;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHighPriorityLoading : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHighPriorityLoadingLocal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNetViewer> ReplicationViewers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideDefaultBroadphaseSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBroadphaseSettings BroadphaseSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;

	UFUNCTION(BlueprintCallable, Category = "WorldSettings")
	void OnRep_WorldGravityZ();

};