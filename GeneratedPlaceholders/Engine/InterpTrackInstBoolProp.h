#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstBoolProp.generated.h"

UCLASS()
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoolProperty* BoolProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ResetBool;


};