#pragma once

#include "CoreMinimal.h"
#include "AIBlueprintHelperLibrary.generated.h"

UCLASS()
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		bool STATIC_IsValidAILocation(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		class UNavigationPath* STATIC_GetCurrentPath(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	UFUNCTION(BlueprintCallable, Category = "AIBlueprintHelperLibrary")
		class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);

};