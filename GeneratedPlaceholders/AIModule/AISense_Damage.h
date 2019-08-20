#pragma once

#include "CoreMinimal.h"
#include "AISense_Damage.generated.h"

UCLASS()
class UAISense_Damage : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAIDamageEvent> RegisteredEvents;

	UFUNCTION(BlueprintCallable, Category = "AISense_Damage")
	void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);

};