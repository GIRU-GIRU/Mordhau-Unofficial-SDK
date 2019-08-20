#pragma once

#include "CoreMinimal.h"
#include "ComponentDelegateBinding.generated.h"

UCLASS()
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings;


};