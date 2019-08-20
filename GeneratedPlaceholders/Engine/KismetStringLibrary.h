#pragma once

#include "CoreMinimal.h"
#include "KismetStringLibrary.generated.h"

UCLASS()
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
	struct FString STATIC_TrimTrailing(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Trim(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_ToUpper(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_ToLower(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_TimeSecondsToString(float InSeconds);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_StartsWith(const struct FString& SourceString, const struct FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_Split(const struct FString& SourceString, const struct FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, struct FString* LeftS, struct FString* RightS);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_RightPad(const struct FString& SourceString, int ChCount);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_RightChop(const struct FString& SourceString, int Count);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Right(const struct FString& SourceString, int Count);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Reverse(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_ReplaceInline(const struct FString& SearchText, const struct FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, struct FString* SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Replace(const struct FString& SourceString, const struct FString& From, const struct FString& To, TEnumAsByte<ESearchCase> SearchCase);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		TArray<struct FString> STATIC_ParseIntoArray(const struct FString& SourceString, const struct FString& Delimiter, bool CullEmptyStrings);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_NotEqual_StriStri(const struct FString& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Mid(const struct FString& SourceString, int Start, int Count);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_MatchesWildcard(const struct FString& SourceString, const struct FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_Len(const struct FString& S);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_LeftPad(const struct FString& SourceString, int ChCount);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_LeftChop(const struct FString& SourceString, int Count);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Left(const struct FString& SourceString, int Count);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_JoinStringArray(TArray<struct FString> SourceArray, const struct FString& Separator);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_IsNumeric(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_GetSubstring(const struct FString& SourceString, int StartIndex, int Length);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_GetCharacterAsNumber(const struct FString& SourceString, int Index);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		TArray<struct FString> STATIC_GetCharacterArrayFromString(const struct FString& SourceString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_FindSubstring(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_EqualEqual_StriStri(const struct FString& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_EndsWith(const struct FString& SourceString, const struct FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_CullArray(const struct FString& SourceString, TArray<struct FString>* inArray);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_VectorToString(const struct FVector& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_Vector2dToString(const struct FVector2D& InVec);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_TransformToString(const struct FTransform& InTrans);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		void STATIC_Conv_StringToVector2D(const struct FString& inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		void STATIC_Conv_StringToVector(const struct FString& inString, struct FVector* OutConvertedVector, bool* OutIsValid);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		void STATIC_Conv_StringToRotator(const struct FString& inString, struct FRotator* OutConvertedRotator, bool* OutIsValid);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FName STATIC_Conv_StringToName(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		int STATIC_Conv_StringToInt(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		float STATIC_Conv_StringToFloat(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		void STATIC_Conv_StringToColor(const struct FString& inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_RotatorToString(const struct FRotator& InRot);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_ObjectToString(class UObject* InObj);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_NameToString(const struct FName& InName);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_IntVectorToString(const struct FIntVector& InIntVec);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_IntToString(int inInt);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_FloatToString(float InFloat);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_ColorToString(const struct FLinearColor& InColor);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_ByteToString(unsigned char InByte);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Conv_BoolToString(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		bool STATIC_Contains(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Vector2d(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector2D& InVector2D, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Vector(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector& InVector, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Rotator(const struct FString& AppendTo, const struct FString& Prefix, const struct FRotator& InRot, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Object(const struct FString& AppendTo, const struct FString& Prefix, class UObject* InObj, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Name(const struct FString& AppendTo, const struct FString& Prefix, const struct FName& InName, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_IntVector(const struct FString& AppendTo, const struct FString& Prefix, const struct FIntVector& InIntVector, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Int(const struct FString& AppendTo, const struct FString& Prefix, int inInt, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Float(const struct FString& AppendTo, const struct FString& Prefix, float InFloat, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Color(const struct FString& AppendTo, const struct FString& Prefix, const struct FLinearColor& InColor, const struct FString& Suffix);
	UFUNCTION(BlueprintCallable, Category = "KismetStringLibrary")
		struct FString STATIC_BuildString_Bool(const struct FString& AppendTo, const struct FString& Prefix, bool InBool, const struct FString& Suffix);

};