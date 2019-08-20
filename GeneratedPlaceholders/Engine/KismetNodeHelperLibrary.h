#pragma once

#include "CoreMinimal.h"
#include "KismetNodeHelperLibrary.generated.h"

UCLASS()
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
	void STATIC_MarkBit(int Index, int* Data);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		bool STATIC_HasUnmarkedBit(int Data, int NumBits);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		bool STATIC_HasMarkedBit(int Data, int NumBits);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		unsigned char STATIC_GetValidValue(class UEnum* Enum, unsigned char EnumeratorValue);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		int STATIC_GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		int STATIC_GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		int STATIC_GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		unsigned char STATIC_GetEnumeratorValueFromIndex(class UEnum* Enum, unsigned char EnumeratorIndex);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		struct FString STATIC_GetEnumeratorUserFriendlyName(class UEnum* Enum, unsigned char EnumeratorValue);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		struct FName STATIC_GetEnumeratorName(class UEnum* Enum, unsigned char EnumeratorValue);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		void STATIC_ClearBit(int Index, int* Data);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		void STATIC_ClearAllBits(int* Data);
	UFUNCTION(BlueprintCallable, Category = "KismetNodeHelperLibrary")
		bool STATIC_BitIsMarked(int Data, int Index);

};