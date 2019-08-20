#pragma once

#include "CoreMinimal.h"
#include "DeviceProfileManager.generated.h"

UCLASS()
class UDeviceProfileManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> Profiles;


};