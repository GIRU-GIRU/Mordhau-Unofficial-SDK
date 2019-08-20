#pragma once

#include "CoreMinimal.h"
#include "SoundClass.generated.h"

UCLASS()
class USoundClass : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundClassProperties Properties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USoundClass*> ChildClasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundClass* ParentClass;


};