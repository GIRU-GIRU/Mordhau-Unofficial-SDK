#pragma once

#include "CoreMinimal.h"
#include "ParticleSystem.generated.h"

UCLASS()
class UParticleSystem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpdateTime_FPS;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpdateTime_Delta;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WarmupTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WarmupTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleEmitter*> Emitters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* PreviewComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpCurveEdSetup* CurveEdSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOrientZAxisTowardCamera : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDistanceCheckTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSystemLODMethod> LODMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LODDistances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRegenerateLODDuplicate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleSystemLOD> LODSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFixedRelativeBoundingBox : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox FixedRelativeBoundingBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondsBeforeInactive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldResetPeakCounts : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasPhysics : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseRealtimeThumbnail : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ThumbnailImageOutOfDate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Delay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DelayLow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseDelayRange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoDeactivate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MinTimeBetweenTicks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParticleSystemInsignificanceReaction InsignificantReaction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InsignificanceDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParticleSignificanceLevel MaxSignificanceLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MaxPoolSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MacroUVPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MacroUVRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox CustomOcclusionBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLODSoloTrack> SoloTracking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedEmitterMaterial> NamedMaterialSlots;

	UFUNCTION(BlueprintCallable, Category = "ParticleSystem")
	bool ContainsEmitterType(class UClass* TypeData);

};