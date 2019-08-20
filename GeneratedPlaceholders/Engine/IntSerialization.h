#pragma once

#include "CoreMinimal.h"
#include "IntSerialization.generated.h"

UCLASS()
class UIntSerialization : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t UnsignedInt16Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t UnsignedInt32Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint64_t UnsignedInt64Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int8_t SignedInt8Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t SignedInt16Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int64_t SignedInt64Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnsignedInt8Variable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SignedInt32Variable;


};