#include "VisualLoggerKismetLibrary.h"

void UVisualLoggerKismetLibrary::STATIC_RedirectVislog(class UObject* SourceOwner, class UObject* DestinationOwner) {
}
	void UVisualLoggerKismetLibrary::STATIC_LogText(class UObject* WorldContextObject, const struct FString& Text, const struct FName& LogCategory, bool bAddToMessageLog) {
}
	void UVisualLoggerKismetLibrary::STATIC_LogSegment(class UObject* WorldContextObject, const struct FVector& SegmentStart, const struct FVector& SegmentEnd, const struct FString& Text, const struct FLinearColor& ObjectColor, float Thickness, const struct FName& CategoryName, bool bAddToMessageLog) {
}
	void UVisualLoggerKismetLibrary::STATIC_LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory, bool bAddToMessageLog) {
}
	void UVisualLoggerKismetLibrary::STATIC_LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const struct FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory, bool bAddToMessageLog) {
}
	void UVisualLoggerKismetLibrary::STATIC_EnableRecording(bool bEnabled) {
}
