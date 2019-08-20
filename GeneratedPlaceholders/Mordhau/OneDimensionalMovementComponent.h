#pragma once

#include "CoreMinimal.h"
#include "OneDimensionalMovementComponent.generated.h"

UCLASS()
class UOneDimensionalMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TotalSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasInitializedLine;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LineStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LineEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MovementDirection;

	UFUNCTION(BlueprintCallable, Category = "OneDimensionalMovementComponent")
	void SetMovementLine(const struct FVector& NewLineStart, const struct FVector& NewLineEnd);

};