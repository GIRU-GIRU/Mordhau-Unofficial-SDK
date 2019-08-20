#include "PlayFabJsonObject.h"

void UPlayFabJsonObject::SetStringField(const struct FString& FieldName, const struct FString& StringValue) {
}
	void UPlayFabJsonObject::SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray) {
}
	void UPlayFabJsonObject::SetObjectField(const struct FString& FieldName, class UPlayFabJsonObject* JsonObject) {
}
	void UPlayFabJsonObject::SetObjectArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonObject*> ObjectArray) {
}
	void UPlayFabJsonObject::SetNumberField(const struct FString& FieldName, float Number) {
}
	void UPlayFabJsonObject::SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray) {
}
	void UPlayFabJsonObject::SetFieldNull(const struct FString& FieldName) {
}
	void UPlayFabJsonObject::SetField(const struct FString& FieldName, class UPlayFabJsonValue* JsonValue) {
}
	void UPlayFabJsonObject::SetBoolField(const struct FString& FieldName, bool InValue) {
}
	void UPlayFabJsonObject::SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray) {
}
	void UPlayFabJsonObject::SetArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonValue*> inArray) {
}
	void UPlayFabJsonObject::Reset() {
}
	void UPlayFabJsonObject::RemoveField(const struct FString& FieldName) {
}
	void UPlayFabJsonObject::MergeJsonObject(class UPlayFabJsonObject* InJsonObject, bool Overwrite) {
}
	bool UPlayFabJsonObject::HasField(const struct FString& FieldName) {
}
	struct FString UPlayFabJsonObject::GetStringField(const struct FString& FieldName) {
}
	TArray<struct FString> UPlayFabJsonObject::GetStringArrayField(const struct FString& FieldName) {
}
	class UPlayFabJsonObject* UPlayFabJsonObject::GetObjectField(const struct FString& FieldName) {
}
	TArray<class UPlayFabJsonObject*> UPlayFabJsonObject::GetObjectArrayField(const struct FString& FieldName) {
}
	float UPlayFabJsonObject::GetNumberField(const struct FString& FieldName) {
}
	TArray<float> UPlayFabJsonObject::GetNumberArrayField(const struct FString& FieldName) {
}
	TArray<struct FString> UPlayFabJsonObject::GetFieldNames() {
}
	class UPlayFabJsonValue* UPlayFabJsonObject::GetField(const struct FString& FieldName) {
}
	bool UPlayFabJsonObject::GetBoolField(const struct FString& FieldName) {
}
	TArray<bool> UPlayFabJsonObject::GetBoolArrayField(const struct FString& FieldName) {
}
	TArray<class UPlayFabJsonValue*> UPlayFabJsonObject::GetArrayField(const struct FString& FieldName) {
}
	struct FString UPlayFabJsonObject::EncodeJson() {
}
	bool UPlayFabJsonObject::DecodeJson(const struct FString& JsonString) {
}
	class UPlayFabJsonObject* UPlayFabJsonObject::STATIC_ConstructJsonObject(class UObject* WorldContextObject) {
}
