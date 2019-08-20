#pragma once

#include "CoreMinimal.h"
#include "InputTouchDelegateBinding.generated.h"

UCLASS()
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;


};