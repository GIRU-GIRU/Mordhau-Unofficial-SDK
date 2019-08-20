#include "AIController.h"

bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent) {
}
	void AAIController::UnclaimTaskResource(class UClass* ResourceClass) {
}
	void AAIController::SetMoveBlockDetection(bool bEnable) {
}
	bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset) {
}
	void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset) {
}
	void AAIController::OnUnpossess(class APawn* UnpossessedPawn) {
}
	void AAIController::OnPossess(class APawn* PossessedPawn) {
}
	void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased) {
}
	TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath) {
}
	TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath) {
}
	void AAIController::K2_SetFocus(class AActor* NewFocus) {
}
	void AAIController::K2_SetFocalPoint(const struct FVector& FP) {
}
	void AAIController::K2_ClearFocus() {
}
	bool AAIController::HasPartialPath() {
}
	class UPathFollowingComponent* AAIController::GetPathFollowingComponent() {
}
	TEnumAsByte<EPathFollowingStatus> AAIController::GetMoveStatus() {
}
	struct FVector AAIController::GetImmediateMoveDestination() {
}
	class AActor* AAIController::GetFocusActor() {
}
	struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor) {
}
	struct FVector AAIController::GetFocalPoint() {
}
	class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent() {
}
	void AAIController::ClaimTaskResource(class UClass* ResourceClass) {
}
