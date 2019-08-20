#pragma once

#include "CoreMinimal.h"
#include "KismetArrayLibrary.generated.h"

UCLASS()
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
	void STATIC_SetArrayPropertyByName(class UObject* Object, const struct FName& PropertyName, TArray<int> Value);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_FilterArray(TArray<class AActor*> TargetArray, class UClass* FilterClass, TArray<class AActor*>* FilteredArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Swap(TArray<int> TargetArray, int FirstIndex, int SecondIndex);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Shuffle(TArray<int> TargetArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Set(TArray<int> TargetArray, int Index, int Item, bool bSizeToFit);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Resize(TArray<int> TargetArray, int Size);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		bool STATIC_Array_RemoveItem(TArray<int> TargetArray, int Item);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Remove(TArray<int> TargetArray, int IndexToRemove);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		int STATIC_Array_Length(TArray<int> TargetArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		int STATIC_Array_LastIndex(TArray<int> TargetArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		bool STATIC_Array_IsValidIndex(TArray<int> TargetArray, int IndexToTest);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Insert(TArray<int> TargetArray, int NewItem, int Index);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Get(TArray<int> TargetArray, int Index, int* Item);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		int STATIC_Array_Find(TArray<int> TargetArray, int ItemToFind);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		bool STATIC_Array_Contains(TArray<int> TargetArray, int ItemToFind);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Clear(TArray<int> TargetArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		void STATIC_Array_Append(TArray<int> TargetArray, TArray<int> SourceArray);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		int STATIC_Array_AddUnique(TArray<int> TargetArray, int NewItem);
	UFUNCTION(BlueprintCallable, Category = "KismetArrayLibrary")
		int STATIC_Array_Add(TArray<int> TargetArray, int NewItem);

};