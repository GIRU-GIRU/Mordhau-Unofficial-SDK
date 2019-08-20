#pragma once

#include "CoreMinimal.h"
#include "NavigationGraphNodeComponent.generated.h"

UCLASS()
class UNavigationGraphNodeComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavigationGraphNodeComponent* NextNodeComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavigationGraphNodeComponent* PrevNodeComponent;


};