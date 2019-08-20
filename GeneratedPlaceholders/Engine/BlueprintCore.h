#pragma once

#include "CoreMinimal.h"
#include "BlueprintCore.generated.h"

UCLASS()
class UBlueprintCore : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SkeletonGeneratedClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GeneratedClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLegacyNeedToPurgeSkelRefs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLegacyGeneratedClassIsAuthoritative;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid BlueprintGuid;


};