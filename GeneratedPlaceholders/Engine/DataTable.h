#pragma once

#include "CoreMinimal.h"
#include "DataTable.generated.h"

UCLASS()
class UDataTable : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UScriptStruct* RowStruct;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStripFromClientBuilds;


};