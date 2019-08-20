#include "PlayFabJsonValue.h"

bool UPlayFabJsonValue::IsNull() {
}
	struct FString UPlayFabJsonValue::GetTypeString() {
}
	TEnumAsByte<EPFJson> UPlayFabJsonValue::GetType() {
}
	class UPlayFabJsonValue* UPlayFabJsonValue::STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue) {
}
	class UPlayFabJsonValue* UPlayFabJsonValue::STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UPlayFabJsonObject* JsonObject) {
}
	class UPlayFabJsonValue* UPlayFabJsonValue::STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number) {
}
	class UPlayFabJsonValue* UPlayFabJsonValue::STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue) {
}
	class UPlayFabJsonValue* UPlayFabJsonValue::STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UPlayFabJsonValue*> inArray) {
}
	struct FString UPlayFabJsonValue::AsString() {
}
	class UPlayFabJsonObject* UPlayFabJsonValue::AsObject() {
}
	float UPlayFabJsonValue::AsNumber() {
}
	bool UPlayFabJsonValue::AsBool() {
}
	TArray<class UPlayFabJsonValue*> UPlayFabJsonValue::AsArray() {
}
