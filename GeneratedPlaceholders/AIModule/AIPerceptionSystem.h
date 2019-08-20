#pragma once

#include "CoreMinimal.h"
#include "AIPerceptionSystem.generated.h"

UCLASS()
class UAIPerceptionSystem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAISense*> Senses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PerceptionAgingRate;

	UFUNCTION(BlueprintCallable, Category = "AIPerceptionSystem")
	void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionSystem")
		void ReportEvent(class UAISenseEvent* PerceptionEvent);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionSystem")
		bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionSystem")
		void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionSystem")
		class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);

};