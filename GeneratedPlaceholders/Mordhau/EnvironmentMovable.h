#pragma once

#include "CoreMinimal.h"
#include "EnvironmentMovable.generated.h"

UCLASS()
class AEnvironmentMovable : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESwayMethod SwayMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USceneComponent> SwayingComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RollPitchYawFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RollPitchYawMagnitude;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RollPitchYawSpeed;

	UFUNCTION(BlueprintCallable, Category = "EnvironmentMovable")
	void InitializeMovable(class USceneComponent* InSwayingComponent, const struct FVector& InRollPitchYawFrequency, const struct FVector& InRollPitchYawMagnitude, const struct FVector& InRollPitchYawSpeed);

};