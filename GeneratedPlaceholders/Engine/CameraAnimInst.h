#pragma once

#include "CoreMinimal.h"
#include "CameraAnimInst.generated.h"

UCLASS()
class UCameraAnimInst : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnim* CamAnim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpGroupInst* InterpGroupInst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpTrackMove* MoveTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpTrackInstMove* MoveInst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECameraAnimPlaySpace> PlaySpace;

	UFUNCTION(BlueprintCallable, Category = "CameraAnimInst")
	void Stop(bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "CameraAnimInst")
		void SetScale(float NewDuration);
	UFUNCTION(BlueprintCallable, Category = "CameraAnimInst")
		void SetDuration(float NewDuration);

};