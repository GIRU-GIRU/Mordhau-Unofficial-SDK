#pragma once

#include "CoreMinimal.h"
#include "InterpTrackBoolProp.generated.h"

UCLASS()
class UInterpTrackBoolProp : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBoolTrackKey> BoolTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;


};