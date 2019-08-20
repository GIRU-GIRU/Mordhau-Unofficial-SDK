#pragma once

#include "CoreMinimal.h"
#include "MordhauHUD.generated.h"

UCLASS()
class AMordhauHUD : public AHUD
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AControlPoint*> CapturePointsOfInterest;

	UFUNCTION(BlueprintCallable, Category = "MordhauHUD")
	void OnGameStateReplicated();
	UFUNCTION(BlueprintCallable, Category = "MordhauHUD")
		void EnqueueMordhauDialog(class UMordhauDialog* Dialog);

};