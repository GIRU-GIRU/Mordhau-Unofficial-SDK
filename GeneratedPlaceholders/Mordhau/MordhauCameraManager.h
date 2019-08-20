#pragma once

#include "CoreMinimal.h"
#include "MordhauCameraManager.generated.h"

UCLASS()
class AMordhauCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAtmosphericFog* AtmosphericFog;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AtmosphericFogMultiplierChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInMainMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMinimalViewInfo LastViewInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> QueuedViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitFlashFadeInDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitFlashStayDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitFlashFadeOutDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitFlashValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHitFlashDirectional;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> HitFlashSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitFlashDegrees;

	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
	void SetViewTargetBP(class AActor* NewTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void SetCameraStyleBP(const struct FName& NewCameraStyle);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void OnHitFlash(bool bIsDirectional, class AActor* Source);
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void LeaveMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void LeaveCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		class AActor* GetViewTargetBP();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		bool GetIsInMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		bool GetIsInCustomization();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		struct FName GetCameraStyleBP();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		struct FMinimalViewInfo GetCameraCache();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void EnterMapView();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraManager")
		void EnterCustomization(class AActor* CustomizationTarget);

};