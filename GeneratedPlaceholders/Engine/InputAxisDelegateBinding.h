#pragma once

#include "CoreMinimal.h"
#include "InputAxisDelegateBinding.generated.h"

UCLASS()
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;


};