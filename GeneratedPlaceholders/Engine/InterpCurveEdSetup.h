#pragma once

#include "CoreMinimal.h"
#include "InterpCurveEdSetup.generated.h"

UCLASS()
class UInterpCurveEdSetup : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCurveEdTab> Tabs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ActiveTab;


};