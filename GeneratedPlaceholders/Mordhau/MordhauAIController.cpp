#include "MordhauAIController.h"

void AMordhauAIController::UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo* PerceptionInfo) {
}
	void AMordhauAIController::StartFacingMovement(float LocationUpOffset) {
}
	void AMordhauAIController::StartFacingLocation(const struct FVector& WorldLocation) {
}
	void AMordhauAIController::StartFacingBone(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset) {
}
	void AMordhauAIController::StartFacingActor2D(class AActor* Actor, float LocationUpOffset) {
}
	void AMordhauAIController::StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset) {
}
	void AMordhauAIController::RequestVoiceCommand(unsigned char Command) {
}
	void AMordhauAIController::RefreshCharacterProfile() {
}
	bool AMordhauAIController::PerceivesEnemy() {
}
	bool AMordhauAIController::PerceivesAlly() {
}
	void AMordhauAIController::OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo) {
}
	void AMordhauAIController::OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo) {
}
	void AMordhauAIController::OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors) {
}
	void AMordhauAIController::OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter) {
}
	void AMordhauAIController::OnAfterUnPossess() {
}
	int AMordhauAIController::GetTeam() {
}
	TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedEnemies() {
}
	TArray<class AMordhauCharacter*> AMordhauAIController::GetPerceivedAllies() {
}
	float AMordhauAIController::GetMotionBasedRandom() {
}
	class AMordhauCharacter* AMordhauAIController::GetKthClosestOfThree(int Idx) {
}
	class AActor* AMordhauAIController::GetCurrentlyFacingActor() {
}
	EAIFacingMode AMordhauAIController::GetCurrentFacingMode() {
}
	class AMordhauCharacter* AMordhauAIController::GetClosestEnemy() {
}
	class AMordhauCharacter* AMordhauAIController::GetClosestAlly() {
}
	int AMordhauAIController::GetAllyClearanceSides() {
}
	void AMordhauAIController::DestroyController() {
}
