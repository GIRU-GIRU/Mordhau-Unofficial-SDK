#pragma once

#include "CoreMinimal.h"
#include "VirtualWeapon.generated.h"

UCLASS()
class AVirtualWeapon : public AMordhauWeapon
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VirtualWeapon")
	void InitializeVirtualWeapon(class AMordhauCharacter* Character);

};