#pragma once

#include "CoreMinimal.h"
#include "PlayerCameraManager.generated.h"

UCLASS()
class APlayerCameraManager : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerController* PCOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TransformComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultFOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultOrthoWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultAspectRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraCacheEntry CameraCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraCacheEntry LastFrameCameraCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTViewTarget ViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTViewTarget PendingViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraCacheEntry CameraCachePrivate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraCacheEntry LastFrameCameraCachePrivate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UCameraModifier*> ModifierList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> DefaultModifiers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FreeCamDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FreeCamOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ViewTargetOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AEmitterCameraLensEffectBase*> CameraLensEffects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraModifier_CameraShake* CachedCameraShakeMod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnimInst* AnimInstPool[0x8];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPostProcessSettings> PostProcessBlendCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UCameraAnimInst*> ActiveAnims;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UCameraAnimInst*> FreeAnims;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ACameraActor* AnimCameraActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsOrthographic : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultConstrainAspectRatio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData07 : 4;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientSimulatingViewTarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseClientSideCameraUpdates : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData08 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGameCameraCutThisFrame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewPitchMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewPitchMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewYawMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewYawMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewRollMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ViewRollMax;

	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
	void StopCameraShake(class UCameraShake* ShakeInstance, bool bImmediately);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopCameraFade();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopAllInstancesOfCameraShake(class UClass* Shake, bool bImmediately);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopAllCameraShakes(bool bImmediately);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StopAllCameraAnims(bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class UCameraShake* PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void OnPhotographySessionStart();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void OnPhotographySessionEnd();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void OnPhotographyMultiPartCaptureStart();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void OnPhotographyMultiPartCaptureEnd();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class APlayerController* GetOwningPlayerController();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		float GetFOVAngle();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		struct FRotator GetCameraRotation();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		struct FVector GetCameraLocation();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class UCameraModifier* FindCameraModifierByClass(class UClass* ModifierClass);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		void ClearCameraLensEffects();
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class UCameraModifier* AddNewCameraModifier(class UClass* ModifierClass);
	UFUNCTION(BlueprintCallable, Category = "PlayerCameraManager")
		class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass* LensEffectEmitterClass);

};