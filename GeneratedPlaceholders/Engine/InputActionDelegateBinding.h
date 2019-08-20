#pragma once

#include "CoreMinimal.h"
#include "InputActionDelegateBinding.generated.h"

UCLASS()
class UInputActionDelegateBinding : public UInputDelegateBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;


};