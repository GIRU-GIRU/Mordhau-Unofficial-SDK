#pragma once

#include "CoreMinimal.h"
#include "BlueprintGeneratedClass.generated.h"

UCLASS()
class UBlueprintGeneratedClass : public UClass
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumReplicatedProperties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasNativizedParent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UDynamicBlueprintBinding*> DynamicBindingObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UActorComponent*> ComponentTemplates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTimelineTemplate*> Timelines;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USimpleConstructionScript* SimpleConstructionScript;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInheritableComponentHandler* InheritableComponentHandler;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStructProperty* UberGraphFramePointerProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFunction* UberGraphFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;


};