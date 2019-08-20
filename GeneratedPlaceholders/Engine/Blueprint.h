#pragma once

#include "CoreMinimal.h"
#include "Blueprint.generated.h"

UCLASS()
class UBlueprint : public UBlueprintCore
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRecompileOnLoad : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ParentClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* PRIVATE_InnermostPreviousCDO;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasBeenRegenerated : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsRegeneratingOnLoad : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USimpleConstructionScript* SimpleConstructionScript;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UActorComponent*> ComponentTemplates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTimelineTemplate*> Timelines;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInheritableComponentHandler* InheritableComponentHandler;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBlueprintType> BlueprintType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BlueprintSystemVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bNativize;


};