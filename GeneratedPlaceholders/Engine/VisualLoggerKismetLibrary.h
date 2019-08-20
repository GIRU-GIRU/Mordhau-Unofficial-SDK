#pragma once

#include "CoreMinimal.h"
#include "VisualLoggerKismetLibrary.generated.h"

UCLASS()
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
	void STATIC_RedirectVislog(class UObject* SourceOwner, class UObject* DestinationOwner);
	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
		void STATIC_LogText(class UObject* WorldContextObject, const struct FString& Text, const struct FName& LogCategory, bool bAddToMessageLog);
	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
		void STATIC_LogSegment(class UObject* WorldContextObject, const struct FVector& SegmentStart, const struct FVector& SegmentEnd, const struct FString& Text, const struct FLinearColor& ObjectColor, float Thickness, const struct FName& CategoryName, bool bAddToMessageLog);
	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
		void STATIC_LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const struct FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory, bool bAddToMessageLog);
	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
		void STATIC_LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const struct FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory, bool bAddToMessageLog);
	UFUNCTION(BlueprintCallable, Category = "VisualLoggerKismetLibrary")
		void STATIC_EnableRecording(bool bEnabled);

};