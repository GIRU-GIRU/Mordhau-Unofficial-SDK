#include "BlackboardComponent.h"

void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue) {
}
	void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue) {
}
	void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue) {
}
	void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue) {
}
	void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue) {
}
	void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue) {
}
	void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue) {
}
	void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue) {
}
	void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue) {
}
	void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue) {
}
	bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName) {
}
	struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName) {
}
	struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName) {
}
	struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName) {
}
	class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName) {
}
	struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName) {
}
	int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName) {
}
	float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName) {
}
	unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName) {
}
	class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName) {
}
	bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName) {
}
	bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation) {
}
	bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation) {
}
	void UBlackboardComponent::ClearValue(const struct FName& KeyName) {
}
