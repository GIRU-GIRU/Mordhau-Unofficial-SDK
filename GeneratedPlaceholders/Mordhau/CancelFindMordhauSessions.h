#pragma once

#include "CoreMinimal.h"
#include "CancelFindMordhauSessions.generated.h"

UCLASS()
class UCancelFindMordhauSessions : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CancelFindMordhauSessions")
	bool STATIC_CancelFindMordhauSessions();

};