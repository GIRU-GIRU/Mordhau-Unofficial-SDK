#pragma once

#include "CoreMinimal.h"
#include "KismetTextLibrary.generated.h"

UCLASS()
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
	struct FText STATIC_TextTrimTrailing(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_TextTrimPrecedingAndTrailing(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_TextTrimPreceding(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_TextToUpper(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_TextToLower(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_TextIsTransient(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_TextIsFromStringTable(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_TextIsEmpty(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_TextIsCultureInvariant(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_TextFromStringTable(const struct FName& TableId, const struct FString& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_StringTableIdAndKeyFromText(const struct FText& Text, struct FName* OutTableId, struct FString* OutKey);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_PolyglotDataToText(const struct FPolyglotTextData& PolyglotData);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_NotEqual_TextText(const struct FText& A, const struct FText& B);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_NotEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		void STATIC_IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, struct FText* ErrorMessage);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_GetEmptyText();
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Format(const struct FText& InPattern, TArray<struct FFormatArgumentData> InArgs);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_FindTextInLocalizationTable(const struct FString& Namespace, const struct FString& Key, struct FText* OutText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_EqualEqual_TextText(const struct FText& A, const struct FText& B);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		bool STATIC_EqualEqual_IgnoreCase_TextText(const struct FText& A, const struct FText& B);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_VectorToText(const struct FVector& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_Vector2dToText(const struct FVector2D& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_TransformToText(const struct FTransform& InTrans);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FString STATIC_Conv_TextToString(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_StringToText(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_RotatorToText(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_ObjectToText(class UObject* InObj);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_NameToText(const struct FName& InName);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_IntToText(int Value, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_FloatToText(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_ColorToText(const struct FLinearColor& InColor);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_ByteToText(unsigned char Value);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_Conv_BoolToText(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, const struct FString& InTimeZone);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsTimespan_Timespan(const struct FTimespan& InTimespan);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsTime_DateTime(const struct FDateTime& In);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsPercent_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsDateTime_DateTime(const struct FDateTime& In);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsDate_DateTime(const struct FDateTime& InDateTime);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsCurrencyBase(int BaseValue, const struct FString& CurrencyCode);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsCurrency_Integer(int Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);
	UFUNCTION(BlueprintCallable, Category = "KismetTextLibrary")
		struct FText STATIC_AsCurrency_Float(float Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int MinimumIntegralDigits, int MaximumIntegralDigits, int MinimumFractionalDigits, int MaximumFractionalDigits, const struct FString& CurrencyCode);

};