#pragma once

#include "CoreMinimal.h"
#include "NavRelevantComponent.generated.h"

UCLASS()
class UNavRelevantComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAttachToOwnersRoot : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* CachedNavParent;

	UFUNCTION(BlueprintCallable, Category = "NavRelevantComponent")
	void SetNavigationRelevancy(bool bRelevant);

};