#pragma once

#include "CoreMinimal.h"
#include "CapturePointBanner.generated.h"

UCLASS()
class ACapturePointBanner : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AControlPoint* ControlPoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CaptureProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RopeMaterialIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FlagMaterialIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RopeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* RopeMaterialInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* FlagMaterialInstance;

	UFUNCTION(BlueprintCallable, Category = "CapturePointBanner")
	void UpdateVisuals();
	UFUNCTION(BlueprintCallable, Category = "CapturePointBanner")
		void InitializeBanner(class AControlPoint* OwningPoint);

};