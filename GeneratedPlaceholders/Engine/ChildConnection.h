#pragma once

#include "CoreMinimal.h"
#include "ChildConnection.generated.h"

UCLASS()
class UChildConnection : public UNetConnection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* Parent;


};