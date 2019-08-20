#pragma once

#include "CoreMinimal.h"
#include "AvoidanceManager.generated.h"

UCLASS()
class UAvoidanceManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultTimeToLive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LockTimeAfterAvoid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LockTimeAfterClean;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeltaTimeToPredict;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ArtificialRadiusExpansion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TestHeightDifference;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeightCheckMargin;

	UFUNCTION(BlueprintCallable, Category = "AvoidanceManager")
	bool RegisterMovementComponent(class UMovementComponent* MovementComp, float AvoidanceWeight);
	UFUNCTION(BlueprintCallable, Category = "AvoidanceManager")
		int GetObjectCount();
	UFUNCTION(BlueprintCallable, Category = "AvoidanceManager")
		int GetNewAvoidanceUID();
	UFUNCTION(BlueprintCallable, Category = "AvoidanceManager")
		struct FVector GetAvoidanceVelocityForComponent(class UMovementComponent* MovementComp);

};