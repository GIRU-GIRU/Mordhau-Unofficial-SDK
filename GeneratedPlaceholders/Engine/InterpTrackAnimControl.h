#pragma once

#include "CoreMinimal.h"
#include "InterpTrackAnimControl.generated.h"

UCLASS()
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SlotName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimControlTrackKey> AnimSeqs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSkipAnimNotifiers : 1;


};