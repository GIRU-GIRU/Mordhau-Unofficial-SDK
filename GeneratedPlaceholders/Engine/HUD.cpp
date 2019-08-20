#include "HUD.h"

void AHUD::ShowHUD() {
}
	void AHUD::ShowDebugToggleSubCategory(const struct FName& Category) {
}
	void AHUD::ShowDebugForReticleTargetToggle(class UClass* DesiredClass) {
}
	void AHUD::ShowDebug(const struct FName& DebugType) {
}
	void AHUD::RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText) {
}
	void AHUD::RemoveAllDebugStrings() {
}
	void AHUD::ReceiveHitBoxRelease(const struct FName& BoxName) {
}
	void AHUD::ReceiveHitBoxEndCursorOver(const struct FName& BoxName) {
}
	void AHUD::ReceiveHitBoxClick(const struct FName& BoxName) {
}
	void AHUD::ReceiveHitBoxBeginCursorOver(const struct FName& BoxName) {
}
	void AHUD::ReceiveDrawHUD(int SizeX, int SizeY) {
}
	struct FVector AHUD::Project(const struct FVector& Location) {
}
	void AHUD::PreviousDebugTarget() {
}
	void AHUD::NextDebugTarget() {
}
	void AHUD::GetTextSize(const struct FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight) {
}
	class APlayerController* AHUD::GetOwningPlayerController() {
}
	class APawn* AHUD::GetOwningPawn() {
}
	void AHUD::GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors) {
}
	void AHUD::DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) {
}
	void AHUD::DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot) {
}
	void AHUD::DrawText(const struct FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition) {
}
	void AHUD::DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
}
	void AHUD::DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color) {
}
	void AHUD::DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) {
}
	void AHUD::DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot) {
}
	void AHUD::DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor, float LineThickness) {
}
	void AHUD::Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection) {
}
	void AHUD::AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& InName, bool bConsumesInput, int Priority) {
}
	void AHUD::AddDebugText(const struct FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow) {
}
