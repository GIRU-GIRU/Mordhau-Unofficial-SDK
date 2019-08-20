#pragma once

#include "CoreMinimal.h"
#include "DebugCameraController.generated.h"

UCLASS()
class ADebugCameraController : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowSelectedInfo : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsFrozenRendering : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawFrustumComponent* DrawFrustum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialMaxSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialAccel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialDecel;

	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
	void ToggleDisplay();
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		void ShowDebugSelectedInfo();
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		void SetPawnMovementSpeedScale(float NewSpeedScale);
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		void ReceiveOnDeactivate(class APlayerController* RestoredPC);
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		void ReceiveOnActorSelected(class AActor* NewSelectedActor, const struct FVector& SelectHitLocation, const struct FVector& SelectHitNormal, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		void ReceiveOnActivate(class APlayerController* OriginalPC);
	UFUNCTION(BlueprintCallable, Category = "DebugCameraController")
		class AActor* GetSelectedActor();

};