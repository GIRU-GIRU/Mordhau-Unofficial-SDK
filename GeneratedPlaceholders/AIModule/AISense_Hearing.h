#pragma once

#include "CoreMinimal.h"
#include "AISense_Hearing.generated.h"

UCLASS()
class UAISense_Hearing : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAINoiseEvent> NoiseEvents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedOfSoundSq;

	UFUNCTION(BlueprintCallable, Category = "AISense_Hearing")
	void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);

};