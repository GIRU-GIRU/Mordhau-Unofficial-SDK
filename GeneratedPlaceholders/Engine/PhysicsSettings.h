#pragma once

#include "CoreMinimal.h"
#include "PhysicsSettings.generated.h"

UCLASS()
class UPhysicsSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultGravityZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultTerminalVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultFluidFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SimulateScratchMemorySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RagdollAggregateThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TriangleMeshTriangleMinAreaThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableAsyncScene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableShapeSharing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnablePCM;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableStabilization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWarnMissingLocks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnable2DPhysics;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRigidBodyErrorCorrection PhysicErrorCorrection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESettingsLockedAxis> LockedAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESettingsDOF> DefaultDegreesOfFreedom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceThresholdVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFrictionCombineMode> FrictionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFrictionCombineMode> RestitutionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngularVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDepenetrationVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ContactOffsetMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinContactOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxContactOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSimulateSkeletalMeshOnDedicatedServer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDefaultHasComplexCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSuppressFaceRemapTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSupportUVFromHitResults;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableActiveActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableKinematicStaticPairs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableKinematicKinematicPairs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableCCD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableEnhancedDeterminism;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxPhysicsDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSubstepping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSubsteppingAsync;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSubstepDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSubsteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SyncSceneSmoothingFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AsyncSceneSmoothingFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialAverageFrameRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PhysXTreeRebuildRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPhysicalSurfaceName> PhysicalSurfaces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBroadphaseSettings DefaultBroadphaseSettings;


};