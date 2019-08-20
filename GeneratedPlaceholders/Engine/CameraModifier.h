#pragma once

#include "CoreMinimal.h"
#include "CameraModifier.generated.h"

UCLASS()
class UCameraModifier : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDebug : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bExclusive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerCameraManager* CameraOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlphaInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlphaOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Alpha;

	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
	bool IsDisabled();
	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
		class AActor* GetViewTarget();
	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
		void EnableModifier();
	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
		void DisableModifier(bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
		void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
	UFUNCTION(BlueprintCallable, Category = "CameraModifier")
		void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);

};