#pragma once

#include "CoreMinimal.h"
#include "GameplayTask_SpawnActor.generated.h"

UCLASS()
class UGameplayTask_SpawnActor : public UGameplayTask
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate Success;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate DidNotSpawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ClassToSpawn;

	UFUNCTION(BlueprintCallable, Category = "GameplayTask_SpawnActor")
	class UGameplayTask_SpawnActor* STATIC_SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	UFUNCTION(BlueprintCallable, Category = "GameplayTask_SpawnActor")
		void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	UFUNCTION(BlueprintCallable, Category = "GameplayTask_SpawnActor")
		bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);

};