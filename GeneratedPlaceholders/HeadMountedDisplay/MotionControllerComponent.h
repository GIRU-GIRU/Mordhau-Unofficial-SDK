#pragma once

#include "CoreMinimal.h"
#include "MotionControllerComponent.generated.h"

UCLASS()
class UMotionControllerComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PlayerIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EControllerHand Hand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MotionSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableLowLatencyUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ETrackingStatus CurrentTrackingStatus;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisplayDeviceModel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName DisplayModelSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* CustomDisplayMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* DisplayComponent;

	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
	void SetTrackingSource(EControllerHand NewSource);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void SetTrackingMotionSource(const struct FName& NewSource);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void SetShowDeviceModel(bool bShowControllerModel);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void SetAssociatedPlayerIndex(int NewPlayer);
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		void OnMotionControllerUpdated();
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		bool IsTracked();
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		EControllerHand GetTrackingSource();
	UFUNCTION(BlueprintCallable, Category = "MotionControllerComponent")
		float GetParameterValue(const struct FName& InName, bool* bValueFound);

};