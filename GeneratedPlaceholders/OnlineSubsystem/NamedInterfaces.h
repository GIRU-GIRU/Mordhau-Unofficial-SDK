#pragma once

#include "CoreMinimal.h"
#include "NamedInterfaces.generated.h"

UCLASS()
class UNamedInterfaces : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedInterface> NamedInterfaces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedInterfaceDef> NamedInterfaceDefs;


};