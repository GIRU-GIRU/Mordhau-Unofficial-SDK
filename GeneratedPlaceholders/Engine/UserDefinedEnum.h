#pragma once

#include "CoreMinimal.h"
#include "UserDefinedEnum.generated.h"

UCLASS()
class UUserDefinedEnum : public UEnum
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FText> DisplayNameMap;


};