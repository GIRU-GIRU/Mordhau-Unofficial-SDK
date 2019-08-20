#pragma once

#include "CoreMinimal.h"
#include "KismetStringTableLibrary.generated.h"

UCLASS()
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
	bool STATIC_IsRegisteredTableId(const struct FName& TableId);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		bool STATIC_IsRegisteredTableEntry(const struct FName& TableId, const struct FString& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		struct FString STATIC_GetTableNamespace(const struct FName& TableId);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		struct FString STATIC_GetTableEntrySourceString(const struct FName& TableId, const struct FString& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		struct FString STATIC_GetTableEntryMetaData(const struct FName& TableId, const struct FString& Key, const struct FName& MetaDataId);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		TArray<struct FName> STATIC_GetRegisteredStringTables();
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		TArray<struct FName> STATIC_GetMetaDataIdsFromStringTableEntry(const struct FName& TableId, const struct FString& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetStringTableLibrary")
		TArray<struct FString> STATIC_GetKeysFromStringTable(const struct FName& TableId);

};