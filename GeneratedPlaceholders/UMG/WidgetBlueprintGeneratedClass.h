#pragma once

#include "CoreMinimal.h"
#include "WidgetBlueprintGeneratedClass.generated.h"

UCLASS()
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidgetTree* WidgetTree;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowTemplate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowDynamicCreation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bValidTemplate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTemplateInitialized : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCookedTemplate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClassRequiresNativeTick : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDelegateRuntimeBinding> Bindings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UWidgetAnimation*> Animations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> NamedSlots;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x28];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UUserWidget* Template;


};