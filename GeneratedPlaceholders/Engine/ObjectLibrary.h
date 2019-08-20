#pragma once

#include "CoreMinimal.h"
#include "ObjectLibrary.generated.h"

UCLASS()
class UObjectLibrary : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ObjectBaseClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasBlueprintClasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> Objects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UObject>> WeakObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseWeakReferences;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFullyLoaded;


};