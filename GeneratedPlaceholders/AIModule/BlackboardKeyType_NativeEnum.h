#pragma once

#include "CoreMinimal.h"
#include "BlackboardKeyType_NativeEnum.generated.h"

UCLASS()
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString EnumName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* EnumType;


};