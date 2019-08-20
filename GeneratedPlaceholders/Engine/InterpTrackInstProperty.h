#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstProperty.generated.h"

UCLASS()
class UInterpTrackInstProperty : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProperty* InterpProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* PropertyOuterObjectInst;


};