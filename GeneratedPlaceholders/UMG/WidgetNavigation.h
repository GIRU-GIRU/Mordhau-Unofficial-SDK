#pragma once

#include "CoreMinimal.h"
#include "WidgetNavigation.generated.h"

UCLASS()
class UWidgetNavigation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Up;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Down;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Left;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Right;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Next;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetNavigationData Previous;


};