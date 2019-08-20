#pragma once

#include "CoreMinimal.h"
#include "UserDefinedStruct.generated.h"

UCLASS()
class UUserDefinedStruct : public UScriptStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EUserDefinedStructureStatus> Status;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid Guid;


};