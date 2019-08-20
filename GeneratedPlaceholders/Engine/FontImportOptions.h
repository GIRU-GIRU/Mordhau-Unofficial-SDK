#pragma once

#include "CoreMinimal.h"
#include "FontImportOptions.generated.h"

UCLASS()
class UFontImportOptions : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFontImportOptionsData Data;


};