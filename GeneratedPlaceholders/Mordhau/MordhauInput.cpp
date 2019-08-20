#include "MordhauInput.h"

void UMordhauInput::ShowGamepadTextInput(EInputTextMode TextMode, EInputLineMode LineMode, const struct FString& Description, const struct FString& ExistingText, int MaxLen) {
}
	void UMordhauInput::ShowBindingPanel() {
}
	void UMordhauInput::SetToggleSprint(int NewToggleSprint) {
}
	void UMordhauInput::SetMouseYSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetMouseYInverted(bool bNewInverted) {
}
	void UMordhauInput::SetMouseXSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide) {
}
	void UMordhauInput::SetMouseXInverted(bool bNewInverted) {
}
	void UMordhauInput::SetInverseAttackDirectionY(int NewInverseAttackDirectionX) {
}
	void UMordhauInput::SetInverseAttackDirectionX(int NewInverseAttackDirectionX) {
}
	void UMordhauInput::SetGamepadRightYSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetGamepadRightYInverted(bool bNewInverted) {
}
	void UMordhauInput::SetGamepadRightYDeadzone(float NewDeadzone) {
}
	void UMordhauInput::SetGamepadRightXSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetGamepadRightXInverted(bool bNewInverted) {
}
	void UMordhauInput::SetGamepadRightXDeadzone(float NewDeadzone) {
}
	void UMordhauInput::SetGamepadLeftYSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetGamepadLeftYInverted(bool bNewInverted) {
}
	void UMordhauInput::SetGamepadLeftYDeadzone(float NewDeadzone) {
}
	void UMordhauInput::SetGamepadLeftXSensitivity(float NewSensitivity) {
}
	void UMordhauInput::SetGamepadLeftXInverted(bool bNewInverted) {
}
	void UMordhauInput::SetGamepadLeftXDeadzone(float NewDeadzone) {
}
	void UMordhauInput::SetControlScheme(int NewControlScheme) {
}
	void UMordhauInput::SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement) {
}
	void UMordhauInput::SetAngleAttackAfterPress(int NewAngleAttackAfterPress) {
}
	void UMordhauInput::SetActiveActionSet(EActionSet ActionSet) {
}
	void UMordhauInput::SaveSettings() {
}
	void UMordhauInput::RestoreDefaultSettings() {
}
	int UMordhauInput::GetToggleSprint() {
}
	float UMordhauInput::GetMouseYSensitivity() {
}
	bool UMordhauInput::GetMouseYInverted() {
}
	float UMordhauInput::GetMouseXSensitivity() {
}
	int UMordhauInput::GetMouseXIsFlipAttackSide() {
}
	bool UMordhauInput::GetMouseXInverted() {
}
	struct FVector2D UMordhauInput::GetMouseSensitivityLimits() {
}
	int UMordhauInput::GetInverseAttackDirectionY() {
}
	int UMordhauInput::GetInverseAttackDirectionX() {
}
	struct FVector2D UMordhauInput::GetGamepadSensitivityLimits() {
}
	float UMordhauInput::GetGamepadRightYSensitivity() {
}
	bool UMordhauInput::GetGamepadRightYInverted() {
}
	float UMordhauInput::GetGamepadRightYDeadzone() {
}
	float UMordhauInput::GetGamepadRightXSensitivity() {
}
	bool UMordhauInput::GetGamepadRightXInverted() {
}
	float UMordhauInput::GetGamepadRightXDeadzone() {
}
	float UMordhauInput::GetGamepadLeftYSensitivity() {
}
	bool UMordhauInput::GetGamepadLeftYInverted() {
}
	float UMordhauInput::GetGamepadLeftYDeadzone() {
}
	float UMordhauInput::GetGamepadLeftXSensitivity() {
}
	bool UMordhauInput::GetGamepadLeftXInverted() {
}
	float UMordhauInput::GetGamepadLeftXDeadzone() {
}
	struct FVector2D UMordhauInput::GetGamepadDeadzoneLimits() {
}
	int UMordhauInput::GetControlScheme() {
}
	float UMordhauInput::STATIC_GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding) {
}
	struct FName UMordhauInput::STATIC_GetAxisOppositeDirectionName(const struct FName& AxisName) {
}
	struct FName UMordhauInput::STATIC_GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding) {
}
	void UMordhauInput::GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings) {
}
	struct FInputAxisKeyMapping UMordhauInput::GetAxisKeyBinding(const struct FName& AxisName) {
}
	struct FKey UMordhauInput::STATIC_GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding) {
}
	int UMordhauInput::GetAngleAttacksWithMovement() {
}
	int UMordhauInput::GetAngleAttackAfterPress() {
}
	struct FName UMordhauInput::STATIC_GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding) {
}
	void UMordhauInput::GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings) {
}
	struct FInputActionKeyMapping UMordhauInput::GetActionKeyBinding(const struct FName& ActionName) {
}
	struct FKey UMordhauInput::STATIC_GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding) {
}
	void UMordhauInput::ClearKeyBindings() {
}
	void UMordhauInput::ApplySettings() {
}
	void UMordhauInput::AddAxisKeyBinding(const struct FName& AxisName, const struct FKey& Key) {
}
	void UMordhauInput::AddActionKeyBinding(const struct FName& ActionName, const struct FKey& Key) {
}
