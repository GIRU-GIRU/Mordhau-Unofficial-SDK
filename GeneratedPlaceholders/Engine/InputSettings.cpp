#include "InputSettings.h"

void UInputSettings::SaveKeyMappings() {
}
	void UInputSettings::RemoveAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}
	void UInputSettings::RemoveActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}
	class UInputSettings* UInputSettings::STATIC_GetInputSettings() {
}
	void UInputSettings::GetAxisNames(TArray<struct FName>* AxisNames) {
}
	void UInputSettings::GetAxisMappingByName(const struct FName& InAxisName, TArray<struct FInputAxisKeyMapping>* OutMappings) {
}
	void UInputSettings::GetActionNames(TArray<struct FName>* ActionNames) {
}
	void UInputSettings::GetActionMappingByName(const struct FName& InActionName, TArray<struct FInputActionKeyMapping>* OutMappings) {
}
	void UInputSettings::ForceRebuildKeymaps() {
}
	void UInputSettings::AddAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}
	void UInputSettings::AddActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
}
