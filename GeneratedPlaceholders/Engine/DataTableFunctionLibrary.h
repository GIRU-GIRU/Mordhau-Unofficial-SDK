#pragma once

#include "CoreMinimal.h"
#include "DataTableFunctionLibrary.generated.h"

UCLASS()
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "DataTableFunctionLibrary")
	void STATIC_GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames);
	UFUNCTION(BlueprintCallable, Category = "DataTableFunctionLibrary")
		bool STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
	UFUNCTION(BlueprintCallable, Category = "DataTableFunctionLibrary")
		TArray<struct FString> STATIC_GetDataTableColumnAsString(class UDataTable* DataTable, const struct FName& PropertyName);
	UFUNCTION(BlueprintCallable, Category = "DataTableFunctionLibrary")
		void STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, const struct FString& ContextString, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY);

};