#pragma once

#include "CoreMinimal.h"
#include "InputAxisKeyDelegateBinding.generated.h"

UCLASS()
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;


};