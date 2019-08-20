#pragma once

#include "CoreMinimal.h"
#include "Function.generated.h"

UCLASS()
class UFunction : public UStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t FunctionFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t RepOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int8_t NumParms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	char pad_008F[1];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t ParmsSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t ReturnValueOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t RPCId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t RPCResponseId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProperty* FirstPropertyToInit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFunction* EventGraphFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32_t EventGraphCallOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	void* Func;


};