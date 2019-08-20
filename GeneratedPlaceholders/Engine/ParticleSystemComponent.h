#pragma once

#include "CoreMinimal.h"
#include "ParticleSystemComponent.generated.h"

UCLASS()
class UParticleSystemComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* Template;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> EmitterMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USkeletalMeshComponent*> SkelMeshComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 7;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bResetOnDetach : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdateOnDedicatedServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowRecycling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoManageAttachment : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWarmingUp : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideLODMethod : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSkipUpdateDynamicDataDuringTick : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSystemLODMethod> LODMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParticleSignificanceLevel RequiredSignificance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleSysParam> InstanceParameters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleSpawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleBurst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnParticleCollide;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OldPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PartSysVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WarmupTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WarmupTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondsBeforeInactive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxTimeBeforeForceUpdateTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystemReplay*> ReplayClips;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CustomTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USceneComponent> AutoAttachParent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AutoAttachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachLocationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachRotationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachScaleRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSystemFinished;

	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetTemplate(class UParticleSystem* NewTemplate);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetFloatParameter(const struct FName& ParameterName, float Param);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetAutoAttachParams(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachLocation> LocationType);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void SetActorParameter(const struct FName& ParameterName, class AActor* Param);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void ReleaseToPool();
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		int GetNumActiveParticles();
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		class UMaterialInterface* GetNamedMaterial(const struct FName& InName);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamTargetTangent(int EmitterIndex, int TargetIndex, struct FVector* OutTangentPoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamTargetStrength(int EmitterIndex, int TargetIndex, float* OutTargetStrength);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamTargetPoint(int EmitterIndex, int TargetIndex, struct FVector* OutTargetPoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamSourceTangent(int EmitterIndex, int SourceIndex, struct FVector* OutTangentPoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamSourceStrength(int EmitterIndex, int SourceIndex, float* OutSourceStrength);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamSourcePoint(int EmitterIndex, int SourceIndex, struct FVector* OutSourcePoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		bool GetBeamEndPoint(int EmitterIndex, struct FVector* OutEndPoint);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void EndTrails();
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		class UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(const struct FName& InName, class UMaterialInterface* SourceMaterial);
	UFUNCTION(BlueprintCallable, Category = "ParticleSystemComponent")
		void BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);

};