#pragma once

#include "CoreMinimal.h"
#include "NavModifierVolume.generated.h"

UCLASS()
class ANavModifierVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AreaClass;

	UFUNCTION(BlueprintCallable, Category = "NavModifierVolume")
	void SetAreaClass(class UClass* NewAreaClass);

};