#pragma once

#include "CoreMinimal.h"
#include "InputKeyDelegateBinding.generated.h"

UCLASS()
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;


};