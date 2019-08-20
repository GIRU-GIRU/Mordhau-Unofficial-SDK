#pragma once

#include "CoreMinimal.h"
#include "AsyncTask_LoadXRDeviceVisComponent.generated.h"

UCLASS()
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnModelLoaded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLoadFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* SpawnedComponent;

	UFUNCTION(BlueprintCallable, Category = "AsyncTask_LoadXRDeviceVisComponent")
	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	UFUNCTION(BlueprintCallable, Category = "AsyncTask_LoadXRDeviceVisComponent")
		class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);

};