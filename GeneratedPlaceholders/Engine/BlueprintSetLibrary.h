#pragma once

#include "CoreMinimal.h"
#include "BlueprintSetLibrary.generated.h"

UCLASS()
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
	void STATIC_SetSetPropertyByName(class UObject* Object, const struct FName& PropertyName);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_Union();
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_ToArray(TArray<int>* Result);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_RemoveItems(TArray<int> Items);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		bool STATIC_Set_Remove(int Item);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		int STATIC_Set_Length();
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_Intersection();
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_Difference();
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		bool STATIC_Set_Contains(int ItemToFind);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_Clear();
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_AddItems(TArray<int> NewItems);
	UFUNCTION(BlueprintCallable, Category = "BlueprintSetLibrary")
		void STATIC_Set_Add(int NewItem);

};