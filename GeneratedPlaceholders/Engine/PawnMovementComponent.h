#pragma once

#include "CoreMinimal.h"
#include "PawnMovementComponent.generated.h"

UCLASS()
class UPawnMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APawn* PawnOwner;

	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
	struct FVector K2_GetInputVector();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		bool IsMoveInputIgnored();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		struct FVector GetPendingInputVector();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		class APawn* GetPawnOwner();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		struct FVector GetLastInputVector();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		struct FVector ConsumeInputVector();
	UFUNCTION(BlueprintCallable, Category = "PawnMovementComponent")
		void AddInputVector(const struct FVector& WorldVector, bool bForce);

};