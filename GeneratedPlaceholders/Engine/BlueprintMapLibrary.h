#pragma once

#include "CoreMinimal.h"
#include "BlueprintMapLibrary.generated.h"

UCLASS()
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
	void STATIC_SetMapPropertyByName(class UObject* Object, const struct FName& PropertyName, TMap<int, int> Value);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		void STATIC_Map_Values(TMap<int, int> TargetMap, TArray<int>* Values);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		bool STATIC_Map_Remove(TMap<int, int> TargetMap, int Key);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		int STATIC_Map_Length(TMap<int, int> TargetMap);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		void STATIC_Map_Keys(TMap<int, int> TargetMap, TArray<int>* Keys);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		bool STATIC_Map_Find(TMap<int, int> TargetMap, int Key, int* Value);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		bool STATIC_Map_Contains(TMap<int, int> TargetMap, int Key);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		void STATIC_Map_Clear(TMap<int, int> TargetMap);
	UFUNCTION(BlueprintCallable, Category = "BlueprintMapLibrary")
		void STATIC_Map_Add(TMap<int, int> TargetMap, int Key, int Value);

};