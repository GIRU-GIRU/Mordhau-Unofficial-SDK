#pragma once

#include "CoreMinimal.h"
#include "BTComposite_SimpleParallel.generated.h"

UCLASS()
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBTParallelMode> FinishMode;


};