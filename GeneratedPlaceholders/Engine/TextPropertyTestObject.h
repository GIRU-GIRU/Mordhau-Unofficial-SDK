#pragma once

#include "CoreMinimal.h"
#include "TextPropertyTestObject.generated.h"

UCLASS()
class UTextPropertyTestObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText DefaultedText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText UndefaultedText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText TransientText;


};