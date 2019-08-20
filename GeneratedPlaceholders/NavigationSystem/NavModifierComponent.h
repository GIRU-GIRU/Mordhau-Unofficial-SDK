#pragma once

#include "CoreMinimal.h"
#include "NavModifierComponent.generated.h"

UCLASS()
class UNavModifierComponent : public UNavRelevantComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AreaClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FailsafeExtent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIncludeAgentHeight : 1;

	UFUNCTION(BlueprintCallable, Category = "NavModifierComponent")
	void SetAreaClass(class UClass* NewAreaClass);

};