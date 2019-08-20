#include "DataTableFunctionLibrary.h"

void UDataTableFunctionLibrary::STATIC_GetDataTableRowNames(class UDataTable* Table, TArray<struct FName>* OutRowNames) {
}
	bool UDataTableFunctionLibrary::STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow) {
}
	TArray<struct FString> UDataTableFunctionLibrary::STATIC_GetDataTableColumnAsString(class UDataTable* DataTable, const struct FName& PropertyName) {
}
	void UDataTableFunctionLibrary::STATIC_EvaluateCurveTableRow(class UCurveTable* CurveTable, const struct FName& RowName, float InXY, const struct FString& ContextString, TEnumAsByte<EEvaluateCurveTableResult>* OutResult, float* OutXY) {
}
