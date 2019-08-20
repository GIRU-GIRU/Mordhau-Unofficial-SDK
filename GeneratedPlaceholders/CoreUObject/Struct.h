#pragma once

#include "CoreMinimal.h"
#include "Struct.generated.h"

UCLASS()
class UStruct : public UField
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStruct* SuperField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UField* Children;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t PropertySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t MinAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	char pad_0048[64];


};