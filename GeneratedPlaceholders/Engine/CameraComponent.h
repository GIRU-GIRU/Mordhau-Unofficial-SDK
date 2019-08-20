#pragma once

#include "CoreMinimal.h"
#include "CameraComponent.generated.h"

UCLASS()
class UCameraComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OrthoNearClipPlane;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OrthoFarClipPlane;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AspectRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bConstrainAspectRatio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFieldOfViewForLOD : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockToHmd : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePawnControlRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECameraProjectionMode> ProjectionMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostProcessBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPostProcessSettings PostProcessSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseControllerViewRotation : 1;

	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetProjectionMode(TEnumAsByte<ECameraProjectionMode> InProjectionMode);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetOrthoWidth(float InOrthoWidth);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetFieldOfView(float InFieldOfView);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void SetAspectRatio(float InAspectRatio);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void RemoveBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
	UFUNCTION(BlueprintCallable, Category = "CameraComponent")
		void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);

};