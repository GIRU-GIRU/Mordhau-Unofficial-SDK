#pragma once

#include "CoreMinimal.h"
#include "AnimNotify.generated.h"

UCLASS()
class UAnimNotify : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AnimNotify")
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	UFUNCTION(BlueprintCallable, Category = "AnimNotify")
		struct FString GetNotifyName();

};