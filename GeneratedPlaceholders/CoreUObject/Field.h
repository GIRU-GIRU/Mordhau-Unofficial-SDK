#pragma once

#include "CoreMinimal.h"
#include "Field.generated.h"

UCLASS()
class UField : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UField* Next;


};