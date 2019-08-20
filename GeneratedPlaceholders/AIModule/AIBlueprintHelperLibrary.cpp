#include "AIBlueprintHelperLibrary.h"

void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
}
	class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail) {
}
	void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal) {
}
	void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal) {
}
	void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess) {
}
	void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic) {
}
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation) {
}
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location) {
}
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct FVector& DirectionVector) {
}
	class UNavigationPath* UAIBlueprintHelperLibrary::STATIC_GetCurrentPath(class AController* Controller) {
}
	class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class AActor* Target) {
}
	class AAIController* UAIBlueprintHelperLibrary::STATIC_GetAIController(class AActor* ControlledActor) {
}
	class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
}
