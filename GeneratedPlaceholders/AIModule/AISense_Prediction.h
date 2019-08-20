#pragma once

#include "CoreMinimal.h"
#include "AISense_Prediction.generated.h"

UCLASS()
class UAISense_Prediction : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAIPredictionEvent> RegisteredEvents;

	UFUNCTION(BlueprintCallable, Category = "AISense_Prediction")
	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	UFUNCTION(BlueprintCallable, Category = "AISense_Prediction")
		void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);

};