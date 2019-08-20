#pragma once

#include "CoreMinimal.h"
#include "PlatformInterfaceBase.generated.h"

UCLASS()
class UPlatformInterfaceBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDelegateArray> AllDelegates;


};