#pragma once

#include "CoreMinimal.h"
#include "Class.generated.h"

UCLASS()
class UClass : public UStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	return static_cast<T*>(CreateDefaultObject());

	UFUNCTION(BlueprintCallable, Category = "Class")
			return GetVFunction<UObject*(*)(UClass*)>(this, 102)(this);

};