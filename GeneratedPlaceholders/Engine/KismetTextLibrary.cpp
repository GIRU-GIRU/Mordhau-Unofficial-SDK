#include "KismetTextLibrary.h"

struct FText UKismetTextLibrary::STATIC_TextTrimTrailing(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_TextTrimPrecedingAndTrailing(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_TextTrimPreceding(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_TextToUpper(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_TextToLower(const struct FText& InText) {
}
	bool UKismetTextLibrary::STATIC_TextIsTransient(const struct FText& InText) {
}
	bool UKismetTextLibrary::STATIC_TextIsFromStringTable(const struct FText& Text) {
}
	bool UKismetTextLibrary::STATIC_TextIsEmpty(const struct FText& InText) {
}
	bool UKismetTextLibrary::STATIC_TextIsCultureInvariant(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_TextFromStringTable(const struct FName& TableId, const struct FString& Key) {
}
	bool UKismetTextLibrary::STATIC_StringTableIdAndKeyFromText(const struct FText& Text, struct FName* OutTableId, struct FString* OutKey) {
}
	struct FText UKismetTextLibrary::STATIC_PolyglotDataToText(const struct FPolyglotTextData& PolyglotData) {
}
	bool UKismetTextLibrary::STATIC_NotEqual_TextText(const struct FText& A, const struct FText& B) {
}
	bool UKismetTextLibrary::STATIC_NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B) {
}
	void UKismetTextLibrary::STATIC_IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, struct FText* ErrorMessage) {
}
	struct FText UKismetTextLibrary::STATIC_GetEmptyText() {
}
	struct FText UKismetTextLibrary::STATIC_Format(const struct FText& InPattern, TArray<struct FFormatArgumentData> InArgs) {
}
	bool UKismetTextLibrary::STATIC_FindTextInLocalizationTable(const struct FString& Namespace, const struct FString& Key, struct FText* OutText) {
}
	bool UKismetTextLibrary::STATIC_EqualEqual_TextText(const struct FText& A, const struct FText& B) {
}
	bool UKismetTextLibrary::STATIC_EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_VectorToText(const struct FVector& InVec) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_Vector2dToText(const struct FVector2D& InVec) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_TransformToText(const struct FTransform& InTrans) {
}
	struct FString UKismetTextLibrary::STATIC_Conv_TextToString(const struct FText& InText) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_StringToText(const struct FString& inString) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_RotatorToText(const struct FRotator& InRot) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_ObjectToText(class UObject* InObj) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_NameToText(const struct FName& InName) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_IntToText(int Value, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_ColorToText(const struct FLinearColor& InColor) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_ByteToText(unsigned char Value) {
}
	struct FText UKismetTextLibrary::STATIC_Conv_BoolToText(bool InBool) {
}
	struct FText UKismetTextLibrary::STATIC_AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone) {
}
	struct FText UKismetTextLibrary::STATIC_AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone) {
}
	struct FText UKismetTextLibrary::STATIC_AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone) {
}
	struct FText UKismetTextLibrary::STATIC_AsTimespan_Timespan(const struct FTimespan& InTimespan) {
}
	struct FText UKismetTextLibrary::STATIC_AsTime_DateTime(const struct FDateTime& In) {
}
	struct FText UKismetTextLibrary::STATIC_AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits) {
}
	struct FText UKismetTextLibrary::STATIC_AsDateTime_DateTime(const struct FDateTime& In) {
}
	struct FText UKismetTextLibrary::STATIC_AsDate_DateTime(const struct FDateTime& InDateTime) {
}
	struct FText UKismetTextLibrary::STATIC_AsCurrencyBase(int BaseValue, const struct FString& CurrencyCode) {
}
	struct FText UKismetTextLibrary::STATIC_AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode) {
}
	struct FText UKismetTextLibrary::STATIC_AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode) {
}
