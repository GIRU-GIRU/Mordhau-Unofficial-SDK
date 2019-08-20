#include "KismetStringLibrary.h"

struct FString UKismetStringLibrary::STATIC_TrimTrailing(const struct FString& SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_Trim(const struct FString& SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_ToUpper(const struct FString& SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_ToLower(const struct FString& SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_TimeSecondsToString(float InSeconds) {
}
	bool UKismetStringLibrary::STATIC_StartsWith(const struct FString& SourceString, const struct FString& InPrefix, TEnumAsByte<ESearchCase> SearchCase) {
}
	bool UKismetStringLibrary::STATIC_Split(const struct FString& SourceString, const struct FString& InStr, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir, struct FString* LeftS, struct FString* RightS) {
}
	struct FString UKismetStringLibrary::STATIC_RightPad(const struct FString& SourceString, int ChCount) {
}
	struct FString UKismetStringLibrary::STATIC_RightChop(const struct FString& SourceString, int Count) {
}
	struct FString UKismetStringLibrary::STATIC_Right(const struct FString& SourceString, int Count) {
}
	struct FString UKismetStringLibrary::STATIC_Reverse(const struct FString& SourceString) {
}
	int UKismetStringLibrary::STATIC_ReplaceInline(const struct FString& SearchText, const struct FString& ReplacementText, TEnumAsByte<ESearchCase> SearchCase, struct FString* SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_Replace(const struct FString& SourceString, const struct FString& From, const struct FString& To, TEnumAsByte<ESearchCase> SearchCase) {
}
	TArray<struct FString> UKismetStringLibrary::STATIC_ParseIntoArray(const struct FString& SourceString, const struct FString& Delimiter, bool CullEmptyStrings) {
}
	bool UKismetStringLibrary::STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B) {
}
	bool UKismetStringLibrary::STATIC_NotEqual_StriStri(const struct FString& A, const struct FString& B) {
}
	struct FString UKismetStringLibrary::STATIC_Mid(const struct FString& SourceString, int Start, int Count) {
}
	bool UKismetStringLibrary::STATIC_MatchesWildcard(const struct FString& SourceString, const struct FString& Wildcard, TEnumAsByte<ESearchCase> SearchCase) {
}
	int UKismetStringLibrary::STATIC_Len(const struct FString& S) {
}
	struct FString UKismetStringLibrary::STATIC_LeftPad(const struct FString& SourceString, int ChCount) {
}
	struct FString UKismetStringLibrary::STATIC_LeftChop(const struct FString& SourceString, int Count) {
}
	struct FString UKismetStringLibrary::STATIC_Left(const struct FString& SourceString, int Count) {
}
	struct FString UKismetStringLibrary::STATIC_JoinStringArray(TArray<struct FString> SourceArray, const struct FString& Separator) {
}
	bool UKismetStringLibrary::STATIC_IsNumeric(const struct FString& SourceString) {
}
	struct FString UKismetStringLibrary::STATIC_GetSubstring(const struct FString& SourceString, int StartIndex, int Length) {
}
	int UKismetStringLibrary::STATIC_GetCharacterAsNumber(const struct FString& SourceString, int Index) {
}
	TArray<struct FString> UKismetStringLibrary::STATIC_GetCharacterArrayFromString(const struct FString& SourceString) {
}
	int UKismetStringLibrary::STATIC_FindSubstring(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd, int StartPosition) {
}
	bool UKismetStringLibrary::STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B) {
}
	bool UKismetStringLibrary::STATIC_EqualEqual_StriStri(const struct FString& A, const struct FString& B) {
}
	bool UKismetStringLibrary::STATIC_EndsWith(const struct FString& SourceString, const struct FString& InSuffix, TEnumAsByte<ESearchCase> SearchCase) {
}
	int UKismetStringLibrary::STATIC_CullArray(const struct FString& SourceString, TArray<struct FString>* inArray) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_VectorToString(const struct FVector& InVec) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_Vector2dToString(const struct FVector2D& InVec) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_TransformToString(const struct FTransform& InTrans) {
}
	void UKismetStringLibrary::STATIC_Conv_StringToVector2D(const struct FString& inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid) {
}
	void UKismetStringLibrary::STATIC_Conv_StringToVector(const struct FString& inString, struct FVector* OutConvertedVector, bool* OutIsValid) {
}
	void UKismetStringLibrary::STATIC_Conv_StringToRotator(const struct FString& inString, struct FRotator* OutConvertedRotator, bool* OutIsValid) {
}
	struct FName UKismetStringLibrary::STATIC_Conv_StringToName(const struct FString& inString) {
}
	int UKismetStringLibrary::STATIC_Conv_StringToInt(const struct FString& inString) {
}
	float UKismetStringLibrary::STATIC_Conv_StringToFloat(const struct FString& inString) {
}
	void UKismetStringLibrary::STATIC_Conv_StringToColor(const struct FString& inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_RotatorToString(const struct FRotator& InRot) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_ObjectToString(class UObject* InObj) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_NameToString(const struct FName& InName) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_IntVectorToString(const struct FIntVector& InIntVec) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_IntToString(int inInt) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_FloatToString(float InFloat) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_ColorToString(const struct FLinearColor& InColor) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_ByteToString(unsigned char InByte) {
}
	struct FString UKismetStringLibrary::STATIC_Conv_BoolToString(bool InBool) {
}
	bool UKismetStringLibrary::STATIC_Contains(const struct FString& SearchIn, const struct FString& Substring, bool bUseCase, bool bSearchFromEnd) {
}
	struct FString UKismetStringLibrary::STATIC_Concat_StrStr(const struct FString& A, const struct FString& B) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Vector2d(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector2D& InVector2D, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Vector(const struct FString& AppendTo, const struct FString& Prefix, const struct FVector& InVector, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Rotator(const struct FString& AppendTo, const struct FString& Prefix, const struct FRotator& InRot, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Object(const struct FString& AppendTo, const struct FString& Prefix, class UObject* InObj, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Name(const struct FString& AppendTo, const struct FString& Prefix, const struct FName& InName, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_IntVector(const struct FString& AppendTo, const struct FString& Prefix, const struct FIntVector& InIntVector, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Int(const struct FString& AppendTo, const struct FString& Prefix, int inInt, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Float(const struct FString& AppendTo, const struct FString& Prefix, float InFloat, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Color(const struct FString& AppendTo, const struct FString& Prefix, const struct FLinearColor& InColor, const struct FString& Suffix) {
}
	struct FString UKismetStringLibrary::STATIC_BuildString_Bool(const struct FString& AppendTo, const struct FString& Prefix, bool InBool, const struct FString& Suffix) {
}
