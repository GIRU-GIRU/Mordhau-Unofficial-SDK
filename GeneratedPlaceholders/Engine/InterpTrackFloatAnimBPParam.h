#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFloatAnimBPParam.generated.h"

UCLASS()
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimBlueprintGeneratedClass* AnimBlueprintClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AnimClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;


};