#include "SeparatedBodyPart.h"

void ASeparatedBodyPart::OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent) {
}
	bool ASeparatedBodyPart::IsPartiallyDismembered() {
}
	bool ASeparatedBodyPart::IsDismembered(const struct FName& bone) {
}
	void ASeparatedBodyPart::InitializeDismemberment(class AMordhauCharacter* Source, const struct FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce) {
}
