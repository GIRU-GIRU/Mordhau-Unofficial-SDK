#pragma once

#include "CoreMinimal.h"
#include "ChildActorComponent.generated.h"

UCLASS()
class UChildActorComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ChildActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ChildActorTemplate;

	UFUNCTION(BlueprintCallable, Category = "ChildActorComponent")
	void SetChildActorClass(class UClass* InClass);

};