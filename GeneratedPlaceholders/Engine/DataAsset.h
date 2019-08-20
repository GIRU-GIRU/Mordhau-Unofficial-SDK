#pragma once

#include "CoreMinimal.h"
#include "DataAsset.generated.h"

UCLASS()
class UDataAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* NativeClass;


};